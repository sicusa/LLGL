/*
 * Log.cpp
 *
 * Copyright (c) 2015 Lukas Hermanns. All rights reserved.
 * Licensed under the terms of the BSD 3-Clause license (see LICENSE.txt).
 */

#include <LLGL/Log.h>
#include "CoreUtils.h"
#include "StringUtils.h"
#include "../Renderer/ContainerTypes.h"
#include <mutex>
#include <atomic>
#include <string>
#include <stdio.h>
#include <stdarg.h>


namespace LLGL
{

namespace Log
{


struct LogListener
{
    LogListener() = default;
    LogListener(const LogListener&) = default;
    LogListener& operator = (const LogListener&) = default;

    inline LogListener(ReportCallback callback, void* userData) :
        callback { callback },
        userData { userData }
    {
    }

    ReportCallback  callback = nullptr;
    void*           userData = nullptr;

    inline void Invoke(ReportType type, const char* text)
    {
        if (callback != nullptr)
            callback(type, text, userData);
    }
};

using LogListenerPtr = std::unique_ptr<LogListener>;

struct LogState
{
    std::mutex                              lock;
    UnorderedUniquePtrVector<LogListener>   listeners;
    LogListenerPtr                          listenerStd;
};

class TrivialLock
{

    public:

        inline void lock()
        {
            value_ = true;
        }

        void unlock()
        {
            value_ = false;
        }

        inline operator bool () const
        {
            return value_;
        }

    private:

        bool value_ = false;

};

static LogState                 g_logState;
static thread_local TrivialLock g_logRecursionLock;


/* ----- Functions ----- */

static void PostReport(ReportType type, const char* text)
{
    std::lock_guard<std::mutex> guard{ g_logState.lock };

    if (auto listenerStd = g_logState.listenerStd.get())
        listenerStd->Invoke(type, text);

    for (const auto& listener : g_logState.listeners)
        listener->Invoke(type, text);
}

LLGL_EXPORT void Printf(const char* format, ...)
{
    if (!g_logRecursionLock)
    {
        std::lock_guard<TrivialLock> guard{ g_logRecursionLock };
        std::string str;
        LLGL_STRING_PRINTF(str, format);
        PostReport(ReportType::Default, str.c_str());
    }
}

LLGL_EXPORT void Errorf(const char* format, ...)
{
    if (!g_logRecursionLock)
    {
        std::lock_guard<TrivialLock> guard{ g_logRecursionLock };
        std::string str;
        LLGL_STRING_PRINTF(str, format);
        PostReport(ReportType::Error, str.c_str());
    }
}

LLGL_EXPORT LogHandle RegisterCallback(const ReportCallback& callback, void* userData)
{
    if (!g_logRecursionLock)
    {
        std::lock_guard<std::mutex> guard{ g_logState.lock };
        return reinterpret_cast<LogHandle>(g_logState.listeners.emplace<LogListener>(callback, userData));
    }
    return nullptr;
}

LLGL_EXPORT LogHandle RegisterCallbackReport(Report& report)
{
    return RegisterCallback(
        [](ReportType type, const char* text, void* userData)
        {
            if (auto report = reinterpret_cast<Report*>(userData))
            {
                if (type == ReportType::Error)
                    report->Errorf("%s", text);
                else
                    report->Printf("%s", text);
            }
        },
        &report
    );
}

LLGL_EXPORT LogHandle RegisterCallbackStd()
{
    if (!g_logRecursionLock)
    {
        std::lock_guard<std::mutex> guard{ g_logState.lock };
        if (g_logState.listenerStd.get() == nullptr)
        {
            g_logState.listenerStd = MakeUnique<LogListener>(
                [](ReportType type, const char* text, void* /*userData*/)
                {
                    if (type == ReportType::Error)
                        ::fprintf(stderr, "%s", text);
                    else
                        ::fprintf(stdout, "%s", text);
                },
                nullptr
            );
        }
        return reinterpret_cast<LogHandle>(g_logState.listenerStd.get());
    }
    return nullptr;
}

LLGL_EXPORT void UnregisterCallback(LogHandle handle)
{
    if (handle != nullptr)
    {
        std::lock_guard<std::mutex> guard{ g_logState.lock };
        if (handle == reinterpret_cast<LogHandle>(g_logState.listenerStd.get()))
            g_logState.listenerStd.reset();
        else
            g_logState.listeners.erase(reinterpret_cast<LogListener*>(handle));
    }
}


} // /namespace Log

} // /namespace LLGL



// ================================================================================
