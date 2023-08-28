#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Input
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Output
cs_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[1], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture1darray (float,float,float,float) t0
dcl_uav_typed_texture1darray (float,float,float,float) u0
dcl_uav_typed_texture1darray (float,float,float,float) u1
dcl_uav_typed_texture1darray (float,float,float,float) u2
dcl_uav_typed_texture1darray (float,float,float,float) u3
dcl_uav_typed_texture1darray (float,float,float,float) u4
dcl_uav_typed_texture1darray (float,float,float,float) u5
dcl_uav_typed_texture1darray (float,float,float,float) u6
dcl_input vThreadIDInGroupFlattened
dcl_input vThreadID.xy
dcl_temps 4
dcl_tgsm_structured g0, 4, 64
dcl_tgsm_structured g1, 4, 64
dcl_tgsm_structured g2, 4, 64
dcl_tgsm_structured g3, 4, 64
dcl_thread_group 64, 1, 1
iadd r0.z, vThreadID.y, cb0[0].w
utof r1.x, vThreadID.x
add r1.x, r1.x, l(0.250000)
mul r1.x, r1.x, cb0[0].x
utof r1.y, r0.z
utof r1.z, cb0[0].y
sample_l_indexable(texture1darray)(float,float,float,float) r2.xyzw, r1.xyxx, t0.xyzw, s0, r1.z
mul r3.x, cb0[0].x, l(0.500000)
mov r3.y, l(0)
add r1.xy, r1.xyxx, r3.xyxx
sample_l_indexable(texture1darray)(float,float,float,float) r1.xyzw, r1.xyxx, t0.xyzw, s0, r1.z
add r1.xyzw, r1.xyzw, r2.xyzw
mul r2.xyzw, r1.xyzw, l(0.500000, 0.500000, 0.500000, 0.500000)
mov r0.w, vThreadID.x
store_uav_typed u0.xyzw, r0.wzzz, r2.xyzw
ieq r0.w, cb0[0].z, l(1)
if_nz r0.w
  ret 
endif 
store_structured g0.x, vThreadIDInGroupFlattened.x, l(0), r2.x
store_structured g1.x, vThreadIDInGroupFlattened.x, l(0), r2.y
store_structured g2.x, vThreadIDInGroupFlattened.x, l(0), r2.z
store_structured g3.x, vThreadIDInGroupFlattened.x, l(0), r2.w
sync_g_t
and r0.w, vThreadIDInGroupFlattened.x, l(1)
if_z r0.w
  iadd r0.w, vThreadIDInGroupFlattened.x, l(1)
  ld_structured r3.x, r0.w, l(0), g0.xxxx
  ld_structured r3.y, r0.w, l(0), g1.xxxx
  ld_structured r3.z, r0.w, l(0), g2.xxxx
  ld_structured r3.w, r0.w, l(0), g3.xxxx
  mad r1.xyzw, r1.xyzw, l(0.500000, 0.500000, 0.500000, 0.500000), r3.xyzw
  mul r2.xyzw, r1.xyzw, l(0.500000, 0.500000, 0.500000, 0.500000)
  ushr r0.y, vThreadID.x, l(1)
  store_uav_typed u1.xyzw, r0.yzzz, r2.xyzw
  store_structured g0.x, vThreadIDInGroupFlattened.x, l(0), r2.x
  store_structured g1.x, vThreadIDInGroupFlattened.x, l(0), r2.y
  store_structured g2.x, vThreadIDInGroupFlattened.x, l(0), r2.z
  store_structured g3.x, vThreadIDInGroupFlattened.x, l(0), r2.w
endif 
ieq r0.y, cb0[0].z, l(2)
if_nz r0.y
  ret 
endif 
sync_g_t
and r0.y, vThreadIDInGroupFlattened.x, l(3)
if_z r0.y
  iadd r0.y, vThreadIDInGroupFlattened.x, l(2)
  ld_structured r1.x, r0.y, l(0), g0.xxxx
  ld_structured r1.y, r0.y, l(0), g1.xxxx
  ld_structured r1.z, r0.y, l(0), g2.xxxx
  ld_structured r1.w, r0.y, l(0), g3.xxxx
  add r1.xyzw, r1.xyzw, r2.xyzw
  mul r2.xyzw, r1.xyzw, l(0.500000, 0.500000, 0.500000, 0.500000)
  ushr r0.x, vThreadID.x, l(2)
  store_uav_typed u2.xyzw, r0.xzzz, r2.xyzw
  store_structured g0.x, vThreadIDInGroupFlattened.x, l(0), r2.x
  store_structured g1.x, vThreadIDInGroupFlattened.x, l(0), r2.y
  store_structured g2.x, vThreadIDInGroupFlattened.x, l(0), r2.z
  store_structured g3.x, vThreadIDInGroupFlattened.x, l(0), r2.w
