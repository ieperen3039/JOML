/*
** This file has been pre-processed with DynASM.
** http://luajit.org/dynasm.html
** DynASM version 1.3.0, DynASM x64 version 1.3.0
** DO NOT EDIT! The original file is in "codegen_linear.dasc".
*/

#line 1 "codegen_linear.dasc"
#include <stdlib.h>
#include <Windows.h>

#include "dynasm/dasm_proto.h"
#include "dynasm/dasm_x86.h"
#include "codegen.h"
#include "opcodes.h"

//|.arch x64
#if DASM_VERSION != 10300
#error "Version mismatch between DynASM and included encoding engine"
#endif
#line 10 "codegen_linear.dasc"
//|.section code
#define DASM_SECTION_CODE	0
#define DASM_MAXSECTION		1
#line 11 "codegen_linear.dasc"
//|.globals GLOB_
enum {
  GLOB__MAX
};
#line 12 "codegen_linear.dasc"
//|.actionlist actionlist
static const unsigned char actionlist[1589] = {
  73,137,224,73,131,224,252,240,73,131,232,16,65,199,0,0,0,0,0,65,199,64,4,
  0,0,0,128,65,199,64,8,0,0,0,128,65,199,64,12,0,0,0,0,255,77,137,193,73,129,
  252,233,239,69,15,41,1,69,15,41,73,16,69,15,41,81,32,255,65,15,40,192,65,
  15,22,193,65,15,40,201,65,15,18,200,65,15,40,210,65,15,22,211,65,15,40,219,
  65,15,18,218,255,15,40,224,15,198,228,235,65,15,40,40,15,87,229,255,15,40,
  232,15,198,252,237,235,15,40,252,240,15,198,252,246,235,15,89,252,238,15,
  40,252,245,15,20,252,237,15,21,252,246,15,92,252,238,15,83,252,237,15,89,
  229,255,15,40,252,235,15,198,252,237,235,65,15,40,48,15,87,252,238,255,15,
  40,252,243,15,198,252,246,235,15,40,252,251,15,198,252,255,235,15,89,252,
  247,15,40,252,254,15,20,252,246,15,21,252,255,15,92,252,247,15,83,252,246,
  15,89,252,238,255,15,40,252,245,15,198,252,246,235,15,40,252,250,15,22,252,
  255,15,89,252,247,15,40,252,253,15,198,252,255,235,68,15,40,194,69,15,18,
  192,65,15,89,252,248,15,88,252,247,255,15,40,252,249,15,198,252,255,235,68,
  15,40,198,69,15,22,192,65,15,89,252,248,68,15,40,193,69,15,198,192,235,68,
  15,40,206,69,15,18,201,69,15,89,193,65,15,88,252,248,255,15,87,199,15,87,
  252,248,15,87,199,255,15,92,252,248,255,68,15,40,199,69,15,198,192,235,69,
  15,40,8,69,15,87,193,255,68,15,40,207,69,15,198,201,235,68,15,40,215,69,15,
  198,210,235,69,15,89,202,69,15,40,209,69,15,20,201,69,15,21,210,69,15,92,
  202,69,15,83,201,69,15,89,193,255,69,15,40,1,69,15,40,73,16,69,15,40,81,32,
  255,65,15,40,192,65,15,40,208,65,15,40,201,15,198,193,235,15,198,209,235,
  65,15,40,218,65,15,40,252,234,65,15,40,252,243,15,198,222,235,15,198,252,
  238,235,15,40,200,15,198,195,235,15,40,226,15,198,213,235,15,198,203,235,
  15,198,230,235,255,68,15,40,192,68,15,40,202,68,15,40,209,68,15,40,220,255,
  68,15,40,224,68,15,40,252,234,68,15,40,252,241,68,15,40,252,252,255,69,15,
  40,196,69,15,40,205,69,15,40,214,69,15,40,223,255,69,15,40,224,69,15,40,252,
  233,69,15,40,252,242,69,15,40,252,251,255,76,139,1,76,139,73,8,72,131,193,
  16,65,15,40,0,65,15,41,1,65,15,40,136,233,65,15,41,137,233,65,15,40,144,233,
  65,15,41,145,233,65,15,40,152,233,65,15,41,153,233,255,76,139,1,72,131,193,
  16,255,69,15,40,0,69,15,40,136,233,69,15,40,144,233,69,15,40,152,233,255,
  69,15,40,32,69,15,40,168,233,69,15,40,176,233,69,15,40,184,233,255,69,15,
  41,0,69,15,41,136,233,69,15,41,144,233,69,15,41,152,233,255,69,15,41,32,69,
  15,41,168,233,69,15,41,176,233,69,15,41,184,233,255,15,40,200,15,198,201,
  235,15,40,208,15,198,210,235,15,40,216,15,198,219,235,15,40,224,15,198,228,
  235,65,15,40,192,15,89,193,65,15,40,201,15,89,202,65,15,40,210,15,89,211,
  65,15,40,219,15,89,220,15,88,193,15,88,211,15,88,194,255,65,15,40,196,255,
  65,15,40,197,255,65,15,40,198,255,65,15,40,199,255,15,40,232,255,15,40,252,
  240,255,15,40,252,248,255,68,15,40,197,68,15,40,206,68,15,40,215,68,15,40,
  216,255,68,15,40,224,255,68,15,40,232,255,68,15,40,252,240,255,68,15,40,252,
  248,255,252,243,15,16,1,252,243,15,16,73,4,72,131,193,16,15,198,192,235,15,
  198,201,235,73,199,193,0,0,0,128,102,73,15,110,209,15,198,210,0,15,87,208,
  65,15,40,217,15,89,217,65,15,40,226,15,89,224,15,88,220,65,15,40,225,15,89,
  226,65,15,40,252,234,15,89,252,233,15,88,229,255,68,15,40,203,68,15,40,212,
  255,69,15,40,224,68,15,40,252,235,68,15,40,252,244,69,15,40,252,251,255,252,
  243,15,16,1,252,243,15,16,73,4,72,131,193,16,15,198,192,235,15,198,201,235,
  73,199,193,0,0,0,128,102,73,15,110,209,15,198,210,0,15,87,208,65,15,40,216,
  15,89,217,65,15,40,226,15,89,226,15,88,220,65,15,40,224,15,89,224,65,15,40,
  252,234,15,89,252,233,15,88,229,255,68,15,40,195,68,15,40,212,255,68,15,40,
  227,69,15,40,252,233,68,15,40,252,244,69,15,40,252,251,255,252,243,15,16,
  1,252,243,15,16,73,4,72,131,193,16,15,198,192,235,15,198,201,235,73,199,193,
  0,0,0,128,102,73,15,110,209,15,198,210,0,15,87,208,65,15,40,216,15,89,217,
  65,15,40,225,15,89,224,15,88,220,65,15,40,224,15,89,226,65,15,40,252,233,
  15,89,252,233,15,88,229,255,68,15,40,195,68,15,40,204,255,68,15,40,227,68,
  15,40,252,236,69,15,40,252,242,69,15,40,252,251,255,73,199,193,0,0,128,63,
  69,15,87,192,102,77,15,110,193,69,15,40,200,69,15,198,201,235,69,15,40,209,
  69,15,198,210,235,69,15,40,218,69,15,198,219,235,255,15,40,1,72,131,193,16,
  15,40,200,15,198,201,235,255,68,15,89,193,255,65,15,40,208,15,89,209,68,15,
  40,226,255,68,15,89,201,255,65,15,40,209,15,89,209,68,15,40,252,234,255,68,
  15,89,209,255,65,15,40,210,15,89,209,68,15,40,252,242,69,15,40,252,251,255,
  15,40,1,72,131,193,16,15,40,200,15,198,201,235,65,15,40,208,15,89,209,15,
  40,200,15,198,201,235,65,15,40,217,15,89,217,15,88,211,15,40,200,15,198,201,
  235,65,15,40,218,15,89,217,15,88,211,65,15,40,203,15,88,209,255,68,15,40,
  218,255,69,15,40,224,69,15,40,252,233,69,15,40,252,242,68,15,40,252,250,255,
  76,139,1,72,131,193,16,65,15,40,0,73,199,193,0,0,0,128,102,73,15,110,201,
  15,198,201,0,15,87,193,65,15,41,0,255,85,72,137,229,72,129,252,236,239,255,
  252,243,68,15,127,60,36,252,243,68,15,127,180,253,36,233,252,243,68,15,127,
  172,253,36,233,252,243,68,15,127,164,253,36,233,252,243,68,15,127,156,253,
  36,233,252,243,68,15,127,148,253,36,233,252,243,68,15,127,140,253,36,233,
  252,243,68,15,127,132,253,36,233,252,243,15,127,188,253,36,233,252,243,15,
  127,180,253,36,233,255,252,243,68,15,111,60,36,252,243,68,15,111,180,253,
  36,233,252,243,68,15,111,172,253,36,233,252,243,68,15,111,164,253,36,233,
  252,243,68,15,111,156,253,36,233,252,243,68,15,111,148,253,36,233,252,243,
  68,15,111,140,253,36,233,252,243,68,15,111,132,253,36,233,252,243,15,111,
  188,253,36,233,252,243,15,111,180,253,36,233,72,137,252,236,93,195,255
};

