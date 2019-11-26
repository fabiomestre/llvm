; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc < %s -mtriple=i686-unknown-unknown -mattr=-sse -O3 | FileCheck %s --check-prefixes=CHECK,X86
; RUN: llc < %s -mtriple=x86_64-unknown-unknown -mattr=-sse -O3 | FileCheck %s --check-prefixes=CHECK,X64

declare x86_fp80 @llvm.experimental.constrained.fadd.x86_fp80(x86_fp80, x86_fp80, metadata, metadata)
declare x86_fp80 @llvm.experimental.constrained.fsub.x86_fp80(x86_fp80, x86_fp80, metadata, metadata)
declare x86_fp80 @llvm.experimental.constrained.fmul.x86_fp80(x86_fp80, x86_fp80, metadata, metadata)
declare x86_fp80 @llvm.experimental.constrained.fdiv.x86_fp80(x86_fp80, x86_fp80, metadata, metadata)
declare x86_fp80 @llvm.experimental.constrained.fpext.x86_fp80.f32(float, metadata)
declare x86_fp80 @llvm.experimental.constrained.fpext.x86_fp80.f64(double, metadata)
declare x86_fp80 @llvm.experimental.constrained.sqrt.x86_fp80(x86_fp80, metadata, metadata)
declare float @llvm.experimental.constrained.fptrunc.x86_fp80.f32(x86_fp80, metadata, metadata)
declare double @llvm.experimental.constrained.fptrunc.x86_fp80.f64(x86_fp80, metadata, metadata)

define x86_fp80 @fadd_fp80(x86_fp80 %a, x86_fp80 %b) nounwind strictfp {
; X86-LABEL: fadd_fp80:
; X86:       # %bb.0:
; X86-NEXT:    fldt {{[0-9]+}}(%esp)
; X86-NEXT:    fldt {{[0-9]+}}(%esp)
; X86-NEXT:    faddp %st, %st(1)
; X86-NEXT:    retl
;
; X64-LABEL: fadd_fp80:
; X64:       # %bb.0:
; X64-NEXT:    fldt {{[0-9]+}}(%rsp)
; X64-NEXT:    fldt {{[0-9]+}}(%rsp)
; X64-NEXT:    faddp %st, %st(1)
; X64-NEXT:    retq
  %ret = call x86_fp80 @llvm.experimental.constrained.fadd.x86_fp80(x86_fp80 %a, x86_fp80 %b,
                                                                    metadata !"round.dynamic",
                                                                    metadata !"fpexcept.strict") #0
  ret x86_fp80 %ret
}

define x86_fp80 @fsub_fp80(x86_fp80 %a, x86_fp80 %b) nounwind strictfp {
; X86-LABEL: fsub_fp80:
; X86:       # %bb.0:
; X86-NEXT:    fldt {{[0-9]+}}(%esp)
; X86-NEXT:    fldt {{[0-9]+}}(%esp)
; X86-NEXT:    fsubp %st, %st(1)
; X86-NEXT:    retl
;
; X64-LABEL: fsub_fp80:
; X64:       # %bb.0:
; X64-NEXT:    fldt {{[0-9]+}}(%rsp)
; X64-NEXT:    fldt {{[0-9]+}}(%rsp)
; X64-NEXT:    fsubp %st, %st(1)
; X64-NEXT:    retq
  %ret = call x86_fp80 @llvm.experimental.constrained.fsub.x86_fp80(x86_fp80 %a, x86_fp80 %b,
                                                                    metadata !"round.dynamic",
                                                                    metadata !"fpexcept.strict") #0
  ret x86_fp80 %ret
}