endif 
ieq r0.x, cb0[0].z, l(3)
if_nz r0.x
  ret 
endif 
sync_g_t
and r0.x, vThreadIDInGroupFlattened.x, l(7)
if_z r0.x
  iadd r0.x, vThreadIDInGroupFlattened.x, l(4)
  ld_structured r1.x, r0.x, l(0), g0.xxxx
  ld_structured r1.y, r0.x, l(0), g1.xxxx
  ld_structured r1.z, r0.x, l(0), g2.xxxx
  ld_structured r1.w, r0.x, l(0), g3.xxxx
  add r1.xyzw, r1.xyzw, r2.xyzw
  mul r2.xyzw, r1.xyzw, l(0.500000, 0.500000, 0.500000, 0.500000)
  ushr r1.x, vThreadID.x, l(3)
  mov r1.yzw, r0.zzzz
  store_uav_typed u3.xyzw, r1.xyzw, r2.xyzw
  store_structured g0.x, vThreadIDInGroupFlattened.x, l(0), r2.x
  store_structured g1.x, vThreadIDInGroupFlattened.x, l(0), r2.y
  store_structured g2.x, vThreadIDInGroupFlattened.x, l(0), r2.z
  store_structured g3.x, vThreadIDInGroupFlattened.x, l(0), r2.w
endif 
ieq r0.x, cb0[0].z, l(4)
if_nz r0.x
  ret 
endif 
sync_g_t
and r0.x, vThreadIDInGroupFlattened.x, l(15)
if_z r0.x
  iadd r0.x, vThreadIDInGroupFlattened.x, l(8)
  ld_structured r1.x, r0.x, l(0), g0.xxxx
  ld_structured r1.y, r0.x, l(0), g1.xxxx
  ld_structured r1.z, r0.x, l(0), g2.xxxx
  ld_structured r1.w, r0.x, l(0), g3.xxxx
  add r1.xyzw, r1.xyzw, r2.xyzw
  mul r2.xyzw, r1.xyzw, l(0.500000, 0.500000, 0.500000, 0.500000)
  ushr r1.x, vThreadID.x, l(4)
  mov r1.yzw, r0.zzzz
  store_uav_typed u4.xyzw, r1.xyzw, r2.xyzw
  store_structured g0.x, vThreadIDInGroupFlattened.x, l(0), r2.x
  store_structured g1.x, vThreadIDInGroupFlattened.x, l(0), r2.y
  store_structured g2.x, vThreadIDInGroupFlattened.x, l(0), r2.z
  store_structured g3.x, vThreadIDInGroupFlattened.x, l(0), r2.w
endif 
ieq r0.x, cb0[0].z, l(5)
if_nz r0.x
  ret 
endif 
sync_g_t
and r0.x, vThreadIDInGroupFlattened.x, l(31)
if_z r0.x
  iadd r0.x, vThreadIDInGroupFlattened.x, l(15)
  ld_structured r1.x, r0.x, l(0), g0.xxxx
  ld_structured r1.y, r0.x, l(0), g1.xxxx
  ld_structured r1.z, r0.x, l(0), g2.xxxx
  ld_structured r1.w, r0.x, l(0), g3.xxxx
  add r1.xyzw, r1.xyzw, r2.xyzw
  mul r2.xyzw, r1.xyzw, l(0.500000, 0.500000, 0.500000, 0.500000)
  ushr r1.x, vThreadID.x, l(5)
  mov r1.yzw, r0.zzzz
  store_uav_typed u5.xyzw, r1.xyzw, r2.xyzw
  store_structured g0.x, vThreadIDInGroupFlattened.x, l(0), r2.x
  store_structured g1.x, vThreadIDInGroupFlattened.x, l(0), r2.y
  store_structured g2.x, vThreadIDInGroupFlattened.x, l(0), r2.z
  store_structured g3.x, vThreadIDInGroupFlattened.x, l(0), r2.w