#line 13 "codegen_linear.dasc"

#ifndef _MM_SHUFFLE
#define _MM_SHUFFLE(fp3,fp2,fp1,fp0) \
 (((fp3) << 6) | ((fp2) << 4) | ((fp1) << 2) | (fp0))
#endif

/**
 * Reference: http://www.gamedev.net/topic/621951-sse-4x4-matrix-transpose-and-invert/
 */
static void matrix_invert(dasm_State** Dst, char storeIntoSecond) {
  // Make (0, -0, -0, 0) ready in stack at [r8]
  //| mov r8, rsp
  //| and r8, -16
  //| sub r8, 16
  //| mov dword [r8], 0x0
  //| mov dword [r8+4], 0x80000000
  //| mov dword [r8+8], 0x80000000
  //| mov dword [r8+12], 0x0
  dasm_put(Dst, 0);
#line 31 "codegen_linear.dasc"
  // Save xmm8, xmm9, xmm10 to stack at [r9], [r9+16], [r9+32]
  //| mov r9, r8
  //| sub r9, 16*3
  //| movaps [r9], xmm8 // <- save xmm8 to stack, because we need it for computations!
  //| movaps [r9+16], xmm9
  //| movaps [r9+32], xmm10
  dasm_put(Dst, 44, 16*3);
#line 37 "codegen_linear.dasc"

  // Vec4 const & m11 = _mm_movelh_ps(c0, c1);
  // Vec4 const & m21 = _mm_movehl_ps(c1, c0);
  // Vec4 const & m12 = _mm_movelh_ps(c2, c3);
  // Vec4 const & m22 = _mm_movehl_ps(c3, c2);

  //| movaps xmm0, xmm8
  //| movlhps xmm0, xmm9
  //| movaps xmm1, xmm9
  //| movhlps xmm1, xmm8
  //| movaps xmm2, xmm10
  //| movlhps xmm2, xmm11
  //| movaps xmm3, xmm11
  //| movhlps xmm3, xmm10
  dasm_put(Dst, 67);
#line 51 "codegen_linear.dasc"

  // inv2x2(m): return adj2x2(m) * det2x2(m).rcp();
  // adj2x2(m): _mm_xor_ps(m.swizzle<3,1,2,0>(), (0.0f, -0.0f, -0.0f, 0.0f));
  // det2x2(m): temp = m.swizzle<0,0,1,1>() * m.swizzle<3,3,2,2>();
  //            return _mm_sub_ps(_mm_unpacklo_ps(temp, temp), _mm_unpackhi_ps(temp, temp));

  // inv2x2(m11 = xmm0):
    // adj2x2(m11 = xmm0):
  //| movaps xmm4, xmm0
  //| shufps xmm4, xmm4, _MM_SHUFFLE(3, 1, 2, 0)
  //| movaps xmm5, [r8] // <- load (0, -0, -0, 0)
  //| xorps xmm4, xmm5 // <- _mm_xor_ps(m.swizzle<3,1,2,0>(), (0.0f, -0.0f, -0.0f, 0.0f));
  dasm_put(Dst, 100, _MM_SHUFFLE(3, 1, 2, 0));
#line 63 "codegen_linear.dasc"
    // det2x2(m11 = xmm0):
  //| movaps xmm5, xmm0
  //| shufps xmm5, xmm5, _MM_SHUFFLE(0, 0, 1, 1)
  //| movaps xmm6, xmm0
  //| shufps xmm6, xmm6, _MM_SHUFFLE(3, 3, 2, 2)
  //| mulps xmm5, xmm6 // <- temp = m.swizzle<0,0,1,1>() * m.swizzle<3,3,2,2>();
  //| movaps xmm6, xmm5
  //| unpcklps xmm5, xmm5
  //| unpckhps xmm6, xmm6
  //| subps xmm5, xmm6 // <- _mm_sub_ps(_mm_unpacklo_ps(temp, temp), _mm_unpackhi_ps(temp, temp));
  //| rcpps xmm5, xmm5 // <- det2x2(m).rcp();
  //| mulps xmm4, xmm5 // <- inv11 = inv2x2(m11 = xmm0)
  dasm_put(Dst, 115, _MM_SHUFFLE(0, 0, 1, 1), _MM_SHUFFLE(3, 3, 2, 2));
#line 75 "codegen_linear.dasc"

  // free: xmm5, xmm6, xmm7

  // inv2x2(m22 = xmm3):
    // adj2x2(m22 = xmm3):
  //| movaps xmm5, xmm3
  //| shufps xmm5, xmm5, _MM_SHUFFLE(3, 1, 2, 0)
  //| movaps xmm6, [r8] // <- load (0, -0, -0, 0)
  //| xorps xmm5, xmm6 // <- _mm_xor_ps(m.swizzle<3,1,2,0>(), (0.0f, -0.0f, -0.0f, 0.0f));
  dasm_put(Dst, 160, _MM_SHUFFLE(3, 1, 2, 0));
#line 84 "codegen_linear.dasc"
    // det2x2(m22 = xmm3):
  //| movaps xmm6, xmm3
  //| shufps xmm6, xmm6, _MM_SHUFFLE(0, 0, 1, 1)
  //| movaps xmm7, xmm3
  //| shufps xmm7, xmm7, _MM_SHUFFLE(3, 3, 2, 2)
  //| mulps xmm6, xmm7 // <- temp = m.swizzle<0,0,1,1>() * m.swizzle<3,3,2,2>();
  //| movaps xmm7, xmm6
  //| unpcklps xmm6, xmm6
  //| unpckhps xmm7, xmm7
  //| subps xmm6, xmm7 // <- _mm_sub_ps(_mm_unpacklo_ps(temp, temp), _mm_unpackhi_ps(temp, temp));
  //| rcpps xmm6, xmm6 // <- det2x2(m).rcp();
  //| mulps xmm5, xmm6 // <- inv22 = inv2x2(m22 = xmm3)
  dasm_put(Dst, 178, _MM_SHUFFLE(0, 0, 1, 1), _MM_SHUFFLE(3, 3, 2, 2));
#line 96 "codegen_linear.dasc"

  // free: xmm6, xmm7

  // mul2x2(a, b): b.swizzle<0,0,2,2>() * _mm_movelh_ps(a, a) + b.swizzle<1,1,3,3>() * _mm_movehl_ps(a, a);
  
  // _m11 = inv2x2(m11 - mul2x2(mul2x2(m12, inv22), m21)):
    // mul2x2(m12, inv22):
  //| movaps xmm6, xmm5 // <- copy inv22
  //| shufps xmm6, xmm6, _MM_SHUFFLE(0, 0, 2, 2)
  //| movaps xmm7, xmm2 // <- copy xmm2/m12
  //| movlhps xmm7, xmm7
  //| mulps xmm6, xmm7
  //| movaps xmm7, xmm5 // <- copy inv22
  //| shufps xmm7, xmm7, _MM_SHUFFLE(1, 1, 3, 3)
  //| movaps xmm8, xmm2  // <-!!!!!- We need xmm8 here, so save it to stack before!
  //| movhlps xmm8, xmm8
  //| mulps xmm7, xmm8
  //| addps xmm6, xmm7 // <- mul2x2(m12, inv22)
  dasm_put(Dst, 225, _MM_SHUFFLE(0, 0, 2, 2), _MM_SHUFFLE(1, 1, 3, 3));
#line 114 "codegen_linear.dasc"

  // free: xmm7

  // mul2x2(mul2x2(m12, inv22), m21):
  //        mul2x2(m12, inv22) = xmm6
  //                       m21 = xmm1
  // -> mul2x2(xmm6, xmm1)
  //| movaps xmm7, xmm1 // <- copy xmm1/m21
  //| shufps xmm7, xmm7, _MM_SHUFFLE(0, 0, 2, 2)
  //| movaps xmm8, xmm6 // <- copy xmm6/mul2x2(m12, inv22)
  //| movlhps xmm8, xmm8
  //| mulps xmm7, xmm8
  //| movaps xmm8, xmm1 // <- copy xmm1/m21
  //| shufps xmm8, xmm8, _MM_SHUFFLE(1, 1, 3, 3)
  //| movaps xmm9, xmm6  // <-!!!!!- We need xmm9 here, so save it to stack before!
  //| movhlps xmm9, xmm9
  //| mulps xmm8, xmm9
  //| addps xmm7, xmm8 // <- mul2x2(mul2x2(m12, inv22), m21)
  dasm_put(Dst, 273, _MM_SHUFFLE(0, 0, 2, 2), _MM_SHUFFLE(1, 1, 3, 3));
#line 132 "codegen_linear.dasc"

  // free: none (will overuse xmm8-xmm15)

  // m11 - mul2x2(mul2x2(m12, inv22), m21)
  // = xmm0 - xmm7
  // swap xmm0 and xmm7 with XOR swap
  // since we want the result to be in xmm7
  //| xorps xmm0, xmm7
  //| xorps xmm7, xmm0
  //| xorps xmm0, xmm7
  dasm_put(Dst, 322);
#line 142 "codegen_linear.dasc"
  // now subtract
  //| subps xmm7, xmm0
  dasm_put(Dst, 333);
#line 144 "codegen_linear.dasc"
  
  // inv2x2(m11 - mul2x2(mul2x2(m12, inv22), m21)):
  // = inv2x2(xmm7)
    // adj2x2(xmm7):
  //| movaps xmm8, xmm7
  //| shufps xmm8, xmm8, _MM_SHUFFLE(3, 1, 2, 0)
  //| movaps xmm9, [r8] // <- load (0, -0, -0, 0)
  //| xorps xmm8, xmm9 // <- _mm_xor_ps(m.swizzle<3,1,2,0>(), (0.0f, -0.0f, -0.0f, 0.0f));
  dasm_put(Dst, 338, _MM_SHUFFLE(3, 1, 2, 0));
#line 152 "codegen_linear.dasc"
    // det2x2(xmm7):
  //| movaps xmm9, xmm7
  //| shufps xmm9, xmm9, _MM_SHUFFLE(0, 0, 1, 1)
  //| movaps xmm10, xmm7
  //| shufps xmm10, xmm10, _MM_SHUFFLE(3, 3, 2, 2)
  //| mulps xmm9, xmm10 // <- temp = m.swizzle<0,0,1,1>() * m.swizzle<3,3,2,2>();
  //| movaps xmm10, xmm9
  //| unpcklps xmm9, xmm9
  //| unpckhps xmm10, xmm10
  //| subps xmm9, xmm10 // <- _mm_sub_ps(_mm_unpacklo_ps(temp, temp), _mm_unpackhi_ps(temp, temp));
  //| rcpps xmm9, xmm9 // <- det2x2(m).rcp();
  //| mulps xmm8, xmm9 // <- _m11 = inv2x2(m11 - mul2x2(mul2x2(m12, inv22), m21))
  dasm_put(Dst, 356, _MM_SHUFFLE(0, 0, 1, 1), _MM_SHUFFLE(3, 3, 2, 2));
#line 164 "codegen_linear.dasc"

  

  // restore xmm8, xmm9 (for the time being)
  //| movaps xmm8, [r9]
  //| movaps xmm9, [r9+16]
  //| movaps xmm10, [r9+32]
  dasm_put(Dst, 403);
#line 171 "codegen_linear.dasc"
}

