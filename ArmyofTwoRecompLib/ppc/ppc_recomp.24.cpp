#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8232E1A0"))) PPC_WEAK_FUNC(sub_8232E1A0);
PPC_FUNC_IMPL(__imp__sub_8232E1A0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8232E1B0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8232e1b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232E1B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E1C8"))) PPC_WEAK_FUNC(sub_8232E1C8);
PPC_FUNC_IMPL(__imp__sub_8232E1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e1ec
	if (!ctx.cr6.eq) goto loc_8232E1EC;
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8232E1EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E1F8"))) PPC_WEAK_FUNC(sub_8232E1F8);
PPC_FUNC_IMPL(__imp__sub_8232E1F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E208"))) PPC_WEAK_FUNC(sub_8232E208);
PPC_FUNC_IMPL(__imp__sub_8232E208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E218"))) PPC_WEAK_FUNC(sub_8232E218);
PPC_FUNC_IMPL(__imp__sub_8232E218) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E220"))) PPC_WEAK_FUNC(sub_8232E220);
PPC_FUNC_IMPL(__imp__sub_8232E220) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm r3,r11,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E230"))) PPC_WEAK_FUNC(sub_8232E230);
PPC_FUNC_IMPL(__imp__sub_8232E230) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// rlwinm r3,r11,4,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E240"))) PPC_WEAK_FUNC(sub_8232E240);
PPC_FUNC_IMPL(__imp__sub_8232E240) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 + 116;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E268"))) PPC_WEAK_FUNC(sub_8232E268);
PPC_FUNC_IMPL(__imp__sub_8232E268) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,132
	ctx.r11.s64 = ctx.r4.s64 + 132;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E290"))) PPC_WEAK_FUNC(sub_8232E290);
PPC_FUNC_IMPL(__imp__sub_8232E290) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,148
	ctx.r11.s64 = ctx.r4.s64 + 148;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E2A8"))) PPC_WEAK_FUNC(sub_8232E2A8);
PPC_FUNC_IMPL(__imp__sub_8232E2A8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,156
	ctx.r11.s64 = ctx.r4.s64 + 156;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8232E2B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8232e2b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232E2B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E2D0"))) PPC_WEAK_FUNC(sub_8232E2D0);
PPC_FUNC_IMPL(__imp__sub_8232E2D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E2E0"))) PPC_WEAK_FUNC(sub_8232E2E0);
PPC_FUNC_IMPL(__imp__sub_8232E2E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E2F0"))) PPC_WEAK_FUNC(sub_8232E2F0);
PPC_FUNC_IMPL(__imp__sub_8232E2F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 196);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// rlwinm r3,r11,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E308"))) PPC_WEAK_FUNC(sub_8232E308);
PPC_FUNC_IMPL(__imp__sub_8232E308) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E310"))) PPC_WEAK_FUNC(sub_8232E310);
PPC_FUNC_IMPL(__imp__sub_8232E310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,204(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E318"))) PPC_WEAK_FUNC(sub_8232E318);
PPC_FUNC_IMPL(__imp__sub_8232E318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E328"))) PPC_WEAK_FUNC(sub_8232E328);
PPC_FUNC_IMPL(__imp__sub_8232E328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E338"))) PPC_WEAK_FUNC(sub_8232E338);
PPC_FUNC_IMPL(__imp__sub_8232E338) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E348"))) PPC_WEAK_FUNC(sub_8232E348);
PPC_FUNC_IMPL(__imp__sub_8232E348) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,220
	ctx.r11.s64 = ctx.r4.s64 + 220;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E360"))) PPC_WEAK_FUNC(sub_8232E360);
PPC_FUNC_IMPL(__imp__sub_8232E360) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,252(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E368"))) PPC_WEAK_FUNC(sub_8232E368);
PPC_FUNC_IMPL(__imp__sub_8232E368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm r3,r11,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E378"))) PPC_WEAK_FUNC(sub_8232E378);
PPC_FUNC_IMPL(__imp__sub_8232E378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// rlwinm r3,r11,4,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E388"))) PPC_WEAK_FUNC(sub_8232E388);
PPC_FUNC_IMPL(__imp__sub_8232E388) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E390"))) PPC_WEAK_FUNC(sub_8232E390);
PPC_FUNC_IMPL(__imp__sub_8232E390) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm r3,r11,4,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E3A0"))) PPC_WEAK_FUNC(sub_8232E3A0);
PPC_FUNC_IMPL(__imp__sub_8232E3A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm r3,r11,5,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E3B0"))) PPC_WEAK_FUNC(sub_8232E3B0);
PPC_FUNC_IMPL(__imp__sub_8232E3B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E3C0"))) PPC_WEAK_FUNC(sub_8232E3C0);
PPC_FUNC_IMPL(__imp__sub_8232E3C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm r3,r11,6,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E3D0"))) PPC_WEAK_FUNC(sub_8232E3D0);
PPC_FUNC_IMPL(__imp__sub_8232E3D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E3D8"))) PPC_WEAK_FUNC(sub_8232E3D8);
PPC_FUNC_IMPL(__imp__sub_8232E3D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm r3,r11,7,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E3E8"))) PPC_WEAK_FUNC(sub_8232E3E8);
PPC_FUNC_IMPL(__imp__sub_8232E3E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm r3,r11,10,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E3F8"))) PPC_WEAK_FUNC(sub_8232E3F8);
PPC_FUNC_IMPL(__imp__sub_8232E3F8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E408"))) PPC_WEAK_FUNC(sub_8232E408);
PPC_FUNC_IMPL(__imp__sub_8232E408) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// rlwinm r3,r11,9,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E418"))) PPC_WEAK_FUNC(sub_8232E418);
PPC_FUNC_IMPL(__imp__sub_8232E418) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E420"))) PPC_WEAK_FUNC(sub_8232E420);
PPC_FUNC_IMPL(__imp__sub_8232E420) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E430"))) PPC_WEAK_FUNC(sub_8232E430);
PPC_FUNC_IMPL(__imp__sub_8232E430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E440"))) PPC_WEAK_FUNC(sub_8232E440);
PPC_FUNC_IMPL(__imp__sub_8232E440) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E450"))) PPC_WEAK_FUNC(sub_8232E450);
PPC_FUNC_IMPL(__imp__sub_8232E450) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// rlwinm r3,r11,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E460"))) PPC_WEAK_FUNC(sub_8232E460);
PPC_FUNC_IMPL(__imp__sub_8232E460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,240(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E468"))) PPC_WEAK_FUNC(sub_8232E468);
PPC_FUNC_IMPL(__imp__sub_8232E468) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,244(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E470"))) PPC_WEAK_FUNC(sub_8232E470);
PPC_FUNC_IMPL(__imp__sub_8232E470) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,248(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E478"))) PPC_WEAK_FUNC(sub_8232E478);
PPC_FUNC_IMPL(__imp__sub_8232E478) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,260(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E480"))) PPC_WEAK_FUNC(sub_8232E480);
PPC_FUNC_IMPL(__imp__sub_8232E480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E490"))) PPC_WEAK_FUNC(sub_8232E490);
PPC_FUNC_IMPL(__imp__sub_8232E490) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// rlwinm r3,r11,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E4A0"))) PPC_WEAK_FUNC(sub_8232E4A0);
PPC_FUNC_IMPL(__imp__sub_8232E4A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E4A8"))) PPC_WEAK_FUNC(sub_8232E4A8);
PPC_FUNC_IMPL(__imp__sub_8232E4A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// rlwinm r3,r11,5,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E4B8"))) PPC_WEAK_FUNC(sub_8232E4B8);
PPC_FUNC_IMPL(__imp__sub_8232E4B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E4C8"))) PPC_WEAK_FUNC(sub_8232E4C8);
PPC_FUNC_IMPL(__imp__sub_8232E4C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// rlwinm r3,r11,4,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E4D8"))) PPC_WEAK_FUNC(sub_8232E4D8);
PPC_FUNC_IMPL(__imp__sub_8232E4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8232e528
	if (ctx.cr6.eq) goto loc_8232E528;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,372(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 372);
	// bl 0x8243e6d8
	ctx.lr = 0x8232E504;
	sub_8243E6D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232e528
	if (ctx.cr6.eq) goto loc_8232E528;
	// lwz r3,868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e528
	if (ctx.cr6.eq) goto loc_8232E528;
	// bl 0x82899fd0
	ctx.lr = 0x8232E51C;
	sub_82899FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8232e52c
	if (ctx.cr6.eq) goto loc_8232E52C;
loc_8232E528:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232E52C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E540"))) PPC_WEAK_FUNC(sub_8232E540);
PPC_FUNC_IMPL(__imp__sub_8232E540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8232e600
	if (ctx.cr6.eq) goto loc_8232E600;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,372(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 372);
	// bl 0x8243e6d8
	ctx.lr = 0x8232E574;
	sub_8243E6D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232e600
	if (ctx.cr6.eq) goto loc_8232E600;
	// lwz r3,868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e600
	if (ctx.cr6.eq) goto loc_8232E600;
	// bl 0x82899fd0
	ctx.lr = 0x8232E58C;
	sub_82899FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232e600
	if (!ctx.cr6.eq) goto loc_8232E600;
	// lwz r11,3184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232e600
	if (ctx.cr6.eq) goto loc_8232E600;
	// lfs f13,236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82413a90
	ctx.lr = 0x8232E5DC;
	sub_82413A90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x8232e604
	goto loc_8232E604;
loc_8232E600:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232E604:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E620"))) PPC_WEAK_FUNC(sub_8232E620);
PPC_FUNC_IMPL(__imp__sub_8232E620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// rlwinm r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232e650
	if (ctx.cr6.eq) goto loc_8232E650;
	// lwz r3,352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// bl 0x8232e540
	ctx.lr = 0x8232E644;
	sub_8232E540(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8232e654
	if (!ctx.cr6.eq) goto loc_8232E654;
loc_8232E650:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232E654:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E668"))) PPC_WEAK_FUNC(sub_8232E668);
PPC_FUNC_IMPL(__imp__sub_8232E668) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E670"))) PPC_WEAK_FUNC(sub_8232E670);
PPC_FUNC_IMPL(__imp__sub_8232E670) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,268
	ctx.r11.s64 = ctx.r4.s64 + 268;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E688"))) PPC_WEAK_FUNC(sub_8232E688);
PPC_FUNC_IMPL(__imp__sub_8232E688) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E698"))) PPC_WEAK_FUNC(sub_8232E698);
PPC_FUNC_IMPL(__imp__sub_8232E698) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E6A8"))) PPC_WEAK_FUNC(sub_8232E6A8);
PPC_FUNC_IMPL(__imp__sub_8232E6A8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,280
	ctx.r11.s64 = ctx.r4.s64 + 280;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E6C0"))) PPC_WEAK_FUNC(sub_8232E6C0);
PPC_FUNC_IMPL(__imp__sub_8232E6C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E6D0"))) PPC_WEAK_FUNC(sub_8232E6D0);
PPC_FUNC_IMPL(__imp__sub_8232E6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e71c
	if (ctx.cr6.eq) goto loc_8232E71C;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,1836(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1836);
	// bl 0x8243e6d8
	ctx.lr = 0x8232E700;
	sub_8243E6D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232e71c
	if (!ctx.cr6.eq) goto loc_8232E71C;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e720
	if (!ctx.cr6.eq) goto loc_8232E720;
loc_8232E71C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232E720:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E738"))) PPC_WEAK_FUNC(sub_8232E738);
PPC_FUNC_IMPL(__imp__sub_8232E738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e784
	if (ctx.cr6.eq) goto loc_8232E784;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,1836(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1836);
	// bl 0x8243e6d8
	ctx.lr = 0x8232E768;
	sub_8243E6D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232e784
	if (ctx.cr6.eq) goto loc_8232E784;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232e788
	if (ctx.cr6.eq) goto loc_8232E788;
loc_8232E784:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232E788:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E7A0"))) PPC_WEAK_FUNC(sub_8232E7A0);
PPC_FUNC_IMPL(__imp__sub_8232E7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E7C0"))) PPC_WEAK_FUNC(sub_8232E7C0);
PPC_FUNC_IMPL(__imp__sub_8232E7C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,45
	ctx.r9.s64 = 45;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E7E0"))) PPC_WEAK_FUNC(sub_8232E7E0);
PPC_FUNC_IMPL(__imp__sub_8232E7E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E7E8"))) PPC_WEAK_FUNC(sub_8232E7E8);
PPC_FUNC_IMPL(__imp__sub_8232E7E8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3080(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3080);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E800"))) PPC_WEAK_FUNC(sub_8232E800);
PPC_FUNC_IMPL(__imp__sub_8232E800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2024);
	// lwz r11,3072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3072);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// rlwinm r3,r11,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E818"))) PPC_WEAK_FUNC(sub_8232E818);
PPC_FUNC_IMPL(__imp__sub_8232E818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,3080(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3080);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8232e854
	if (ctx.cr6.eq) goto loc_8232E854;
	// lwz r11,148(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// lwz r11,972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 972);
	// lwz r11,456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e854
	if (!ctx.cr6.eq) goto loc_8232E854;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
loc_8232E854:
	// addi r11,r4,3084
	ctx.r11.s64 = ctx.r4.s64 + 3084;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E878"))) PPC_WEAK_FUNC(sub_8232E878);
PPC_FUNC_IMPL(__imp__sub_8232E878) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,2024(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2024);
	// lwz r3,3048(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3048);
	// b 0x823da2d0
	sub_823DA2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232E888"))) PPC_WEAK_FUNC(sub_8232E888);
PPC_FUNC_IMPL(__imp__sub_8232E888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82e28f14
	ctx.lr = 0x8232E89C;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// std r7,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f2
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f2.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r8,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// lfs f31,-3136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3136);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82e28a70
	ctx.lr = 0x8232E8D0;
	sub_82E28A70(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,-28552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28552);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfd f29,-28560(r11)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + -28560);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-13884(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13884);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82e29d58
	ctx.lr = 0x8232E904;
	sub_82E29D58(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f1,f28,f31
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// lfs f31,-28508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28508);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f28,-3144(r11)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3144);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmul f0,f0,f28
	ctx.f0.f64 = ctx.f0.f64 * ctx.f28.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// li r12,4
	ctx.r12.s64 = 4;
	// stfiwx f0,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
	// bl 0x82e28a70
	ctx.lr = 0x8232E938;
	sub_82E28A70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-21248(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -21248);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82e27f28
	ctx.lr = 0x8232E964;
	sub_82E27F28(ctx, base);
	// lfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-12256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12256);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82e29d58
	ctx.lr = 0x8232E98C;
	sub_82E29D58(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmul f0,f0,f28
	ctx.f0.f64 = ctx.f0.f64 * ctx.f28.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r31
	PPC_STORE_U32(ctx.r31.u32, ctx.f0.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82e28f60
	ctx.lr = 0x8232E9B0;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E9C0"))) PPC_WEAK_FUNC(sub_8232E9C0);
PPC_FUNC_IMPL(__imp__sub_8232E9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x8232E9C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// ld r4,1564(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1564);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8246bd50
	ctx.lr = 0x8232E9F0;
	sub_8246BD50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,-7
	ctx.r7.s64 = -7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EA10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,2024(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2024);
	// lwz r3,3056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3056);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823cd0d8
	ctx.lr = 0x8232EA20;
	sub_823CD0D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232ea74
	if (!ctx.cr6.eq) goto loc_8232EA74;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8232ea74
	if (ctx.cr6.eq) goto loc_8232EA74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e4dc0
	ctx.lr = 0x8232EA38;
	sub_827E4DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232ea74
	if (!ctx.cr6.eq) goto loc_8232EA74;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8232ea74
	if (ctx.cr6.eq) goto loc_8232EA74;
	// lwz r11,3072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3072);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ea74
	if (ctx.cr6.eq) goto loc_8232EA74;
	// lwz r11,3072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3072);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ea78
	if (!ctx.cr6.eq) goto loc_8232EA78;
loc_8232EA74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232EA78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232EA80"))) PPC_WEAK_FUNC(sub_8232EA80);
PPC_FUNC_IMPL(__imp__sub_8232EA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r4,3944(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3944);
	// lwz r11,344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EAB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232eac4
	if (ctx.cr6.eq) goto loc_8232EAC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82385288
	ctx.lr = 0x8232EAC4;
	sub_82385288(ctx, base);
loc_8232EAC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EAD8"))) PPC_WEAK_FUNC(sub_8232EAD8);
PPC_FUNC_IMPL(__imp__sub_8232EAD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EAE0"))) PPC_WEAK_FUNC(sub_8232EAE0);
PPC_FUNC_IMPL(__imp__sub_8232EAE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EAF0"))) PPC_WEAK_FUNC(sub_8232EAF0);
PPC_FUNC_IMPL(__imp__sub_8232EAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,307
	ctx.r4.s64 = 307;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8232eb2c
	if (ctx.cr6.eq) goto loc_8232EB2C;
	// bl 0x82751920
	ctx.lr = 0x8232EB2C;
	sub_82751920(ctx, base);
loc_8232EB2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EB40"))) PPC_WEAK_FUNC(sub_8232EB40);
PPC_FUNC_IMPL(__imp__sub_8232EB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,307
	ctx.r4.s64 = 307;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EB70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8232eb80
	if (!ctx.cr6.eq) goto loc_8232EB80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8232EB80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EB98"))) PPC_WEAK_FUNC(sub_8232EB98);
PPC_FUNC_IMPL(__imp__sub_8232EB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,307
	ctx.r4.s64 = 307;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EBCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8232ebe0
	if (!ctx.cr6.eq) goto loc_8232EBE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8232EBE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EBF8"))) PPC_WEAK_FUNC(sub_8232EBF8);
PPC_FUNC_IMPL(__imp__sub_8232EBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x8232EC00;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EC24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8232ec5c
	if (!ctx.cr6.eq) goto loc_8232EC5C;
	// li r10,255
	ctx.r10.s64 = 255;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,316(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 316);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8232EC5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232EC5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232EC68"))) PPC_WEAK_FUNC(sub_8232EC68);
PPC_FUNC_IMPL(__imp__sub_8232EC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x8232EC70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,255
	ctx.r10.s64 = 255;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// slw r29,r10,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
loc_8232EC88:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232ECA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8232ecd0
	if (!ctx.cr6.eq) goto loc_8232ECD0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ecd0
	if (ctx.cr6.eq) goto loc_8232ECD0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// ble cr6,0x8232ec88
	if (!ctx.cr6.gt) goto loc_8232EC88;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
loc_8232ECD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232ECE0"))) PPC_WEAK_FUNC(sub_8232ECE0);
PPC_FUNC_IMPL(__imp__sub_8232ECE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x8232ECE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8232ECF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232ED14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232ed68
	if (!ctx.cr6.eq) goto loc_8232ED68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232ED38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232ed68
	if (!ctx.cr6.eq) goto loc_8232ED68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232ED5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232ed68
	if (!ctx.cr6.eq) goto loc_8232ED68;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8232ED68:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// ble cr6,0x8232ecf8
	if (!ctx.cr6.gt) goto loc_8232ECF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232ED80"))) PPC_WEAK_FUNC(sub_8232ED80);
PPC_FUNC_IMPL(__imp__sub_8232ED80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x8232ED88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EDB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8232ede0
	if (!ctx.cr6.eq) goto loc_8232EDE0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232EDE0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8232edf4
	if (!ctx.cr6.lt) goto loc_8232EDF4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232EDF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232EE00"))) PPC_WEAK_FUNC(sub_8232EE00);
PPC_FUNC_IMPL(__imp__sub_8232EE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,396
	ctx.r4.s64 = 396;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EE34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8232ee60
	if (!ctx.cr6.eq) goto loc_8232EE60;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,396
	ctx.r4.s64 = 396;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232EE60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EE78"))) PPC_WEAK_FUNC(sub_8232EE78);
PPC_FUNC_IMPL(__imp__sub_8232EE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,396
	ctx.r4.s64 = 396;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EEB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8232ef00
	if (!ctx.cr6.eq) goto loc_8232EF00;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,396
	ctx.r4.s64 = 396;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r8,316(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 316);
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwimi r11,r30,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232EF00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232EF00:
	// li r11,5
	ctx.r11.s64 = 5;
	// subfc r11,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EF28"))) PPC_WEAK_FUNC(sub_8232EF28);
PPC_FUNC_IMPL(__imp__sub_8232EF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,396
	ctx.r4.s64 = 396;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EF60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8232efb0
	if (!ctx.cr6.eq) goto loc_8232EFB0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,396
	ctx.r4.s64 = 396;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r8,316(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 316);
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwimi r5,r9,0,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8232EFB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232EFB0:
	// li r11,25
	ctx.r11.s64 = 25;
	// subfc r11,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EFD8"))) PPC_WEAK_FUNC(sub_8232EFD8);
PPC_FUNC_IMPL(__imp__sub_8232EFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// bne cr6,0x8232f000
	if (!ctx.cr6.eq) goto loc_8232F000;
	// li r30,19
	ctx.r30.s64 = 19;
loc_8232F000:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,397
	ctx.r4.s64 = 397;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232F024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8232f058
	if (!ctx.cr6.eq) goto loc_8232F058;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,397
	ctx.r4.s64 = 397;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,316(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// or r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232F058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232F058:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// beq cr6,0x8232f08c
	if (ctx.cr6.eq) goto loc_8232F08C;
loc_8232F078:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232f078
	if (!ctx.cr6.eq) goto loc_8232F078;
loc_8232F08C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F0A8"))) PPC_WEAK_FUNC(sub_8232F0A8);
PPC_FUNC_IMPL(__imp__sub_8232F0A8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 100, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bne cr6,0x8232f0d0
	if (!ctx.cr6.eq) goto loc_8232F0D0;
	// li r9,9
	ctx.r9.s64 = 9;
	// b 0x8232f0e0
	goto loc_8232F0E0;
loc_8232F0D0:
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// beq cr6,0x8232f424
	if (ctx.cr6.eq) goto loc_8232F424;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bne cr6,0x8232f78c
	if (!ctx.cr6.eq) goto loc_8232F78C;
loc_8232F0E0:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,199
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 199, ctx.xer);
	// bgt cr6,0x8232f78c
	if (ctx.cr6.gt) goto loc_8232F78C;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-3836
	ctx.r12.s64 = ctx.r12.s64 + -3836;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8232F788;
	case 1:
		goto loc_8232F780;
	case 2:
		goto loc_8232F77C;
	case 3:
		goto loc_8232F778;
	case 4:
		goto loc_8232F774;
	case 5:
		goto loc_8232F770;
	case 6:
		goto loc_8232F76C;
	case 7:
		goto loc_8232F78C;
	case 8:
		goto loc_8232F78C;
	case 9:
		goto loc_8232F78C;
	case 10:
		goto loc_8232F784;
	case 11:
		goto loc_8232F78C;
	case 12:
		goto loc_8232F78C;
	case 13:
		goto loc_8232F78C;
	case 14:
		goto loc_8232F78C;
	case 15:
		goto loc_8232F78C;
	case 16:
		goto loc_8232F78C;
	case 17:
		goto loc_8232F78C;
	case 18:
		goto loc_8232F78C;
	case 19:
		goto loc_8232F78C;
	case 20:
		goto loc_8232F78C;
	case 21:
		goto loc_8232F78C;
	case 22:
		goto loc_8232F78C;
	case 23:
		goto loc_8232F78C;
	case 24:
		goto loc_8232F78C;
	case 25:
		goto loc_8232F78C;
	case 26:
		goto loc_8232F78C;
	case 27:
		goto loc_8232F78C;
	case 28:
		goto loc_8232F78C;
	case 29:
		goto loc_8232F78C;
	case 30:
		goto loc_8232F78C;
	case 31:
		goto loc_8232F78C;
	case 32:
		goto loc_8232F78C;
	case 33:
		goto loc_8232F78C;
	case 34:
		goto loc_8232F78C;
	case 35:
		goto loc_8232F78C;
	case 36:
		goto loc_8232F78C;
	case 37:
		goto loc_8232F78C;
	case 38:
		goto loc_8232F78C;
	case 39:
		goto loc_8232F78C;
	case 40:
		goto loc_8232F78C;
	case 41:
		goto loc_8232F78C;
	case 42:
		goto loc_8232F78C;
	case 43:
		goto loc_8232F78C;
	case 44:
		goto loc_8232F78C;
	case 45:
		goto loc_8232F78C;
	case 46:
		goto loc_8232F78C;
	case 47:
		goto loc_8232F78C;
	case 48:
		goto loc_8232F78C;
	case 49:
		goto loc_8232F78C;
	case 50:
		goto loc_8232F78C;
	case 51:
		goto loc_8232F78C;
	case 52:
		goto loc_8232F78C;
	case 53:
		goto loc_8232F78C;
	case 54:
		goto loc_8232F78C;
	case 55:
		goto loc_8232F78C;
	case 56:
		goto loc_8232F78C;
	case 57:
		goto loc_8232F78C;
	case 58:
		goto loc_8232F78C;
	case 59:
		goto loc_8232F78C;
	case 60:
		goto loc_8232F78C;
	case 61:
		goto loc_8232F78C;
	case 62:
		goto loc_8232F78C;
	case 63:
		goto loc_8232F78C;
	case 64:
		goto loc_8232F78C;
	case 65:
		goto loc_8232F78C;
	case 66:
		goto loc_8232F78C;
	case 67:
		goto loc_8232F78C;
	case 68:
		goto loc_8232F78C;
	case 69:
		goto loc_8232F78C;
	case 70:
		goto loc_8232F78C;
	case 71:
		goto loc_8232F78C;
	case 72:
		goto loc_8232F78C;
	case 73:
		goto loc_8232F78C;
	case 74:
		goto loc_8232F78C;
	case 75:
		goto loc_8232F78C;
	case 76:
		goto loc_8232F78C;
	case 77:
		goto loc_8232F78C;
	case 78:
		goto loc_8232F78C;
	case 79:
		goto loc_8232F78C;
	case 80:
		goto loc_8232F78C;
	case 81:
		goto loc_8232F78C;
	case 82:
		goto loc_8232F78C;
	case 83:
		goto loc_8232F78C;
	case 84:
		goto loc_8232F78C;
	case 85:
		goto loc_8232F78C;
	case 86:
		goto loc_8232F78C;
	case 87:
		goto loc_8232F78C;
	case 88:
		goto loc_8232F78C;
	case 89:
		goto loc_8232F78C;
	case 90:
		goto loc_8232F78C;
	case 91:
		goto loc_8232F78C;
	case 92:
		goto loc_8232F78C;
	case 93:
		goto loc_8232F78C;
	case 94:
		goto loc_8232F78C;
	case 95:
		goto loc_8232F78C;
	case 96:
		goto loc_8232F78C;
	case 97:
		goto loc_8232F78C;
	case 98:
		goto loc_8232F78C;
	case 99:
		goto loc_8232F78C;
	case 100:
		goto loc_8232F78C;
	case 101:
		goto loc_8232F78C;
	case 102:
		goto loc_8232F78C;
	case 103:
		goto loc_8232F78C;
	case 104:
		goto loc_8232F78C;
	case 105:
		goto loc_8232F78C;
	case 106:
		goto loc_8232F78C;
	case 107:
		goto loc_8232F78C;
	case 108:
		goto loc_8232F78C;
	case 109:
		goto loc_8232F78C;
	case 110:
		goto loc_8232F78C;
	case 111:
		goto loc_8232F78C;
	case 112:
		goto loc_8232F78C;
	case 113:
		goto loc_8232F78C;
	case 114:
		goto loc_8232F78C;
	case 115:
		goto loc_8232F78C;
	case 116:
		goto loc_8232F78C;
	case 117:
		goto loc_8232F78C;
	case 118:
		goto loc_8232F78C;
	case 119:
		goto loc_8232F78C;
	case 120:
		goto loc_8232F78C;
	case 121:
		goto loc_8232F78C;
	case 122:
		goto loc_8232F78C;
	case 123:
		goto loc_8232F78C;
	case 124:
		goto loc_8232F78C;
	case 125:
		goto loc_8232F78C;
	case 126:
		goto loc_8232F78C;
	case 127:
		goto loc_8232F78C;
	case 128:
		goto loc_8232F78C;
	case 129:
		goto loc_8232F78C;
	case 130:
		goto loc_8232F78C;
	case 131:
		goto loc_8232F78C;
	case 132:
		goto loc_8232F78C;
	case 133:
		goto loc_8232F78C;
	case 134:
		goto loc_8232F78C;
	case 135:
		goto loc_8232F78C;
	case 136:
		goto loc_8232F78C;
	case 137:
		goto loc_8232F78C;
	case 138:
		goto loc_8232F78C;
	case 139:
		goto loc_8232F78C;
	case 140:
		goto loc_8232F78C;
	case 141:
		goto loc_8232F78C;
	case 142:
		goto loc_8232F78C;
	case 143:
		goto loc_8232F78C;
	case 144:
		goto loc_8232F78C;
	case 145:
		goto loc_8232F78C;
	case 146:
		goto loc_8232F78C;
	case 147:
		goto loc_8232F78C;
	case 148:
		goto loc_8232F78C;
	case 149:
		goto loc_8232F78C;
	case 150:
		goto loc_8232F78C;
	case 151:
		goto loc_8232F78C;
	case 152:
		goto loc_8232F78C;
	case 153:
		goto loc_8232F78C;
	case 154:
		goto loc_8232F78C;
	case 155:
		goto loc_8232F78C;
	case 156:
		goto loc_8232F78C;
	case 157:
		goto loc_8232F78C;
	case 158:
		goto loc_8232F78C;
	case 159:
		goto loc_8232F78C;
	case 160:
		goto loc_8232F78C;
	case 161:
		goto loc_8232F78C;
	case 162:
		goto loc_8232F78C;
	case 163:
		goto loc_8232F78C;
	case 164:
		goto loc_8232F78C;
	case 165:
		goto loc_8232F78C;
	case 166:
		goto loc_8232F78C;
	case 167:
		goto loc_8232F78C;
	case 168:
		goto loc_8232F78C;
	case 169:
		goto loc_8232F78C;
	case 170:
		goto loc_8232F78C;
	case 171:
		goto loc_8232F78C;
	case 172:
		goto loc_8232F78C;
	case 173:
		goto loc_8232F78C;
	case 174:
		goto loc_8232F78C;
	case 175:
		goto loc_8232F78C;
	case 176:
		goto loc_8232F78C;
	case 177:
		goto loc_8232F78C;
	case 178:
		goto loc_8232F78C;
	case 179:
		goto loc_8232F78C;
	case 180:
		goto loc_8232F78C;
	case 181:
		goto loc_8232F78C;
	case 182:
		goto loc_8232F78C;
	case 183:
		goto loc_8232F78C;
	case 184:
		goto loc_8232F78C;
	case 185:
		goto loc_8232F78C;
	case 186:
		goto loc_8232F78C;
	case 187:
		goto loc_8232F78C;
	case 188:
		goto loc_8232F78C;
	case 189:
		goto loc_8232F78C;
	case 190:
		goto loc_8232F78C;
	case 191:
		goto loc_8232F78C;
	case 192:
		goto loc_8232F78C;
	case 193:
		goto loc_8232F78C;
	case 194:
		goto loc_8232F78C;
	case 195:
		goto loc_8232F78C;
	case 196:
		goto loc_8232F78C;
	case 197:
		goto loc_8232F78C;
	case 198:
		goto loc_8232F78C;
	case 199:
		goto loc_8232F768;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-2168(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2168);
	// lwz r17,-2176(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2176);
	// lwz r17,-2180(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2180);
	// lwz r17,-2184(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2184);
	// lwz r17,-2188(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2188);
	// lwz r17,-2192(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2192);
	// lwz r17,-2196(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2196);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2172(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2172);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2200(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2200);
loc_8232F424:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,199
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 199, ctx.xer);
	// bgt cr6,0x8232f78c
	if (ctx.cr6.gt) goto loc_8232F78C;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-3000
	ctx.r12.s64 = ctx.r12.s64 + -3000;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8232F788;
	case 1:
		goto loc_8232F784;
	case 2:
		goto loc_8232F780;
	case 3:
		goto loc_8232F77C;
	case 4:
		goto loc_8232F778;
	case 5:
		goto loc_8232F774;
	case 6:
		goto loc_8232F770;
	case 7:
		goto loc_8232F76C;
	case 8:
		goto loc_8232F78C;
	case 9:
		goto loc_8232F78C;
	case 10:
		goto loc_8232F78C;
	case 11:
		goto loc_8232F78C;
	case 12:
		goto loc_8232F78C;
	case 13:
		goto loc_8232F78C;
	case 14:
		goto loc_8232F78C;
	case 15:
		goto loc_8232F78C;
	case 16:
		goto loc_8232F78C;
	case 17:
		goto loc_8232F78C;
	case 18:
		goto loc_8232F78C;
	case 19:
		goto loc_8232F78C;
	case 20:
		goto loc_8232F78C;
	case 21:
		goto loc_8232F78C;
	case 22:
		goto loc_8232F78C;
	case 23:
		goto loc_8232F78C;
	case 24:
		goto loc_8232F78C;
	case 25:
		goto loc_8232F78C;
	case 26:
		goto loc_8232F78C;
	case 27:
		goto loc_8232F78C;
	case 28:
		goto loc_8232F78C;
	case 29:
		goto loc_8232F78C;
	case 30:
		goto loc_8232F78C;
	case 31:
		goto loc_8232F78C;
	case 32:
		goto loc_8232F78C;
	case 33:
		goto loc_8232F78C;
	case 34:
		goto loc_8232F78C;
	case 35:
		goto loc_8232F78C;
	case 36:
		goto loc_8232F78C;
	case 37:
		goto loc_8232F78C;
	case 38:
		goto loc_8232F78C;
	case 39:
		goto loc_8232F78C;
	case 40:
		goto loc_8232F78C;
	case 41:
		goto loc_8232F78C;
	case 42:
		goto loc_8232F78C;
	case 43:
		goto loc_8232F78C;
	case 44:
		goto loc_8232F78C;
	case 45:
		goto loc_8232F78C;
	case 46:
		goto loc_8232F78C;
	case 47:
		goto loc_8232F78C;
	case 48:
		goto loc_8232F78C;
	case 49:
		goto loc_8232F78C;
	case 50:
		goto loc_8232F78C;
	case 51:
		goto loc_8232F78C;
	case 52:
		goto loc_8232F78C;
	case 53:
		goto loc_8232F78C;
	case 54:
		goto loc_8232F78C;
	case 55:
		goto loc_8232F78C;
	case 56:
		goto loc_8232F78C;
	case 57:
		goto loc_8232F78C;
	case 58:
		goto loc_8232F78C;
	case 59:
		goto loc_8232F78C;
	case 60:
		goto loc_8232F78C;
	case 61:
		goto loc_8232F78C;
	case 62:
		goto loc_8232F78C;
	case 63:
		goto loc_8232F78C;
	case 64:
		goto loc_8232F78C;
	case 65:
		goto loc_8232F78C;
	case 66:
		goto loc_8232F78C;
	case 67:
		goto loc_8232F78C;
	case 68:
		goto loc_8232F78C;
	case 69:
		goto loc_8232F78C;
	case 70:
		goto loc_8232F78C;
	case 71:
		goto loc_8232F78C;
	case 72:
		goto loc_8232F78C;
	case 73:
		goto loc_8232F78C;
	case 74:
		goto loc_8232F78C;
	case 75:
		goto loc_8232F78C;
	case 76:
		goto loc_8232F78C;
	case 77:
		goto loc_8232F78C;
	case 78:
		goto loc_8232F78C;
	case 79:
		goto loc_8232F78C;
	case 80:
		goto loc_8232F78C;
	case 81:
		goto loc_8232F78C;
	case 82:
		goto loc_8232F78C;
	case 83:
		goto loc_8232F78C;
	case 84:
		goto loc_8232F78C;
	case 85:
		goto loc_8232F78C;
	case 86:
		goto loc_8232F78C;
	case 87:
		goto loc_8232F78C;
	case 88:
		goto loc_8232F78C;
	case 89:
		goto loc_8232F78C;
	case 90:
		goto loc_8232F78C;
	case 91:
		goto loc_8232F78C;
	case 92:
		goto loc_8232F78C;
	case 93:
		goto loc_8232F78C;
	case 94:
		goto loc_8232F78C;
	case 95:
		goto loc_8232F78C;
	case 96:
		goto loc_8232F78C;
	case 97:
		goto loc_8232F78C;
	case 98:
		goto loc_8232F78C;
	case 99:
		goto loc_8232F78C;
	case 100:
		goto loc_8232F78C;
	case 101:
		goto loc_8232F78C;
	case 102:
		goto loc_8232F78C;
	case 103:
		goto loc_8232F78C;
	case 104:
		goto loc_8232F78C;
	case 105:
		goto loc_8232F78C;
	case 106:
		goto loc_8232F78C;
	case 107:
		goto loc_8232F78C;
	case 108:
		goto loc_8232F78C;
	case 109:
		goto loc_8232F78C;
	case 110:
		goto loc_8232F78C;
	case 111:
		goto loc_8232F78C;
	case 112:
		goto loc_8232F78C;
	case 113:
		goto loc_8232F78C;
	case 114:
		goto loc_8232F78C;
	case 115:
		goto loc_8232F78C;
	case 116:
		goto loc_8232F78C;
	case 117:
		goto loc_8232F78C;
	case 118:
		goto loc_8232F78C;
	case 119:
		goto loc_8232F78C;
	case 120:
		goto loc_8232F78C;
	case 121:
		goto loc_8232F78C;
	case 122:
		goto loc_8232F78C;
	case 123:
		goto loc_8232F78C;
	case 124:
		goto loc_8232F78C;
	case 125:
		goto loc_8232F78C;
	case 126:
		goto loc_8232F78C;
	case 127:
		goto loc_8232F78C;
	case 128:
		goto loc_8232F78C;
	case 129:
		goto loc_8232F78C;
	case 130:
		goto loc_8232F78C;
	case 131:
		goto loc_8232F78C;
	case 132:
		goto loc_8232F78C;
	case 133:
		goto loc_8232F78C;
	case 134:
		goto loc_8232F78C;
	case 135:
		goto loc_8232F78C;
	case 136:
		goto loc_8232F78C;
	case 137:
		goto loc_8232F78C;
	case 138:
		goto loc_8232F78C;
	case 139:
		goto loc_8232F78C;
	case 140:
		goto loc_8232F78C;
	case 141:
		goto loc_8232F78C;
	case 142:
		goto loc_8232F78C;
	case 143:
		goto loc_8232F78C;
	case 144:
		goto loc_8232F78C;
	case 145:
		goto loc_8232F78C;
	case 146:
		goto loc_8232F78C;
	case 147:
		goto loc_8232F78C;
	case 148:
		goto loc_8232F78C;
	case 149:
		goto loc_8232F78C;
	case 150:
		goto loc_8232F78C;
	case 151:
		goto loc_8232F78C;
	case 152:
		goto loc_8232F78C;
	case 153:
		goto loc_8232F78C;
	case 154:
		goto loc_8232F78C;
	case 155:
		goto loc_8232F78C;
	case 156:
		goto loc_8232F78C;
	case 157:
		goto loc_8232F78C;
	case 158:
		goto loc_8232F78C;
	case 159:
		goto loc_8232F78C;
	case 160:
		goto loc_8232F78C;
	case 161:
		goto loc_8232F78C;
	case 162:
		goto loc_8232F78C;
	case 163:
		goto loc_8232F78C;
	case 164:
		goto loc_8232F78C;
	case 165:
		goto loc_8232F78C;
	case 166:
		goto loc_8232F78C;
	case 167:
		goto loc_8232F78C;
	case 168:
		goto loc_8232F78C;
	case 169:
		goto loc_8232F78C;
	case 170:
		goto loc_8232F78C;
	case 171:
		goto loc_8232F78C;
	case 172:
		goto loc_8232F78C;
	case 173:
		goto loc_8232F78C;
	case 174:
		goto loc_8232F78C;
	case 175:
		goto loc_8232F78C;
	case 176:
		goto loc_8232F78C;
	case 177:
		goto loc_8232F78C;
	case 178:
		goto loc_8232F78C;
	case 179:
		goto loc_8232F78C;
	case 180:
		goto loc_8232F78C;
	case 181:
		goto loc_8232F78C;
	case 182:
		goto loc_8232F78C;
	case 183:
		goto loc_8232F78C;
	case 184:
		goto loc_8232F78C;
	case 185:
		goto loc_8232F78C;
	case 186:
		goto loc_8232F78C;
	case 187:
		goto loc_8232F78C;
	case 188:
		goto loc_8232F78C;
	case 189:
		goto loc_8232F78C;
	case 190:
		goto loc_8232F78C;
	case 191:
		goto loc_8232F78C;
	case 192:
		goto loc_8232F78C;
	case 193:
		goto loc_8232F78C;
	case 194:
		goto loc_8232F78C;
	case 195:
		goto loc_8232F78C;
	case 196:
		goto loc_8232F78C;
	case 197:
		goto loc_8232F78C;
	case 198:
		goto loc_8232F78C;
	case 199:
		goto loc_8232F768;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-2168(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2168);
	// lwz r17,-2172(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2172);
	// lwz r17,-2176(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2176);
	// lwz r17,-2180(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2180);
	// lwz r17,-2184(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2184);
	// lwz r17,-2188(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2188);
	// lwz r17,-2192(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2192);
	// lwz r17,-2196(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2196);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2164);
	// lwz r17,-2200(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2200);
loc_8232F768:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8232F76C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232F770:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232F774:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232F778:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232F77C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232F780:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232F784:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232F788:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232F78C:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x8232f7a4
	if (ctx.cr6.eq) goto loc_8232F7A4;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8232F7A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F7C8"))) PPC_WEAK_FUNC(sub_8232F7C8);
PPC_FUNC_IMPL(__imp__sub_8232F7C8) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8232f81c
	if (ctx.cr6.gt) goto loc_8232F81C;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-2060
	ctx.r12.s64 = ctx.r12.s64 + -2060;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8232F818;
	case 1:
		goto loc_8232F814;
	case 2:
		goto loc_8232F81C;
	case 3:
		goto loc_8232F80C;
	case 4:
		goto loc_8232F808;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-2024(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2024);
	// lwz r17,-2028(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2028);
	// lwz r17,-2020(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2020);
	// lwz r17,-2036(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2036);
	// lwz r17,-2040(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2040);
loc_8232F808:
	// li r9,8
	ctx.r9.s64 = 8;
loc_8232F80C:
	// addi r9,r9,9
	ctx.r9.s64 = ctx.r9.s64 + 9;
	// b 0x8232f81c
	goto loc_8232F81C;
loc_8232F814:
	// li r9,11
	ctx.r9.s64 = 11;
loc_8232F818:
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
loc_8232F81C:
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bgt cr6,0x82330034
	if (ctx.cr6.gt) goto loc_82330034;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-1984
	ctx.r12.s64 = ctx.r12.s64 + -1984;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8232FF80;
	case 1:
		goto loc_82330034;
	case 2:
		goto loc_82330034;
	case 3:
		goto loc_82330034;
	case 4:
		goto loc_8232FE40;
	case 5:
		goto loc_8232FD84;
	case 6:
		goto loc_8232FC80;
	case 7:
		goto loc_8232FBD0;
	case 8:
		goto loc_8232F864;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-128(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -128);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,-448(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -448);
	// lwz r17,-636(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -636);
	// lwz r17,-896(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -896);
	// lwz r17,-1072(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1072);
	// lwz r17,-1948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1948);
loc_8232F864:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,199
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 199, ctx.xer);
	// bgt cr6,0x82330034
	if (ctx.cr6.gt) goto loc_82330034;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-1912
	ctx.r12.s64 = ctx.r12.s64 + -1912;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82330030;
	case 1:
		goto loc_8233002C;
	case 2:
		goto loc_82330028;
	case 3:
		goto loc_82330034;
	case 4:
		goto loc_8232FBC8;
	case 5:
		goto loc_8232FBC4;
	case 6:
		goto loc_8232FBC0;
	case 7:
		goto loc_82330034;
	case 8:
		goto loc_8232FBB0;
	case 9:
		goto loc_82330034;
	case 10:
		goto loc_82330034;
	case 11:
		goto loc_82330034;
	case 12:
		goto loc_82330034;
	case 13:
		goto loc_82330034;
	case 14:
		goto loc_82330034;
	case 15:
		goto loc_82330034;
	case 16:
		goto loc_82330034;
	case 17:
		goto loc_82330034;
	case 18:
		goto loc_82330034;
	case 19:
		goto loc_82330034;
	case 20:
		goto loc_82330034;
	case 21:
		goto loc_82330034;
	case 22:
		goto loc_82330034;
	case 23:
		goto loc_82330034;
	case 24:
		goto loc_82330034;
	case 25:
		goto loc_82330034;
	case 26:
		goto loc_82330034;
	case 27:
		goto loc_82330034;
	case 28:
		goto loc_82330034;
	case 29:
		goto loc_82330034;
	case 30:
		goto loc_82330024;
	case 31:
		goto loc_82330034;
	case 32:
		goto loc_82330034;
	case 33:
		goto loc_82330034;
	case 34:
		goto loc_82330034;
	case 35:
		goto loc_82330034;
	case 36:
		goto loc_82330034;
	case 37:
		goto loc_82330034;
	case 38:
		goto loc_82330034;
	case 39:
		goto loc_82330034;
	case 40:
		goto loc_82330034;
	case 41:
		goto loc_82330034;
	case 42:
		goto loc_82330034;
	case 43:
		goto loc_82330034;
	case 44:
		goto loc_82330034;
	case 45:
		goto loc_82330034;
	case 46:
		goto loc_82330034;
	case 47:
		goto loc_82330034;
	case 48:
		goto loc_82330034;
	case 49:
		goto loc_82330034;
	case 50:
		goto loc_82330034;
	case 51:
		goto loc_82330034;
	case 52:
		goto loc_82330034;
	case 53:
		goto loc_82330034;
	case 54:
		goto loc_82330034;
	case 55:
		goto loc_82330034;
	case 56:
		goto loc_82330034;
	case 57:
		goto loc_82330034;
	case 58:
		goto loc_82330034;
	case 59:
		goto loc_82330034;
	case 60:
		goto loc_82330034;
	case 61:
		goto loc_82330034;
	case 62:
		goto loc_82330034;
	case 63:
		goto loc_82330034;
	case 64:
		goto loc_82330034;
	case 65:
		goto loc_82330034;
	case 66:
		goto loc_82330034;
	case 67:
		goto loc_82330034;
	case 68:
		goto loc_82330034;
	case 69:
		goto loc_82330034;
	case 70:
		goto loc_8232FBBC;
	case 71:
		goto loc_8232FBB8;
	case 72:
		goto loc_8232FBB4;
	case 73:
		goto loc_82330034;
	case 74:
		goto loc_82330034;
	case 75:
		goto loc_82330034;
	case 76:
		goto loc_82330034;
	case 77:
		goto loc_82330034;
	case 78:
		goto loc_82330034;
	case 79:
		goto loc_82330034;
	case 80:
		goto loc_82330034;
	case 81:
		goto loc_82330034;
	case 82:
		goto loc_82330034;
	case 83:
		goto loc_82330034;
	case 84:
		goto loc_82330034;
	case 85:
		goto loc_82330034;
	case 86:
		goto loc_82330034;
	case 87:
		goto loc_82330034;
	case 88:
		goto loc_82330034;
	case 89:
		goto loc_82330034;
	case 90:
		goto loc_8232FBAC;
	case 91:
		goto loc_82330034;
	case 92:
		goto loc_82330034;
	case 93:
		goto loc_82330034;
	case 94:
		goto loc_82330034;
	case 95:
		goto loc_82330034;
	case 96:
		goto loc_82330034;
	case 97:
		goto loc_82330034;
	case 98:
		goto loc_82330034;
	case 99:
		goto loc_82330034;
	case 100:
		goto loc_82330034;
	case 101:
		goto loc_82330034;
	case 102:
		goto loc_82330034;
	case 103:
		goto loc_82330034;
	case 104:
		goto loc_82330034;
	case 105:
		goto loc_82330034;
	case 106:
		goto loc_82330034;
	case 107:
		goto loc_82330034;
	case 108:
		goto loc_82330034;
	case 109:
		goto loc_82330034;
	case 110:
		goto loc_82330034;
	case 111:
		goto loc_82330034;
	case 112:
		goto loc_82330034;
	case 113:
		goto loc_82330034;
	case 114:
		goto loc_82330034;
	case 115:
		goto loc_82330034;
	case 116:
		goto loc_82330034;
	case 117:
		goto loc_82330034;
	case 118:
		goto loc_82330034;
	case 119:
		goto loc_82330034;
	case 120:
		goto loc_82330034;
	case 121:
		goto loc_82330034;
	case 122:
		goto loc_82330034;
	case 123:
		goto loc_82330034;
	case 124:
		goto loc_82330034;
	case 125:
		goto loc_82330034;
	case 126:
		goto loc_82330034;
	case 127:
		goto loc_82330034;
	case 128:
		goto loc_82330034;
	case 129:
		goto loc_82330034;
	case 130:
		goto loc_82330034;
	case 131:
		goto loc_82330034;
	case 132:
		goto loc_82330034;
	case 133:
		goto loc_82330034;
	case 134:
		goto loc_82330034;
	case 135:
		goto loc_82330034;
	case 136:
		goto loc_82330034;
	case 137:
		goto loc_82330034;
	case 138:
		goto loc_82330034;
	case 139:
		goto loc_82330034;
	case 140:
		goto loc_82330034;
	case 141:
		goto loc_82330034;
	case 142:
		goto loc_82330034;
	case 143:
		goto loc_82330034;
	case 144:
		goto loc_82330034;
	case 145:
		goto loc_82330034;
	case 146:
		goto loc_82330034;
	case 147:
		goto loc_82330034;
	case 148:
		goto loc_82330034;
	case 149:
		goto loc_82330034;
	case 150:
		goto loc_82330034;
	case 151:
		goto loc_82330034;
	case 152:
		goto loc_82330034;
	case 153:
		goto loc_82330034;
	case 154:
		goto loc_82330034;
	case 155:
		goto loc_82330034;
	case 156:
		goto loc_82330034;
	case 157:
		goto loc_82330034;
	case 158:
		goto loc_82330034;
	case 159:
		goto loc_82330034;
	case 160:
		goto loc_82330034;
	case 161:
		goto loc_82330034;
	case 162:
		goto loc_82330034;
	case 163:
		goto loc_82330034;
	case 164:
		goto loc_82330034;
	case 165:
		goto loc_82330034;
	case 166:
		goto loc_82330034;
	case 167:
		goto loc_82330034;
	case 168:
		goto loc_82330034;
	case 169:
		goto loc_82330034;
	case 170:
		goto loc_82330034;
	case 171:
		goto loc_82330034;
	case 172:
		goto loc_82330034;
	case 173:
		goto loc_82330034;
	case 174:
		goto loc_82330034;
	case 175:
		goto loc_82330034;
	case 176:
		goto loc_82330034;
	case 177:
		goto loc_82330034;
	case 178:
		goto loc_82330034;
	case 179:
		goto loc_82330034;
	case 180:
		goto loc_82330034;
	case 181:
		goto loc_82330034;
	case 182:
		goto loc_82330034;
	case 183:
		goto loc_82330034;
	case 184:
		goto loc_82330034;
	case 185:
		goto loc_82330034;
	case 186:
		goto loc_82330034;
	case 187:
		goto loc_82330034;
	case 188:
		goto loc_82330034;
	case 189:
		goto loc_82330034;
	case 190:
		goto loc_82330034;
	case 191:
		goto loc_82330034;
	case 192:
		goto loc_82330034;
	case 193:
		goto loc_82330034;
	case 194:
		goto loc_82330034;
	case 195:
		goto loc_82330034;
	case 196:
		goto loc_82330034;
	case 197:
		goto loc_82330034;
	case 198:
		goto loc_82330034;
	case 199:
		goto loc_8232FBA8;
	default:
		__builtin_unreachable();
	}
	// lwz r17,48(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// lwz r17,44(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// lwz r17,40(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,-1080(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1080);
	// lwz r17,-1084(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1084);
	// lwz r17,-1088(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1088);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,-1104(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1104);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,36(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 36);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,-1092(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1092);
	// lwz r17,-1096(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1096);
	// lwz r17,-1100(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1100);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,-1108(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1108);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,-1112(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -1112);
loc_8232FBA8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8232FBAC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232FBB0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232FBB4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232FBB8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232FBBC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232FBC0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232FBC4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232FBC8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82330024
	goto loc_82330024;
loc_8232FBD0:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// bgt cr6,0x82330034
	if (ctx.cr6.gt) goto loc_82330034;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-1036
	ctx.r12.s64 = ctx.r12.s64 + -1036;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8233002C;
	case 1:
		goto loc_82330028;
	case 2:
		goto loc_82330024;
	case 3:
		goto loc_8232FC74;
	case 4:
		goto loc_8232FC70;
	case 5:
		goto loc_82330034;
	case 6:
		goto loc_82330034;
	case 7:
		goto loc_82330034;
	case 8:
		goto loc_82330034;
	case 9:
		goto loc_82330034;
	case 10:
		goto loc_82330030;
	case 11:
		goto loc_82330034;
	case 12:
		goto loc_82330034;
	case 13:
		goto loc_82330034;
	case 14:
		goto loc_82330034;
	case 15:
		goto loc_82330034;
	case 16:
		goto loc_82330034;
	case 17:
		goto loc_82330034;
	case 18:
		goto loc_82330034;
	case 19:
		goto loc_82330034;
	case 20:
		goto loc_82330034;
	case 21:
		goto loc_82330034;
	case 22:
		goto loc_82330034;
	case 23:
		goto loc_82330034;
	case 24:
		goto loc_82330034;
	case 25:
		goto loc_82330034;
	case 26:
		goto loc_82330034;
	case 27:
		goto loc_82330034;
	case 28:
		goto loc_82330034;
	case 29:
		goto loc_82330034;
	case 30:
		goto loc_8232FC78;
	default:
		__builtin_unreachable();
	}
	// lwz r17,44(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// lwz r17,40(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// lwz r17,36(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 36);
	// lwz r17,-908(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -908);
	// lwz r17,-912(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -912);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,48(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,-904(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -904);
loc_8232FC70:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8232FC74:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232FC78:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82330024
	goto loc_82330024;
loc_8232FC80:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bgt cr6,0x82330034
	if (ctx.cr6.gt) goto loc_82330034;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-860
	ctx.r12.s64 = ctx.r12.s64 + -860;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82330030;
	case 1:
		goto loc_8233002C;
	case 2:
		goto loc_82330028;
	case 3:
		goto loc_8232FD7C;
	case 4:
		goto loc_8232FD78;
	case 5:
		goto loc_8232FD70;
	case 6:
		goto loc_82330034;
	case 7:
		goto loc_82330034;
	case 8:
		goto loc_82330034;
	case 9:
		goto loc_82330034;
	case 10:
		goto loc_82330034;
	case 11:
		goto loc_82330034;
	case 12:
		goto loc_82330034;
	case 13:
		goto loc_82330034;
	case 14:
		goto loc_82330034;
	case 15:
		goto loc_82330034;
	case 16:
		goto loc_82330034;
	case 17:
		goto loc_82330034;
	case 18:
		goto loc_82330034;
	case 19:
		goto loc_82330034;
	case 20:
		goto loc_82330034;
	case 21:
		goto loc_82330034;
	case 22:
		goto loc_82330034;
	case 23:
		goto loc_82330034;
	case 24:
		goto loc_82330034;
	case 25:
		goto loc_82330034;
	case 26:
		goto loc_82330034;
	case 27:
		goto loc_82330034;
	case 28:
		goto loc_82330034;
	case 29:
		goto loc_82330034;
	case 30:
		goto loc_82330024;
	case 31:
		goto loc_82330034;
	case 32:
		goto loc_82330034;
	case 33:
		goto loc_82330034;
	case 34:
		goto loc_82330034;
	case 35:
		goto loc_82330034;
	case 36:
		goto loc_82330034;
	case 37:
		goto loc_82330034;
	case 38:
		goto loc_82330034;
	case 39:
		goto loc_82330034;
	case 40:
		goto loc_82330034;
	case 41:
		goto loc_82330034;
	case 42:
		goto loc_82330034;
	case 43:
		goto loc_82330034;
	case 44:
		goto loc_82330034;
	case 45:
		goto loc_82330034;
	case 46:
		goto loc_82330034;
	case 47:
		goto loc_82330034;
	case 48:
		goto loc_82330034;
	case 49:
		goto loc_82330034;
	case 50:
		goto loc_8232FD74;
	default:
		__builtin_unreachable();
	}
	// lwz r17,48(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// lwz r17,44(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// lwz r17,40(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// lwz r17,-644(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -644);
	// lwz r17,-648(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -648);
	// lwz r17,-656(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -656);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,36(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 36);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,-652(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -652);
loc_8232FD70:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8232FD74:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232FD78:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232FD7C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82330024
	goto loc_82330024;
loc_8232FD84:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// bgt cr6,0x82330034
	if (ctx.cr6.gt) goto loc_82330034;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-600
	ctx.r12.s64 = ctx.r12.s64 + -600;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8233002C;
	case 1:
		goto loc_82330028;
	case 2:
		goto loc_8232FE34;
	case 3:
		goto loc_8232FE2C;
	case 4:
		goto loc_8232FE28;
	case 5:
		goto loc_8232FE24;
	case 6:
		goto loc_82330034;
	case 7:
		goto loc_82330034;
	case 8:
		goto loc_82330034;
	case 9:
		goto loc_82330034;
	case 10:
		goto loc_82330030;
	case 11:
		goto loc_82330034;
	case 12:
		goto loc_82330034;
	case 13:
		goto loc_82330034;
	case 14:
		goto loc_82330034;
	case 15:
		goto loc_82330034;
	case 16:
		goto loc_82330034;
	case 17:
		goto loc_82330034;
	case 18:
		goto loc_82330034;
	case 19:
		goto loc_82330034;
	case 20:
		goto loc_82330024;
	case 21:
		goto loc_8232FE38;
	case 22:
		goto loc_82330034;
	case 23:
		goto loc_82330034;
	case 24:
		goto loc_82330034;
	case 25:
		goto loc_82330034;
	case 26:
		goto loc_82330034;
	case 27:
		goto loc_82330034;
	case 28:
		goto loc_82330034;
	case 29:
		goto loc_82330034;
	case 30:
		goto loc_8232FE30;
	default:
		__builtin_unreachable();
	}
	// lwz r17,44(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// lwz r17,40(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// lwz r17,-460(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -460);
	// lwz r17,-468(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -468);
	// lwz r17,-472(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -472);
	// lwz r17,-476(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -476);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,48(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,36(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 36);
	// lwz r17,-456(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -456);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,-464(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -464);
loc_8232FE24:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8232FE28:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232FE2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232FE30:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232FE34:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232FE38:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82330024
	goto loc_82330024;
loc_8232FE40:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,70
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 70, ctx.xer);
	// bgt cr6,0x82330034
	if (ctx.cr6.gt) goto loc_82330034;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-412
	ctx.r12.s64 = ctx.r12.s64 + -412;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82330030;
	case 1:
		goto loc_8233002C;
	case 2:
		goto loc_82330028;
	case 3:
		goto loc_82330024;
	case 4:
		goto loc_8232FE38;
	case 5:
		goto loc_8232FE34;
	case 6:
		goto loc_8232FE30;
	case 7:
		goto loc_8232FE28;
	case 8:
		goto loc_8232FE24;
	case 9:
		goto loc_82330034;
	case 10:
		goto loc_82330034;
	case 11:
		goto loc_82330034;
	case 12:
		goto loc_82330034;
	case 13:
		goto loc_82330034;
	case 14:
		goto loc_82330034;
	case 15:
		goto loc_82330034;
	case 16:
		goto loc_82330034;
	case 17:
		goto loc_82330034;
	case 18:
		goto loc_82330034;
	case 19:
		goto loc_82330034;
	case 20:
		goto loc_82330034;
	case 21:
		goto loc_82330034;
	case 22:
		goto loc_82330034;
	case 23:
		goto loc_82330034;
	case 24:
		goto loc_82330034;
	case 25:
		goto loc_82330034;
	case 26:
		goto loc_82330034;
	case 27:
		goto loc_82330034;
	case 28:
		goto loc_82330034;
	case 29:
		goto loc_82330034;
	case 30:
		goto loc_82330034;
	case 31:
		goto loc_82330034;
	case 32:
		goto loc_82330034;
	case 33:
		goto loc_82330034;
	case 34:
		goto loc_82330034;
	case 35:
		goto loc_82330034;
	case 36:
		goto loc_82330034;
	case 37:
		goto loc_82330034;
	case 38:
		goto loc_82330034;
	case 39:
		goto loc_82330034;
	case 40:
		goto loc_82330034;
	case 41:
		goto loc_82330034;
	case 42:
		goto loc_82330034;
	case 43:
		goto loc_82330034;
	case 44:
		goto loc_82330034;
	case 45:
		goto loc_82330034;
	case 46:
		goto loc_82330034;
	case 47:
		goto loc_82330034;
	case 48:
		goto loc_82330034;
	case 49:
		goto loc_82330034;
	case 50:
		goto loc_82330034;
	case 51:
		goto loc_82330034;
	case 52:
		goto loc_82330034;
	case 53:
		goto loc_82330034;
	case 54:
		goto loc_82330034;
	case 55:
		goto loc_82330034;
	case 56:
		goto loc_82330034;
	case 57:
		goto loc_82330034;
	case 58:
		goto loc_82330034;
	case 59:
		goto loc_82330034;
	case 60:
		goto loc_82330034;
	case 61:
		goto loc_82330034;
	case 62:
		goto loc_82330034;
	case 63:
		goto loc_82330034;
	case 64:
		goto loc_82330034;
	case 65:
		goto loc_82330034;
	case 66:
		goto loc_82330034;
	case 67:
		goto loc_82330034;
	case 68:
		goto loc_82330034;
	case 69:
		goto loc_82330034;
	case 70:
		goto loc_8232FE2C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,48(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// lwz r17,44(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// lwz r17,40(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// lwz r17,36(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 36);
	// lwz r17,-456(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -456);
	// lwz r17,-460(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -460);
	// lwz r17,-464(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -464);
	// lwz r17,-472(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -472);
	// lwz r17,-476(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -476);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,-468(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -468);
loc_8232FF80:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// bgt cr6,0x82330034
	if (ctx.cr6.gt) goto loc_82330034;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-92
	ctx.r12.s64 = ctx.r12.s64 + -92;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82330030;
	case 1:
		goto loc_8233002C;
	case 2:
		goto loc_82330028;
	case 3:
		goto loc_82330020;
	case 4:
		goto loc_82330034;
	case 5:
		goto loc_82330034;
	case 6:
		goto loc_82330034;
	case 7:
		goto loc_82330034;
	case 8:
		goto loc_82330034;
	case 9:
		goto loc_82330034;
	case 10:
		goto loc_82330034;
	case 11:
		goto loc_82330034;
	case 12:
		goto loc_82330034;
	case 13:
		goto loc_82330034;
	case 14:
		goto loc_82330034;
	case 15:
		goto loc_82330034;
	case 16:
		goto loc_82330034;
	case 17:
		goto loc_82330034;
	case 18:
		goto loc_82330034;
	case 19:
		goto loc_82330034;
	case 20:
		goto loc_82330034;
	case 21:
		goto loc_82330034;
	case 22:
		goto loc_82330034;
	case 23:
		goto loc_82330034;
	case 24:
		goto loc_82330034;
	case 25:
		goto loc_82330034;
	case 26:
		goto loc_82330034;
	case 27:
		goto loc_82330034;
	case 28:
		goto loc_82330034;
	case 29:
		goto loc_82330034;
	case 30:
		goto loc_82330024;
	default:
		__builtin_unreachable();
	}
	// lwz r17,48(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// lwz r17,44(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// lwz r17,40(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 40);
	// lwz r17,32(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,52(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r17,36(r19)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r19.u32 + 36);
loc_82330020:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82330024:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82330028:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8233002C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82330030:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82330034:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// blt cr6,0x82330074
	if (ctx.cr6.lt) goto loc_82330074;
	// bne cr6,0x8233005c
	if (!ctx.cr6.eq) goto loc_8233005C;
	// cmpwi cr6,r5,100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 100, ctx.xer);
	// beq cr6,0x82330070
	if (ctx.cr6.eq) goto loc_82330070;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_8233005C:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82330070:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
loc_82330074:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8233008c
	if (!ctx.cr6.eq) goto loc_8233008C;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8233008C:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x823300a4
	if (!ctx.cr6.eq) goto loc_823300A4;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// oris r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 | 786432;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823300A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823300C0"))) PPC_WEAK_FUNC(sub_823300C0);
PPC_FUNC_IMPL(__imp__sub_823300C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827fba20
	sub_827FBA20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823300C8"))) PPC_WEAK_FUNC(sub_823300C8);
PPC_FUNC_IMPL(__imp__sub_823300C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x826ed240
	sub_826ED240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823300D8"))) PPC_WEAK_FUNC(sub_823300D8);
PPC_FUNC_IMPL(__imp__sub_823300D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823300E0"))) PPC_WEAK_FUNC(sub_823300E0);
PPC_FUNC_IMPL(__imp__sub_823300E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2024);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233015c
	if (ctx.cr6.eq) goto loc_8233015C;
	// lwz r11,3184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233015c
	if (ctx.cr6.eq) goto loc_8233015C;
	// lwz r11,2024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2024);
	// lwz r3,3184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3184);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 876);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233015c
	if (ctx.cr6.eq) goto loc_8233015C;
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233015c
	if (ctx.cr6.eq) goto loc_8233015C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 812);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82330160
	if (!ctx.cr6.eq) goto loc_82330160;
loc_8233015C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82330160:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330178"))) PPC_WEAK_FUNC(sub_82330178);
PPC_FUNC_IMPL(__imp__sub_82330178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330180"))) PPC_WEAK_FUNC(sub_82330180);
PPC_FUNC_IMPL(__imp__sub_82330180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r4.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r5,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r5.u64);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// std r6,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r6.u64);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// std r7,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r7.u64);
	// bl 0x8241f468
	ctx.lr = 0x823301B0;
	sub_8241F468(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241f4a8
	ctx.lr = 0x823301BC;
	sub_8241F4A8(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f9,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f8,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f0,f10,f0,f6
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmsubs f4,f10,f9,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 - ctx.f4.f64));
	// fmsubs f3,f8,f9,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f3.f64));
	// fmadds f5,f11,f13,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fnmsubs f0,f13,f7,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f7.f64 - ctx.f0.f64)));
	// fmadds f6,f8,f13,f4
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fnmsubs f4,f10,f13,f3
	ctx.f4.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f3.f64)));
	// fmadds f9,f7,f9,f5
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f0,f8,f12,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmadds f13,f12,f7,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f6.f64));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fnmsubs f13,f11,f12,f4
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f12.f64 - ctx.f4.f64)));
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fnmsubs f13,f10,f12,f9
	ctx.f13.f64 = double(float(-(ctx.f10.f64 * ctx.f12.f64 - ctx.f9.f64)));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x8242a0a0
	ctx.lr = 0x82330244;
	sub_8242A0A0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8241f4a8
	ctx.lr = 0x8233027C;
	sub_8241F4A8(ctx, base);
	// lfs f12,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f5,f12,f13
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f0,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f0,f13,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmsubs f5,f10,f9,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 - ctx.f5.f64));
	// fmadds f6,f8,f9,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f5,f0,f11,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fnmsubs f6,f10,f7,f6
	ctx.f6.f64 = double(float(-(ctx.f10.f64 * ctx.f7.f64 - ctx.f6.f64)));
	// stfs f6,192(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmadds f6,f8,f7,f5
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f5.f64));
	// stfs f6,196(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmuls f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmadds f13,f10,f13,f6
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmsubs f9,f0,f9,f5
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f5.f64));
	// fnmsubs f13,f8,f11,f13
	ctx.f13.f64 = double(float(-(ctx.f8.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// fnmsubs f11,f10,f11,f9
	ctx.f11.f64 = double(float(-(ctx.f10.f64 * ctx.f11.f64 - ctx.f9.f64)));
	// fmadds f0,f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f13.f64));
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fnmsubs f0,f12,f7,f11
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f7.f64 - ctx.f11.f64)));
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x8242a0a0
	ctx.lr = 0x823302F8;
	sub_8242A0A0(ctx, base);
	// lfs f13,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330358"))) PPC_WEAK_FUNC(sub_82330358);
PPC_FUNC_IMPL(__imp__sub_82330358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// lfs f0,2900(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2900);
	ctx.f0.f64 = double(temp.f32);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// lfs f13,2904(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2904);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f12,2908(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2908);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,2900(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2900, temp.u32);
	// stfs f13,2904(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2904, temp.u32);
	// stfs f12,2908(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2908, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330398"))) PPC_WEAK_FUNC(sub_82330398);
PPC_FUNC_IMPL(__imp__sub_82330398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// lwz r10,3016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3016);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823303b8
	if (ctx.cr6.eq) goto loc_823303B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823303B8:
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// stb r4,3012(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3012, ctx.r4.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-13892(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r10,r9,31,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 31) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// lwz r9,32(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// stw r10,3016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3016, ctx.r10.u32);
	// stw r9,3024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3024, ctx.r9.u32);
	// stw r8,3028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3028, ctx.r8.u32);
	// stfs f1,3020(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3020, temp.u32);
	// lwz r10,3016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3016);
	// stfs f0,3032(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3032, temp.u32);
	// rlwimi r10,r6,29,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 29) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r10,3016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3016, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330400"))) PPC_WEAK_FUNC(sub_82330400);
PPC_FUNC_IMPL(__imp__sub_82330400) {
	PPC_FUNC_PROLOGUE();
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r11,3024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3024);
	// lwz r10,24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82330438
	if (!ctx.cr6.eq) goto loc_82330438;
	// lwz r11,3028(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3028);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82330438
	if (!ctx.cr6.eq) goto loc_82330438;
	// lwz r11,3016(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3016);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82330438:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330440"))) PPC_WEAK_FUNC(sub_82330440);
PPC_FUNC_IMPL(__imp__sub_82330440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,3024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3024);
	// lwz r9,24(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82330468
	if (!ctx.cr6.eq) goto loc_82330468;
	// lwz r10,3028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3028);
	// lwz r9,28(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82330470
	if (ctx.cr6.eq) goto loc_82330470;
loc_82330468:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82330470:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r9,3016(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3016);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-13896(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stfs f0,3020(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3020, temp.u32);
	// stb r8,3012(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3012, ctx.r8.u8);
	// stw r10,3016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3016, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330498"))) PPC_WEAK_FUNC(sub_82330498);
PPC_FUNC_IMPL(__imp__sub_82330498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3016(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3016);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823304A8"))) PPC_WEAK_FUNC(sub_823304A8);
PPC_FUNC_IMPL(__imp__sub_823304A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3100);
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823304cc
	if (ctx.cr6.eq) goto loc_823304CC;
	// lwz r11,3016(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3016);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_823304CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823304D8"))) PPC_WEAK_FUNC(sub_823304D8);
PPC_FUNC_IMPL(__imp__sub_823304D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3016(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3016);
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,3016(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3016, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823304E8"))) PPC_WEAK_FUNC(sub_823304E8);
PPC_FUNC_IMPL(__imp__sub_823304E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3016(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3016);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330500
	if (ctx.cr6.eq) goto loc_82330500;
	// lbz r3,3012(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3012);
	// blr 
	return;
loc_82330500:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330508"))) PPC_WEAK_FUNC(sub_82330508);
PPC_FUNC_IMPL(__imp__sub_82330508) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330510"))) PPC_WEAK_FUNC(sub_82330510);
PPC_FUNC_IMPL(__imp__sub_82330510) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330518"))) PPC_WEAK_FUNC(sub_82330518);
PPC_FUNC_IMPL(__imp__sub_82330518) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330520"))) PPC_WEAK_FUNC(sub_82330520);
PPC_FUNC_IMPL(__imp__sub_82330520) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330528"))) PPC_WEAK_FUNC(sub_82330528);
PPC_FUNC_IMPL(__imp__sub_82330528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lwz r3,5928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5928);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330538"))) PPC_WEAK_FUNC(sub_82330538);
PPC_FUNC_IMPL(__imp__sub_82330538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82330540;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823eaf28
	ctx.lr = 0x8233054C;
	sub_823EAF28(ctx, base);
	// lis r10,27594
	ctx.r10.s64 = 1808400384;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,6899
	ctx.r9.u64 = ctx.r10.u64 | 6899;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// ld r4,3296(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3296);
	// mulhw r10,r11,r9
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r10,r10,19
	ctx.r10.s64 = ctx.r10.s64 * 19;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8246bd50
	ctx.lr = 0x82330594;
	sub_8246BD50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,-7
	ctx.r7.s64 = -7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823305B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823305C0"))) PPC_WEAK_FUNC(sub_823305C0);
PPC_FUNC_IMPL(__imp__sub_823305C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x823305C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,22412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22412);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,21884
	ctx.r4.s64 = ctx.r11.s64 + 21884;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823305F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82330624
	if (ctx.cr6.eq) goto loc_82330624;
	// lwz r11,3128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3128);
	// addi r10,r30,783
	ctx.r10.s64 = ctx.r30.s64 + 783;
	// li r3,1
	ctx.r3.s64 = 1;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r11.u32);
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
loc_82330624:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330630"))) PPC_WEAK_FUNC(sub_82330630);
PPC_FUNC_IMPL(__imp__sub_82330630) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8233063C:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8233063c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233063C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330658"))) PPC_WEAK_FUNC(sub_82330658);
PPC_FUNC_IMPL(__imp__sub_82330658) {
	PPC_FUNC_PROLOGUE();
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330660"))) PPC_WEAK_FUNC(sub_82330660);
PPC_FUNC_IMPL(__imp__sub_82330660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a186e0
	ctx.lr = 0x82330678;
	sub_82A186E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a0cfc0
	ctx.lr = 0x82330680;
	sub_82A0CFC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330698"))) PPC_WEAK_FUNC(sub_82330698);
PPC_FUNC_IMPL(__imp__sub_82330698) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1652(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1652);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823306A0"))) PPC_WEAK_FUNC(sub_823306A0);
PPC_FUNC_IMPL(__imp__sub_823306A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,196(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// lis r12,12095
	ctx.r12.s64 = 792657920;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r3,30,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x40000000;
	// rlwinm r7,r10,0,2,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// li r8,0
	ctx.r8.s64 = 0;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,28479
	ctx.r12.s64 = 1866399744;
	// lfs f0,-13892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stb r8,32(r4)
	PPC_STORE_U8(ctx.r4.u32 + 32, ctx.r8.u8);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f0,56(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f12,-27600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27600);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stfs f12,16(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f13,-13896(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stfs f13,24(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// oris r10,r10,4288
	ctx.r10.u64 = ctx.r10.u64 | 281018368;
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stw r10,196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 196, ctx.r10.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330720"))) PPC_WEAK_FUNC(sub_82330720);
PPC_FUNC_IMPL(__imp__sub_82330720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82330728;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82330880
	if (ctx.cr6.eq) goto loc_82330880;
	// addi r28,r30,464
	ctx.r28.s64 = ctx.r30.s64 + 464;
	// li r5,200
	ctx.r5.s64 = 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x82330754;
	sub_82E28FD0(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r12,12095
	ctx.r12.s64 = 792657920;
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rlwinm r9,r9,0,2,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// lfs f0,-13892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lis r12,28479
	ctx.r12.s64 = 1866399744;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f12,-27600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27600);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stb r8,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r8.u8);
	// lfs f13,-13896(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,30,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xC0000000;
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// rlwinm r11,r11,29,0,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xE0000000;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// oris r9,r9,4288
	ctx.r9.u64 = ctx.r9.u64 | 281018368;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// stw r9,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,452(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// rlwinm r10,r10,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// or r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r29,452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 452, ctx.r29.u32);
	// beq cr6,0x82330854
	if (ctx.cr6.eq) goto loc_82330854;
	// lwz r27,1048(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	// rlwinm r11,r27,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233081c
	if (!ctx.cr6.eq) goto loc_8233081C;
	// lbz r11,844(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 844);
	// addi r3,r30,848
	ctx.r3.s64 = ctx.r30.s64 + 848;
	// li r5,200
	ctx.r5.s64 = 200;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r11,845(r30)
	PPC_STORE_U8(ctx.r30.u32 + 845, ctx.r11.u8);
	// bl 0x82e28fd0
	ctx.lr = 0x82330814;
	sub_82E28FD0(ctx, base);
	// rlwimi r27,r29,1,0,0
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r29.u32, 1) & 0x80000000) | (ctx.r27.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r27,1048(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1048, ctx.r27.u32);
loc_8233081C:
	// lwz r11,1048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r5,200
	ctx.r5.s64 = 200;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,844(r30)
	PPC_STORE_U8(ctx.r30.u32 + 844, ctx.r10.u8);
	// stw r11,1048(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1048, ctx.r11.u32);
	// bl 0x82e28fd0
	ctx.lr = 0x82330840;
	sub_82E28FD0(ctx, base);
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 452, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
loc_82330854:
	// lwz r11,1048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	// addi r4,r30,848
	ctx.r4.s64 = ctx.r30.s64 + 848;
	// lbz r10,845(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 845);
	// li r5,200
	ctx.r5.s64 = 200;
	// rlwinm r31,r11,0,2,0
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,844(r30)
	PPC_STORE_U8(ctx.r30.u32 + 844, ctx.r10.u8);
	// stw r31,1048(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1048, ctx.r31.u32);
	// bl 0x82e28fd0
	ctx.lr = 0x82330878;
	sub_82E28FD0(ctx, base);
	// rlwimi r29,r31,31,1,1
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x40000000) | (ctx.r29.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r29,452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 452, ctx.r29.u32);
loc_82330880:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330888"))) PPC_WEAK_FUNC(sub_82330888);
PPC_FUNC_IMPL(__imp__sub_82330888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330890"))) PPC_WEAK_FUNC(sub_82330890);
PPC_FUNC_IMPL(__imp__sub_82330890) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bgt cr6,0x823308b0
	if (ctx.cr6.gt) goto loc_823308B0;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// slw r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// blr 
	return;
loc_823308B0:
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// slw r3,r9,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823308D0"))) PPC_WEAK_FUNC(sub_823308D0);
PPC_FUNC_IMPL(__imp__sub_823308D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bgt cr6,0x82330924
	if (ctx.cr6.gt) goto loc_82330924;
	// li r4,1400
	ctx.r4.s64 = 1400;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r12,1651
	ctx.r12.s64 = 108199936;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r12,r12,40160
	ctx.r12.u64 = ctx.r12.u64 | 40160;
	// and r3,r11,r12
	ctx.r3.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82330924:
	// li r4,383
	ctx.r4.s64 = 383;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// andi. r3,r11,231
	ctx.r3.u64 = ctx.r11.u64 & 231;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330948"))) PPC_WEAK_FUNC(sub_82330948);
PPC_FUNC_IMPL(__imp__sub_82330948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// bgt cr6,0x82330978
	if (ctx.cr6.gt) goto loc_82330978;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// slw r31,r10,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82330990
	goto loc_82330990;
loc_82330978:
	// addi r11,r4,-6
	ctx.r11.s64 = ctx.r4.s64 + -6;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// slw r31,r9,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
loc_82330990:
	// bl 0x823308d0
	ctx.lr = 0x82330994;
	sub_823308D0(ctx, base);
	// and r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 & ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823309B8"))) PPC_WEAK_FUNC(sub_823309B8);
PPC_FUNC_IMPL(__imp__sub_823309B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x823309C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x823308d0
	ctx.lr = 0x823309D8;
	sub_823308D0(ctx, base);
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bgt cr6,0x823309f8
	if (ctx.cr6.gt) goto loc_823309F8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82330a10
	goto loc_82330A10;
loc_823309F8:
	// addi r11,r31,-6
	ctx.r11.s64 = ctx.r31.s64 + -6;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
loc_82330A10:
	// or r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 | ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// bgt cr6,0x82330a50
	if (ctx.cr6.gt) goto loc_82330A50;
	// li r4,1400
	ctx.r4.s64 = 1400;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82385510
	ctx.lr = 0x82330A48;
	sub_82385510(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82330A50:
	// li r4,383
	ctx.r4.s64 = 383;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330A68"))) PPC_WEAK_FUNC(sub_82330A68);
PPC_FUNC_IMPL(__imp__sub_82330A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82330A70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,-14884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14884);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330aa0
	if (!ctx.cr6.eq) goto loc_82330AA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82692f10
	ctx.lr = 0x82330A94;
	sub_82692F10(ctx, base);
	// stw r3,-14884(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14884, ctx.r3.u32);
	// bl 0x8265dc80
	ctx.lr = 0x82330A9C;
	sub_8265DC80(ctx, base);
	// lwz r11,-14884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14884);
loc_82330AA0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5932(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5932);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82330ad4
	if (ctx.cr6.eq) goto loc_82330AD4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330ad8
	if (!ctx.cr6.eq) goto loc_82330AD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82692f10
	ctx.lr = 0x82330AC0;
	sub_82692F10(ctx, base);
	// stw r3,-14884(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14884, ctx.r3.u32);
	// bl 0x8265dc80
	ctx.lr = 0x82330AC8;
	sub_8265DC80(ctx, base);
	// lwz r10,5932(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5932);
	// lwz r11,-14884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14884);
	// b 0x82330ad8
	goto loc_82330AD8;
loc_82330AD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82330AD8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330b08
	if (!ctx.cr6.eq) goto loc_82330B08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82330AFC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82330B04;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82330B08:
	// lwz r10,5932(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5932);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330b34
	if (!ctx.cr6.eq) goto loc_82330B34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82330B28;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82330B30;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82330B34:
	// lwz r10,5932(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5932);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82330B40;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82330b8c
	if (ctx.cr6.eq) goto loc_82330B8C;
	// lwz r3,5932(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5932);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82330b74
	if (!ctx.cr6.eq) goto loc_82330B74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82330B64;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82330B6C;
	sub_824455B8(ctx, base);
	// lwz r3,5932(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5932);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82330B74:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82330b8c
	if (!ctx.cr6.eq) goto loc_82330B8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82330B8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330B98"))) PPC_WEAK_FUNC(sub_82330B98);
PPC_FUNC_IMPL(__imp__sub_82330B98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r10,r10,22056
	ctx.r10.s64 = ctx.r10.s64 + 22056;
	// addi r11,r11,27960
	ctx.r11.s64 = ctx.r11.s64 + 27960;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330BB8"))) PPC_WEAK_FUNC(sub_82330BB8);
PPC_FUNC_IMPL(__imp__sub_82330BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-14884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14884);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330bfc
	if (!ctx.cr6.eq) goto loc_82330BFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x82692f10
	ctx.lr = 0x82330BF0;
	sub_82692F10(ctx, base);
	// stw r3,-14884(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14884, ctx.r3.u32);
	// bl 0x8265dc80
	ctx.lr = 0x82330BF8;
	sub_8265DC80(ctx, base);
	// lwz r11,-14884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14884);
loc_82330BFC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330C28"))) PPC_WEAK_FUNC(sub_82330C28);
PPC_FUNC_IMPL(__imp__sub_82330C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82330C30;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82330cb4
	if (ctx.cr6.eq) goto loc_82330CB4;
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82330cb4
	if (ctx.cr6.eq) goto loc_82330CB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r28,172(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r30,r11,-28532
	ctx.r30.s64 = ctx.r11.s64 + -28532;
loc_82330C60:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82330c74
	if (ctx.cr6.eq) goto loc_82330C74;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// b 0x82330c88
	goto loc_82330C88;
loc_82330C74:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8243b750
	ctx.lr = 0x82330C88;
	sub_8243B750(ctx, base);
loc_82330C88:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82330ca8
	if (!ctx.cr6.eq) goto loc_82330CA8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82330cb4
	if (ctx.cr6.eq) goto loc_82330CB4;
loc_82330CA8:
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82330c60
	if (!ctx.cr6.eq) goto loc_82330C60;
loc_82330CB4:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330CC8"))) PPC_WEAK_FUNC(sub_82330CC8);
PPC_FUNC_IMPL(__imp__sub_82330CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82330CD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82330d20
	if (ctx.cr6.lt) goto loc_82330D20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r28,412
	ctx.r4.s64 = ctx.r28.s64 + 412;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82330d24
	goto loc_82330D24;
loc_82330D20:
	// stw r30,412(r28)
	PPC_STORE_U32(ctx.r28.u32 + 412, ctx.r30.u32);
loc_82330D24:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82330d6c
	if (ctx.cr6.lt) goto loc_82330D6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r28,404
	ctx.r4.s64 = ctx.r28.s64 + 404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r28,408
	ctx.r4.s64 = ctx.r28.s64 + 408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82330d74
	goto loc_82330D74;
loc_82330D6C:
	// stw r30,404(r28)
	PPC_STORE_U32(ctx.r28.u32 + 404, ctx.r30.u32);
	// stw r30,408(r28)
	PPC_STORE_U32(ctx.r28.u32 + 408, ctx.r30.u32);
loc_82330D74:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82330da0
	if (ctx.cr6.lt) goto loc_82330DA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r28,416
	ctx.r4.s64 = ctx.r28.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82330da4
	goto loc_82330DA4;
loc_82330DA0:
	// stw r30,416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 416, ctx.r30.u32);
loc_82330DA4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82330dd0
	if (ctx.cr6.lt) goto loc_82330DD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82330dd8
	goto loc_82330DD8;
loc_82330DD0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_82330DD8:
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242a948
	ctx.lr = 0x82330DE4;
	sub_8242A948(ctx, base);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242a948
	ctx.lr = 0x82330DF0;
	sub_8242A948(ctx, base);
	// addi r4,r28,32
	ctx.r4.s64 = ctx.r28.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242a948
	ctx.lr = 0x82330DFC;
	sub_8242A948(ctx, base);
	// addi r4,r28,44
	ctx.r4.s64 = ctx.r28.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242a948
	ctx.lr = 0x82330E08;
	sub_8242A948(ctx, base);
	// addi r4,r28,56
	ctx.r4.s64 = ctx.r28.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242a948
	ctx.lr = 0x82330E14;
	sub_8242A948(ctx, base);
	// addi r29,r28,164
	ctx.r29.s64 = ctx.r28.s64 + 164;
	// addi r30,r28,292
	ctx.r30.s64 = ctx.r28.s64 + 292;
	// li r26,2
	ctx.r26.s64 = 2;
loc_82330E20:
	// li r27,4
	ctx.r27.s64 = 4;
loc_82330E24:
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242a948
	ctx.lr = 0x82330E30;
	sub_8242A948(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82330e80
	if (ctx.cr6.lt) goto loc_82330E80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242a948
	ctx.lr = 0x82330E80;
	sub_8242A948(ctx, base);
loc_82330E80:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82330e24
	if (!ctx.cr6.eq) goto loc_82330E24;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82330e20
	if (!ctx.cr6.eq) goto loc_82330E20;
	// addi r29,r28,324
	ctx.r29.s64 = ctx.r28.s64 + 324;
	// li r30,20
	ctx.r30.s64 = 20;
loc_82330EA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82330ea8
	if (!ctx.cr6.eq) goto loc_82330EA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330EE0"))) PPC_WEAK_FUNC(sub_82330EE0);
PPC_FUNC_IMPL(__imp__sub_82330EE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330EE8"))) PPC_WEAK_FUNC(sub_82330EE8);
PPC_FUNC_IMPL(__imp__sub_82330EE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330EF0"))) PPC_WEAK_FUNC(sub_82330EF0);
PPC_FUNC_IMPL(__imp__sub_82330EF0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,-37
	ctx.r3.s64 = ctx.r3.s64 + -37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330F00"))) PPC_WEAK_FUNC(sub_82330F00);
PPC_FUNC_IMPL(__imp__sub_82330F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82330F08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r10,-15144
	ctx.r30.s64 = ctx.r10.s64 + -15144;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x82330fcc
	if (!ctx.cr6.eq) goto loc_82330FCC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82330FCC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x82330fe0
	if (!ctx.cr6.eq) goto loc_82330FE0;
	// addi r11,r11,-37
	ctx.r11.s64 = ctx.r11.s64 + -37;
loc_82330FE0:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330FF0"))) PPC_WEAK_FUNC(sub_82330FF0);
PPC_FUNC_IMPL(__imp__sub_82330FF0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-10
	ctx.r11.s64 = ctx.r3.s64 + -10;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82331004
	if (!ctx.cr6.gt) goto loc_82331004;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// blt cr6,0x82331008
	if (ctx.cr6.lt) goto loc_82331008;
loc_82331004:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82331008:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,37
	ctx.r3.s64 = ctx.r3.s64 + 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331018"))) PPC_WEAK_FUNC(sub_82331018);
PPC_FUNC_IMPL(__imp__sub_82331018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82331020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r10,-15144
	ctx.r30.s64 = ctx.r10.s64 + -15144;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x823310e4
	if (!ctx.cr6.eq) goto loc_823310E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823310E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823310E4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,-10
	ctx.r10.s64 = ctx.r11.s64 + -10;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// ble cr6,0x823310fc
	if (!ctx.cr6.gt) goto loc_823310FC;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// blt cr6,0x82331100
	if (ctx.cr6.lt) goto loc_82331100;
loc_823310FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82331100:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82331110
	if (!ctx.cr6.eq) goto loc_82331110;
	// addi r11,r11,37
	ctx.r11.s64 = ctx.r11.s64 + 37;
loc_82331110:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331120"))) PPC_WEAK_FUNC(sub_82331120);
PPC_FUNC_IMPL(__imp__sub_82331120) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331130"))) PPC_WEAK_FUNC(sub_82331130);
PPC_FUNC_IMPL(__imp__sub_82331130) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331140"))) PPC_WEAK_FUNC(sub_82331140);
PPC_FUNC_IMPL(__imp__sub_82331140) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331150"))) PPC_WEAK_FUNC(sub_82331150);
PPC_FUNC_IMPL(__imp__sub_82331150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-18396
	ctx.r3.s64 = ctx.r11.s64 + -18396;
	// bl 0x82387fc0
	ctx.lr = 0x82331170;
	sub_82387FC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331190"))) PPC_WEAK_FUNC(sub_82331190);
PPC_FUNC_IMPL(__imp__sub_82331190) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823311A0"))) PPC_WEAK_FUNC(sub_823311A0);
PPC_FUNC_IMPL(__imp__sub_823311A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823311C0"))) PPC_WEAK_FUNC(sub_823311C0);
PPC_FUNC_IMPL(__imp__sub_823311C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x823311C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-18396
	ctx.r3.s64 = ctx.r11.s64 + -18396;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82387fc0
	ctx.lr = 0x823311E8;
	sub_82387FC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331208"))) PPC_WEAK_FUNC(sub_82331208);
PPC_FUNC_IMPL(__imp__sub_82331208) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331218"))) PPC_WEAK_FUNC(sub_82331218);
PPC_FUNC_IMPL(__imp__sub_82331218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82331220;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,-14772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331250
	if (!ctx.cr6.eq) goto loc_82331250;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82693920
	ctx.lr = 0x82331244;
	sub_82693920(ctx, base);
	// stw r3,-14772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14772, ctx.r3.u32);
	// bl 0x826a3eb0
	ctx.lr = 0x8233124C;
	sub_826A3EB0(ctx, base);
	// lwz r11,-14772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14772);
loc_82331250:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5944(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5944);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82331284
	if (ctx.cr6.eq) goto loc_82331284;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331288
	if (!ctx.cr6.eq) goto loc_82331288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82693920
	ctx.lr = 0x82331270;
	sub_82693920(ctx, base);
	// stw r3,-14772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14772, ctx.r3.u32);
	// bl 0x826a3eb0
	ctx.lr = 0x82331278;
	sub_826A3EB0(ctx, base);
	// lwz r10,5944(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5944);
	// lwz r11,-14772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14772);
	// b 0x82331288
	goto loc_82331288;
loc_82331284:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82331288:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823312b8
	if (!ctx.cr6.eq) goto loc_823312B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x823312AC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823312B4;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823312B8:
	// lwz r10,5944(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5944);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823312e4
	if (!ctx.cr6.eq) goto loc_823312E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823312D8;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823312E0;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823312E4:
	// lwz r10,5944(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5944);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x823312F0;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233133c
	if (ctx.cr6.eq) goto loc_8233133C;
	// lwz r3,5944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5944);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82331324
	if (!ctx.cr6.eq) goto loc_82331324;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82331314;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8233131C;
	sub_824455B8(ctx, base);
	// lwz r3,5944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5944);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82331324:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8233133c
	if (!ctx.cr6.eq) goto loc_8233133C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233133C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233133C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331348"))) PPC_WEAK_FUNC(sub_82331348);
PPC_FUNC_IMPL(__imp__sub_82331348) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331350"))) PPC_WEAK_FUNC(sub_82331350);
PPC_FUNC_IMPL(__imp__sub_82331350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-14772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14772);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331394
	if (!ctx.cr6.eq) goto loc_82331394;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x82693920
	ctx.lr = 0x82331388;
	sub_82693920(ctx, base);
	// stw r3,-14772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14772, ctx.r3.u32);
	// bl 0x826a3eb0
	ctx.lr = 0x82331390;
	sub_826A3EB0(ctx, base);
	// lwz r11,-14772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14772);
loc_82331394:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823313C0"))) PPC_WEAK_FUNC(sub_823313C0);
PPC_FUNC_IMPL(__imp__sub_823313C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x823313C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,8156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823313f8
	if (!ctx.cr6.eq) goto loc_823313F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828ba900
	ctx.lr = 0x823313EC;
	sub_828BA900(ctx, base);
	// stw r3,8156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8156, ctx.r3.u32);
	// bl 0x828cacd0
	ctx.lr = 0x823313F4;
	sub_828CACD0(ctx, base);
	// lwz r11,8156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8156);
loc_823313F8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5948(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5948);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8233142c
	if (ctx.cr6.eq) goto loc_8233142C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331430
	if (!ctx.cr6.eq) goto loc_82331430;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828ba900
	ctx.lr = 0x82331418;
	sub_828BA900(ctx, base);
	// stw r3,8156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8156, ctx.r3.u32);
	// bl 0x828cacd0
	ctx.lr = 0x82331420;
	sub_828CACD0(ctx, base);
	// lwz r10,5948(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5948);
	// lwz r11,8156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8156);
	// b 0x82331430
	goto loc_82331430;
loc_8233142C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82331430:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331460
	if (!ctx.cr6.eq) goto loc_82331460;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82331454;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8233145C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82331460:
	// lwz r10,5948(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5948);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233148c
	if (!ctx.cr6.eq) goto loc_8233148C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82331480;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82331488;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8233148C:
	// lwz r10,5948(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5948);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82331498;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823314e4
	if (ctx.cr6.eq) goto loc_823314E4;
	// lwz r3,5948(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5948);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x823314cc
	if (!ctx.cr6.eq) goto loc_823314CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823314BC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823314C4;
	sub_824455B8(ctx, base);
	// lwz r3,5948(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5948);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823314CC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823314e4
	if (!ctx.cr6.eq) goto loc_823314E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823314E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823314E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823314F0"))) PPC_WEAK_FUNC(sub_823314F0);
PPC_FUNC_IMPL(__imp__sub_823314F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823314F8"))) PPC_WEAK_FUNC(sub_823314F8);
PPC_FUNC_IMPL(__imp__sub_823314F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,8156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8156);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233153c
	if (!ctx.cr6.eq) goto loc_8233153C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x828ba900
	ctx.lr = 0x82331530;
	sub_828BA900(ctx, base);
	// stw r3,8156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8156, ctx.r3.u32);
	// bl 0x828cacd0
	ctx.lr = 0x82331538;
	sub_828CACD0(ctx, base);
	// lwz r11,8156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8156);
loc_8233153C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331568"))) PPC_WEAK_FUNC(sub_82331568);
PPC_FUNC_IMPL(__imp__sub_82331568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82331570;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,8136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823315a0
	if (!ctx.cr6.eq) goto loc_823315A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e0840
	ctx.lr = 0x82331594;
	sub_828E0840(ctx, base);
	// stw r3,8136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8136, ctx.r3.u32);
	// bl 0x828eb9e0
	ctx.lr = 0x8233159C;
	sub_828EB9E0(ctx, base);
	// lwz r11,8136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8136);
loc_823315A0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5952(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5952);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823315d4
	if (ctx.cr6.eq) goto loc_823315D4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823315d8
	if (!ctx.cr6.eq) goto loc_823315D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e0840
	ctx.lr = 0x823315C0;
	sub_828E0840(ctx, base);
	// stw r3,8136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8136, ctx.r3.u32);
	// bl 0x828eb9e0
	ctx.lr = 0x823315C8;
	sub_828EB9E0(ctx, base);
	// lwz r10,5952(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5952);
	// lwz r11,8136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8136);
	// b 0x823315d8
	goto loc_823315D8;
loc_823315D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823315D8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331608
	if (!ctx.cr6.eq) goto loc_82331608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x823315FC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82331604;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82331608:
	// lwz r10,5952(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5952);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331634
	if (!ctx.cr6.eq) goto loc_82331634;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82331628;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82331630;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82331634:
	// lwz r10,5952(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5952);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82331640;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233168c
	if (ctx.cr6.eq) goto loc_8233168C;
	// lwz r3,5952(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5952);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82331674
	if (!ctx.cr6.eq) goto loc_82331674;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82331664;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8233166C;
	sub_824455B8(ctx, base);
	// lwz r3,5952(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5952);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82331674:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8233168c
	if (!ctx.cr6.eq) goto loc_8233168C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233168C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233168C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331698"))) PPC_WEAK_FUNC(sub_82331698);
PPC_FUNC_IMPL(__imp__sub_82331698) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823316A0"))) PPC_WEAK_FUNC(sub_823316A0);
PPC_FUNC_IMPL(__imp__sub_823316A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,8136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8136);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823316e4
	if (!ctx.cr6.eq) goto loc_823316E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x828e0840
	ctx.lr = 0x823316D8;
	sub_828E0840(ctx, base);
	// stw r3,8136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8136, ctx.r3.u32);
	// bl 0x828eb9e0
	ctx.lr = 0x823316E0;
	sub_828EB9E0(ctx, base);
	// lwz r11,8136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8136);
loc_823316E4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331710"))) PPC_WEAK_FUNC(sub_82331710);
PPC_FUNC_IMPL(__imp__sub_82331710) {
	PPC_FUNC_PROLOGUE();
	// b 0x828fdb28
	sub_828FDB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331718"))) PPC_WEAK_FUNC(sub_82331718);
PPC_FUNC_IMPL(__imp__sub_82331718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,19876(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19876);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82331758
	if (!ctx.cr6.eq) goto loc_82331758;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28548
	ctx.r3.s64 = ctx.r11.s64 + -28548;
	// bl 0x8246f948
	ctx.lr = 0x8233174C;
	sub_8246F948(ctx, base);
	// stw r3,19876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19876, ctx.r3.u32);
	// bl 0x8246fa08
	ctx.lr = 0x82331754;
	sub_8246FA08(ctx, base);
	// lwz r4,19876(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19876);
loc_82331758:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e1bd0
	ctx.lr = 0x82331760;
	sub_822E1BD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331778"))) PPC_WEAK_FUNC(sub_82331778);
PPC_FUNC_IMPL(__imp__sub_82331778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82331780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823317b0
	if (!ctx.cr6.eq) goto loc_823317B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x823317A4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823317AC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823317B0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5956(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5956);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823317e4
	if (ctx.cr6.eq) goto loc_823317E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823317e8
	if (!ctx.cr6.eq) goto loc_823317E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x823317D0;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823317D8;
	sub_8245F220(ctx, base);
	// lwz r10,5956(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5956);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// b 0x823317e8
	goto loc_823317E8;
loc_823317E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823317E8:
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233180c
	if (!ctx.cr6.eq) goto loc_8233180C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82331800;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82331808;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8233180C:
	// lwz r10,5956(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5956);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331838
	if (!ctx.cr6.eq) goto loc_82331838;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8233182C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82331834;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82331838:
	// lwz r10,5956(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5956);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82331844;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82331890
	if (ctx.cr6.eq) goto loc_82331890;
	// lwz r3,5956(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5956);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82331878
	if (!ctx.cr6.eq) goto loc_82331878;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82331868;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82331870;
	sub_824455B8(ctx, base);
	// lwz r3,5956(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5956);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82331878:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82331890
	if (!ctx.cr6.eq) goto loc_82331890;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82331890:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331898"))) PPC_WEAK_FUNC(sub_82331898);
PPC_FUNC_IMPL(__imp__sub_82331898) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823318A0"))) PPC_WEAK_FUNC(sub_823318A0);
PPC_FUNC_IMPL(__imp__sub_823318A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823318e4
	if (!ctx.cr6.eq) goto loc_823318E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28548
	ctx.r3.s64 = ctx.r11.s64 + -28548;
	// bl 0x82462518
	ctx.lr = 0x823318D8;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823318E0;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823318E4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331910"))) PPC_WEAK_FUNC(sub_82331910);
PPC_FUNC_IMPL(__imp__sub_82331910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82331918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31973
	ctx.r31.s64 = -2095382528;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-27544
	ctx.r29.s64 = ctx.r10.s64 + -27544;
	// lwz r11,7504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331948
	if (!ctx.cr6.eq) goto loc_82331948;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ceeb0
	ctx.lr = 0x8233193C;
	sub_823CEEB0(ctx, base);
	// stw r3,7504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7504, ctx.r3.u32);
	// bl 0x823c8b60
	ctx.lr = 0x82331944;
	sub_823C8B60(ctx, base);
	// lwz r11,7504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7504);
loc_82331948:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5960(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5960);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8233197c
	if (ctx.cr6.eq) goto loc_8233197C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331980
	if (!ctx.cr6.eq) goto loc_82331980;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ceeb0
	ctx.lr = 0x82331968;
	sub_823CEEB0(ctx, base);
	// stw r3,7504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7504, ctx.r3.u32);
	// bl 0x823c8b60
	ctx.lr = 0x82331970;
	sub_823C8B60(ctx, base);
	// lwz r10,5960(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5960);
	// lwz r11,7504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7504);
	// b 0x82331980
	goto loc_82331980;
loc_8233197C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82331980:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823319b0
	if (!ctx.cr6.eq) goto loc_823319B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x823319A4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823319AC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823319B0:
	// lwz r10,5960(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5960);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823319dc
	if (!ctx.cr6.eq) goto loc_823319DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823319D0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823319D8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823319DC:
	// lwz r10,5960(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5960);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x823319E8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82331a34
	if (ctx.cr6.eq) goto loc_82331A34;
	// lwz r3,5960(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5960);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82331a1c
	if (!ctx.cr6.eq) goto loc_82331A1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82331A0C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82331A14;
	sub_824455B8(ctx, base);
	// lwz r3,5960(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5960);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82331A1C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82331a34
	if (!ctx.cr6.eq) goto loc_82331A34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331A34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82331A34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331A40"))) PPC_WEAK_FUNC(sub_82331A40);
PPC_FUNC_IMPL(__imp__sub_82331A40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331A48"))) PPC_WEAK_FUNC(sub_82331A48);
PPC_FUNC_IMPL(__imp__sub_82331A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31973
	ctx.r31.s64 = -2095382528;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,7504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7504);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331a8c
	if (!ctx.cr6.eq) goto loc_82331A8C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-27544
	ctx.r3.s64 = ctx.r11.s64 + -27544;
	// bl 0x823ceeb0
	ctx.lr = 0x82331A80;
	sub_823CEEB0(ctx, base);
	// stw r3,7504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7504, ctx.r3.u32);
	// bl 0x823c8b60
	ctx.lr = 0x82331A88;
	sub_823C8B60(ctx, base);
	// lwz r11,7504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7504);
loc_82331A8C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331AB8"))) PPC_WEAK_FUNC(sub_82331AB8);
PPC_FUNC_IMPL(__imp__sub_82331AB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331AC0"))) PPC_WEAK_FUNC(sub_82331AC0);
PPC_FUNC_IMPL(__imp__sub_82331AC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331AC8"))) PPC_WEAK_FUNC(sub_82331AC8);
PPC_FUNC_IMPL(__imp__sub_82331AC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331AD0"))) PPC_WEAK_FUNC(sub_82331AD0);
PPC_FUNC_IMPL(__imp__sub_82331AD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331AD8"))) PPC_WEAK_FUNC(sub_82331AD8);
PPC_FUNC_IMPL(__imp__sub_82331AD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331AE0"))) PPC_WEAK_FUNC(sub_82331AE0);
PPC_FUNC_IMPL(__imp__sub_82331AE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331AE8"))) PPC_WEAK_FUNC(sub_82331AE8);
PPC_FUNC_IMPL(__imp__sub_82331AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331AF0"))) PPC_WEAK_FUNC(sub_82331AF0);
PPC_FUNC_IMPL(__imp__sub_82331AF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331AF8"))) PPC_WEAK_FUNC(sub_82331AF8);
PPC_FUNC_IMPL(__imp__sub_82331AF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,348(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331B00"))) PPC_WEAK_FUNC(sub_82331B00);
PPC_FUNC_IMPL(__imp__sub_82331B00) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331B08"))) PPC_WEAK_FUNC(sub_82331B08);
PPC_FUNC_IMPL(__imp__sub_82331B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31967
	ctx.r31.s64 = -2094989312;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-30880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30880);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331b4c
	if (!ctx.cr6.eq) goto loc_82331B4C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-27552
	ctx.r3.s64 = ctx.r11.s64 + -27552;
	// bl 0x82a6e6d0
	ctx.lr = 0x82331B40;
	sub_82A6E6D0(ctx, base);
	// stw r3,-30880(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30880, ctx.r3.u32);
	// bl 0x82a6ecc0
	ctx.lr = 0x82331B48;
	sub_82A6ECC0(ctx, base);
	// lwz r11,-30880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30880);
loc_82331B4C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331B78"))) PPC_WEAK_FUNC(sub_82331B78);
PPC_FUNC_IMPL(__imp__sub_82331B78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331B80"))) PPC_WEAK_FUNC(sub_82331B80);
PPC_FUNC_IMPL(__imp__sub_82331B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,5604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5604);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331bc4
	if (!ctx.cr6.eq) goto loc_82331BC4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x82755a00
	ctx.lr = 0x82331BB8;
	sub_82755A00(ctx, base);
	// stw r3,5604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5604, ctx.r3.u32);
	// bl 0x82750f80
	ctx.lr = 0x82331BC0;
	sub_82750F80(ctx, base);
	// lwz r11,5604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5604);
loc_82331BC4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331BF0"))) PPC_WEAK_FUNC(sub_82331BF0);
PPC_FUNC_IMPL(__imp__sub_82331BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82331BF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,8136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331c28
	if (!ctx.cr6.eq) goto loc_82331C28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e0840
	ctx.lr = 0x82331C1C;
	sub_828E0840(ctx, base);
	// stw r3,8136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8136, ctx.r3.u32);
	// bl 0x828eb9e0
	ctx.lr = 0x82331C24;
	sub_828EB9E0(ctx, base);
	// lwz r11,8136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8136);
loc_82331C28:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5984(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5984);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82331c5c
	if (ctx.cr6.eq) goto loc_82331C5C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331c60
	if (!ctx.cr6.eq) goto loc_82331C60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e0840
	ctx.lr = 0x82331C48;
	sub_828E0840(ctx, base);
	// stw r3,8136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8136, ctx.r3.u32);
	// bl 0x828eb9e0
	ctx.lr = 0x82331C50;
	sub_828EB9E0(ctx, base);
	// lwz r10,5984(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5984);
	// lwz r11,8136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8136);
	// b 0x82331c60
	goto loc_82331C60;
loc_82331C5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82331C60:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331c90
	if (!ctx.cr6.eq) goto loc_82331C90;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82331C84;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82331C8C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82331C90:
	// lwz r10,5984(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5984);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331cbc
	if (!ctx.cr6.eq) goto loc_82331CBC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82331CB0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82331CB8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82331CBC:
	// lwz r10,5984(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5984);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82331CC8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82331d14
	if (ctx.cr6.eq) goto loc_82331D14;
	// lwz r3,5984(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5984);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82331cfc
	if (!ctx.cr6.eq) goto loc_82331CFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82331CEC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82331CF4;
	sub_824455B8(ctx, base);
	// lwz r3,5984(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5984);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82331CFC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82331d14
	if (!ctx.cr6.eq) goto loc_82331D14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82331D14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331D20"))) PPC_WEAK_FUNC(sub_82331D20);
PPC_FUNC_IMPL(__imp__sub_82331D20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331D28"))) PPC_WEAK_FUNC(sub_82331D28);
PPC_FUNC_IMPL(__imp__sub_82331D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,8136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8136);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331d6c
	if (!ctx.cr6.eq) goto loc_82331D6C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x828e0840
	ctx.lr = 0x82331D60;
	sub_828E0840(ctx, base);
	// stw r3,8136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8136, ctx.r3.u32);
	// bl 0x828eb9e0
	ctx.lr = 0x82331D68;
	sub_828EB9E0(ctx, base);
	// lwz r11,8136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8136);
loc_82331D6C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331D98"))) PPC_WEAK_FUNC(sub_82331D98);
PPC_FUNC_IMPL(__imp__sub_82331D98) {
	PPC_FUNC_PROLOGUE();
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// lwz r10,24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82331dc0
	if (!ctx.cr6.eq) goto loc_82331DC0;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82331DC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331DC8"))) PPC_WEAK_FUNC(sub_82331DC8);
PPC_FUNC_IMPL(__imp__sub_82331DC8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,352
	ctx.r11.s64 = ctx.r4.s64 + 352;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331DE0"))) PPC_WEAK_FUNC(sub_82331DE0);
PPC_FUNC_IMPL(__imp__sub_82331DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82331DE8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r4,r11,-29761
	ctx.r4.s64 = ctx.r11.s64 + -29761;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8243b750
	ctx.lr = 0x82331E18;
	sub_8243B750(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82331E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331E58"))) PPC_WEAK_FUNC(sub_82331E58);
PPC_FUNC_IMPL(__imp__sub_82331E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82331E60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,360(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,40(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331edc
	if (!ctx.cr6.eq) goto loc_82331EDC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82331edc
	if (!ctx.cr6.eq) goto loc_82331EDC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82331edc
	if (!ctx.cr6.eq) goto loc_82331EDC;
	// lfs f0,404(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,408(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82331EDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331EE8"))) PPC_WEAK_FUNC(sub_82331EE8);
PPC_FUNC_IMPL(__imp__sub_82331EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82331EF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,360(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,40(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331f6c
	if (!ctx.cr6.eq) goto loc_82331F6C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82331f6c
	if (!ctx.cr6.eq) goto loc_82331F6C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82331f6c
	if (!ctx.cr6.eq) goto loc_82331F6C;
	// lfs f0,412(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,416(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82331F6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82331F78"))) PPC_WEAK_FUNC(sub_82331F78);
PPC_FUNC_IMPL(__imp__sub_82331F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82331F80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331fb0
	if (!ctx.cr6.eq) goto loc_82331FB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82331FA4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82331FAC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82331FB0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5988(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5988);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82331fe4
	if (ctx.cr6.eq) goto loc_82331FE4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82331fe8
	if (!ctx.cr6.eq) goto loc_82331FE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82331FD0;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82331FD8;
	sub_8245F220(ctx, base);
	// lwz r10,5988(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5988);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// b 0x82331fe8
	goto loc_82331FE8;
loc_82331FE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82331FE8:
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233200c
	if (!ctx.cr6.eq) goto loc_8233200C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82332000;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82332008;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8233200C:
	// lwz r10,5988(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5988);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332038
	if (!ctx.cr6.eq) goto loc_82332038;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8233202C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82332034;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82332038:
	// lwz r10,5988(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5988);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82332044;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82332090
	if (ctx.cr6.eq) goto loc_82332090;
	// lwz r3,5988(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5988);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82332078
	if (!ctx.cr6.eq) goto loc_82332078;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82332068;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82332070;
	sub_824455B8(ctx, base);
	// lwz r3,5988(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5988);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82332078:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82332090
	if (!ctx.cr6.eq) goto loc_82332090;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82332090:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332098"))) PPC_WEAK_FUNC(sub_82332098);
PPC_FUNC_IMPL(__imp__sub_82332098) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823320A0"))) PPC_WEAK_FUNC(sub_823320A0);
PPC_FUNC_IMPL(__imp__sub_823320A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823320e4
	if (!ctx.cr6.eq) goto loc_823320E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28548
	ctx.r3.s64 = ctx.r11.s64 + -28548;
	// bl 0x82462518
	ctx.lr = 0x823320D8;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823320E0;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823320E4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332110"))) PPC_WEAK_FUNC(sub_82332110);
PPC_FUNC_IMPL(__imp__sub_82332110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82332118;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332148
	if (!ctx.cr6.eq) goto loc_82332148;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x8233213C;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82332144;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82332148:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,5992(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5992);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8233217c
	if (ctx.cr6.eq) goto loc_8233217C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332180
	if (!ctx.cr6.eq) goto loc_82332180;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82332168;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82332170;
	sub_8245F220(ctx, base);
	// lwz r10,5992(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5992);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// b 0x82332180
	goto loc_82332180;
loc_8233217C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82332180:
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823321a4
	if (!ctx.cr6.eq) goto loc_823321A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82332198;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823321A0;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823321A4:
	// lwz r10,5992(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5992);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823321d0
	if (!ctx.cr6.eq) goto loc_823321D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823321C4;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823321CC;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823321D0:
	// lwz r10,5992(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5992);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x823321DC;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82332228
	if (ctx.cr6.eq) goto loc_82332228;
	// lwz r3,5992(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5992);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82332210
	if (!ctx.cr6.eq) goto loc_82332210;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82332200;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82332208;
	sub_824455B8(ctx, base);
	// lwz r3,5992(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5992);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82332210:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82332228
	if (!ctx.cr6.eq) goto loc_82332228;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82332228:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332230"))) PPC_WEAK_FUNC(sub_82332230);
PPC_FUNC_IMPL(__imp__sub_82332230) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r10,r10,22056
	ctx.r10.s64 = ctx.r10.s64 + 22056;
	// addi r11,r11,27960
	ctx.r11.s64 = ctx.r11.s64 + 27960;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332250"))) PPC_WEAK_FUNC(sub_82332250);
PPC_FUNC_IMPL(__imp__sub_82332250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332294
	if (!ctx.cr6.eq) goto loc_82332294;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28548
	ctx.r3.s64 = ctx.r11.s64 + -28548;
	// bl 0x82462518
	ctx.lr = 0x82332288;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82332290;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82332294:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823322C0"))) PPC_WEAK_FUNC(sub_823322C0);
PPC_FUNC_IMPL(__imp__sub_823322C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823322D0"))) PPC_WEAK_FUNC(sub_823322D0);
PPC_FUNC_IMPL(__imp__sub_823322D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82e28f14
	ctx.lr = 0x823322E8;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r6.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lfs f27,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f27.f64 = double(temp.f32);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// stfs f27,80(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f27,84(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// beq cr6,0x82332388
	if (ctx.cr6.eq) goto loc_82332388;
	// lfs f1,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// b 0x8233243c
	goto loc_8233243C;
loc_82332388:
	// lfs f29,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f0,f29,f29
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// lfs f30,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f0,f30,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmadds f31,f28,f28,f0
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f0.f64));
	// fsqrts f1,f31
	ctx.f1.f64 = double(float(sqrt(ctx.f31.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823323AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x823323e4
	if (!ctx.cr6.eq) goto loc_823323E4;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82332424
	goto loc_82332424;
loc_823323E4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-20444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82332404
	if (!ctx.cr6.lt) goto loc_82332404;
	// fmr f13,f27
	ctx.f13.f64 = ctx.f27.f64;
	// fmr f12,f27
	ctx.f12.f64 = ctx.f27.f64;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82332424
	goto loc_82332424;
loc_82332404:
	// fsqrt f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = sqrt(ctx.f31.f64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-28560(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -28560);
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_82332424:
	// fmuls f13,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8233243C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82e28f60
	ctx.lr = 0x8233244C;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332460"))) PPC_WEAK_FUNC(sub_82332460);
PPC_FUNC_IMPL(__imp__sub_82332460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332468"))) PPC_WEAK_FUNC(sub_82332468);
PPC_FUNC_IMPL(__imp__sub_82332468) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332470"))) PPC_WEAK_FUNC(sub_82332470);
PPC_FUNC_IMPL(__imp__sub_82332470) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332478"))) PPC_WEAK_FUNC(sub_82332478);
PPC_FUNC_IMPL(__imp__sub_82332478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f11,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x823324bc
	if (!ctx.cr6.gt) goto loc_823324BC;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f13,f11,f12,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// blr 
	return;
loc_823324BC:
	// fneg f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f13,f12,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823324E0"))) PPC_WEAK_FUNC(sub_823324E0);
PPC_FUNC_IMPL(__imp__sub_823324E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823324E8"))) PPC_WEAK_FUNC(sub_823324E8);
PPC_FUNC_IMPL(__imp__sub_823324E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f2,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82332520
	if (!ctx.cr6.gt) goto loc_82332520;
	// bl 0x82e28570
	ctx.lr = 0x8233250C;
	sub_82E28570(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82332520:
	// fabs f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// bl 0x82e28570
	ctx.lr = 0x82332528;
	sub_82E28570(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13880);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332548"))) PPC_WEAK_FUNC(sub_82332548);
PPC_FUNC_IMPL(__imp__sub_82332548) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332550"))) PPC_WEAK_FUNC(sub_82332550);
PPC_FUNC_IMPL(__imp__sub_82332550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-28552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28552);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f1.f64 = double(temp.f32);
	// blt cr6,0x82332578
	if (ctx.cr6.lt) goto loc_82332578;
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
loc_82332578:
	// lfs f13,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8233259c
	if (ctx.cr6.lt) goto loc_8233259C;
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8233259c
	if (ctx.cr6.gt) goto loc_8233259C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8233259C:
	// stfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823325A8"))) PPC_WEAK_FUNC(sub_823325A8);
PPC_FUNC_IMPL(__imp__sub_823325A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823325B8"))) PPC_WEAK_FUNC(sub_823325B8);
PPC_FUNC_IMPL(__imp__sub_823325B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823325C0"))) PPC_WEAK_FUNC(sub_823325C0);
PPC_FUNC_IMPL(__imp__sub_823325C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x823325d8
	if (!ctx.cr6.eq) goto loc_823325D8;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
loc_823325D8:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x823325ec
	if (!ctx.cr6.eq) goto loc_823325EC;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
loc_823325EC:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823325F8"))) PPC_WEAK_FUNC(sub_823325F8);
PPC_FUNC_IMPL(__imp__sub_823325F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332600"))) PPC_WEAK_FUNC(sub_82332600);
PPC_FUNC_IMPL(__imp__sub_82332600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f1,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82332640
	if (!ctx.cr6.eq) goto loc_82332640;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82332660
	goto loc_82332660;
loc_82332640:
	// bl 0x82e28570
	ctx.lr = 0x82332644;
	sub_82E28570(ctx, base);
	// addi r11,r30,17
	ctx.r11.s64 = ctx.r30.s64 + 17;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fmadds f1,f13,f0,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f31.f64));
	// stfsx f1,r11,r31
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
loc_82332660:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332680"))) PPC_WEAK_FUNC(sub_82332680);
PPC_FUNC_IMPL(__imp__sub_82332680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332698"))) PPC_WEAK_FUNC(sub_82332698);
PPC_FUNC_IMPL(__imp__sub_82332698) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823326A0"))) PPC_WEAK_FUNC(sub_823326A0);
PPC_FUNC_IMPL(__imp__sub_823326A0) {
	PPC_FUNC_PROLOGUE();
	// fmuls f1,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823326A8"))) PPC_WEAK_FUNC(sub_823326A8);
PPC_FUNC_IMPL(__imp__sub_823326A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823326B0"))) PPC_WEAK_FUNC(sub_823326B0);
PPC_FUNC_IMPL(__imp__sub_823326B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// bge cr6,0x823326e8
	if (!ctx.cr6.lt) goto loc_823326E8;
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82332710
	if (ctx.cr6.eq) goto loc_82332710;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8233270c
	if (!ctx.cr6.eq) goto loc_8233270C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
loc_823326E8:
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82332710
	if (ctx.cr6.eq) goto loc_82332710;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8233270c
	if (!ctx.cr6.eq) goto loc_8233270C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
loc_8233270C:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82332710:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332720"))) PPC_WEAK_FUNC(sub_82332720);
PPC_FUNC_IMPL(__imp__sub_82332720) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332728"))) PPC_WEAK_FUNC(sub_82332728);
PPC_FUNC_IMPL(__imp__sub_82332728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82332730;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82e28f04
	ctx.lr = 0x82332738;
	__savefpr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r5,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r5.u64);
	// lfs f28,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f28.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// std r6,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r6.u64);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// lfs f31,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// bl 0x82a60460
	ctx.lr = 0x82332770;
	sub_82A60460(ctx, base);
	// lfs f27,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f27.f64 = double(temp.f32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82a60460
	ctx.lr = 0x82332784;
	sub_82A60460(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lfs f29,-27568(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27568);
	ctx.f29.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a604c0
	ctx.lr = 0x82332798;
	sub_82A604C0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a604c0
	ctx.lr = 0x823327AC;
	sub_82A604C0(ctx, base);
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f25,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f25.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f26,-28560(r10)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r10.u32 + -28560);
	// fmadds f0,f1,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f0.f64));
	// lfs f23,-20444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20444);
	ctx.f23.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bne cr6,0x82332800
	if (!ctx.cr6.eq) goto loc_82332800;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// b 0x8233282c
	goto loc_8233282C;
loc_82332800:
	// fcmpu cr6,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// bge cr6,0x82332818
	if (!ctx.cr6.lt) goto loc_82332818;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// b 0x8233282c
	goto loc_8233282C;
loc_82332818:
	// fsqrt f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = sqrt(ctx.f0.f64);
	// fdiv f0,f26,f0
	ctx.f0.f64 = ctx.f26.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f8,f0,f30
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f7,f0,f1
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_8233282C:
	// fmuls f11,f27,f27
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// lwz r30,280(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// fmuls f10,f28,f28
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// lwz r29,276(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r28,272(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lfs f29,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f29.f64 = double(temp.f32);
	// fadds f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bne cr6,0x82332880
	if (!ctx.cr6.eq) goto loc_82332880;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bne cr6,0x82332874
	if (!ctx.cr6.eq) goto loc_82332874;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// b 0x823328ac
	goto loc_823328AC;
loc_82332874:
	// fmr f12,f28
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f28.f64;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x823328a8
	goto loc_823328A8;
loc_82332880:
	// fcmpu cr6,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x82332894
	if (!ctx.cr6.lt) goto loc_82332894;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x823328a8
	goto loc_823328A8;
loc_82332894:
	// fsqrt f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = sqrt(ctx.f0.f64);
	// fdiv f0,f26,f0
	ctx.f0.f64 = ctx.f26.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
loc_823328A8:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_823328AC:
	// fmuls f0,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fmadds f13,f12,f8,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f0.f64));
	// lfs f0,-5460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5460);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823328d0
	if (!ctx.cr6.lt) goto loc_823328D0;
	// stfs f31,88(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
loc_823328D0:
	// fmadds f0,f29,f29,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f10.f64));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// fadds f30,f0,f11
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fsqrts f1,f30
	ctx.f1.f64 = double(float(sqrt(ctx.f30.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823328F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f25.f64);
	// bne cr6,0x8233291c
	if (!ctx.cr6.eq) goto loc_8233291C;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lfs f31,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82332948
	goto loc_82332948;
loc_8233291C:
	// fcmpu cr6,f30,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f23.f64);
	// bge cr6,0x82332930
	if (!ctx.cr6.lt) goto loc_82332930;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// b 0x82332948
	goto loc_82332948;
loc_82332930:
	// fsqrt f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = sqrt(ctx.f30.f64);
	// fdiv f0,f26,f0
	ctx.f0.f64 = ctx.f26.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f12,f0,f27
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f31,f29,f0
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
loc_82332948:
	// fmuls f0,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fmuls f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmuls f0,f31,f1
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f1.f64));
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f0,8(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82e28f50
	ctx.lr = 0x82332970;
	__restfpr_23(ctx, base);
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332978"))) PPC_WEAK_FUNC(sub_82332978);
PPC_FUNC_IMPL(__imp__sub_82332978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// bl 0x82a60418
	ctx.lr = 0x823329A4;
	sub_82A60418(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82a60418
	ctx.lr = 0x823329AC;
	sub_82A60418(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823329C0"))) PPC_WEAK_FUNC(sub_823329C0);
PPC_FUNC_IMPL(__imp__sub_823329C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82332a0c
	if (ctx.cr6.eq) goto loc_82332A0C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r4,288
	ctx.r8.s64 = ctx.r4.s64 + 288;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82332a24
	goto loc_82332A24;
loc_82332A0C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82332A24:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332A58"))) PPC_WEAK_FUNC(sub_82332A58);
PPC_FUNC_IMPL(__imp__sub_82332A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82332A60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31967
	ctx.r31.s64 = -2094989312;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-27552
	ctx.r29.s64 = ctx.r10.s64 + -27552;
	// lwz r11,-29844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29844);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332a90
	if (!ctx.cr6.eq) goto loc_82332A90;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a87730
	ctx.lr = 0x82332A84;
	sub_82A87730(ctx, base);
	// stw r3,-29844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29844, ctx.r3.u32);
	// bl 0x82a7a6e0
	ctx.lr = 0x82332A8C;
	sub_82A7A6E0(ctx, base);
	// lwz r11,-29844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29844);
loc_82332A90:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,6032(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6032);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82332ac4
	if (ctx.cr6.eq) goto loc_82332AC4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332ac8
	if (!ctx.cr6.eq) goto loc_82332AC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a87730
	ctx.lr = 0x82332AB0;
	sub_82A87730(ctx, base);
	// stw r3,-29844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29844, ctx.r3.u32);
	// bl 0x82a7a6e0
	ctx.lr = 0x82332AB8;
	sub_82A7A6E0(ctx, base);
	// lwz r10,6032(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6032);
	// lwz r11,-29844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29844);
	// b 0x82332ac8
	goto loc_82332AC8;
loc_82332AC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82332AC8:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332af8
	if (!ctx.cr6.eq) goto loc_82332AF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82332AEC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82332AF4;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82332AF8:
	// lwz r10,6032(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6032);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332b24
	if (!ctx.cr6.eq) goto loc_82332B24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82332B18;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82332B20;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82332B24:
	// lwz r10,6032(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6032);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82332B30;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82332b7c
	if (ctx.cr6.eq) goto loc_82332B7C;
	// lwz r3,6032(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6032);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82332b64
	if (!ctx.cr6.eq) goto loc_82332B64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82332B54;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82332B5C;
	sub_824455B8(ctx, base);
	// lwz r3,6032(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6032);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82332B64:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82332b7c
	if (!ctx.cr6.eq) goto loc_82332B7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82332B7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332B88"))) PPC_WEAK_FUNC(sub_82332B88);
PPC_FUNC_IMPL(__imp__sub_82332B88) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332B90"))) PPC_WEAK_FUNC(sub_82332B90);
PPC_FUNC_IMPL(__imp__sub_82332B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31967
	ctx.r31.s64 = -2094989312;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-29844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29844);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332bd4
	if (!ctx.cr6.eq) goto loc_82332BD4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-27552
	ctx.r3.s64 = ctx.r11.s64 + -27552;
	// bl 0x82a87730
	ctx.lr = 0x82332BC8;
	sub_82A87730(ctx, base);
	// stw r3,-29844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29844, ctx.r3.u32);
	// bl 0x82a7a6e0
	ctx.lr = 0x82332BD0;
	sub_82A7A6E0(ctx, base);
	// lwz r11,-29844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29844);
loc_82332BD4:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332C00"))) PPC_WEAK_FUNC(sub_82332C00);
PPC_FUNC_IMPL(__imp__sub_82332C00) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82332c10
	if (!ctx.cr6.eq) goto loc_82332C10;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82332C10:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82332c34
	if (ctx.cr6.eq) goto loc_82332C34;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// stb r6,524(r3)
	PPC_STORE_U8(ctx.r3.u32 + 524, ctx.r6.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82332C34:
	// lbz r11,1242(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1242);
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// lbz r11,1242(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1242);
	// stb r11,524(r3)
	PPC_STORE_U8(ctx.r3.u32 + 524, ctx.r11.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332C58"))) PPC_WEAK_FUNC(sub_82332C58);
PPC_FUNC_IMPL(__imp__sub_82332C58) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332C70"))) PPC_WEAK_FUNC(sub_82332C70);
PPC_FUNC_IMPL(__imp__sub_82332C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82332C78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,-1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1016);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332ca8
	if (!ctx.cr6.eq) goto loc_82332CA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826fff50
	ctx.lr = 0x82332C9C;
	sub_826FFF50(ctx, base);
	// stw r3,-1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1016, ctx.r3.u32);
	// bl 0x826d2d40
	ctx.lr = 0x82332CA4;
	sub_826D2D40(ctx, base);
	// lwz r11,-1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1016);
loc_82332CA8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,6036(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6036);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82332cdc
	if (ctx.cr6.eq) goto loc_82332CDC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332ce0
	if (!ctx.cr6.eq) goto loc_82332CE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826fff50
	ctx.lr = 0x82332CC8;
	sub_826FFF50(ctx, base);
	// stw r3,-1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1016, ctx.r3.u32);
	// bl 0x826d2d40
	ctx.lr = 0x82332CD0;
	sub_826D2D40(ctx, base);
	// lwz r10,6036(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6036);
	// lwz r11,-1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1016);
	// b 0x82332ce0
	goto loc_82332CE0;
loc_82332CDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82332CE0:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332d10
	if (!ctx.cr6.eq) goto loc_82332D10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82332D04;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82332D0C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82332D10:
	// lwz r10,6036(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6036);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332d3c
	if (!ctx.cr6.eq) goto loc_82332D3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82332D30;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82332D38;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82332D3C:
	// lwz r10,6036(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6036);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82332D48;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82332d94
	if (ctx.cr6.eq) goto loc_82332D94;
	// lwz r3,6036(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6036);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82332d7c
	if (!ctx.cr6.eq) goto loc_82332D7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82332D6C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82332D74;
	sub_824455B8(ctx, base);
	// lwz r3,6036(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6036);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82332D7C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82332d94
	if (!ctx.cr6.eq) goto loc_82332D94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82332D94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332DA0"))) PPC_WEAK_FUNC(sub_82332DA0);
PPC_FUNC_IMPL(__imp__sub_82332DA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332DA8"))) PPC_WEAK_FUNC(sub_82332DA8);
PPC_FUNC_IMPL(__imp__sub_82332DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1016);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332dec
	if (!ctx.cr6.eq) goto loc_82332DEC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x826fff50
	ctx.lr = 0x82332DE0;
	sub_826FFF50(ctx, base);
	// stw r3,-1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1016, ctx.r3.u32);
	// bl 0x826d2d40
	ctx.lr = 0x82332DE8;
	sub_826D2D40(ctx, base);
	// lwz r11,-1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1016);
loc_82332DEC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332E18"))) PPC_WEAK_FUNC(sub_82332E18);
PPC_FUNC_IMPL(__imp__sub_82332E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82332E20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332e50
	if (!ctx.cr6.eq) goto loc_82332E50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82332E44;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82332E4C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82332E50:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,6040(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6040);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82332e84
	if (ctx.cr6.eq) goto loc_82332E84;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332e88
	if (!ctx.cr6.eq) goto loc_82332E88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82332E70;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82332E78;
	sub_8245F220(ctx, base);
	// lwz r10,6040(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6040);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// b 0x82332e88
	goto loc_82332E88;
loc_82332E84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82332E88:
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332eac
	if (!ctx.cr6.eq) goto loc_82332EAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82332EA0;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82332EA8;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82332EAC:
	// lwz r10,6040(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6040);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332ed8
	if (!ctx.cr6.eq) goto loc_82332ED8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82332ECC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82332ED4;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82332ED8:
	// lwz r10,6040(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6040);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82332EE4;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82332f30
	if (ctx.cr6.eq) goto loc_82332F30;
	// lwz r3,6040(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6040);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82332f18
	if (!ctx.cr6.eq) goto loc_82332F18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82332F08;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82332F10;
	sub_824455B8(ctx, base);
	// lwz r3,6040(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6040);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82332F18:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82332f30
	if (!ctx.cr6.eq) goto loc_82332F30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82332F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82332F30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332F38"))) PPC_WEAK_FUNC(sub_82332F38);
PPC_FUNC_IMPL(__imp__sub_82332F38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332F40"))) PPC_WEAK_FUNC(sub_82332F40);
PPC_FUNC_IMPL(__imp__sub_82332F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82332f84
	if (!ctx.cr6.eq) goto loc_82332F84;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28548
	ctx.r3.s64 = ctx.r11.s64 + -28548;
	// bl 0x82462518
	ctx.lr = 0x82332F78;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82332F80;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82332F84:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332FB0"))) PPC_WEAK_FUNC(sub_82332FB0);
PPC_FUNC_IMPL(__imp__sub_82332FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r10,r10,22056
	ctx.r10.s64 = ctx.r10.s64 + 22056;
	// addi r11,r11,27960
	ctx.r11.s64 = ctx.r11.s64 + 27960;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332FD0"))) PPC_WEAK_FUNC(sub_82332FD0);
PPC_FUNC_IMPL(__imp__sub_82332FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82332FD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333008
	if (!ctx.cr6.eq) goto loc_82333008;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82332FFC;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82333004;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82333008:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,6048(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6048);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8233303c
	if (ctx.cr6.eq) goto loc_8233303C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333040
	if (!ctx.cr6.eq) goto loc_82333040;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82333028;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82333030;
	sub_8245F220(ctx, base);
	// lwz r10,6048(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6048);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// b 0x82333040
	goto loc_82333040;
loc_8233303C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82333040:
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333064
	if (!ctx.cr6.eq) goto loc_82333064;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82333058;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82333060;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82333064:
	// lwz r10,6048(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6048);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333090
	if (!ctx.cr6.eq) goto loc_82333090;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82333084;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x8233308C;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_82333090:
	// lwz r10,6048(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6048);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x8233309C;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823330e8
	if (ctx.cr6.eq) goto loc_823330E8;
	// lwz r3,6048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6048);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x823330d0
	if (!ctx.cr6.eq) goto loc_823330D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823330C0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823330C8;
	sub_824455B8(ctx, base);
	// lwz r3,6048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6048);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823330D0:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823330e8
	if (!ctx.cr6.eq) goto loc_823330E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823330E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823330E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823330F0"))) PPC_WEAK_FUNC(sub_823330F0);
PPC_FUNC_IMPL(__imp__sub_823330F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823330F8"))) PPC_WEAK_FUNC(sub_823330F8);
PPC_FUNC_IMPL(__imp__sub_823330F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233313c
	if (!ctx.cr6.eq) goto loc_8233313C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28548
	ctx.r3.s64 = ctx.r11.s64 + -28548;
	// bl 0x82462518
	ctx.lr = 0x82333130;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x82333138;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_8233313C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333168"))) PPC_WEAK_FUNC(sub_82333168);
PPC_FUNC_IMPL(__imp__sub_82333168) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333170"))) PPC_WEAK_FUNC(sub_82333170);
PPC_FUNC_IMPL(__imp__sub_82333170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333198
	if (ctx.cr6.eq) goto loc_82333198;
	// addi r5,r11,240
	ctx.r5.s64 = ctx.r11.s64 + 240;
	// b 0x823331ac
	goto loc_823331AC;
loc_82333198:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_823331AC:
	// addi r6,r31,788
	ctx.r6.s64 = ctx.r31.s64 + 788;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a69ae8
	ctx.lr = 0x823331BC;
	sub_82A69AE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82895bd8
	ctx.lr = 0x823331D4;
	sub_82895BD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823331E8"))) PPC_WEAK_FUNC(sub_823331E8);
PPC_FUNC_IMPL(__imp__sub_823331E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1064);
	// rlwinm r3,r11,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823331F8"))) PPC_WEAK_FUNC(sub_823331F8);
PPC_FUNC_IMPL(__imp__sub_823331F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,460(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-3136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3136);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82e28a70
	ctx.lr = 0x82333220;
	sub_82E28A70(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	ctx.f13.f64 = double(temp.f32);
	// lfd f2,-28560(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -28560);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x82e29d58
	ctx.lr = 0x82333238;
	sub_82E29D58(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-3068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3068);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333260"))) PPC_WEAK_FUNC(sub_82333260);
PPC_FUNC_IMPL(__imp__sub_82333260) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333268"))) PPC_WEAK_FUNC(sub_82333268);
PPC_FUNC_IMPL(__imp__sub_82333268) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333278
	if (ctx.cr6.eq) goto loc_82333278;
	// b 0x822e1bd0
	sub_822E1BD0(ctx, base);
	return;
loc_82333278:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333280"))) PPC_WEAK_FUNC(sub_82333280);
PPC_FUNC_IMPL(__imp__sub_82333280) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333288"))) PPC_WEAK_FUNC(sub_82333288);
PPC_FUNC_IMPL(__imp__sub_82333288) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233329c
	if (ctx.cr6.eq) goto loc_8233329C;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// blr 
	return;
loc_8233329C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823332A8"))) PPC_WEAK_FUNC(sub_823332A8);
PPC_FUNC_IMPL(__imp__sub_823332A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823332B0"))) PPC_WEAK_FUNC(sub_823332B0);
PPC_FUNC_IMPL(__imp__sub_823332B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x823332B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31973
	ctx.r31.s64 = -2095382528;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-27544
	ctx.r29.s64 = ctx.r10.s64 + -27544;
	// lwz r11,7572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7572);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823332e8
	if (!ctx.cr6.eq) goto loc_823332E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d04a0
	ctx.lr = 0x823332DC;
	sub_823D04A0(ctx, base);
	// stw r3,7572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7572, ctx.r3.u32);
	// bl 0x823ca010
	ctx.lr = 0x823332E4;
	sub_823CA010(ctx, base);
	// lwz r11,7572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7572);
loc_823332E8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,6056(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6056);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8233331c
	if (ctx.cr6.eq) goto loc_8233331C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333320
	if (!ctx.cr6.eq) goto loc_82333320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d04a0
	ctx.lr = 0x82333308;
	sub_823D04A0(ctx, base);
	// stw r3,7572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7572, ctx.r3.u32);
	// bl 0x823ca010
	ctx.lr = 0x82333310;
	sub_823CA010(ctx, base);
	// lwz r10,6056(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6056);
	// lwz r11,7572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7572);
	// b 0x82333320
	goto loc_82333320;
loc_8233331C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82333320:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333350
	if (!ctx.cr6.eq) goto loc_82333350;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82333344;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8233334C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82333350:
	// lwz r10,6056(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6056);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233337c
	if (!ctx.cr6.eq) goto loc_8233337C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82333370;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82333378;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8233337C:
	// lwz r10,6056(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6056);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82333388;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823333d4
	if (ctx.cr6.eq) goto loc_823333D4;
	// lwz r3,6056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6056);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x823333bc
	if (!ctx.cr6.eq) goto loc_823333BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823333AC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823333B4;
	sub_824455B8(ctx, base);
	// lwz r3,6056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6056);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823333BC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823333d4
	if (!ctx.cr6.eq) goto loc_823333D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823333D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823333D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823333E0"))) PPC_WEAK_FUNC(sub_823333E0);
PPC_FUNC_IMPL(__imp__sub_823333E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r10,r10,22056
	ctx.r10.s64 = ctx.r10.s64 + 22056;
	// addi r11,r11,27960
	ctx.r11.s64 = ctx.r11.s64 + 27960;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333400"))) PPC_WEAK_FUNC(sub_82333400);
PPC_FUNC_IMPL(__imp__sub_82333400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31973
	ctx.r31.s64 = -2095382528;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,7572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7572);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333444
	if (!ctx.cr6.eq) goto loc_82333444;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-27544
	ctx.r3.s64 = ctx.r11.s64 + -27544;
	// bl 0x823d04a0
	ctx.lr = 0x82333438;
	sub_823D04A0(ctx, base);
	// stw r3,7572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7572, ctx.r3.u32);
	// bl 0x823ca010
	ctx.lr = 0x82333440;
	sub_823CA010(ctx, base);
	// lwz r11,7572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7572);
loc_82333444:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333470"))) PPC_WEAK_FUNC(sub_82333470);
PPC_FUNC_IMPL(__imp__sub_82333470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82333478;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,-996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823334a8
	if (!ctx.cr6.eq) goto loc_823334A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826ea1a8
	ctx.lr = 0x8233349C;
	sub_826EA1A8(ctx, base);
	// stw r3,-996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -996, ctx.r3.u32);
	// bl 0x826d3228
	ctx.lr = 0x823334A4;
	sub_826D3228(ctx, base);
	// lwz r11,-996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -996);
loc_823334A8:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,6060(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6060);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823334dc
	if (ctx.cr6.eq) goto loc_823334DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823334e0
	if (!ctx.cr6.eq) goto loc_823334E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826ea1a8
	ctx.lr = 0x823334C8;
	sub_826EA1A8(ctx, base);
	// stw r3,-996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -996, ctx.r3.u32);
	// bl 0x826d3228
	ctx.lr = 0x823334D0;
	sub_826D3228(ctx, base);
	// lwz r10,6060(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6060);
	// lwz r11,-996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -996);
	// b 0x823334e0
	goto loc_823334E0;
loc_823334DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823334E0:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333510
	if (!ctx.cr6.eq) goto loc_82333510;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82333504;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8233350C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82333510:
	// lwz r10,6060(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6060);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233353c
	if (!ctx.cr6.eq) goto loc_8233353C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82333530;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82333538;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8233353C:
	// lwz r10,6060(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6060);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82333548;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82333594
	if (ctx.cr6.eq) goto loc_82333594;
	// lwz r3,6060(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6060);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8233357c
	if (!ctx.cr6.eq) goto loc_8233357C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8233356C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82333574;
	sub_824455B8(ctx, base);
	// lwz r3,6060(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6060);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8233357C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82333594
	if (!ctx.cr6.eq) goto loc_82333594;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82333594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82333594:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823335A0"))) PPC_WEAK_FUNC(sub_823335A0);
PPC_FUNC_IMPL(__imp__sub_823335A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823335A8"))) PPC_WEAK_FUNC(sub_823335A8);
PPC_FUNC_IMPL(__imp__sub_823335A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -996);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823335ec
	if (!ctx.cr6.eq) goto loc_823335EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28540
	ctx.r3.s64 = ctx.r11.s64 + -28540;
	// bl 0x826ea1a8
	ctx.lr = 0x823335E0;
	sub_826EA1A8(ctx, base);
	// stw r3,-996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -996, ctx.r3.u32);
	// bl 0x826d3228
	ctx.lr = 0x823335E8;
	sub_826D3228(ctx, base);
	// lwz r11,-996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -996);
loc_823335EC:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333618"))) PPC_WEAK_FUNC(sub_82333618);
PPC_FUNC_IMPL(__imp__sub_82333618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82333620;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333650
	if (!ctx.cr6.eq) goto loc_82333650;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82437748
	ctx.lr = 0x82333644;
	sub_82437748(ctx, base);
	// stw r3,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r3.u32);
	// bl 0x824474c0
	ctx.lr = 0x8233364C;
	sub_824474C0(ctx, base);
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
loc_82333650:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,6064(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6064);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82333684
	if (ctx.cr6.eq) goto loc_82333684;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333688
	if (!ctx.cr6.eq) goto loc_82333688;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82437748
	ctx.lr = 0x82333670;
	sub_82437748(ctx, base);
	// stw r3,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r3.u32);
	// bl 0x824474c0
	ctx.lr = 0x82333678;
	sub_824474C0(ctx, base);
	// lwz r10,6064(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6064);
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// b 0x82333688
	goto loc_82333688;
loc_82333684:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82333688:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823336b0
	if (!ctx.cr6.eq) goto loc_823336B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x823336A4;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x823336AC;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_823336B0:
	// lwz r10,6064(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6064);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823336dc
	if (!ctx.cr6.eq) goto loc_823336DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823336D0;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823336D8;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823336DC:
	// lwz r10,6064(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6064);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x823336E8;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82333734
	if (ctx.cr6.eq) goto loc_82333734;
	// lwz r3,6064(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6064);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8233371c
	if (!ctx.cr6.eq) goto loc_8233371C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x8233370C;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82333714;
	sub_824455B8(ctx, base);
	// lwz r3,6064(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6064);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8233371C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82333734
	if (!ctx.cr6.eq) goto loc_82333734;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82333734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82333734:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82333740"))) PPC_WEAK_FUNC(sub_82333740);
PPC_FUNC_IMPL(__imp__sub_82333740) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333748"))) PPC_WEAK_FUNC(sub_82333748);
PPC_FUNC_IMPL(__imp__sub_82333748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233378c
	if (!ctx.cr6.eq) goto loc_8233378C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28548
	ctx.r3.s64 = ctx.r11.s64 + -28548;
	// bl 0x82437748
	ctx.lr = 0x82333780;
	sub_82437748(ctx, base);
	// stw r3,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r3.u32);
	// bl 0x824474c0
	ctx.lr = 0x82333788;
	sub_824474C0(ctx, base);
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
loc_8233378C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823337B8"))) PPC_WEAK_FUNC(sub_823337B8);
PPC_FUNC_IMPL(__imp__sub_823337B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x823337C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28548
	ctx.r29.s64 = ctx.r10.s64 + -28548;
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823337f0
	if (!ctx.cr6.eq) goto loc_823337F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82437748
	ctx.lr = 0x823337E4;
	sub_82437748(ctx, base);
	// stw r3,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r3.u32);
	// bl 0x824474c0
	ctx.lr = 0x823337EC;
	sub_824474C0(ctx, base);
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
loc_823337F0:
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r10,6068(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6068);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82333824
	if (ctx.cr6.eq) goto loc_82333824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333828
	if (!ctx.cr6.eq) goto loc_82333828;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82437748
	ctx.lr = 0x82333810;
	sub_82437748(ctx, base);
	// stw r3,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r3.u32);
	// bl 0x824474c0
	ctx.lr = 0x82333818;
	sub_824474C0(ctx, base);
	// lwz r10,6068(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6068);
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// b 0x82333828
	goto loc_82333828;
loc_82333824:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82333828:
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82333850
	if (!ctx.cr6.eq) goto loc_82333850;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82462518
	ctx.lr = 0x82333844;
	sub_82462518(ctx, base);
	// stw r3,19848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19848, ctx.r3.u32);
	// bl 0x8245f220
	ctx.lr = 0x8233384C;
	sub_8245F220(ctx, base);
	// lwz r11,19848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19848);
loc_82333850:
	// lwz r10,6068(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6068);
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233387c
	if (!ctx.cr6.eq) goto loc_8233387C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x82333870;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x82333878;
	sub_824455B8(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_8233387C:
	// lwz r10,6068(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6068);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x8245efa0
	ctx.lr = 0x82333888;
	sub_8245EFA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823338d4
	if (ctx.cr6.eq) goto loc_823338D4;
	// lwz r3,6068(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6068);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x823338bc
	if (!ctx.cr6.eq) goto loc_823338BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8243aa40
	ctx.lr = 0x823338AC;
	sub_8243AA40(ctx, base);
	// stw r3,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r3.u32);
	// bl 0x824455b8
	ctx.lr = 0x823338B4;
	sub_824455B8(ctx, base);
	// lwz r3,6068(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6068);
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
loc_823338BC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823338d4
	if (!ctx.cr6.eq) goto loc_823338D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823338D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823338D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823338E0"))) PPC_WEAK_FUNC(sub_823338E0);
PPC_FUNC_IMPL(__imp__sub_823338E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823338E8"))) PPC_WEAK_FUNC(sub_823338E8);
PPC_FUNC_IMPL(__imp__sub_823338E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31971
	ctx.r31.s64 = -2095251456;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233392c
	if (!ctx.cr6.eq) goto loc_8233392C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28548
	ctx.r3.s64 = ctx.r11.s64 + -28548;
	// bl 0x82437748
	ctx.lr = 0x82333920;
	sub_82437748(ctx, base);
	// stw r3,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r3.u32);
	// bl 0x824474c0
	ctx.lr = 0x82333928;
	sub_824474C0(ctx, base);
	// lwz r11,1308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
loc_8233392C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333958"))) PPC_WEAK_FUNC(sub_82333958);
PPC_FUNC_IMPL(__imp__sub_82333958) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333960"))) PPC_WEAK_FUNC(sub_82333960);
PPC_FUNC_IMPL(__imp__sub_82333960) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333968"))) PPC_WEAK_FUNC(sub_82333968);
PPC_FUNC_IMPL(__imp__sub_82333968) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r10,r10,22056
	ctx.r10.s64 = ctx.r10.s64 + 22056;
	// addi r11,r11,27960
	ctx.r11.s64 = ctx.r11.s64 + 27960;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333988"))) PPC_WEAK_FUNC(sub_82333988);
PPC_FUNC_IMPL(__imp__sub_82333988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82333990;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r10,-15144
	ctx.r30.s64 = ctx.r10.s64 + -15144;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823339D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,-13892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82333A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x82333a48
	if (!ctx.cr6.eq) goto loc_82333A48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82333A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82333A48:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82333A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82333A70"))) PPC_WEAK_FUNC(sub_82333A70);
PPC_FUNC_IMPL(__imp__sub_82333A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82333A78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r10,-15144
	ctx.r30.s64 = ctx.r10.s64 + -15144;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82333ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,-13892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82333AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x82333b30
	if (!ctx.cr6.eq) goto loc_82333B30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82333B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82333B30:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82333B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82333B58"))) PPC_WEAK_FUNC(sub_82333B58);
PPC_FUNC_IMPL(__imp__sub_82333B58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333B60"))) PPC_WEAK_FUNC(sub_82333B60);
PPC_FUNC_IMPL(__imp__sub_82333B60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333B68"))) PPC_WEAK_FUNC(sub_82333B68);
PPC_FUNC_IMPL(__imp__sub_82333B68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333B70"))) PPC_WEAK_FUNC(sub_82333B70);
PPC_FUNC_IMPL(__imp__sub_82333B70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333B78"))) PPC_WEAK_FUNC(sub_82333B78);
PPC_FUNC_IMPL(__imp__sub_82333B78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r10,r10,22056
	ctx.r10.s64 = ctx.r10.s64 + 22056;
	// addi r11,r11,27960
	ctx.r11.s64 = ctx.r11.s64 + 27960;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333B98"))) PPC_WEAK_FUNC(sub_82333B98);
PPC_FUNC_IMPL(__imp__sub_82333B98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r10,r10,22056
	ctx.r10.s64 = ctx.r10.s64 + 22056;
	// addi r11,r11,27960
	ctx.r11.s64 = ctx.r11.s64 + 27960;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333BB8"))) PPC_WEAK_FUNC(sub_82333BB8);
PPC_FUNC_IMPL(__imp__sub_82333BB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333BC0"))) PPC_WEAK_FUNC(sub_82333BC0);
PPC_FUNC_IMPL(__imp__sub_82333BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,460(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 460, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333BD0"))) PPC_WEAK_FUNC(sub_82333BD0);
PPC_FUNC_IMPL(__imp__sub_82333BD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333BD8"))) PPC_WEAK_FUNC(sub_82333BD8);
PPC_FUNC_IMPL(__imp__sub_82333BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x823eb010
	ctx.lr = 0x82333BF8;
	sub_823EB010(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fmadds f1,f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333C18"))) PPC_WEAK_FUNC(sub_82333C18);
PPC_FUNC_IMPL(__imp__sub_82333C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82333C20;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82e28f18
	ctx.lr = 0x82333C28;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// std r5,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// std r6,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// std r7,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333e74
	if (ctx.cr6.eq) goto loc_82333E74;
	// lfs f30,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x823eb010
	ctx.lr = 0x82333C5C;
	sub_823EB010(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f29,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f31,f1,f0,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823eb010
	ctx.lr = 0x82333C70;
	sub_823EB010(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// fsubs f13,f29,f30
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// lfs f1,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmadds f2,f0,f13,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// bl 0x82a603b0
	ctx.lr = 0x82333C8C;
	sub_82A603B0(ctx, base);
	// lfs f30,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x823eb010
	ctx.lr = 0x82333C98;
	sub_823EB010(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f29,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f31,f1,f0,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823eb010
	ctx.lr = 0x82333CAC;
	sub_823EB010(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// fsubs f13,f29,f30
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// lfs f1,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmadds f2,f0,f13,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// bl 0x82a603b0
	ctx.lr = 0x82333CC8;
	sub_82A603B0(ctx, base);
	// lfs f30,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x823eb010
	ctx.lr = 0x82333CD4;
	sub_823EB010(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f29,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f31,f1,f0,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823eb010
	ctx.lr = 0x82333CE8;
	sub_823EB010(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// fsubs f13,f29,f30
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// lfs f1,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmadds f2,f0,f13,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// bl 0x82a603b0
	ctx.lr = 0x82333D04;
	sub_82A603B0(ctx, base);
	// lfs f30,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x823eb010
	ctx.lr = 0x82333D10;
	sub_823EB010(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f29,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f31,f1,f0,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823eb010
	ctx.lr = 0x82333D24;
	sub_823EB010(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// fsubs f13,f29,f30
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// lfs f1,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmadds f2,f0,f13,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// bl 0x82a603b0
	ctx.lr = 0x82333D40;
	sub_82A603B0(ctx, base);
	// lfs f30,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x823eb010
	ctx.lr = 0x82333D4C;
	sub_823EB010(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f29,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f31,f1,f0,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823eb010
	ctx.lr = 0x82333D60;
	sub_823EB010(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// fsubs f13,f29,f30
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// lfs f1,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmadds f2,f0,f13,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// bl 0x82a603b0
	ctx.lr = 0x82333D7C;
	sub_82A603B0(ctx, base);
	// lfs f30,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x823eb010
	ctx.lr = 0x82333D88;
	sub_823EB010(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f29,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f31,f1,f0,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823eb010
	ctx.lr = 0x82333D9C;
	sub_823EB010(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// fsubs f13,f29,f30
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// lfs f1,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmadds f2,f0,f13,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// bl 0x82a603b0
	ctx.lr = 0x82333DB8;
	sub_82A603B0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f3,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f3.f64 = double(temp.f32);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lfs f2,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a60240
	ctx.lr = 0x82333DD0;
	sub_82A60240(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r7,224(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r6,228(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lfs f0,-13892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stfs f28,220(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r29,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r29.u32);
loc_82333E74:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82e28f64
	ctx.lr = 0x82333E80;
	__restfpr_28(ctx, base);
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82333E88"))) PPC_WEAK_FUNC(sub_82333E88);
PPC_FUNC_IMPL(__imp__sub_82333E88) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

