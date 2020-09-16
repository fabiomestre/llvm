// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// RUN: %clang_cc1 -triple thumbv8.1m.main-none-none-eabi -target-feature +mve.fp -mfloat-abi hard -fallow-half-arguments-and-returns -disable-O0-optnone -S -emit-llvm -o - %s | opt -S -mem2reg | FileCheck %s
// RUN: %clang_cc1 -triple thumbv8.1m.main-none-none-eabi -target-feature +mve.fp -mfloat-abi hard -fallow-half-arguments-and-returns -disable-O0-optnone -DPOLYMORPHIC -S -emit-llvm -o - %s | opt -S -mem2reg | FileCheck %s

#include <arm_mve.h>

// CHECK-LABEL: @test_vminnmq_f16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <8 x half> @llvm.minnum.v8f16(<8 x half> [[A:%.*]], <8 x half> [[B:%.*]])
// CHECK-NEXT:    ret <8 x half> [[TMP0]]
//
float16x8_t test_vminnmq_f16(float16x8_t a, float16x8_t b)
{
#ifdef POLYMORPHIC
    return vminnmq(a, b);
#else /* POLYMORPHIC */
    return vminnmq_f16(a, b);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vminnmq_f32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <4 x float> @llvm.minnum.v4f32(<4 x float> [[A:%.*]], <4 x float> [[B:%.*]])
// CHECK-NEXT:    ret <4 x float> [[TMP0]]
//
float32x4_t test_vminnmq_f32(float32x4_t a, float32x4_t b)
{
#ifdef POLYMORPHIC
    return vminnmq(a, b);
#else /* POLYMORPHIC */
    return vminnmq_f32(a, b);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vminnmq_m_f16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = zext i16 [[P:%.*]] to i32
// CHECK-NEXT:    [[TMP1:%.*]] = call <8 x i1> @llvm.arm.mve.pred.i2v.v8i1(i32 [[TMP0]])
// CHECK-NEXT:    [[TMP2:%.*]] = call <8 x half> @llvm.arm.mve.min.predicated.v8f16.v8i1(<8 x half> [[A:%.*]], <8 x half> [[B:%.*]], i32 0, <8 x i1> [[TMP1]], <8 x half> [[INACTIVE:%.*]])
// CHECK-NEXT:    ret <8 x half> [[TMP2]]
//
float16x8_t test_vminnmq_m_f16(float16x8_t inactive, float16x8_t a, float16x8_t b, mve_pred16_t p)
{
#ifdef POLYMORPHIC
    return vminnmq_m(inactive, a, b, p);
#else /* POLYMORPHIC */
    return vminnmq_m_f16(inactive, a, b, p);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vminnmq_m_f32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = zext i16 [[P:%.*]] to i32
// CHECK-NEXT:    [[TMP1:%.*]] = call <4 x i1> @llvm.arm.mve.pred.i2v.v4i1(i32 [[TMP0]])
// CHECK-NEXT:    [[TMP2:%.*]] = call <4 x float> @llvm.arm.mve.min.predicated.v4f32.v4i1(<4 x float> [[A:%.*]], <4 x float> [[B:%.*]], i32 0, <4 x i1> [[TMP1]], <4 x float> [[INACTIVE:%.*]])
// CHECK-NEXT:    ret <4 x float> [[TMP2]]
//
float32x4_t test_vminnmq_m_f32(float32x4_t inactive, float32x4_t a, float32x4_t b, mve_pred16_t p)
{
#ifdef POLYMORPHIC
    return vminnmq_m(inactive, a, b, p);
#else /* POLYMORPHIC */
    return vminnmq_m_f32(inactive, a, b, p);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vminnmq_x_f16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = zext i16 [[P:%.*]] to i32
// CHECK-NEXT:    [[TMP1:%.*]] = call <8 x i1> @llvm.arm.mve.pred.i2v.v8i1(i32 [[TMP0]])
// CHECK-NEXT:    [[TMP2:%.*]] = call <8 x half> @llvm.arm.mve.min.predicated.v8f16.v8i1(<8 x half> [[A:%.*]], <8 x half> [[B:%.*]], i32 0, <8 x i1> [[TMP1]], <8 x half> undef)
// CHECK-NEXT:    ret <8 x half> [[TMP2]]
//
float16x8_t test_vminnmq_x_f16(float16x8_t a, float16x8_t b, mve_pred16_t p)
{
#ifdef POLYMORPHIC
    return vminnmq_x(a, b, p);
#else /* POLYMORPHIC */
    return vminnmq_x_f16(a, b, p);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vminnmq_x_f32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = zext i16 [[P:%.*]] to i32
// CHECK-NEXT:    [[TMP1:%.*]] = call <4 x i1> @llvm.arm.mve.pred.i2v.v4i1(i32 [[TMP0]])
// CHECK-NEXT:    [[TMP2:%.*]] = call <4 x float> @llvm.arm.mve.min.predicated.v4f32.v4i1(<4 x float> [[A:%.*]], <4 x float> [[B:%.*]], i32 0, <4 x i1> [[TMP1]], <4 x float> undef)
// CHECK-NEXT:    ret <4 x float> [[TMP2]]
//
float32x4_t test_vminnmq_x_f32(float32x4_t a, float32x4_t b, mve_pred16_t p)
{
#ifdef POLYMORPHIC
    return vminnmq_x(a, b, p);
#else /* POLYMORPHIC */
    return vminnmq_x_f32(a, b, p);
#endif /* POLYMORPHIC */
}