static void matrix_transpose(dasm_State** Dst, char storeIntoSecond) {
  // requires matrix to be in first (xmm8-xmm11)
  // will store in either first or second (xmm12-xmm15)
  //| movaps xmm0, xmm8
  //| movaps xmm2, xmm8
  //| movaps xmm1, xmm9
  //| shufps xmm0, xmm1, _MM_SHUFFLE(2, 0, 2, 0)
  //| shufps xmm2, xmm1, _MM_SHUFFLE(3, 1, 3, 1)
  //| movaps xmm3, xmm10
  //| movaps xmm5, xmm10
  //| movaps xmm6, xmm11
  //| shufps xmm3, xmm6, _MM_SHUFFLE(2, 0, 2, 0)
  //| shufps xmm5, xmm6, _MM_SHUFFLE(3, 1, 3, 1)
  //| movaps xmm1, xmm0
  //| shufps xmm0, xmm3, _MM_SHUFFLE(2, 0, 2, 0)
  //| movaps xmm4, xmm2
  //| shufps xmm2, xmm5, _MM_SHUFFLE(2, 0, 2, 0)
  //| shufps xmm1, xmm3, _MM_SHUFFLE(3, 1, 3, 1)
  //| shufps xmm4, xmm6, _MM_SHUFFLE(3, 1, 3, 1)
  dasm_put(Dst, 418, _MM_SHUFFLE(2, 0, 2, 0), _MM_SHUFFLE(3, 1, 3, 1), _MM_SHUFFLE(2, 0, 2, 0), _MM_SHUFFLE(3, 1, 3, 1), _MM_SHUFFLE(2, 0, 2, 0), _MM_SHUFFLE(2, 0, 2, 0), _MM_SHUFFLE(3, 1, 3, 1), _MM_SHUFFLE(3, 1, 3, 1));
#line 192 "codegen_linear.dasc"
  if (!storeIntoSecond) {
    // store back into first
    //| movaps xmm8, xmm0
    //| movaps xmm9, xmm2
    //| movaps xmm10, xmm1
    //| movaps xmm11, xmm4
    dasm_put(Dst, 484);
#line 198 "codegen_linear.dasc"
  } else {
    // store back into second
    //| movaps xmm12, xmm0
    //| movaps xmm13, xmm2
    //| movaps xmm14, xmm1
    //| movaps xmm15, xmm4
    dasm_put(Dst, 501);
#line 204 "codegen_linear.dasc"
  }
}

