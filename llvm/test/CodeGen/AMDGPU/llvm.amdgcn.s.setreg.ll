; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc -march=amdgcn -mcpu=verde -verify-machineinstrs < %s | FileCheck -check-prefixes=GCN,SI %s
; RUN: llc -march=amdgcn -mcpu=tonga -verify-machineinstrs < %s | FileCheck -check-prefixes=GCN,VI %s
; RUN: llc -march=amdgcn -mcpu=gfx900 -verify-machineinstrs < %s | FileCheck -check-prefixes=GCN,GFX9 %s
; FIXME: This copy of the test is a subset of the -global-isel version, since the VGPR case doesn't work.

; Set FP32 fp_round to round to zero
define amdgpu_kernel void @test_setreg_f32_round_mode_rtz() {
; GCN-LABEL: test_setreg_f32_round_mode_rtz:
; GCN:       ; %bb.0:
; GCN-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 3), 3
; GCN-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 4097, i32 3)
  ret void
}

; Set FP64/FP16 fp_round to round to zero
define amdgpu_kernel void @test_setreg_f64_round_mode_rtz() {
; GCN-LABEL: test_setreg_f64_round_mode_rtz:
; GCN:       ; %bb.0:
; GCN-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 2, 3), 3
; GCN-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 4225, i32 3)
  ret void
}

; Set all fp_round to round to zero
define amdgpu_kernel void @test_setreg_all_round_mode_rtz() {
; GCN-LABEL: test_setreg_all_round_mode_rtz:
; GCN:       ; %bb.0:
; GCN-NEXT:    s_setreg_imm32_b32 hwreg(HW_REG_MODE, 0, 5), 7
; GCN-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 8193, i32 7)
  ret void
}

; Set FP32 fp_round to dynamic mode
define amdgpu_cs void @test_setreg_roundingmode_var(i32 inreg %var.mode) {
; GCN-LABEL: test_setreg_roundingmode_var:
; GCN:       ; %bb.0:
; GCN-NEXT:    s_setreg_b32 hwreg(HW_REG_MODE, 0, 3), s0
; GCN-NEXT:    s_endpgm
  call void @llvm.amdgcn.s.setreg(i32 4097, i32 %var.mode)
  ret void
}

; FIXME: Broken for DAG
; define void @test_setreg_roundingmode_var_vgpr(i32 %var.mode) {
;   call void @llvm.amdgcn.s.setreg(i32 4097, i32 %var.mode)
;   ret void
; }

declare void @llvm.amdgcn.s.setreg(i32 immarg, i32) #0

attributes #0 = { nounwind }