define x86_fp80 @fmul_fp80(x86_fp80 %a, x86_fp80 %b) nounwind strictfp {
; X86-LABEL: fmul_fp80:
; X86:       # %bb.0:
; X86-NEXT:    fldt {{[0-9]+}}(%esp)
; X86-NEXT:    fldt {{[0-9]+}}(%esp)
; X86-NEXT:    fmulp %st, %st(1)
; X86-NEXT:    retl
;
; X64-LABEL: fmul_fp80:
; X64:       # %bb.0:
; X64-NEXT:    fldt {{[0-9]+}}(%rsp)
; X64-NEXT:    fldt {{[0-9]+}}(%rsp)
; X64-NEXT:    fmulp %st, %st(1)
; X64-NEXT:    retq
  %ret = call x86_fp80 @llvm.experimental.constrained.fmul.x86_fp80(x86_fp80 %a, x86_fp80 %b,
                                                                    metadata !"round.dynamic",
                                                                    metadata !"fpexcept.strict") #0
  ret x86_fp80 %ret
}

define x86_fp80 @fdiv_fp80(x86_fp80 %a, x86_fp80 %b) nounwind strictfp {
; X86-LABEL: fdiv_fp80:
; X86:       # %bb.0:
; X86-NEXT:    fldt {{[0-9]+}}(%esp)
; X86-NEXT:    fldt {{[0-9]+}}(%esp)
; X86-NEXT:    fdivp %st, %st(1)
; X86-NEXT:    retl
;
; X64-LABEL: fdiv_fp80:
; X64:       # %bb.0:
; X64-NEXT:    fldt {{[0-9]+}}(%rsp)
; X64-NEXT:    fldt {{[0-9]+}}(%rsp)
; X64-NEXT:    fdivp %st, %st(1)
; X64-NEXT:    retq
  %ret = call x86_fp80 @llvm.experimental.constrained.fdiv.x86_fp80(x86_fp80 %a, x86_fp80 %b,
                                                                    metadata !"round.dynamic",
                                                                    metadata !"fpexcept.strict") #0
  ret x86_fp80 %ret
}

define void @fpext_f32_to_fp80(float* %val, x86_fp80* %ret) nounwind strictfp {
; X86-LABEL: fpext_f32_to_fp80:
; X86:       # %bb.0:
; X86-NEXT:    movl {{[0-9]+}}(%esp), %eax
; X86-NEXT:    movl {{[0-9]+}}(%esp), %ecx
; X86-NEXT:    flds (%ecx)
; X86-NEXT:    fstpt (%eax)
; X86-NEXT:    retl
;
; X64-LABEL: fpext_f32_to_fp80:
; X64:       # %bb.0:
; X64-NEXT:    flds (%rdi)
; X64-NEXT:    fstpt (%rsi)
; X64-NEXT:    retq
  %1 = load float, float* %val, align 4
  %res = call x86_fp80 @llvm.experimental.constrained.fpext.x86_fp80.f32(float %1,
                                                                         metadata !"fpexcept.strict") #0
  store x86_fp80 %res, x86_fp80* %ret, align 16
  ret void
}

define void @fpext_f64_to_fp80(double* %val, x86_fp80* %ret) nounwind strictfp {
; X86-LABEL: fpext_f64_to_fp80:
; X86:       # %bb.0:
; X86-NEXT:    movl {{[0-9]+}}(%esp), %eax
; X86-NEXT:    movl {{[0-9]+}}(%esp), %ecx
; X86-NEXT:    fldl (%ecx)
; X86-NEXT:    fstpt (%eax)
; X86-NEXT:    retl
;
; X64-LABEL: fpext_f64_to_fp80:
; X64:       # %bb.0:
; X64-NEXT:    fldl (%rdi)
; X64-NEXT:    fstpt (%rsi)
; X64-NEXT:    retq
  %1 = load double, double* %val, align 8
  %res = call x86_fp80 @llvm.experimental.constrained.fpext.x86_fp80.f64(double %1,
                                                                         metadata !"fpexcept.strict") #0
  store x86_fp80 %res, x86_fp80* %ret, align 16
  ret void
}