static void copy(dasm_State** Dst, char storeIntoSecond) {
if (!storeIntoSecond) {
  //| movaps xmm8, xmm12
  //| movaps xmm9, xmm13
  //| movaps xmm10, xmm14
  //| movaps xmm11, xmm15
  dasm_put(Dst, 521);
#line 213 "codegen_linear.dasc"
} else {
  //| movaps xmm12, xmm8
  //| movaps xmm13, xmm9
  //| movaps xmm14, xmm10
  //| movaps xmm15, xmm11
  dasm_put(Dst, 538);
#line 218 "codegen_linear.dasc"
}
}

static void copy_mem(dasm_State** Dst) {
  //| mov r8, [rcx]
  //| mov r9, [rcx+8]
  //| add rcx, 16
  //| movaps xmm0, [r8]
  //| movaps [r9], xmm0
  //| movaps xmm1, [r8+4*4]
  //| movaps [r9+4*4], xmm1
  //| movaps xmm2, [r8+4*8]
  //| movaps [r9+4*8], xmm2
  //| movaps xmm3, [r8+4*12]
  //| movaps [r9+4*12], xmm3
  dasm_put(Dst, 558, 4*4, 4*4, 4*8, 4*8, 4*12, 4*12);
#line 233 "codegen_linear.dasc"
}