endif 
ieq r0.x, cb0[0].z, l(6)
if_nz r0.x
  ret 
endif 
sync_g_t
if_z vThreadIDInGroupFlattened.x
  ld_structured r1.x, l(31), l(0), g0.xxxx
  ld_structured r1.y, l(31), l(0), g1.xxxx
  ld_structured r1.z, l(31), l(0), g2.xxxx
  ld_structured r1.w, l(31), l(0), g3.xxxx
  add r1.xyzw, r1.xyzw, r2.xyzw
  mul r1.xyzw, r1.xyzw, l(0.500000, 0.500000, 0.500000, 0.500000)
  ushr r2.x, vThreadID.x, l(6)
  mov r2.yzw, r0.zzzz
  store_uav_typed u6.xyzw, r2.xyzw, r1.xyzw
endif 
ret 
// Approximately 0 instruction slots used
#endif

const BYTE g_GenerateMips1DCS_OddX[] =
{
     68,  88,  66,  67, 205,  20, 
     35,  32, 246,  27,  44,  34, 
     23, 138, 232,  60, 254, 186, 
     88, 195,   1,   0,   0,   0, 
     44,  16,   0,   0,   4,   0, 
      0,   0,  48,   0,   0,   0, 
     64,   0,   0,   0,  80,   0, 
      0,   0, 104,  15,   0,   0, 
     73,  83,  71,  78,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  79,  83, 
     71,  78,   8,   0,   0,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,  83,  72,  69,  88, 
     16,  15,   0,   0,  80,   0, 
      5,   0, 196,   3,   0,   0, 
    106,   8,   0,   1,  89,   0, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  90,   0,   0,   3, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  88,  56,   0,   4, 
      0, 112,  16,   0,   0,   0, 
      0,   0,  85,  85,   0,   0, 
    156,  56,   0,   4,   0, 224, 
     17,   0,   0,   0,   0,   0, 
     85,  85,   0,   0, 156,  56, 
      0,   4,   0, 224,  17,   0, 
      1,   0,   0,   0,  85,  85, 
      0,   0, 156,  56,   0,   4, 
      0, 224,  17,   0,   2,   0, 
      0,   0,  85,  85,   0,   0, 
    156,  56,   0,   4,   0, 224, 
     17,   0,   3,   0,   0,   0, 
     85,  85,   0,   0, 156,  56, 
      0,   4,   0, 224,  17,   0, 
      4,   0,   0,   0,  85,  85, 
      0,   0, 156,  56,   0,   4, 
      0, 224,  17,   0,   5,   0, 
      0,   0,  85,  85,   0,   0, 
    156,  56,   0,   4,   0, 224, 
     17,   0,   6,   0,   0,   0, 
     85,  85,   0,   0,  95,   0, 
      0,   2,   0,  64,   2,   0, 
     95,   0,   0,   2,  50,   0, 
      2,   0, 104,   0,   0,   2, 
      4,   0,   0,   0, 160,   0, 
      0,   5,   0, 240,  17,   0, 
      0,   0,   0,   0,   4,   0, 
      0,   0,  64,   0,   0,   0, 
    160,   0,   0,   5,   0, 240, 
     17,   0,   1,   0,   0,   0, 
      4,   0,   0,   0,  64,   0, 
      0,   0, 160,   0,   0,   5, 
      0, 240,  17,   0,   2,   0, 
      0,   0,   4,   0,   0,   0, 
     64,   0,   0,   0, 160,   0, 
      0,   5,   0, 240,  17,   0, 
      3,   0,   0,   0,   4,   0, 
      0,   0,  64,   0,   0,   0, 
    155,   0,   0,   4,  64,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,  30,   0, 
      0,   7,  66,   0,  16,   0, 
      0,   0,   0,   0,  26,   0, 
      2,   0,  58, 128,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  86,   0,   0,   4, 
     18,   0,  16,   0,   1,   0, 
      0,   0,  10,   0,   2,   0, 
      0,   0,   0,   7,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     10,   0,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0, 128,  62,  56,   0, 
      0,   8,  18,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   1,   0,   0,   0, 
     10, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     86,   0,   0,   5,  34,   0, 
     16,   0,   1,   0,   0,   0, 
     42,   0,  16,   0,   0,   0, 
      0,   0,  86,   0,   0,   6, 
     66,   0,  16,   0,   1,   0, 
      0,   0,  26, 128,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  72,   0,   0, 141, 
    194,   1,   0, 128,  67,  85, 
     21,   0, 242,   0,  16,   0, 
      2,   0,   0,   0,  70,   0, 
     16,   0,   1,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,   0,  96,  16,   0, 
      0,   0,   0,   0,  42,   0, 
     16,   0,   1,   0,   0,   0, 
     56,   0,   0,   8,  18,   0, 
     16,   0,   3,   0,   0,   0, 
     10, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,  63,  54,   0,   0,   5, 
     34,   0,  16,   0,   3,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   7,  50,   0,  16,   0, 
      1,   0,   0,   0,  70,   0, 
     16,   0,   1,   0,   0,   0, 
     70,   0,  16,   0,   3,   0, 
      0,   0,  72,   0,   0, 141, 
    194,   1,   0, 128,  67,  85, 
     21,   0, 242,   0,  16,   0, 
      1,   0,   0,   0,  70,   0, 
     16,   0,   1,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,   0,  96,  16,   0, 
      0,   0,   0,   0,  42,   0, 
     16,   0,   1,   0,   0,   0, 
      0,   0,   0,   7, 242,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  56,   0, 
      0,  10, 242,   0,  16,   0, 
      2,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,  63,   0,   0,   0,  63, 
      0,   0,   0,  63,   0,   0, 
      0,  63,  54,   0,   0,   4, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,   2,   0, 
    164,   0,   0,   7, 242, 224, 
     17,   0,   0,   0,   0,   0, 
    182,  10,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  32,   0, 
      0,   8, 130,   0,  16,   0, 
      0,   0,   0,   0,  42, 128, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   1,   0,   0,   0, 
     31,   0,   4,   3,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  21,   0, 
      0,   1, 168,   0,   0,   8, 
     18, 240,  17,   0,   0,   0, 
      0,   0,  10,  64,   2,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      2,   0,   0,   0, 168,   0, 
      0,   8,  18, 240,  17,   0, 
      1,   0,   0,   0,  10,  64, 
      2,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  26,   0, 
     16,   0,   2,   0,   0,   0, 
    168,   0,   0,   8,  18, 240, 
     17,   0,   2,   0,   0,   0, 
     10,  64,   2,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     42,   0,  16,   0,   2,   0, 
      0,   0, 168,   0,   0,   8, 
     18, 240,  17,   0,   3,   0, 
      0,   0,  10,  64,   2,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      2,   0,   0,   0, 190,  24, 
      0,   1,   1,   0,   0,   6, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  10,  64,   2,   0, 
      1,  64,   0,   0,   1,   0, 
      0,   0,  31,   0,   0,   3, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  30,   0,   0,   6, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  10,  64,   2,   0, 
      1,  64,   0,   0,   1,   0, 
      0,   0, 167,   0,   0,   9, 
     18,   0,  16,   0,   3,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
      6, 240,  17,   0,   0,   0, 
      0,   0, 167,   0,   0,   9, 
     34,   0,  16,   0,   3,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
      6, 240,  17,   0,   1,   0, 
      0,   0, 167,   0,   0,   9, 
     66,   0,  16,   0,   3,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
      6, 240,  17,   0,   2,   0, 
      0,   0, 167,   0,   0,   9, 
    130,   0,  16,   0,   3,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
      6, 240,  17,   0,   3,   0, 
      0,   0,  50,   0,   0,  12, 
    242,   0,  16,   0,   1,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,  63, 
      0,   0,   0,  63,   0,   0, 
      0,  63,   0,   0,   0,  63, 
     70,  14,  16,   0,   3,   0, 
      0,   0,  56,   0,   0,  10, 
    242,   0,  16,   0,   2,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,  63, 
      0,   0,   0,  63,   0,   0, 
      0,  63,   0,   0,   0,  63, 
     85,   0,   0,   6,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,   2,   0,   1,  64, 
      0,   0,   1,   0,   0,   0, 
    164,   0,   0,   7, 242, 224, 
     17,   0,   1,   0,   0,   0, 
    150,  10,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0, 168,   0, 
      0,   8,  18, 240,  17,   0, 
      0,   0,   0,   0,  10,  64, 
      2,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   2,   0,   0,   0, 
    168,   0,   0,   8,  18, 240, 
     17,   0,   1,   0,   0,   0, 
     10,  64,   2,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   2,   0, 
      0,   0, 168,   0,   0,   8, 
     18, 240,  17,   0,   2,   0, 
      0,   0,  10,  64,   2,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      2,   0,   0,   0, 168,   0, 
      0,   8,  18, 240,  17,   0, 
      3,   0,   0,   0,  10,  64, 
      2,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   2,   0,   0,   0, 
     21,   0,   0,   1,  32,   0, 
      0,   8,  34,   0,  16,   0, 
      0,   0,   0,   0,  42, 128, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   2,   0,   0,   0, 
     31,   0,   4,   3,  26,   0, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  21,   0, 
      0,   1, 190,  24,   0,   1, 
      1,   0,   0,   6,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     10,  64,   2,   0,   1,  64, 
      0,   0,   3,   0,   0,   0, 
     31,   0,   0,   3,  26,   0, 
     16,   0,   0,   0,   0,   0, 
     30,   0,   0,   6,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     10,  64,   2,   0,   1,  64, 
      0,   0,   2,   0,   0,   0, 
    167,   0,   0,   9,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,   6, 240, 
     17,   0,   0,   0,   0,   0, 
    167,   0,   0,   9,  34,   0, 
     16,   0,   1,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,   6, 240, 
     17,   0,   1,   0,   0,   0, 
    167,   0,   0,   9,  66,   0, 
     16,   0,   1,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,   6, 240, 
     17,   0,   2,   0,   0,   0, 
    167,   0,   0,   9, 130,   0, 
     16,   0,   1,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,   6, 240, 
     17,   0,   3,   0,   0,   0, 
      0,   0,   0,   7, 242,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  56,   0, 
      0,  10, 242,   0,  16,   0, 
      2,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,  63,   0,   0,   0,  63, 
      0,   0,   0,  63,   0,   0, 
      0,  63,  85,   0,   0,   6, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,   2,   0, 
      1,  64,   0,   0,   2,   0, 
      0,   0, 164,   0,   0,   7, 
    242, 224,  17,   0,   2,   0, 
      0,   0, 134,  10,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   2,   0,   0,   0, 
    168,   0,   0,   8,  18, 240, 
     17,   0,   0,   0,   0,   0, 
     10,  64,   2,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   2,   0, 
      0,   0, 168,   0,   0,   8, 
     18, 240,  17,   0,   1,   0, 
      0,   0,  10,  64,   2,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      2,   0,   0,   0, 168,   0, 
      0,   8,  18, 240,  17,   0, 
      2,   0,   0,   0,  10,  64, 
      2,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  42,   0, 
     16,   0,   2,   0,   0,   0, 
    168,   0,   0,   8,  18, 240, 
     17,   0,   3,   0,   0,   0, 
     10,  64,   2,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   2,   0, 
      0,   0,  21,   0,   0,   1, 
     32,   0,   0,   8,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     42, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   3,   0, 
      0,   0,  31,   0,   4,   3, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  62,   0,   0,   1, 
     21,   0,   0,   1, 190,  24, 
      0,   1,   1,   0,   0,   6, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,  64,   2,   0, 
      1,  64,   0,   0,   7,   0, 
      0,   0,  31,   0,   0,   3, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  30,   0,   0,   6, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,  64,   2,   0, 
      1,  64,   0,   0,   4,   0, 
      0,   0, 167,   0,   0,   9, 
     18,   0,  16,   0,   1,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
      6, 240,  17,   0,   0,   0, 
      0,   0, 167,   0,   0,   9, 
     34,   0,  16,   0,   1,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
      6, 240,  17,   0,   1,   0, 
      0,   0, 167,   0,   0,   9, 
     66,   0,  16,   0,   1,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
      6, 240,  17,   0,   2,   0, 
      0,   0, 167,   0,   0,   9, 
    130,   0,  16,   0,   1,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
      6, 240,  17,   0,   3,   0, 
      0,   0,   0,   0,   0,   7, 
    242,   0,  16,   0,   1,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,  70,  14, 
     16,   0,   2,   0,   0,   0, 
     56,   0,   0,  10, 242,   0, 
     16,   0,   2,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,  63,   0,   0, 
      0,  63,   0,   0,   0,  63, 
      0,   0,   0,  63,  85,   0, 
      0,   6,  18,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
      2,   0,   1,  64,   0,   0, 
      3,   0,   0,   0,  54,   0, 
      0,   5, 226,   0,  16,   0, 
      1,   0,   0,   0, 166,  10, 
     16,   0,   0,   0,   0,   0, 
    164,   0,   0,   7, 242, 224, 
     17,   0,   3,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0, 168,   0, 
      0,   8,  18, 240,  17,   0, 
      0,   0,   0,   0,  10,  64, 
      2,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   2,   0,   0,   0, 
    168,   0,   0,   8,  18, 240, 
     17,   0,   1,   0,   0,   0, 
     10,  64,   2,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   2,   0, 
      0,   0, 168,   0,   0,   8, 
     18, 240,  17,   0,   2,   0, 
      0,   0,  10,  64,   2,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      2,   0,   0,   0, 168,   0, 
      0,   8,  18, 240,  17,   0, 
      3,   0,   0,   0,  10,  64, 
      2,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   2,   0,   0,   0, 
     21,   0,   0,   1,  32,   0, 
      0,   8,  18,   0,  16,   0, 
      0,   0,   0,   0,  42, 128, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   4,   0,   0,   0, 
     31,   0,   4,   3,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  21,   0, 
      0,   1, 190,  24,   0,   1, 
      1,   0,   0,   6,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10,  64,   2,   0,   1,  64, 
      0,   0,  15,   0,   0,   0, 
     31,   0,   0,   3,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     30,   0,   0,   6,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10,  64,   2,   0,   1,  64, 
      0,   0,   8,   0,   0,   0, 
    167,   0,   0,   9,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,   6, 240, 
     17,   0,   0,   0,   0,   0, 
    167,   0,   0,   9,  34,   0, 
     16,   0,   1,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,   6, 240, 
     17,   0,   1,   0,   0,   0, 
    167,   0,   0,   9,  66,   0, 
     16,   0,   1,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,   6, 240, 
     17,   0,   2,   0,   0,   0, 
    167,   0,   0,   9, 130,   0, 
     16,   0,   1,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,   6, 240, 
     17,   0,   3,   0,   0,   0, 
      0,   0,   0,   7, 242,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  56,   0, 
      0,  10, 242,   0,  16,   0, 
      2,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,  63,   0,   0,   0,  63, 
      0,   0,   0,  63,   0,   0, 
      0,  63,  85,   0,   0,   6, 
     18,   0,  16,   0,   1,   0, 
      0,   0,  10,   0,   2,   0, 
      1,  64,   0,   0,   4,   0, 
      0,   0,  54,   0,   0,   5, 
    226,   0,  16,   0,   1,   0, 
      0,   0, 166,  10,  16,   0, 
      0,   0,   0,   0, 164,   0, 
      0,   7, 242, 224,  17,   0, 
      4,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0, 168,   0,   0,   8, 
     18, 240,  17,   0,   0,   0, 
      0,   0,  10,  64,   2,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      2,   0,   0,   0, 168,   0, 
      0,   8,  18, 240,  17,   0, 
      1,   0,   0,   0,  10,  64, 
      2,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  26,   0, 
     16,   0,   2,   0,   0,   0, 
    168,   0,   0,   8,  18, 240, 
     17,   0,   2,   0,   0,   0, 
     10,  64,   2,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     42,   0,  16,   0,   2,   0, 
      0,   0, 168,   0,   0,   8, 
     18, 240,  17,   0,   3,   0, 
      0,   0,  10,  64,   2,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      2,   0,   0,   0,  21,   0, 
      0,   1,  32,   0,   0,   8, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  42, 128,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      5,   0,   0,   0,  31,   0, 
      4,   3,  10,   0,  16,   0, 
      0,   0,   0,   0,  62,   0, 
      0,   1,  21,   0,   0,   1, 
    190,  24,   0,   1,   1,   0, 
      0,   6,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,  64, 
      2,   0,   1,  64,   0,   0, 
     31,   0,   0,   0,  31,   0, 
      0,   3,  10,   0,  16,   0, 
      0,   0,   0,   0,  30,   0, 
      0,   6,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,  64, 
      2,   0,   1,  64,   0,   0, 
     15,   0,   0,   0, 167,   0, 
      0,   9,  18,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,   6, 240,  17,   0, 
      0,   0,   0,   0, 167,   0, 
      0,   9,  34,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,   6, 240,  17,   0, 
      1,   0,   0,   0, 167,   0, 
      0,   9,  66,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,   6, 240,  17,   0, 
      2,   0,   0,   0, 167,   0, 
      0,   9, 130,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,   6, 240,  17,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   7, 242,   0,  16,   0, 
      1,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0,  56,   0,   0,  10, 
    242,   0,  16,   0,   2,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,  63, 
      0,   0,   0,  63,   0,   0, 
      0,  63,   0,   0,   0,  63, 
     85,   0,   0,   6,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     10,   0,   2,   0,   1,  64, 
      0,   0,   5,   0,   0,   0, 
     54,   0,   0,   5, 226,   0, 
     16,   0,   1,   0,   0,   0, 
    166,  10,  16,   0,   0,   0, 
      0,   0, 164,   0,   0,   7, 
    242, 224,  17,   0,   5,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,  70,  14, 
     16,   0,   2,   0,   0,   0, 
    168,   0,   0,   8,  18, 240, 
     17,   0,   0,   0,   0,   0, 
     10,  64,   2,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   2,   0, 
      0,   0, 168,   0,   0,   8, 
     18, 240,  17,   0,   1,   0, 
      0,   0,  10,  64,   2,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      2,   0,   0,   0, 168,   0, 
      0,   8,  18, 240,  17,   0, 
      2,   0,   0,   0,  10,  64, 
      2,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  42,   0, 
     16,   0,   2,   0,   0,   0, 
    168,   0,   0,   8,  18, 240, 
     17,   0,   3,   0,   0,   0, 
     10,  64,   2,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   2,   0, 
      0,   0,  21,   0,   0,   1, 
     32,   0,   0,   8,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     42, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   6,   0, 
      0,   0,  31,   0,   4,   3, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  62,   0,   0,   1, 
     21,   0,   0,   1, 190,  24, 
      0,   1,  31,   0,   0,   2, 
     10,  64,   2,   0, 167,   0, 
      0,   9,  18,   0,  16,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,  31,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,   6, 240,  17,   0, 
      0,   0,   0,   0, 167,   0, 
      0,   9,  34,   0,  16,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,  31,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,   6, 240,  17,   0, 
      1,   0,   0,   0, 167,   0, 
      0,   9,  66,   0,  16,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,  31,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,   6, 240,  17,   0, 
      2,   0,   0,   0, 167,   0, 
      0,   9, 130,   0,  16,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,  31,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,   6, 240,  17,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   7, 242,   0,  16,   0, 
      1,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0,  56,   0,   0,  10, 
    242,   0,  16,   0,   1,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,  63, 
      0,   0,   0,  63,   0,   0, 
      0,  63,   0,   0,   0,  63, 
     85,   0,   0,   6,  18,   0, 
     16,   0,   2,   0,   0,   0, 
     10,   0,   2,   0,   1,  64, 
      0,   0,   6,   0,   0,   0, 
     54,   0,   0,   5, 226,   0, 
     16,   0,   2,   0,   0,   0, 
    166,  10,  16,   0,   0,   0, 
      0,   0, 164,   0,   0,   7, 
    242, 224,  17,   0,   6,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
     21,   0,   0,   1,  62,   0, 
      0,   1,  82,  84,  83,  48, 
    188,   0,   0,   0,   2,   0, 
      0,   0,   3,   0,   0,   0, 
     24,   0,   0,   0,   1,   0, 
      0,   0, 136,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     60,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     72,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    104,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      4,   0,   0,   0,   1,   0, 
      0,   0,  80,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      1,   0,   0,   0, 112,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,  20,   0,   0,   0, 
      3,   0,   0,   0,   3,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  16,   0, 
      0,   0,   4,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0, 255, 255, 127, 127, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0
};