define void @fptrunc_fp80_to_f32(x86_fp80* %val, float *%ret) nounwind strictfp {
; X86-LABEL: fptrunc_fp80_to_f32:
; X86:       # %bb.0:
; X86-NEXT:    pushl %eax
; X86-NEXT:    movl {{[0-9]+}}(%esp), %eax
; X86-NEXT:    movl {{[0-9]+}}(%esp), %ecx
; X86-NEXT:    fldt (%ecx)
; X86-NEXT:    fstps (%esp)
; X86-NEXT:    flds (%esp)
; X86-NEXT:    fstps (%eax)
; X86-NEXT:    popl %eax
; X86-NEXT:    retl
;
; X64-LABEL: fptrunc_fp80_to_f32:
; X64:       # %bb.0:
; X64-NEXT:    fldt (%rdi)
; X64-NEXT:    fstps -{{[0-9]+}}(%rsp)
; X64-NEXT:    flds -{{[0-9]+}}(%rsp)
; X64-NEXT:    fstps (%rsi)
; X64-NEXT:    retq
  %1 = load x86_fp80, x86_fp80* %val, align 16
  %res = call float @llvm.experimental.constrained.fptrunc.x86_fp80.f32(x86_fp80 %1,
                                                                        metadata !"round.dynamic",
                                                                        metadata !"fpexcept.strict") #0
  store float %res, float* %ret, align 4
  ret void
}

define void @fptrunc_fp80_to_f64(x86_fp80* %val, double* %ret) nounwind strictfp {
; X86-LABEL: fptrunc_fp80_to_f64:
; X86:       # %bb.0:
; X86-NEXT:    pushl %ebp
; X86-NEXT:    movl %esp, %ebp
; X86-NEXT:    andl $-8, %esp
; X86-NEXT:    subl $8, %esp
; X86-NEXT:    movl 12(%ebp), %eax
; X86-NEXT:    movl 8(%ebp), %ecx
; X86-NEXT:    fldt (%ecx)
; X86-NEXT:    fstpl (%esp)
; X86-NEXT:    fldl (%esp)
; X86-NEXT:    fstpl (%eax)
; X86-NEXT:    movl %ebp, %esp
; X86-NEXT:    popl %ebp
; X86-NEXT:    retl
;
; X64-LABEL: fptrunc_fp80_to_f64:
; X64:       # %bb.0:
; X64-NEXT:    fldt (%rdi)
; X64-NEXT:    fstpl -{{[0-9]+}}(%rsp)
; X64-NEXT:    fldl -{{[0-9]+}}(%rsp)
; X64-NEXT:    fstpl (%rsi)
; X64-NEXT:    retq
  %1 = load x86_fp80, x86_fp80* %val, align 16
  %res = call double @llvm.experimental.constrained.fptrunc.x86_fp80.f64(x86_fp80 %1,
                                                                         metadata !"round.dynamic",
                                                                         metadata !"fpexcept.strict") #0
  store double %res, double* %ret, align 8
  ret void
}

define void @fsqrt_fp80(x86_fp80* %a) nounwind strictfp {
; X86-LABEL: fsqrt_fp80:
; X86:       # %bb.0:
; X86-NEXT:    movl {{[0-9]+}}(%esp), %eax
; X86-NEXT:    fldt (%eax)
; X86-NEXT:    fsqrt
; X86-NEXT:    fstpt (%eax)
; X86-NEXT:    retl
;
; X64-LABEL: fsqrt_fp80:
; X64:       # %bb.0:
; X64-NEXT:    fldt (%rdi)
; X64-NEXT:    fsqrt
; X64-NEXT:    fstpt (%rdi)
; X64-NEXT:    retq
  %1 = load x86_fp80, x86_fp80* %a, align 16
  %res = call x86_fp80 @llvm.experimental.constrained.sqrt.x86_fp80(x86_fp80 %1,
                                                                    metadata !"round.dynamic",
                                                                    metadata !"fpexcept.strict") #0
  store x86_fp80 %res, x86_fp80* %a, align 16
  ret void
}

attributes #0 = { strictfp }