static void load(dasm_State** Dst, char storeIntoSecond) {
  //| mov r8, [rcx]
  //| add rcx, 16
  dasm_put(Dst, 608);
#line 238 "codegen_linear.dasc"
if (!storeIntoSecond) {
  //| movaps xmm8, [r8]
  //| movaps xmm9, [r8+4*4]
  //| movaps xmm10, [r8+4*8]
  //| movaps xmm11, [r8+4*12]
  dasm_put(Dst, 616, 4*4, 4*8, 4*12);
#line 243 "codegen_linear.dasc"
} else {
  //| movaps xmm12, [r8]
  //| movaps xmm13, [r8+4*4]
  //| movaps xmm14, [r8+4*8]
  //| movaps xmm15, [r8+4*12]
  dasm_put(Dst, 636, 4*4, 4*8, 4*12);
#line 248 "codegen_linear.dasc"
}
}

static void store(dasm_State** Dst, char fromSecond) {
  //| mov r8, [rcx]
  //| add rcx, 16
  dasm_put(Dst, 608);
#line 254 "codegen_linear.dasc"
if (!fromSecond) {
  //| movaps [r8], xmm8
  //| movaps [r8+4*4], xmm9
  //| movaps [r8+4*8], xmm10
  //| movaps [r8+4*12], xmm11
  dasm_put(Dst, 656, 4*4, 4*8, 4*12);
#line 259 "codegen_linear.dasc"
} else {
  //| movaps [r8], xmm12
  //| movaps [r8+4*4], xmm13
  //| movaps [r8+4*8], xmm14
  //| movaps [r8+4*12], xmm15
  dasm_put(Dst, 676, 4*4, 4*8, 4*12);
#line 264 "codegen_linear.dasc"
}
}

static void linearProduct(dasm_State** Dst) {
  // vector is in xmm0, matrix in xmm8-xmm11
  //| movaps xmm1, xmm0
  //| shufps xmm1, xmm1, _MM_SHUFFLE(0, 0, 0, 0)
  //| movaps xmm2, xmm0
  //| shufps xmm2, xmm2, _MM_SHUFFLE(1, 1, 1, 1)
  //| movaps xmm3, xmm0
  //| shufps xmm3, xmm3, _MM_SHUFFLE(2, 2, 2, 2)
  //| movaps xmm4, xmm0
  //| shufps xmm4, xmm4, _MM_SHUFFLE(3, 3, 3, 3)
  //| movaps xmm0, xmm8
  //| mulps xmm0, xmm1
  //| movaps xmm1, xmm9
  //| mulps xmm1, xmm2
  //| movaps xmm2, xmm10
  //| mulps xmm2, xmm3
  //| movaps xmm3, xmm11
  //| mulps xmm3, xmm4
  //| addps xmm0, xmm1
  //| addps xmm2, xmm3
  //| addps xmm0, xmm2
  dasm_put(Dst, 696, _MM_SHUFFLE(0, 0, 0, 0), _MM_SHUFFLE(1, 1, 1, 1), _MM_SHUFFLE(2, 2, 2, 2), _MM_SHUFFLE(3, 3, 3, 3));
#line 288 "codegen_linear.dasc"
}

static void matrix_mul_matrix(dasm_State** Dst, char storeIntoSecond) {
  // requires:
  // left matrix in xmm8-xmm11 (aka. first)
  // right matrix in xmm12-xmm15 (aka. second)
  // will store in either first or second
  for (int i = 0; i < 4; i++) {
    // load column/vector from second
    if (i == 0) {
      //| movaps xmm0, xmm12
      dasm_put(Dst, 762);
#line 299 "codegen_linear.dasc"
    } else if (i == 1) {
      //| movaps xmm0, xmm13
      dasm_put(Dst, 767);
#line 301 "codegen_linear.dasc"
    } else if (i == 2) {
      //| movaps xmm0, xmm14
      dasm_put(Dst, 772);
#line 303 "codegen_linear.dasc"
    } else if (i == 3) {
      //| movaps xmm0, xmm15
      dasm_put(Dst, 777);
#line 305 "codegen_linear.dasc"
    }
    linearProduct(Dst);
    if (!storeIntoSecond) {
      // store into first
      if (i == 0) {
        //| movaps xmm5, xmm0
        dasm_put(Dst, 782);
#line 311 "codegen_linear.dasc"
      } else if (i == 1) {
        //| movaps xmm6, xmm0
        dasm_put(Dst, 786);
#line 313 "codegen_linear.dasc"
      } else if (i == 2) {
        //| movaps xmm7, xmm0
        dasm_put(Dst, 791);
#line 315 "codegen_linear.dasc"
      } else if (i == 3) {
        //| movaps xmm8, xmm5
        //| movaps xmm9, xmm6
        //| movaps xmm10, xmm7
        //| movaps xmm11, xmm0
        dasm_put(Dst, 796);
#line 320 "codegen_linear.dasc"
      }
    } else {
      // store into second
      if (i == 0) {
        //| movaps xmm12, xmm0
        dasm_put(Dst, 813);
#line 325 "codegen_linear.dasc"
      } else if (i == 1) {
        //| movaps xmm13, xmm0
        dasm_put(Dst, 818);
#line 327 "codegen_linear.dasc"
      } else if (i == 2) {
        //| movaps xmm14, xmm0
        dasm_put(Dst, 823);
#line 329 "codegen_linear.dasc"
      } else if (i == 3) {
        //| movaps xmm15, xmm0
        dasm_put(Dst, 829);
#line 331 "codegen_linear.dasc"
      }
    }
  }
}

static void matrix_rotateX(dasm_State** Dst, char storeIntoSecond) {
  // requires matrix to be in xmm8-xmm11 (aka. first)
  // will store in either first or second (xmm12-xmm15)
  //| movss xmm0, dword [rcx] // sin
  //| movss xmm1, dword [rcx+4] // cos
  //| add rcx, 16
  //| shufps xmm0, xmm0, _MM_SHUFFLE(0, 0, 0, 0)
  //| shufps xmm1, xmm1, _MM_SHUFFLE(0, 0, 0, 0)
  //| mov r9, 0x80000000
  //| movd xmm2, r9
  //| shufps xmm2, xmm2, 0x0
  //| xorps xmm2, xmm0 // -sin
  //| movaps xmm3, xmm9
  //| mulps xmm3, xmm1 // m1X * rm11
  //| movaps xmm4, xmm10
  //| mulps xmm4, xmm0 // m2X * rm12
  //| addps xmm3, xmm4
  //| movaps xmm4, xmm9
  //| mulps xmm4, xmm2 // m1X * rm21
  //| movaps xmm5, xmm10
  //| mulps xmm5, xmm1 // m2X * rm22
  //| addps xmm4, xmm5
  dasm_put(Dst, 835, _MM_SHUFFLE(0, 0, 0, 0), _MM_SHUFFLE(0, 0, 0, 0));
#line 358 "codegen_linear.dasc"
  if (!storeIntoSecond) {
    //| movaps xmm9, xmm3
    //| movaps xmm10, xmm4
    dasm_put(Dst, 914);
#line 361 "codegen_linear.dasc"
  } else {
    //| movaps xmm12, xmm8
    //| movaps xmm13, xmm3
    //| movaps xmm14, xmm4
    //| movaps xmm15, xmm11
    dasm_put(Dst, 923);
#line 366 "codegen_linear.dasc"
  }
}

static void matrix_rotateY(dasm_State** Dst, char storeIntoSecond) {
  // requires matrix to be in xmm8-xmm11 (aka. first)
  // will store in either first or second (xmm12-xmm15)
  //| movss xmm0, dword [rcx] // sin
  //| movss xmm1, dword [rcx+4] // cos
  //| add rcx, 16
  //| shufps xmm0, xmm0, _MM_SHUFFLE(0, 0, 0, 0)
  //| shufps xmm1, xmm1, _MM_SHUFFLE(0, 0, 0, 0)
  //| mov r9, 0x80000000
  //| movd xmm2, r9
  //| shufps xmm2, xmm2, 0x0
  //| xorps xmm2, xmm0 // -sin
  //| movaps xmm3, xmm8
  //| mulps xmm3, xmm1 // m0X * rm00
  //| movaps xmm4, xmm10
  //| mulps xmm4, xmm2 // m2X * rm02
  //| addps xmm3, xmm4
  //| movaps xmm4, xmm8
  //| mulps xmm4, xmm0 // m0X * rm20
  //| movaps xmm5, xmm10
  //| mulps xmm5, xmm1 // m2X * rm22
  //| addps xmm4, xmm5
  dasm_put(Dst, 943, _MM_SHUFFLE(0, 0, 0, 0), _MM_SHUFFLE(0, 0, 0, 0));
#line 391 "codegen_linear.dasc"
  if (!storeIntoSecond) {
    //| movaps xmm8, xmm3
    //| movaps xmm10, xmm4
    dasm_put(Dst, 1022);
#line 394 "codegen_linear.dasc"
  } else {
    //| movaps xmm12, xmm3
    //| movaps xmm13, xmm9
    //| movaps xmm14, xmm4
    //| movaps xmm15, xmm11
    dasm_put(Dst, 1031);
#line 399 "codegen_linear.dasc"
  }
}

static void matrix_rotateZ(dasm_State** Dst, char storeIntoSecond) {
  // requires matrix to be in xmm8-xmm11 (aka. first)
  // will store in either first or second (xmm12-xmm15)
  //| movss xmm0, dword [rcx] // sin
  //| movss xmm1, dword [rcx+4] // cos
  //| add rcx, 16
  //| shufps xmm0, xmm0, _MM_SHUFFLE(0, 0, 0, 0)
  //| shufps xmm1, xmm1, _MM_SHUFFLE(0, 0, 0, 0)
  //| mov r9, 0x80000000
  //| movd xmm2, r9
  //| shufps xmm2, xmm2, 0x0
  //| xorps xmm2, xmm0 // -sin
  //| movaps xmm3, xmm8
  //| mulps xmm3, xmm1 // m0X * rm00
  //| movaps xmm4, xmm9
  //| mulps xmm4, xmm0 // m1X * rm01
  //| addps xmm3, xmm4
  //| movaps xmm4, xmm8
  //| mulps xmm4, xmm2 // m0X * rm10
  //| movaps xmm5, xmm9
  //| mulps xmm5, xmm1 // m1X * rm11
  //| addps xmm4, xmm5
  dasm_put(Dst, 1051, _MM_SHUFFLE(0, 0, 0, 0), _MM_SHUFFLE(0, 0, 0, 0));
#line 424 "codegen_linear.dasc"
  if (!storeIntoSecond) {
    //| movaps xmm8, xmm3
    //| movaps xmm9, xmm4
    dasm_put(Dst, 1130);
#line 427 "codegen_linear.dasc"
  } else {
    //| movaps xmm12, xmm3
    //| movaps xmm13, xmm4
    //| movaps xmm14, xmm10
    //| movaps xmm15, xmm11
    dasm_put(Dst, 1139);
#line 432 "codegen_linear.dasc"
  }
}

static void matrix_identity(dasm_State** Dst) {
  // requires matrix to be in first (xmm8-xmm11)
  // will store in first
  //| mov r9, 0x3f800000 // int representation of 1.0f
  //| xorps xmm8, xmm8 // zero it out first
  //| movd xmm8, r9
  //| movaps xmm9, xmm8
  //| shufps xmm9, xmm9, _MM_SHUFFLE(2, 1, 0, 3)
  //| movaps xmm10, xmm9
  //| shufps xmm10, xmm10, _MM_SHUFFLE(2, 1, 0, 3)
  //| movaps xmm11, xmm10
  //| shufps xmm11, xmm11, _MM_SHUFFLE(2, 1, 0, 3)
  dasm_put(Dst, 1159, _MM_SHUFFLE(2, 1, 0, 3), _MM_SHUFFLE(2, 1, 0, 3), _MM_SHUFFLE(2, 1, 0, 3));
#line 447 "codegen_linear.dasc"
}

static void matrix_scale(dasm_State** Dst, char storeIntoSecond) {
  // requires matrix to be in xmm8-xmm11 (aka. first)
  // will store in either first or second (xmm12-xmm15)
  // get scale factor (x, y, z, 1)
  //| movaps xmm0, [rcx]
  //| add rcx, 16
  //| movaps xmm1, xmm0
  //| shufps xmm1, xmm1, _MM_SHUFFLE(0, 0, 0, 0)
  dasm_put(Dst, 1203, _MM_SHUFFLE(0, 0, 0, 0));
#line 457 "codegen_linear.dasc"
  if (!storeIntoSecond) {
    //| mulps xmm8, xmm1
    dasm_put(Dst, 1218);
#line 459 "codegen_linear.dasc"
  } else {
    //| movaps xmm2, xmm8
    //| mulps xmm2, xmm1
    //| movaps xmm12, xmm2
    dasm_put(Dst, 1223);
#line 463 "codegen_linear.dasc"
  }
  //| movaps xmm1, xmm0
  //| shufps xmm1, xmm1, _MM_SHUFFLE(1, 1, 1, 1)
  dasm_put(Dst, 1210, _MM_SHUFFLE(1, 1, 1, 1));
#line 466 "codegen_linear.dasc"
  if (!storeIntoSecond) {
    //| mulps xmm9, xmm1
    dasm_put(Dst, 1235);
#line 468 "codegen_linear.dasc"
  } else {
    //| movaps xmm2, xmm9
    //| mulps xmm2, xmm1
    //| movaps xmm13, xmm2
    dasm_put(Dst, 1240);
#line 472 "codegen_linear.dasc"
  }
  //| movaps xmm1, xmm0
  //| shufps xmm1, xmm1, _MM_SHUFFLE(2, 2, 2, 2)
  dasm_put(Dst, 1210, _MM_SHUFFLE(2, 2, 2, 2));
#line 475 "codegen_linear.dasc"
  if (!storeIntoSecond) {
    //| mulps xmm10, xmm1
    dasm_put(Dst, 1253);
#line 477 "codegen_linear.dasc"
  } else {
    //| movaps xmm2, xmm10
    //| mulps xmm2, xmm1
    //| movaps xmm14, xmm2
    //| movaps xmm15, xmm11
    dasm_put(Dst, 1258);
#line 482 "codegen_linear.dasc"
  }
}

static void matrix_translate(dasm_State** Dst, char storeIntoSecond) {
  // requires matrix to be in xmm8-xmm11 (aka. first)
  // will store in either first or second (xmm12-xmm15)
  // get translation (x, y, z, 0)
  //| movaps xmm0, [rcx]
  //| add rcx, 16
  //| movaps xmm1, xmm0
  //| shufps xmm1, xmm1, _MM_SHUFFLE(0, 0, 0, 0)
  //| movaps xmm2, xmm8
  //| mulps xmm2, xmm1 // m0X * x
  //| movaps xmm1, xmm0
  //| shufps xmm1, xmm1, _MM_SHUFFLE(1, 1, 1, 1)
  //| movaps xmm3, xmm9
  //| mulps xmm3, xmm1 // m1X * y
  //| addps xmm2, xmm3 // +
  //| movaps xmm1, xmm0
  //| shufps xmm1, xmm1, _MM_SHUFFLE(2, 2, 2, 2)
  //| movaps xmm3, xmm10
  //| mulps xmm3, xmm1 // m2X * z
  //| addps xmm2, xmm3 // +
  //| movaps xmm1, xmm11
  //| addps xmm2, xmm1 // + m3N
  dasm_put(Dst, 1276, _MM_SHUFFLE(0, 0, 0, 0), _MM_SHUFFLE(1, 1, 1, 1), _MM_SHUFFLE(2, 2, 2, 2));
#line 507 "codegen_linear.dasc"
  if (!storeIntoSecond) {
    //| movaps xmm11, xmm2
    dasm_put(Dst, 1339);
#line 509 "codegen_linear.dasc"
  } else {
    //| movaps xmm12, xmm8
    //| movaps xmm13, xmm9
    //| movaps xmm14, xmm10
    //| movaps xmm15, xmm2
    dasm_put(Dst, 1344);
#line 514 "codegen_linear.dasc"
  }
}

static void vector_negate(dasm_State** Dst) {
  //| mov r8, [rcx]
  //| add rcx, 16
  //| movaps xmm0, [r8]
  //| mov r9, 0x80000000
  //| movd xmm1, r9
  //| shufps xmm1, xmm1, 0x0
  //| xorps xmm0, xmm1
  //| movaps [r8], xmm0
  dasm_put(Dst, 1364);
#line 526 "codegen_linear.dasc"
}

static void prologue(dasm_State** Dst) {
  //| push rbp
  //| mov rbp, rsp
  //| sub rsp, 16*10
  dasm_put(Dst, 1399, 16*10);
#line 532 "codegen_linear.dasc"
  // save all non-volatile registers that we use
  //| movdqu [rsp], xmm15
  //| movdqu [rsp+4*4], xmm14
  //| movdqu [rsp+4*4*2], xmm13
  //| movdqu [rsp+4*4*3], xmm12
  //| movdqu [rsp+4*4*4], xmm11
  //| movdqu [rsp+4*4*5], xmm10
  //| movdqu [rsp+4*4*6], xmm9
  //| movdqu [rsp+4*4*7], xmm8
  //| movdqu [rsp+4*4*8], xmm7
  //| movdqu [rsp+4*4*9], xmm6
  dasm_put(Dst, 1409, 4*4, 4*4*2, 4*4*3, 4*4*4, 4*4*5, 4*4*6, 4*4*7, 4*4*8, 4*4*9);
#line 543 "codegen_linear.dasc"
}

static void epilogue(dasm_State** Dst) {
  //| movdqu xmm15, [rsp]
  //| movdqu xmm14, [rsp+4*4]
  //| movdqu xmm13, [rsp+4*4*2]
  //| movdqu xmm12, [rsp+4*4*3]
  //| movdqu xmm11, [rsp+4*4*4]
  //| movdqu xmm10, [rsp+4*4*5]
  //| movdqu xmm9, [rsp+4*4*6]
  //| movdqu xmm8, [rsp+4*4*7]
  //| movdqu xmm7, [rsp+4*4*8]
  //| movdqu xmm6, [rsp+4*4*9]
  //| mov rsp, rbp
  //| pop rbp
  //| ret
  dasm_put(Dst, 1496, 4*4, 4*4*2, 4*4*3, 4*4*4, 4*4*5, 4*4*6, 4*4*7, 4*4*8, 4*4*9);
#line 559 "codegen_linear.dasc"
}

batch_func_t codegen(const unsigned char* opcodes, int opcodesLength, size_t* codeSize) {
  dasm_State* state;
  dasm_State** Dst = &state;
  int status;
  void* code;
  DWORD dwOld;
  void* global_labels[GLOB__MAX];
  dasm_init(&state, DASM_MAXSECTION);
  dasm_setupglobal(&state, global_labels, GLOB__MAX);
  dasm_setup(&state, actionlist);
  prologue(Dst);
  for (int i = 0; i < opcodesLength; i++) {
    unsigned char opcode = opcodes[i];
    char second = (opcode & OPCODE_MASK_SECOND) == OPCODE_MASK_SECOND;
    opcode &= 0x7F;
    switch (opcode) {
    case OPCODE_MATRIX_MUL_MATRIX:
      matrix_mul_matrix(&state, second); break;
    case OPCODE_MATRIX_TRANSPOSE:
      matrix_transpose(&state, second); break;
    case OPCODE_MATRIX_IDENTITY:
      matrix_identity(&state); break;
    case OPCODE_MATRIX_ROTATEX:
      matrix_rotateX(&state, second); break;
    case OPCODE_MATRIX_ROTATEY:
      matrix_rotateY(&state, second); break;
    case OPCODE_MATRIX_ROTATEZ:
      matrix_rotateZ(&state, second); break;
    case OPCODE_MATRIX_TRANSLATE:
      matrix_translate(&state, second); break;
    case OPCODE_MATRIX_SCALE:
      matrix_scale(&state, second); break;
    case OPCODE_MATRIX_INVERT:
      matrix_invert(&state, second); break;
    case OPCODE_VECTOR_NEGATE:
      vector_negate(&state); break;
    case OPCODE_STORE:
      store(&state, second); break;
    case OPCODE_LOAD:
      load(&state, second); break;
    case OPCODE_COPY:
      copy(&state, second); break;
    case OPCODE_COPY_MEM:
      copy_mem(&state); break;
    default:
      break;
    }
  }
  epilogue(Dst);
  status = dasm_link(&state, codeSize);
  code = VirtualAlloc(0, *codeSize, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
  status = dasm_encode(&state, code);
  VirtualProtect(code, *codeSize, PAGE_EXECUTE, &dwOld);
  FlushInstructionCache(GetCurrentProcess(), code, *codeSize);
  dasm_free(&state);
  return (batch_func_t) code;
}

int free_code(void* code, size_t codeSize) {
  return VirtualFree(code, 0, MEM_RELEASE);
}