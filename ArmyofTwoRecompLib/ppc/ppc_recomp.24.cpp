#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8232A6F8"))) PPC_WEAK_FUNC(sub_8232A6F8);
PPC_FUNC_IMPL(__imp__sub_8232A6F8) {
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
	ctx.lr = 0x8232A730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8232a780
	if (!ctx.cr6.eq) goto loc_8232A780;
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
	ctx.lr = 0x8232A780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232A780:
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

__attribute__((alias("__imp__sub_8232A7A8"))) PPC_WEAK_FUNC(sub_8232A7A8);
PPC_FUNC_IMPL(__imp__sub_8232A7A8) {
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
	ctx.lr = 0x8232A7E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8232a830
	if (!ctx.cr6.eq) goto loc_8232A830;
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
	ctx.lr = 0x8232A830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232A830:
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

__attribute__((alias("__imp__sub_8232A858"))) PPC_WEAK_FUNC(sub_8232A858);
PPC_FUNC_IMPL(__imp__sub_8232A858) {
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
	// bne cr6,0x8232a880
	if (!ctx.cr6.eq) goto loc_8232A880;
	// li r30,19
	ctx.r30.s64 = 19;
loc_8232A880:
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
	ctx.lr = 0x8232A8A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8232a8d8
	if (!ctx.cr6.eq) goto loc_8232A8D8;
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
	ctx.lr = 0x8232A8D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232A8D8:
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
	// beq cr6,0x8232a90c
	if (ctx.cr6.eq) goto loc_8232A90C;
loc_8232A8F8:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232a8f8
	if (!ctx.cr6.eq) goto loc_8232A8F8;
loc_8232A90C:
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

__attribute__((alias("__imp__sub_8232A928"))) PPC_WEAK_FUNC(sub_8232A928);
PPC_FUNC_IMPL(__imp__sub_8232A928) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8232a97c
	if (ctx.cr6.gt) goto loc_8232A97C;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-22188
	ctx.r12.s64 = ctx.r12.s64 + -22188;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8232A978;
	case 1:
		goto loc_8232A974;
	case 2:
		goto loc_8232A97C;
	case 3:
		goto loc_8232A96C;
	case 4:
		goto loc_8232A968;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-22152(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -22152);
	// lwz r17,-22156(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -22156);
	// lwz r17,-22148(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -22148);
	// lwz r17,-22164(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -22164);
	// lwz r17,-22168(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -22168);
loc_8232A968:
	// li r9,8
	ctx.r9.s64 = 8;
loc_8232A96C:
	// addi r9,r9,9
	ctx.r9.s64 = ctx.r9.s64 + 9;
	// b 0x8232a97c
	goto loc_8232A97C;
loc_8232A974:
	// li r9,11
	ctx.r9.s64 = 11;
loc_8232A978:
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
loc_8232A97C:
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bgt cr6,0x8232b194
	if (ctx.cr6.gt) goto loc_8232B194;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-22112
	ctx.r12.s64 = ctx.r12.s64 + -22112;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8232B0E0;
	case 1:
		goto loc_8232B194;
	case 2:
		goto loc_8232B194;
	case 3:
		goto loc_8232B194;
	case 4:
		goto loc_8232AFA0;
	case 5:
		goto loc_8232AEE4;
	case 6:
		goto loc_8232ADE0;
	case 7:
		goto loc_8232AD30;
	case 8:
		goto loc_8232A9C4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-20256(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20256);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20576(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20576);
	// lwz r17,-20764(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20764);
	// lwz r17,-21024(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21024);
	// lwz r17,-21200(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21200);
	// lwz r17,-22076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -22076);
loc_8232A9C4:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,199
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 199, ctx.xer);
	// bgt cr6,0x8232b194
	if (ctx.cr6.gt) goto loc_8232B194;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-22040
	ctx.r12.s64 = ctx.r12.s64 + -22040;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8232B190;
	case 1:
		goto loc_8232B18C;
	case 2:
		goto loc_8232B188;
	case 3:
		goto loc_8232B194;
	case 4:
		goto loc_8232AD28;
	case 5:
		goto loc_8232AD24;
	case 6:
		goto loc_8232AD20;
	case 7:
		goto loc_8232B194;
	case 8:
		goto loc_8232AD10;
	case 9:
		goto loc_8232B194;
	case 10:
		goto loc_8232B194;
	case 11:
		goto loc_8232B194;
	case 12:
		goto loc_8232B194;
	case 13:
		goto loc_8232B194;
	case 14:
		goto loc_8232B194;
	case 15:
		goto loc_8232B194;
	case 16:
		goto loc_8232B194;
	case 17:
		goto loc_8232B194;
	case 18:
		goto loc_8232B194;
	case 19:
		goto loc_8232B194;
	case 20:
		goto loc_8232B194;
	case 21:
		goto loc_8232B194;
	case 22:
		goto loc_8232B194;
	case 23:
		goto loc_8232B194;
	case 24:
		goto loc_8232B194;
	case 25:
		goto loc_8232B194;
	case 26:
		goto loc_8232B194;
	case 27:
		goto loc_8232B194;
	case 28:
		goto loc_8232B194;
	case 29:
		goto loc_8232B194;
	case 30:
		goto loc_8232B184;
	case 31:
		goto loc_8232B194;
	case 32:
		goto loc_8232B194;
	case 33:
		goto loc_8232B194;
	case 34:
		goto loc_8232B194;
	case 35:
		goto loc_8232B194;
	case 36:
		goto loc_8232B194;
	case 37:
		goto loc_8232B194;
	case 38:
		goto loc_8232B194;
	case 39:
		goto loc_8232B194;
	case 40:
		goto loc_8232B194;
	case 41:
		goto loc_8232B194;
	case 42:
		goto loc_8232B194;
	case 43:
		goto loc_8232B194;
	case 44:
		goto loc_8232B194;
	case 45:
		goto loc_8232B194;
	case 46:
		goto loc_8232B194;
	case 47:
		goto loc_8232B194;
	case 48:
		goto loc_8232B194;
	case 49:
		goto loc_8232B194;
	case 50:
		goto loc_8232B194;
	case 51:
		goto loc_8232B194;
	case 52:
		goto loc_8232B194;
	case 53:
		goto loc_8232B194;
	case 54:
		goto loc_8232B194;
	case 55:
		goto loc_8232B194;
	case 56:
		goto loc_8232B194;
	case 57:
		goto loc_8232B194;
	case 58:
		goto loc_8232B194;
	case 59:
		goto loc_8232B194;
	case 60:
		goto loc_8232B194;
	case 61:
		goto loc_8232B194;
	case 62:
		goto loc_8232B194;
	case 63:
		goto loc_8232B194;
	case 64:
		goto loc_8232B194;
	case 65:
		goto loc_8232B194;
	case 66:
		goto loc_8232B194;
	case 67:
		goto loc_8232B194;
	case 68:
		goto loc_8232B194;
	case 69:
		goto loc_8232B194;
	case 70:
		goto loc_8232AD1C;
	case 71:
		goto loc_8232AD18;
	case 72:
		goto loc_8232AD14;
	case 73:
		goto loc_8232B194;
	case 74:
		goto loc_8232B194;
	case 75:
		goto loc_8232B194;
	case 76:
		goto loc_8232B194;
	case 77:
		goto loc_8232B194;
	case 78:
		goto loc_8232B194;
	case 79:
		goto loc_8232B194;
	case 80:
		goto loc_8232B194;
	case 81:
		goto loc_8232B194;
	case 82:
		goto loc_8232B194;
	case 83:
		goto loc_8232B194;
	case 84:
		goto loc_8232B194;
	case 85:
		goto loc_8232B194;
	case 86:
		goto loc_8232B194;
	case 87:
		goto loc_8232B194;
	case 88:
		goto loc_8232B194;
	case 89:
		goto loc_8232B194;
	case 90:
		goto loc_8232AD0C;
	case 91:
		goto loc_8232B194;
	case 92:
		goto loc_8232B194;
	case 93:
		goto loc_8232B194;
	case 94:
		goto loc_8232B194;
	case 95:
		goto loc_8232B194;
	case 96:
		goto loc_8232B194;
	case 97:
		goto loc_8232B194;
	case 98:
		goto loc_8232B194;
	case 99:
		goto loc_8232B194;
	case 100:
		goto loc_8232B194;
	case 101:
		goto loc_8232B194;
	case 102:
		goto loc_8232B194;
	case 103:
		goto loc_8232B194;
	case 104:
		goto loc_8232B194;
	case 105:
		goto loc_8232B194;
	case 106:
		goto loc_8232B194;
	case 107:
		goto loc_8232B194;
	case 108:
		goto loc_8232B194;
	case 109:
		goto loc_8232B194;
	case 110:
		goto loc_8232B194;
	case 111:
		goto loc_8232B194;
	case 112:
		goto loc_8232B194;
	case 113:
		goto loc_8232B194;
	case 114:
		goto loc_8232B194;
	case 115:
		goto loc_8232B194;
	case 116:
		goto loc_8232B194;
	case 117:
		goto loc_8232B194;
	case 118:
		goto loc_8232B194;
	case 119:
		goto loc_8232B194;
	case 120:
		goto loc_8232B194;
	case 121:
		goto loc_8232B194;
	case 122:
		goto loc_8232B194;
	case 123:
		goto loc_8232B194;
	case 124:
		goto loc_8232B194;
	case 125:
		goto loc_8232B194;
	case 126:
		goto loc_8232B194;
	case 127:
		goto loc_8232B194;
	case 128:
		goto loc_8232B194;
	case 129:
		goto loc_8232B194;
	case 130:
		goto loc_8232B194;
	case 131:
		goto loc_8232B194;
	case 132:
		goto loc_8232B194;
	case 133:
		goto loc_8232B194;
	case 134:
		goto loc_8232B194;
	case 135:
		goto loc_8232B194;
	case 136:
		goto loc_8232B194;
	case 137:
		goto loc_8232B194;
	case 138:
		goto loc_8232B194;
	case 139:
		goto loc_8232B194;
	case 140:
		goto loc_8232B194;
	case 141:
		goto loc_8232B194;
	case 142:
		goto loc_8232B194;
	case 143:
		goto loc_8232B194;
	case 144:
		goto loc_8232B194;
	case 145:
		goto loc_8232B194;
	case 146:
		goto loc_8232B194;
	case 147:
		goto loc_8232B194;
	case 148:
		goto loc_8232B194;
	case 149:
		goto loc_8232B194;
	case 150:
		goto loc_8232B194;
	case 151:
		goto loc_8232B194;
	case 152:
		goto loc_8232B194;
	case 153:
		goto loc_8232B194;
	case 154:
		goto loc_8232B194;
	case 155:
		goto loc_8232B194;
	case 156:
		goto loc_8232B194;
	case 157:
		goto loc_8232B194;
	case 158:
		goto loc_8232B194;
	case 159:
		goto loc_8232B194;
	case 160:
		goto loc_8232B194;
	case 161:
		goto loc_8232B194;
	case 162:
		goto loc_8232B194;
	case 163:
		goto loc_8232B194;
	case 164:
		goto loc_8232B194;
	case 165:
		goto loc_8232B194;
	case 166:
		goto loc_8232B194;
	case 167:
		goto loc_8232B194;
	case 168:
		goto loc_8232B194;
	case 169:
		goto loc_8232B194;
	case 170:
		goto loc_8232B194;
	case 171:
		goto loc_8232B194;
	case 172:
		goto loc_8232B194;
	case 173:
		goto loc_8232B194;
	case 174:
		goto loc_8232B194;
	case 175:
		goto loc_8232B194;
	case 176:
		goto loc_8232B194;
	case 177:
		goto loc_8232B194;
	case 178:
		goto loc_8232B194;
	case 179:
		goto loc_8232B194;
	case 180:
		goto loc_8232B194;
	case 181:
		goto loc_8232B194;
	case 182:
		goto loc_8232B194;
	case 183:
		goto loc_8232B194;
	case 184:
		goto loc_8232B194;
	case 185:
		goto loc_8232B194;
	case 186:
		goto loc_8232B194;
	case 187:
		goto loc_8232B194;
	case 188:
		goto loc_8232B194;
	case 189:
		goto loc_8232B194;
	case 190:
		goto loc_8232B194;
	case 191:
		goto loc_8232B194;
	case 192:
		goto loc_8232B194;
	case 193:
		goto loc_8232B194;
	case 194:
		goto loc_8232B194;
	case 195:
		goto loc_8232B194;
	case 196:
		goto loc_8232B194;
	case 197:
		goto loc_8232B194;
	case 198:
		goto loc_8232B194;
	case 199:
		goto loc_8232AD08;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-20080(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20080);
	// lwz r17,-20084(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20084);
	// lwz r17,-20088(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20088);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-21208(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21208);
	// lwz r17,-21212(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21212);
	// lwz r17,-21216(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21216);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-21232(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21232);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20092(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20092);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-21220(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21220);
	// lwz r17,-21224(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21224);
	// lwz r17,-21228(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21228);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-21236(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21236);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-21240(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21240);
loc_8232AD08:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8232AD0C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232AD10:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232AD14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232AD18:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232AD1C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232AD20:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232AD24:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232AD28:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8232b184
	goto loc_8232B184;
loc_8232AD30:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// bgt cr6,0x8232b194
	if (ctx.cr6.gt) goto loc_8232B194;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-21164
	ctx.r12.s64 = ctx.r12.s64 + -21164;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8232B18C;
	case 1:
		goto loc_8232B188;
	case 2:
		goto loc_8232B184;
	case 3:
		goto loc_8232ADD4;
	case 4:
		goto loc_8232ADD0;
	case 5:
		goto loc_8232B194;
	case 6:
		goto loc_8232B194;
	case 7:
		goto loc_8232B194;
	case 8:
		goto loc_8232B194;
	case 9:
		goto loc_8232B194;
	case 10:
		goto loc_8232B190;
	case 11:
		goto loc_8232B194;
	case 12:
		goto loc_8232B194;
	case 13:
		goto loc_8232B194;
	case 14:
		goto loc_8232B194;
	case 15:
		goto loc_8232B194;
	case 16:
		goto loc_8232B194;
	case 17:
		goto loc_8232B194;
	case 18:
		goto loc_8232B194;
	case 19:
		goto loc_8232B194;
	case 20:
		goto loc_8232B194;
	case 21:
		goto loc_8232B194;
	case 22:
		goto loc_8232B194;
	case 23:
		goto loc_8232B194;
	case 24:
		goto loc_8232B194;
	case 25:
		goto loc_8232B194;
	case 26:
		goto loc_8232B194;
	case 27:
		goto loc_8232B194;
	case 28:
		goto loc_8232B194;
	case 29:
		goto loc_8232B194;
	case 30:
		goto loc_8232ADD8;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-20084(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20084);
	// lwz r17,-20088(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20088);
	// lwz r17,-20092(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20092);
	// lwz r17,-21036(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21036);
	// lwz r17,-21040(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21040);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20080(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20080);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-21032(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21032);
loc_8232ADD0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8232ADD4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232ADD8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8232b184
	goto loc_8232B184;
loc_8232ADE0:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bgt cr6,0x8232b194
	if (ctx.cr6.gt) goto loc_8232B194;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-20988
	ctx.r12.s64 = ctx.r12.s64 + -20988;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8232B190;
	case 1:
		goto loc_8232B18C;
	case 2:
		goto loc_8232B188;
	case 3:
		goto loc_8232AEDC;
	case 4:
		goto loc_8232AED8;
	case 5:
		goto loc_8232AED0;
	case 6:
		goto loc_8232B194;
	case 7:
		goto loc_8232B194;
	case 8:
		goto loc_8232B194;
	case 9:
		goto loc_8232B194;
	case 10:
		goto loc_8232B194;
	case 11:
		goto loc_8232B194;
	case 12:
		goto loc_8232B194;
	case 13:
		goto loc_8232B194;
	case 14:
		goto loc_8232B194;
	case 15:
		goto loc_8232B194;
	case 16:
		goto loc_8232B194;
	case 17:
		goto loc_8232B194;
	case 18:
		goto loc_8232B194;
	case 19:
		goto loc_8232B194;
	case 20:
		goto loc_8232B194;
	case 21:
		goto loc_8232B194;
	case 22:
		goto loc_8232B194;
	case 23:
		goto loc_8232B194;
	case 24:
		goto loc_8232B194;
	case 25:
		goto loc_8232B194;
	case 26:
		goto loc_8232B194;
	case 27:
		goto loc_8232B194;
	case 28:
		goto loc_8232B194;
	case 29:
		goto loc_8232B194;
	case 30:
		goto loc_8232B184;
	case 31:
		goto loc_8232B194;
	case 32:
		goto loc_8232B194;
	case 33:
		goto loc_8232B194;
	case 34:
		goto loc_8232B194;
	case 35:
		goto loc_8232B194;
	case 36:
		goto loc_8232B194;
	case 37:
		goto loc_8232B194;
	case 38:
		goto loc_8232B194;
	case 39:
		goto loc_8232B194;
	case 40:
		goto loc_8232B194;
	case 41:
		goto loc_8232B194;
	case 42:
		goto loc_8232B194;
	case 43:
		goto loc_8232B194;
	case 44:
		goto loc_8232B194;
	case 45:
		goto loc_8232B194;
	case 46:
		goto loc_8232B194;
	case 47:
		goto loc_8232B194;
	case 48:
		goto loc_8232B194;
	case 49:
		goto loc_8232B194;
	case 50:
		goto loc_8232AED4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-20080(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20080);
	// lwz r17,-20084(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20084);
	// lwz r17,-20088(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20088);
	// lwz r17,-20772(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20772);
	// lwz r17,-20776(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20776);
	// lwz r17,-20784(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20784);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20092(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20092);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20780(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20780);
loc_8232AED0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8232AED4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232AED8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232AEDC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8232b184
	goto loc_8232B184;
loc_8232AEE4:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// bgt cr6,0x8232b194
	if (ctx.cr6.gt) goto loc_8232B194;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-20728
	ctx.r12.s64 = ctx.r12.s64 + -20728;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8232B18C;
	case 1:
		goto loc_8232B188;
	case 2:
		goto loc_8232AF94;
	case 3:
		goto loc_8232AF8C;
	case 4:
		goto loc_8232AF88;
	case 5:
		goto loc_8232AF84;
	case 6:
		goto loc_8232B194;
	case 7:
		goto loc_8232B194;
	case 8:
		goto loc_8232B194;
	case 9:
		goto loc_8232B194;
	case 10:
		goto loc_8232B190;
	case 11:
		goto loc_8232B194;
	case 12:
		goto loc_8232B194;
	case 13:
		goto loc_8232B194;
	case 14:
		goto loc_8232B194;
	case 15:
		goto loc_8232B194;
	case 16:
		goto loc_8232B194;
	case 17:
		goto loc_8232B194;
	case 18:
		goto loc_8232B194;
	case 19:
		goto loc_8232B194;
	case 20:
		goto loc_8232B184;
	case 21:
		goto loc_8232AF98;
	case 22:
		goto loc_8232B194;
	case 23:
		goto loc_8232B194;
	case 24:
		goto loc_8232B194;
	case 25:
		goto loc_8232B194;
	case 26:
		goto loc_8232B194;
	case 27:
		goto loc_8232B194;
	case 28:
		goto loc_8232B194;
	case 29:
		goto loc_8232B194;
	case 30:
		goto loc_8232AF90;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-20084(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20084);
	// lwz r17,-20088(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20088);
	// lwz r17,-20588(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20588);
	// lwz r17,-20596(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20596);
	// lwz r17,-20600(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20600);
	// lwz r17,-20604(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20604);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20080(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20080);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20092(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20092);
	// lwz r17,-20584(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20584);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20592);
loc_8232AF84:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8232AF88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232AF8C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232AF90:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232AF94:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232AF98:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8232b184
	goto loc_8232B184;
loc_8232AFA0:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,70
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 70, ctx.xer);
	// bgt cr6,0x8232b194
	if (ctx.cr6.gt) goto loc_8232B194;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-20540
	ctx.r12.s64 = ctx.r12.s64 + -20540;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8232B190;
	case 1:
		goto loc_8232B18C;
	case 2:
		goto loc_8232B188;
	case 3:
		goto loc_8232B184;
	case 4:
		goto loc_8232AF98;
	case 5:
		goto loc_8232AF94;
	case 6:
		goto loc_8232AF90;
	case 7:
		goto loc_8232AF88;
	case 8:
		goto loc_8232AF84;
	case 9:
		goto loc_8232B194;
	case 10:
		goto loc_8232B194;
	case 11:
		goto loc_8232B194;
	case 12:
		goto loc_8232B194;
	case 13:
		goto loc_8232B194;
	case 14:
		goto loc_8232B194;
	case 15:
		goto loc_8232B194;
	case 16:
		goto loc_8232B194;
	case 17:
		goto loc_8232B194;
	case 18:
		goto loc_8232B194;
	case 19:
		goto loc_8232B194;
	case 20:
		goto loc_8232B194;
	case 21:
		goto loc_8232B194;
	case 22:
		goto loc_8232B194;
	case 23:
		goto loc_8232B194;
	case 24:
		goto loc_8232B194;
	case 25:
		goto loc_8232B194;
	case 26:
		goto loc_8232B194;
	case 27:
		goto loc_8232B194;
	case 28:
		goto loc_8232B194;
	case 29:
		goto loc_8232B194;
	case 30:
		goto loc_8232B194;
	case 31:
		goto loc_8232B194;
	case 32:
		goto loc_8232B194;
	case 33:
		goto loc_8232B194;
	case 34:
		goto loc_8232B194;
	case 35:
		goto loc_8232B194;
	case 36:
		goto loc_8232B194;
	case 37:
		goto loc_8232B194;
	case 38:
		goto loc_8232B194;
	case 39:
		goto loc_8232B194;
	case 40:
		goto loc_8232B194;
	case 41:
		goto loc_8232B194;
	case 42:
		goto loc_8232B194;
	case 43:
		goto loc_8232B194;
	case 44:
		goto loc_8232B194;
	case 45:
		goto loc_8232B194;
	case 46:
		goto loc_8232B194;
	case 47:
		goto loc_8232B194;
	case 48:
		goto loc_8232B194;
	case 49:
		goto loc_8232B194;
	case 50:
		goto loc_8232B194;
	case 51:
		goto loc_8232B194;
	case 52:
		goto loc_8232B194;
	case 53:
		goto loc_8232B194;
	case 54:
		goto loc_8232B194;
	case 55:
		goto loc_8232B194;
	case 56:
		goto loc_8232B194;
	case 57:
		goto loc_8232B194;
	case 58:
		goto loc_8232B194;
	case 59:
		goto loc_8232B194;
	case 60:
		goto loc_8232B194;
	case 61:
		goto loc_8232B194;
	case 62:
		goto loc_8232B194;
	case 63:
		goto loc_8232B194;
	case 64:
		goto loc_8232B194;
	case 65:
		goto loc_8232B194;
	case 66:
		goto loc_8232B194;
	case 67:
		goto loc_8232B194;
	case 68:
		goto loc_8232B194;
	case 69:
		goto loc_8232B194;
	case 70:
		goto loc_8232AF8C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-20080(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20080);
	// lwz r17,-20084(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20084);
	// lwz r17,-20088(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20088);
	// lwz r17,-20092(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20092);
	// lwz r17,-20584(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20584);
	// lwz r17,-20588(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20588);
	// lwz r17,-20592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20592);
	// lwz r17,-20600(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20600);
	// lwz r17,-20604(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20604);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20596(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20596);
loc_8232B0E0:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// bgt cr6,0x8232b194
	if (ctx.cr6.gt) goto loc_8232B194;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-20220
	ctx.r12.s64 = ctx.r12.s64 + -20220;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8232B190;
	case 1:
		goto loc_8232B18C;
	case 2:
		goto loc_8232B188;
	case 3:
		goto loc_8232B180;
	case 4:
		goto loc_8232B194;
	case 5:
		goto loc_8232B194;
	case 6:
		goto loc_8232B194;
	case 7:
		goto loc_8232B194;
	case 8:
		goto loc_8232B194;
	case 9:
		goto loc_8232B194;
	case 10:
		goto loc_8232B194;
	case 11:
		goto loc_8232B194;
	case 12:
		goto loc_8232B194;
	case 13:
		goto loc_8232B194;
	case 14:
		goto loc_8232B194;
	case 15:
		goto loc_8232B194;
	case 16:
		goto loc_8232B194;
	case 17:
		goto loc_8232B194;
	case 18:
		goto loc_8232B194;
	case 19:
		goto loc_8232B194;
	case 20:
		goto loc_8232B194;
	case 21:
		goto loc_8232B194;
	case 22:
		goto loc_8232B194;
	case 23:
		goto loc_8232B194;
	case 24:
		goto loc_8232B194;
	case 25:
		goto loc_8232B194;
	case 26:
		goto loc_8232B194;
	case 27:
		goto loc_8232B194;
	case 28:
		goto loc_8232B194;
	case 29:
		goto loc_8232B194;
	case 30:
		goto loc_8232B184;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-20080(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20080);
	// lwz r17,-20084(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20084);
	// lwz r17,-20088(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20088);
	// lwz r17,-20096(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20096);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20076);
	// lwz r17,-20092(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -20092);
loc_8232B180:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8232B184:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232B188:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232B18C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232B190:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232B194:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// blt cr6,0x8232b1d4
	if (ctx.cr6.lt) goto loc_8232B1D4;
	// bne cr6,0x8232b1bc
	if (!ctx.cr6.eq) goto loc_8232B1BC;
	// cmpwi cr6,r5,100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 100, ctx.xer);
	// beq cr6,0x8232b1d0
	if (ctx.cr6.eq) goto loc_8232B1D0;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_8232B1BC:
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
loc_8232B1D0:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
loc_8232B1D4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8232b1ec
	if (!ctx.cr6.eq) goto loc_8232B1EC;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8232B1EC:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x8232b204
	if (!ctx.cr6.eq) goto loc_8232B204;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// oris r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 | 786432;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8232B204:
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

__attribute__((alias("__imp__sub_8232B220"))) PPC_WEAK_FUNC(sub_8232B220);
PPC_FUNC_IMPL(__imp__sub_8232B220) {
	PPC_FUNC_PROLOGUE();
	// b 0x82734610
	sub_82734610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232B228"))) PPC_WEAK_FUNC(sub_8232B228);
PPC_FUNC_IMPL(__imp__sub_8232B228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x826254d0
	sub_826254D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232B238"))) PPC_WEAK_FUNC(sub_8232B238);
PPC_FUNC_IMPL(__imp__sub_8232B238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B240"))) PPC_WEAK_FUNC(sub_8232B240);
PPC_FUNC_IMPL(__imp__sub_8232B240) {
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
	// beq cr6,0x8232b2bc
	if (ctx.cr6.eq) goto loc_8232B2BC;
	// lwz r11,3180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232b2bc
	if (ctx.cr6.eq) goto loc_8232B2BC;
	// lwz r11,2024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2024);
	// lwz r3,3180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3180);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 876);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232B284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232b2bc
	if (ctx.cr6.eq) goto loc_8232B2BC;
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232b2bc
	if (ctx.cr6.eq) goto loc_8232B2BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 812);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232B2B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8232b2c0
	if (!ctx.cr6.eq) goto loc_8232B2C0;
loc_8232B2BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232B2C0:
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

__attribute__((alias("__imp__sub_8232B2D8"))) PPC_WEAK_FUNC(sub_8232B2D8);
PPC_FUNC_IMPL(__imp__sub_8232B2D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B2E0"))) PPC_WEAK_FUNC(sub_8232B2E0);
PPC_FUNC_IMPL(__imp__sub_8232B2E0) {
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
	// bl 0x824165a8
	ctx.lr = 0x8232B310;
	sub_824165A8(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824165e8
	ctx.lr = 0x8232B31C;
	sub_824165E8(ctx, base);
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
	// bl 0x82421ce8
	ctx.lr = 0x8232B3A4;
	sub_82421CE8(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
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
	// lfs f0,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x824165e8
	ctx.lr = 0x8232B3DC;
	sub_824165E8(ctx, base);
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
	// bl 0x82421ce8
	ctx.lr = 0x8232B458;
	sub_82421CE8(ctx, base);
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

__attribute__((alias("__imp__sub_8232B4B8"))) PPC_WEAK_FUNC(sub_8232B4B8);
PPC_FUNC_IMPL(__imp__sub_8232B4B8) {
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

__attribute__((alias("__imp__sub_8232B4F8"))) PPC_WEAK_FUNC(sub_8232B4F8);
PPC_FUNC_IMPL(__imp__sub_8232B4F8) {
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
	// beq cr6,0x8232b518
	if (ctx.cr6.eq) goto loc_8232B518;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8232B518:
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// stb r4,3012(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3012, ctx.r4.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,21348(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21348);
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

__attribute__((alias("__imp__sub_8232B560"))) PPC_WEAK_FUNC(sub_8232B560);
PPC_FUNC_IMPL(__imp__sub_8232B560) {
	PPC_FUNC_PROLOGUE();
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r11,3024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3024);
	// lwz r10,24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8232b598
	if (!ctx.cr6.eq) goto loc_8232B598;
	// lwz r11,3028(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3028);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8232b598
	if (!ctx.cr6.eq) goto loc_8232B598;
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
loc_8232B598:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B5A0"))) PPC_WEAK_FUNC(sub_8232B5A0);
PPC_FUNC_IMPL(__imp__sub_8232B5A0) {
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
	// bne cr6,0x8232b5c8
	if (!ctx.cr6.eq) goto loc_8232B5C8;
	// lwz r10,3028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3028);
	// lwz r9,28(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8232b5d0
	if (ctx.cr6.eq) goto loc_8232B5D0;
loc_8232B5C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8232B5D0:
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lwz r9,3016(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3016);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,21344(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21344);
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

__attribute__((alias("__imp__sub_8232B5F8"))) PPC_WEAK_FUNC(sub_8232B5F8);
PPC_FUNC_IMPL(__imp__sub_8232B5F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3016(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3016);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B608"))) PPC_WEAK_FUNC(sub_8232B608);
PPC_FUNC_IMPL(__imp__sub_8232B608) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3100);
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232b62c
	if (ctx.cr6.eq) goto loc_8232B62C;
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
loc_8232B62C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B638"))) PPC_WEAK_FUNC(sub_8232B638);
PPC_FUNC_IMPL(__imp__sub_8232B638) {
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

__attribute__((alias("__imp__sub_8232B648"))) PPC_WEAK_FUNC(sub_8232B648);
PPC_FUNC_IMPL(__imp__sub_8232B648) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3016(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3016);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232b660
	if (ctx.cr6.eq) goto loc_8232B660;
	// lbz r3,3012(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3012);
	// blr 
	return;
loc_8232B660:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B668"))) PPC_WEAK_FUNC(sub_8232B668);
PPC_FUNC_IMPL(__imp__sub_8232B668) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B670"))) PPC_WEAK_FUNC(sub_8232B670);
PPC_FUNC_IMPL(__imp__sub_8232B670) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B678"))) PPC_WEAK_FUNC(sub_8232B678);
PPC_FUNC_IMPL(__imp__sub_8232B678) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B680"))) PPC_WEAK_FUNC(sub_8232B680);
PPC_FUNC_IMPL(__imp__sub_8232B680) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B688"))) PPC_WEAK_FUNC(sub_8232B688);
PPC_FUNC_IMPL(__imp__sub_8232B688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// lwz r3,4088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4088);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B698"))) PPC_WEAK_FUNC(sub_8232B698);
PPC_FUNC_IMPL(__imp__sub_8232B698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8232B6A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823e1bb8
	ctx.lr = 0x8232B6AC;
	sub_823E1BB8(ctx, base);
	// lis r10,27594
	ctx.r10.s64 = 1808400384;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,6899
	ctx.r9.u64 = ctx.r10.u64 | 6899;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// ld r4,1488(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1488);
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
	// bl 0x824621b8
	ctx.lr = 0x8232B6F4;
	sub_824621B8(ctx, base);
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
	ctx.lr = 0x8232B714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232B720"))) PPC_WEAK_FUNC(sub_8232B720);
PPC_FUNC_IMPL(__imp__sub_8232B720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8232B728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,20572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20572);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,20708
	ctx.r4.s64 = ctx.r11.s64 + 20708;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232B758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232b784
	if (ctx.cr6.eq) goto loc_8232B784;
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
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
loc_8232B784:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232B790"))) PPC_WEAK_FUNC(sub_8232B790);
PPC_FUNC_IMPL(__imp__sub_8232B790) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8232B79C:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8232b79c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232B79C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B7B8"))) PPC_WEAK_FUNC(sub_8232B7B8);
PPC_FUNC_IMPL(__imp__sub_8232B7B8) {
	PPC_FUNC_PROLOGUE();
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B7C0"))) PPC_WEAK_FUNC(sub_8232B7C0);
PPC_FUNC_IMPL(__imp__sub_8232B7C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1652(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1652);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B7C8"))) PPC_WEAK_FUNC(sub_8232B7C8);
PPC_FUNC_IMPL(__imp__sub_8232B7C8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// li r8,0
	ctx.r8.s64 = 0;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// lis r12,28479
	ctx.r12.s64 = 1866399744;
	// lfs f0,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
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
	// lfs f12,-28048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28048);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stfs f12,16(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f13,21344(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21344);
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

__attribute__((alias("__imp__sub_8232B848"))) PPC_WEAK_FUNC(sub_8232B848);
PPC_FUNC_IMPL(__imp__sub_8232B848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x8232B850;
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
	// beq cr6,0x8232b9a8
	if (ctx.cr6.eq) goto loc_8232B9A8;
	// addi r28,r30,464
	ctx.r28.s64 = ctx.r30.s64 + 464;
	// li r5,200
	ctx.r5.s64 = 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8232B87C;
	sub_82D5C630(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
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
	// lfs f0,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
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
	// lfs f12,-28048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28048);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stb r8,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r8.u8);
	// lfs f13,21344(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21344);
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
	// beq cr6,0x8232b97c
	if (ctx.cr6.eq) goto loc_8232B97C;
	// lwz r27,1048(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	// rlwinm r11,r27,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b944
	if (!ctx.cr6.eq) goto loc_8232B944;
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
	// bl 0x82d5c630
	ctx.lr = 0x8232B93C;
	sub_82D5C630(ctx, base);
	// rlwimi r27,r29,1,0,0
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r29.u32, 1) & 0x80000000) | (ctx.r27.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r27,1048(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1048, ctx.r27.u32);
loc_8232B944:
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
	// bl 0x82d5c630
	ctx.lr = 0x8232B968;
	sub_82D5C630(ctx, base);
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 452, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
loc_8232B97C:
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
	// bl 0x82d5c630
	ctx.lr = 0x8232B9A0;
	sub_82D5C630(ctx, base);
	// rlwimi r29,r31,31,1,1
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x40000000) | (ctx.r29.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r29,452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 452, ctx.r29.u32);
loc_8232B9A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232B9B0"))) PPC_WEAK_FUNC(sub_8232B9B0);
PPC_FUNC_IMPL(__imp__sub_8232B9B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B9B8"))) PPC_WEAK_FUNC(sub_8232B9B8);
PPC_FUNC_IMPL(__imp__sub_8232B9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232B9C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28988
	ctx.r29.s64 = ctx.r10.s64 + -28988;
	// lwz r11,-16724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16724);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b9f0
	if (!ctx.cr6.eq) goto loc_8232B9F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825cb668
	ctx.lr = 0x8232B9E4;
	sub_825CB668(ctx, base);
	// stw r3,-16724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16724, ctx.r3.u32);
	// bl 0x82596458
	ctx.lr = 0x8232B9EC;
	sub_82596458(ctx, base);
	// lwz r11,-16724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16724);
loc_8232B9F0:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4092(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4092);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232ba24
	if (ctx.cr6.eq) goto loc_8232BA24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ba28
	if (!ctx.cr6.eq) goto loc_8232BA28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825cb668
	ctx.lr = 0x8232BA10;
	sub_825CB668(ctx, base);
	// stw r3,-16724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16724, ctx.r3.u32);
	// bl 0x82596458
	ctx.lr = 0x8232BA18;
	sub_82596458(ctx, base);
	// lwz r10,4092(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4092);
	// lwz r11,-16724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16724);
	// b 0x8232ba28
	goto loc_8232BA28;
loc_8232BA24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232BA28:
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ba58
	if (!ctx.cr6.eq) goto loc_8232BA58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232BA4C;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232BA54;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232BA58:
	// lwz r10,4092(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4092);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ba84
	if (!ctx.cr6.eq) goto loc_8232BA84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232BA78;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232BA80;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232BA84:
	// lwz r10,4092(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4092);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232BA90;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232badc
	if (ctx.cr6.eq) goto loc_8232BADC;
	// lwz r3,4092(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4092);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232bac4
	if (!ctx.cr6.eq) goto loc_8232BAC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232BAB4;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232BABC;
	sub_8243CDD0(ctx, base);
	// lwz r3,4092(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4092);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232BAC4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232badc
	if (!ctx.cr6.eq) goto loc_8232BADC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232BADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232BADC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232BAE8"))) PPC_WEAK_FUNC(sub_8232BAE8);
PPC_FUNC_IMPL(__imp__sub_8232BAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r10,r10,10640
	ctx.r10.s64 = ctx.r10.s64 + 10640;
	// addi r11,r11,18600
	ctx.r11.s64 = ctx.r11.s64 + 18600;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BB08"))) PPC_WEAK_FUNC(sub_8232BB08);
PPC_FUNC_IMPL(__imp__sub_8232BB08) {
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
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-16724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16724);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232bb4c
	if (!ctx.cr6.eq) goto loc_8232BB4C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28988
	ctx.r3.s64 = ctx.r11.s64 + -28988;
	// bl 0x825cb668
	ctx.lr = 0x8232BB40;
	sub_825CB668(ctx, base);
	// stw r3,-16724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16724, ctx.r3.u32);
	// bl 0x82596458
	ctx.lr = 0x8232BB48;
	sub_82596458(ctx, base);
	// lwz r11,-16724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16724);
loc_8232BB4C:
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

__attribute__((alias("__imp__sub_8232BB78"))) PPC_WEAK_FUNC(sub_8232BB78);
PPC_FUNC_IMPL(__imp__sub_8232BB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232BB80;
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
	// beq cr6,0x8232bc04
	if (ctx.cr6.eq) goto loc_8232BC04;
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8232bc04
	if (ctx.cr6.eq) goto loc_8232BC04;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r28,172(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r30,r11,-28980
	ctx.r30.s64 = ctx.r11.s64 + -28980;
loc_8232BBB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8232bbc4
	if (ctx.cr6.eq) goto loc_8232BBC4;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// b 0x8232bbd8
	goto loc_8232BBD8;
loc_8232BBC4:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824340d0
	ctx.lr = 0x8232BBD8;
	sub_824340D0(ctx, base);
loc_8232BBD8:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x8232bbf8
	if (!ctx.cr6.eq) goto loc_8232BBF8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8232bc04
	if (ctx.cr6.eq) goto loc_8232BC04;
loc_8232BBF8:
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8232bbb0
	if (!ctx.cr6.eq) goto loc_8232BBB0;
loc_8232BC04:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232BC18"))) PPC_WEAK_FUNC(sub_8232BC18);
PPC_FUNC_IMPL(__imp__sub_8232BC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x8232BC20;
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
	ctx.lr = 0x8232BC40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8232bc70
	if (ctx.cr6.lt) goto loc_8232BC70;
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
	ctx.lr = 0x8232BC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8232bc74
	goto loc_8232BC74;
loc_8232BC70:
	// stw r30,412(r28)
	PPC_STORE_U32(ctx.r28.u32 + 412, ctx.r30.u32);
loc_8232BC74:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8232bcbc
	if (ctx.cr6.lt) goto loc_8232BCBC;
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
	ctx.lr = 0x8232BC9C;
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
	ctx.lr = 0x8232BCB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8232bcc4
	goto loc_8232BCC4;
loc_8232BCBC:
	// stw r30,404(r28)
	PPC_STORE_U32(ctx.r28.u32 + 404, ctx.r30.u32);
	// stw r30,408(r28)
	PPC_STORE_U32(ctx.r28.u32 + 408, ctx.r30.u32);
loc_8232BCC4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8232bcf0
	if (ctx.cr6.lt) goto loc_8232BCF0;
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
	ctx.lr = 0x8232BCEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8232bcf4
	goto loc_8232BCF4;
loc_8232BCF0:
	// stw r30,416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 416, ctx.r30.u32);
loc_8232BCF4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8232bd20
	if (ctx.cr6.lt) goto loc_8232BD20;
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
	ctx.lr = 0x8232BD1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8232bd28
	goto loc_8232BD28;
loc_8232BD20:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_8232BD28:
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82422590
	ctx.lr = 0x8232BD34;
	sub_82422590(ctx, base);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82422590
	ctx.lr = 0x8232BD40;
	sub_82422590(ctx, base);
	// addi r4,r28,32
	ctx.r4.s64 = ctx.r28.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82422590
	ctx.lr = 0x8232BD4C;
	sub_82422590(ctx, base);
	// addi r4,r28,44
	ctx.r4.s64 = ctx.r28.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82422590
	ctx.lr = 0x8232BD58;
	sub_82422590(ctx, base);
	// addi r4,r28,56
	ctx.r4.s64 = ctx.r28.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82422590
	ctx.lr = 0x8232BD64;
	sub_82422590(ctx, base);
	// addi r29,r28,164
	ctx.r29.s64 = ctx.r28.s64 + 164;
	// addi r30,r28,292
	ctx.r30.s64 = ctx.r28.s64 + 292;
	// li r26,2
	ctx.r26.s64 = 2;
loc_8232BD70:
	// li r27,4
	ctx.r27.s64 = 4;
loc_8232BD74:
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82422590
	ctx.lr = 0x8232BD80;
	sub_82422590(ctx, base);
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
	ctx.lr = 0x8232BD9C;
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
	ctx.lr = 0x8232BDB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8232bdd0
	if (ctx.cr6.lt) goto loc_8232BDD0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82422590
	ctx.lr = 0x8232BDD0;
	sub_82422590(ctx, base);
loc_8232BDD0:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8232bd74
	if (!ctx.cr6.eq) goto loc_8232BD74;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8232bd70
	if (!ctx.cr6.eq) goto loc_8232BD70;
	// addi r29,r28,324
	ctx.r29.s64 = ctx.r28.s64 + 324;
	// li r30,20
	ctx.r30.s64 = 20;
loc_8232BDF8:
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
	ctx.lr = 0x8232BE14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8232bdf8
	if (!ctx.cr6.eq) goto loc_8232BDF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232BE30"))) PPC_WEAK_FUNC(sub_8232BE30);
PPC_FUNC_IMPL(__imp__sub_8232BE30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BE38"))) PPC_WEAK_FUNC(sub_8232BE38);
PPC_FUNC_IMPL(__imp__sub_8232BE38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BE40"))) PPC_WEAK_FUNC(sub_8232BE40);
PPC_FUNC_IMPL(__imp__sub_8232BE40) {
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

__attribute__((alias("__imp__sub_8232BE50"))) PPC_WEAK_FUNC(sub_8232BE50);
PPC_FUNC_IMPL(__imp__sub_8232BE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232BE58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r10,-16968
	ctx.r30.s64 = ctx.r10.s64 + -16968;
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
	ctx.lr = 0x8232BE9C;
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
	ctx.lr = 0x8232BECC;
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
	// bne cr6,0x8232bf1c
	if (!ctx.cr6.eq) goto loc_8232BF1C;
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
	ctx.lr = 0x8232BF1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232BF1C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x8232bf30
	if (!ctx.cr6.eq) goto loc_8232BF30;
	// addi r11,r11,-37
	ctx.r11.s64 = ctx.r11.s64 + -37;
loc_8232BF30:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232BF40"))) PPC_WEAK_FUNC(sub_8232BF40);
PPC_FUNC_IMPL(__imp__sub_8232BF40) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-10
	ctx.r11.s64 = ctx.r3.s64 + -10;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x8232bf54
	if (!ctx.cr6.gt) goto loc_8232BF54;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// blt cr6,0x8232bf58
	if (ctx.cr6.lt) goto loc_8232BF58;
loc_8232BF54:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8232BF58:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,37
	ctx.r3.s64 = ctx.r3.s64 + 37;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BF68"))) PPC_WEAK_FUNC(sub_8232BF68);
PPC_FUNC_IMPL(__imp__sub_8232BF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232BF70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r10,-16968
	ctx.r30.s64 = ctx.r10.s64 + -16968;
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
	ctx.lr = 0x8232BFB4;
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
	ctx.lr = 0x8232BFE4;
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
	// bne cr6,0x8232c034
	if (!ctx.cr6.eq) goto loc_8232C034;
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
	ctx.lr = 0x8232C034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232C034:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,-10
	ctx.r10.s64 = ctx.r11.s64 + -10;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// ble cr6,0x8232c04c
	if (!ctx.cr6.gt) goto loc_8232C04C;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// blt cr6,0x8232c050
	if (ctx.cr6.lt) goto loc_8232C050;
loc_8232C04C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8232C050:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8232c060
	if (!ctx.cr6.eq) goto loc_8232C060;
	// addi r11,r11,37
	ctx.r11.s64 = ctx.r11.s64 + 37;
loc_8232C060:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C070"))) PPC_WEAK_FUNC(sub_8232C070);
PPC_FUNC_IMPL(__imp__sub_8232C070) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C080"))) PPC_WEAK_FUNC(sub_8232C080);
PPC_FUNC_IMPL(__imp__sub_8232C080) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C090"))) PPC_WEAK_FUNC(sub_8232C090);
PPC_FUNC_IMPL(__imp__sub_8232C090) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C0A0"))) PPC_WEAK_FUNC(sub_8232C0A0);
PPC_FUNC_IMPL(__imp__sub_8232C0A0) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-19708
	ctx.r3.s64 = ctx.r11.s64 + -19708;
	// bl 0x8237ea70
	ctx.lr = 0x8232C0C0;
	sub_8237EA70(ctx, base);
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

__attribute__((alias("__imp__sub_8232C0E0"))) PPC_WEAK_FUNC(sub_8232C0E0);
PPC_FUNC_IMPL(__imp__sub_8232C0E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C0F0"))) PPC_WEAK_FUNC(sub_8232C0F0);
PPC_FUNC_IMPL(__imp__sub_8232C0F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C108"))) PPC_WEAK_FUNC(sub_8232C108);
PPC_FUNC_IMPL(__imp__sub_8232C108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8232C110;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-19708
	ctx.r3.s64 = ctx.r11.s64 + -19708;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8237ea70
	ctx.lr = 0x8232C12C;
	sub_8237EA70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C148"))) PPC_WEAK_FUNC(sub_8232C148);
PPC_FUNC_IMPL(__imp__sub_8232C148) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C158"))) PPC_WEAK_FUNC(sub_8232C158);
PPC_FUNC_IMPL(__imp__sub_8232C158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232C160;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28988
	ctx.r29.s64 = ctx.r10.s64 + -28988;
	// lwz r11,-16612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c190
	if (!ctx.cr6.eq) goto loc_8232C190;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825cc078
	ctx.lr = 0x8232C184;
	sub_825CC078(ctx, base);
	// stw r3,-16612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16612, ctx.r3.u32);
	// bl 0x825dc5c0
	ctx.lr = 0x8232C18C;
	sub_825DC5C0(ctx, base);
	// lwz r11,-16612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16612);
loc_8232C190:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4104);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232c1c4
	if (ctx.cr6.eq) goto loc_8232C1C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c1c8
	if (!ctx.cr6.eq) goto loc_8232C1C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825cc078
	ctx.lr = 0x8232C1B0;
	sub_825CC078(ctx, base);
	// stw r3,-16612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16612, ctx.r3.u32);
	// bl 0x825dc5c0
	ctx.lr = 0x8232C1B8;
	sub_825DC5C0(ctx, base);
	// lwz r10,4104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4104);
	// lwz r11,-16612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16612);
	// b 0x8232c1c8
	goto loc_8232C1C8;
loc_8232C1C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232C1C8:
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c1f8
	if (!ctx.cr6.eq) goto loc_8232C1F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232C1EC;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232C1F4;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232C1F8:
	// lwz r10,4104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4104);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c224
	if (!ctx.cr6.eq) goto loc_8232C224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232C218;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232C220;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232C224:
	// lwz r10,4104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4104);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232C230;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232c27c
	if (ctx.cr6.eq) goto loc_8232C27C;
	// lwz r3,4104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4104);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232c264
	if (!ctx.cr6.eq) goto loc_8232C264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232C254;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232C25C;
	sub_8243CDD0(ctx, base);
	// lwz r3,4104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4104);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232C264:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232c27c
	if (!ctx.cr6.eq) goto loc_8232C27C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232C27C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232C27C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C288"))) PPC_WEAK_FUNC(sub_8232C288);
PPC_FUNC_IMPL(__imp__sub_8232C288) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C290"))) PPC_WEAK_FUNC(sub_8232C290);
PPC_FUNC_IMPL(__imp__sub_8232C290) {
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
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-16612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16612);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c2d4
	if (!ctx.cr6.eq) goto loc_8232C2D4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28988
	ctx.r3.s64 = ctx.r11.s64 + -28988;
	// bl 0x825cc078
	ctx.lr = 0x8232C2C8;
	sub_825CC078(ctx, base);
	// stw r3,-16612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16612, ctx.r3.u32);
	// bl 0x825dc5c0
	ctx.lr = 0x8232C2D0;
	sub_825DC5C0(ctx, base);
	// lwz r11,-16612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16612);
loc_8232C2D4:
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

__attribute__((alias("__imp__sub_8232C300"))) PPC_WEAK_FUNC(sub_8232C300);
PPC_FUNC_IMPL(__imp__sub_8232C300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232C308;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28988
	ctx.r29.s64 = ctx.r10.s64 + -28988;
	// lwz r11,6316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c338
	if (!ctx.cr6.eq) goto loc_8232C338;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f51d0
	ctx.lr = 0x8232C32C;
	sub_827F51D0(ctx, base);
	// stw r3,6316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6316, ctx.r3.u32);
	// bl 0x82805550
	ctx.lr = 0x8232C334;
	sub_82805550(ctx, base);
	// lwz r11,6316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6316);
loc_8232C338:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4108);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232c36c
	if (ctx.cr6.eq) goto loc_8232C36C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c370
	if (!ctx.cr6.eq) goto loc_8232C370;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f51d0
	ctx.lr = 0x8232C358;
	sub_827F51D0(ctx, base);
	// stw r3,6316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6316, ctx.r3.u32);
	// bl 0x82805550
	ctx.lr = 0x8232C360;
	sub_82805550(ctx, base);
	// lwz r10,4108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4108);
	// lwz r11,6316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6316);
	// b 0x8232c370
	goto loc_8232C370;
loc_8232C36C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232C370:
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c3a0
	if (!ctx.cr6.eq) goto loc_8232C3A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232C394;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232C39C;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232C3A0:
	// lwz r10,4108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4108);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c3cc
	if (!ctx.cr6.eq) goto loc_8232C3CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232C3C0;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232C3C8;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232C3CC:
	// lwz r10,4108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4108);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232C3D8;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232c424
	if (ctx.cr6.eq) goto loc_8232C424;
	// lwz r3,4108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4108);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232c40c
	if (!ctx.cr6.eq) goto loc_8232C40C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232C3FC;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232C404;
	sub_8243CDD0(ctx, base);
	// lwz r3,4108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4108);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232C40C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232c424
	if (!ctx.cr6.eq) goto loc_8232C424;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232C424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232C424:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C430"))) PPC_WEAK_FUNC(sub_8232C430);
PPC_FUNC_IMPL(__imp__sub_8232C430) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C438"))) PPC_WEAK_FUNC(sub_8232C438);
PPC_FUNC_IMPL(__imp__sub_8232C438) {
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
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,6316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6316);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c47c
	if (!ctx.cr6.eq) goto loc_8232C47C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28988
	ctx.r3.s64 = ctx.r11.s64 + -28988;
	// bl 0x827f51d0
	ctx.lr = 0x8232C470;
	sub_827F51D0(ctx, base);
	// stw r3,6316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6316, ctx.r3.u32);
	// bl 0x82805550
	ctx.lr = 0x8232C478;
	sub_82805550(ctx, base);
	// lwz r11,6316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6316);
loc_8232C47C:
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

__attribute__((alias("__imp__sub_8232C4A8"))) PPC_WEAK_FUNC(sub_8232C4A8);
PPC_FUNC_IMPL(__imp__sub_8232C4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232C4B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28988
	ctx.r29.s64 = ctx.r10.s64 + -28988;
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c4e0
	if (!ctx.cr6.eq) goto loc_8232C4E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8281b308
	ctx.lr = 0x8232C4D4;
	sub_8281B308(ctx, base);
	// stw r3,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r3.u32);
	// bl 0x82826a40
	ctx.lr = 0x8232C4DC;
	sub_82826A40(ctx, base);
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
loc_8232C4E0:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4112);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232c514
	if (ctx.cr6.eq) goto loc_8232C514;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c518
	if (!ctx.cr6.eq) goto loc_8232C518;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8281b308
	ctx.lr = 0x8232C500;
	sub_8281B308(ctx, base);
	// stw r3,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r3.u32);
	// bl 0x82826a40
	ctx.lr = 0x8232C508;
	sub_82826A40(ctx, base);
	// lwz r10,4112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4112);
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
	// b 0x8232c518
	goto loc_8232C518;
loc_8232C514:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232C518:
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c548
	if (!ctx.cr6.eq) goto loc_8232C548;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232C53C;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232C544;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232C548:
	// lwz r10,4112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4112);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c574
	if (!ctx.cr6.eq) goto loc_8232C574;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232C568;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232C570;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232C574:
	// lwz r10,4112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4112);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232C580;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232c5cc
	if (ctx.cr6.eq) goto loc_8232C5CC;
	// lwz r3,4112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4112);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232c5b4
	if (!ctx.cr6.eq) goto loc_8232C5B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232C5A4;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232C5AC;
	sub_8243CDD0(ctx, base);
	// lwz r3,4112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4112);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232C5B4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232c5cc
	if (!ctx.cr6.eq) goto loc_8232C5CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232C5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232C5CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C5D8"))) PPC_WEAK_FUNC(sub_8232C5D8);
PPC_FUNC_IMPL(__imp__sub_8232C5D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C5E0"))) PPC_WEAK_FUNC(sub_8232C5E0);
PPC_FUNC_IMPL(__imp__sub_8232C5E0) {
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
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c624
	if (!ctx.cr6.eq) goto loc_8232C624;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28988
	ctx.r3.s64 = ctx.r11.s64 + -28988;
	// bl 0x8281b308
	ctx.lr = 0x8232C618;
	sub_8281B308(ctx, base);
	// stw r3,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r3.u32);
	// bl 0x82826a40
	ctx.lr = 0x8232C620;
	sub_82826A40(ctx, base);
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
loc_8232C624:
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

__attribute__((alias("__imp__sub_8232C650"))) PPC_WEAK_FUNC(sub_8232C650);
PPC_FUNC_IMPL(__imp__sub_8232C650) {
	PPC_FUNC_PROLOGUE();
	// b 0x82838528
	sub_82838528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C658"))) PPC_WEAK_FUNC(sub_8232C658);
PPC_FUNC_IMPL(__imp__sub_8232C658) {
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
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,18052(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18052);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8232c698
	if (!ctx.cr6.eq) goto loc_8232C698;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28996
	ctx.r3.s64 = ctx.r11.s64 + -28996;
	// bl 0x82465d70
	ctx.lr = 0x8232C68C;
	sub_82465D70(ctx, base);
	// stw r3,18052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18052, ctx.r3.u32);
	// bl 0x82465e30
	ctx.lr = 0x8232C694;
	sub_82465E30(ctx, base);
	// lwz r10,18052(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18052);
loc_8232C698:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232c6b8
	if (ctx.cr6.eq) goto loc_8232C6B8;
loc_8232C6A4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232c6d8
	if (ctx.cr6.eq) goto loc_8232C6D8;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c6a4
	if (!ctx.cr6.eq) goto loc_8232C6A4;
loc_8232C6B8:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8232C6C0:
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
loc_8232C6D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8232c6c0
	goto loc_8232C6C0;
}

__attribute__((alias("__imp__sub_8232C6E0"))) PPC_WEAK_FUNC(sub_8232C6E0);
PPC_FUNC_IMPL(__imp__sub_8232C6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232C6E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c718
	if (!ctx.cr6.eq) goto loc_8232C718;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232C70C;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232C714;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232C718:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4116);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232c74c
	if (ctx.cr6.eq) goto loc_8232C74C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c750
	if (!ctx.cr6.eq) goto loc_8232C750;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232C738;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232C740;
	sub_82455520(ctx, base);
	// lwz r10,4116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4116);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// b 0x8232c750
	goto loc_8232C750;
loc_8232C74C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232C750:
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c774
	if (!ctx.cr6.eq) goto loc_8232C774;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232C768;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232C770;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232C774:
	// lwz r10,4116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4116);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c7a0
	if (!ctx.cr6.eq) goto loc_8232C7A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232C794;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232C79C;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232C7A0:
	// lwz r10,4116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4116);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232C7AC;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232c7f8
	if (ctx.cr6.eq) goto loc_8232C7F8;
	// lwz r3,4116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4116);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232c7e0
	if (!ctx.cr6.eq) goto loc_8232C7E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232C7D0;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232C7D8;
	sub_8243CDD0(ctx, base);
	// lwz r3,4116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4116);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232C7E0:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232c7f8
	if (!ctx.cr6.eq) goto loc_8232C7F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232C7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232C7F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C800"))) PPC_WEAK_FUNC(sub_8232C800);
PPC_FUNC_IMPL(__imp__sub_8232C800) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C808"))) PPC_WEAK_FUNC(sub_8232C808);
PPC_FUNC_IMPL(__imp__sub_8232C808) {
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
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c84c
	if (!ctx.cr6.eq) goto loc_8232C84C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28996
	ctx.r3.s64 = ctx.r11.s64 + -28996;
	// bl 0x82458830
	ctx.lr = 0x8232C840;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232C848;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232C84C:
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

__attribute__((alias("__imp__sub_8232C878"))) PPC_WEAK_FUNC(sub_8232C878);
PPC_FUNC_IMPL(__imp__sub_8232C878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232C880;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31986
	ctx.r31.s64 = -2096234496;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-27992
	ctx.r29.s64 = ctx.r10.s64 + -27992;
	// lwz r11,5680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5680);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c8b0
	if (!ctx.cr6.eq) goto loc_8232C8B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c5fb0
	ctx.lr = 0x8232C8A4;
	sub_823C5FB0(ctx, base);
	// stw r3,5680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5680, ctx.r3.u32);
	// bl 0x823c0018
	ctx.lr = 0x8232C8AC;
	sub_823C0018(ctx, base);
	// lwz r11,5680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5680);
loc_8232C8B0:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4120);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232c8e4
	if (ctx.cr6.eq) goto loc_8232C8E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c8e8
	if (!ctx.cr6.eq) goto loc_8232C8E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c5fb0
	ctx.lr = 0x8232C8D0;
	sub_823C5FB0(ctx, base);
	// stw r3,5680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5680, ctx.r3.u32);
	// bl 0x823c0018
	ctx.lr = 0x8232C8D8;
	sub_823C0018(ctx, base);
	// lwz r10,4120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4120);
	// lwz r11,5680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5680);
	// b 0x8232c8e8
	goto loc_8232C8E8;
loc_8232C8E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232C8E8:
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c918
	if (!ctx.cr6.eq) goto loc_8232C918;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232C90C;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232C914;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232C918:
	// lwz r10,4120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4120);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c944
	if (!ctx.cr6.eq) goto loc_8232C944;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232C938;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232C940;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232C944:
	// lwz r10,4120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4120);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232C950;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232c99c
	if (ctx.cr6.eq) goto loc_8232C99C;
	// lwz r3,4120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4120);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232c984
	if (!ctx.cr6.eq) goto loc_8232C984;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232C974;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232C97C;
	sub_8243CDD0(ctx, base);
	// lwz r3,4120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4120);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232C984:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232c99c
	if (!ctx.cr6.eq) goto loc_8232C99C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232C99C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232C99C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C9A8"))) PPC_WEAK_FUNC(sub_8232C9A8);
PPC_FUNC_IMPL(__imp__sub_8232C9A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C9B0"))) PPC_WEAK_FUNC(sub_8232C9B0);
PPC_FUNC_IMPL(__imp__sub_8232C9B0) {
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
	// lis r31,-31986
	ctx.r31.s64 = -2096234496;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,5680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5680);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232c9f4
	if (!ctx.cr6.eq) goto loc_8232C9F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-27992
	ctx.r3.s64 = ctx.r11.s64 + -27992;
	// bl 0x823c5fb0
	ctx.lr = 0x8232C9E8;
	sub_823C5FB0(ctx, base);
	// stw r3,5680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5680, ctx.r3.u32);
	// bl 0x823c0018
	ctx.lr = 0x8232C9F0;
	sub_823C0018(ctx, base);
	// lwz r11,5680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5680);
loc_8232C9F4:
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

__attribute__((alias("__imp__sub_8232CA20"))) PPC_WEAK_FUNC(sub_8232CA20);
PPC_FUNC_IMPL(__imp__sub_8232CA20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CA28"))) PPC_WEAK_FUNC(sub_8232CA28);
PPC_FUNC_IMPL(__imp__sub_8232CA28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CA30"))) PPC_WEAK_FUNC(sub_8232CA30);
PPC_FUNC_IMPL(__imp__sub_8232CA30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CA38"))) PPC_WEAK_FUNC(sub_8232CA38);
PPC_FUNC_IMPL(__imp__sub_8232CA38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CA40"))) PPC_WEAK_FUNC(sub_8232CA40);
PPC_FUNC_IMPL(__imp__sub_8232CA40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CA48"))) PPC_WEAK_FUNC(sub_8232CA48);
PPC_FUNC_IMPL(__imp__sub_8232CA48) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CA50"))) PPC_WEAK_FUNC(sub_8232CA50);
PPC_FUNC_IMPL(__imp__sub_8232CA50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CA58"))) PPC_WEAK_FUNC(sub_8232CA58);
PPC_FUNC_IMPL(__imp__sub_8232CA58) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CA60"))) PPC_WEAK_FUNC(sub_8232CA60);
PPC_FUNC_IMPL(__imp__sub_8232CA60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,348(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CA68"))) PPC_WEAK_FUNC(sub_8232CA68);
PPC_FUNC_IMPL(__imp__sub_8232CA68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CA70"))) PPC_WEAK_FUNC(sub_8232CA70);
PPC_FUNC_IMPL(__imp__sub_8232CA70) {
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
	// lis r31,-31981
	ctx.r31.s64 = -2095906816;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,32736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32736);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cab4
	if (!ctx.cr6.eq) goto loc_8232CAB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28000
	ctx.r3.s64 = ctx.r11.s64 + -28000;
	// bl 0x829a1790
	ctx.lr = 0x8232CAA8;
	sub_829A1790(ctx, base);
	// stw r3,32736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32736, ctx.r3.u32);
	// bl 0x829a1d80
	ctx.lr = 0x8232CAB0;
	sub_829A1D80(ctx, base);
	// lwz r11,32736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32736);
loc_8232CAB4:
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

__attribute__((alias("__imp__sub_8232CAE0"))) PPC_WEAK_FUNC(sub_8232CAE0);
PPC_FUNC_IMPL(__imp__sub_8232CAE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CAE8"))) PPC_WEAK_FUNC(sub_8232CAE8);
PPC_FUNC_IMPL(__imp__sub_8232CAE8) {
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
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,3764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3764);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cb2c
	if (!ctx.cr6.eq) goto loc_8232CB2C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28988
	ctx.r3.s64 = ctx.r11.s64 + -28988;
	// bl 0x8268e100
	ctx.lr = 0x8232CB20;
	sub_8268E100(ctx, base);
	// stw r3,3764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3764, ctx.r3.u32);
	// bl 0x826896c0
	ctx.lr = 0x8232CB28;
	sub_826896C0(ctx, base);
	// lwz r11,3764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3764);
loc_8232CB2C:
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

__attribute__((alias("__imp__sub_8232CB58"))) PPC_WEAK_FUNC(sub_8232CB58);
PPC_FUNC_IMPL(__imp__sub_8232CB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232CB60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28988
	ctx.r29.s64 = ctx.r10.s64 + -28988;
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cb90
	if (!ctx.cr6.eq) goto loc_8232CB90;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8281b308
	ctx.lr = 0x8232CB84;
	sub_8281B308(ctx, base);
	// stw r3,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r3.u32);
	// bl 0x82826a40
	ctx.lr = 0x8232CB8C;
	sub_82826A40(ctx, base);
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
loc_8232CB90:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4144);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232cbc4
	if (ctx.cr6.eq) goto loc_8232CBC4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cbc8
	if (!ctx.cr6.eq) goto loc_8232CBC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8281b308
	ctx.lr = 0x8232CBB0;
	sub_8281B308(ctx, base);
	// stw r3,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r3.u32);
	// bl 0x82826a40
	ctx.lr = 0x8232CBB8;
	sub_82826A40(ctx, base);
	// lwz r10,4144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4144);
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
	// b 0x8232cbc8
	goto loc_8232CBC8;
loc_8232CBC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232CBC8:
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cbf8
	if (!ctx.cr6.eq) goto loc_8232CBF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232CBEC;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232CBF4;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232CBF8:
	// lwz r10,4144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4144);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cc24
	if (!ctx.cr6.eq) goto loc_8232CC24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232CC18;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232CC20;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232CC24:
	// lwz r10,4144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4144);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232CC30;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232cc7c
	if (ctx.cr6.eq) goto loc_8232CC7C;
	// lwz r3,4144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4144);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232cc64
	if (!ctx.cr6.eq) goto loc_8232CC64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232CC54;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232CC5C;
	sub_8243CDD0(ctx, base);
	// lwz r3,4144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4144);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232CC64:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232cc7c
	if (!ctx.cr6.eq) goto loc_8232CC7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232CC7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232CC7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232CC88"))) PPC_WEAK_FUNC(sub_8232CC88);
PPC_FUNC_IMPL(__imp__sub_8232CC88) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CC90"))) PPC_WEAK_FUNC(sub_8232CC90);
PPC_FUNC_IMPL(__imp__sub_8232CC90) {
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
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ccd4
	if (!ctx.cr6.eq) goto loc_8232CCD4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28988
	ctx.r3.s64 = ctx.r11.s64 + -28988;
	// bl 0x8281b308
	ctx.lr = 0x8232CCC8;
	sub_8281B308(ctx, base);
	// stw r3,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r3.u32);
	// bl 0x82826a40
	ctx.lr = 0x8232CCD0;
	sub_82826A40(ctx, base);
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
loc_8232CCD4:
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

__attribute__((alias("__imp__sub_8232CD00"))) PPC_WEAK_FUNC(sub_8232CD00);
PPC_FUNC_IMPL(__imp__sub_8232CD00) {
	PPC_FUNC_PROLOGUE();
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// lwz r10,24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8232cd28
	if (!ctx.cr6.eq) goto loc_8232CD28;
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
loc_8232CD28:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CD30"))) PPC_WEAK_FUNC(sub_8232CD30);
PPC_FUNC_IMPL(__imp__sub_8232CD30) {
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

__attribute__((alias("__imp__sub_8232CD48"))) PPC_WEAK_FUNC(sub_8232CD48);
PPC_FUNC_IMPL(__imp__sub_8232CD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8232CD50;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r4,r11,5983
	ctx.r4.s64 = ctx.r11.s64 + 5983;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824340d0
	ctx.lr = 0x8232CD80;
	sub_824340D0(ctx, base);
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
	ctx.lr = 0x8232CDAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232CDC0"))) PPC_WEAK_FUNC(sub_8232CDC0);
PPC_FUNC_IMPL(__imp__sub_8232CDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8232CDC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,360(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
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
	// bne cr6,0x8232ce44
	if (!ctx.cr6.eq) goto loc_8232CE44;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232CE10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232ce44
	if (!ctx.cr6.eq) goto loc_8232CE44;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232CE2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232ce44
	if (!ctx.cr6.eq) goto loc_8232CE44;
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
loc_8232CE44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232CE50"))) PPC_WEAK_FUNC(sub_8232CE50);
PPC_FUNC_IMPL(__imp__sub_8232CE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8232CE58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,360(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
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
	// bne cr6,0x8232ced4
	if (!ctx.cr6.eq) goto loc_8232CED4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232CEA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232ced4
	if (!ctx.cr6.eq) goto loc_8232CED4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232CEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232ced4
	if (!ctx.cr6.eq) goto loc_8232CED4;
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
loc_8232CED4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232CEE0"))) PPC_WEAK_FUNC(sub_8232CEE0);
PPC_FUNC_IMPL(__imp__sub_8232CEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232CEE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cf18
	if (!ctx.cr6.eq) goto loc_8232CF18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232CF0C;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232CF14;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232CF18:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4148);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232cf4c
	if (ctx.cr6.eq) goto loc_8232CF4C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cf50
	if (!ctx.cr6.eq) goto loc_8232CF50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232CF38;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232CF40;
	sub_82455520(ctx, base);
	// lwz r10,4148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4148);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// b 0x8232cf50
	goto loc_8232CF50;
loc_8232CF4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232CF50:
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cf74
	if (!ctx.cr6.eq) goto loc_8232CF74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232CF68;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232CF70;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232CF74:
	// lwz r10,4148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4148);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232cfa0
	if (!ctx.cr6.eq) goto loc_8232CFA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232CF94;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232CF9C;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232CFA0:
	// lwz r10,4148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4148);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232CFAC;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232cff8
	if (ctx.cr6.eq) goto loc_8232CFF8;
	// lwz r3,4148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4148);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232cfe0
	if (!ctx.cr6.eq) goto loc_8232CFE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232CFD0;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232CFD8;
	sub_8243CDD0(ctx, base);
	// lwz r3,4148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4148);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232CFE0:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232cff8
	if (!ctx.cr6.eq) goto loc_8232CFF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232CFF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232CFF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232D000"))) PPC_WEAK_FUNC(sub_8232D000);
PPC_FUNC_IMPL(__imp__sub_8232D000) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D008"))) PPC_WEAK_FUNC(sub_8232D008);
PPC_FUNC_IMPL(__imp__sub_8232D008) {
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
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d04c
	if (!ctx.cr6.eq) goto loc_8232D04C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28996
	ctx.r3.s64 = ctx.r11.s64 + -28996;
	// bl 0x82458830
	ctx.lr = 0x8232D040;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232D048;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232D04C:
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

__attribute__((alias("__imp__sub_8232D078"))) PPC_WEAK_FUNC(sub_8232D078);
PPC_FUNC_IMPL(__imp__sub_8232D078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232D080;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d0b0
	if (!ctx.cr6.eq) goto loc_8232D0B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232D0A4;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232D0AC;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232D0B0:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4152);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232d0e4
	if (ctx.cr6.eq) goto loc_8232D0E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d0e8
	if (!ctx.cr6.eq) goto loc_8232D0E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232D0D0;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232D0D8;
	sub_82455520(ctx, base);
	// lwz r10,4152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4152);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// b 0x8232d0e8
	goto loc_8232D0E8;
loc_8232D0E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232D0E8:
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d10c
	if (!ctx.cr6.eq) goto loc_8232D10C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232D100;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232D108;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232D10C:
	// lwz r10,4152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4152);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d138
	if (!ctx.cr6.eq) goto loc_8232D138;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232D12C;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232D134;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232D138:
	// lwz r10,4152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4152);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232D144;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232d190
	if (ctx.cr6.eq) goto loc_8232D190;
	// lwz r3,4152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4152);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232d178
	if (!ctx.cr6.eq) goto loc_8232D178;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232D168;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232D170;
	sub_8243CDD0(ctx, base);
	// lwz r3,4152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4152);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232D178:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232d190
	if (!ctx.cr6.eq) goto loc_8232D190;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232D190:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232D198"))) PPC_WEAK_FUNC(sub_8232D198);
PPC_FUNC_IMPL(__imp__sub_8232D198) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r10,r10,10640
	ctx.r10.s64 = ctx.r10.s64 + 10640;
	// addi r11,r11,18600
	ctx.r11.s64 = ctx.r11.s64 + 18600;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D1B8"))) PPC_WEAK_FUNC(sub_8232D1B8);
PPC_FUNC_IMPL(__imp__sub_8232D1B8) {
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
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d1fc
	if (!ctx.cr6.eq) goto loc_8232D1FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28996
	ctx.r3.s64 = ctx.r11.s64 + -28996;
	// bl 0x82458830
	ctx.lr = 0x8232D1F0;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232D1F8;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232D1FC:
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

__attribute__((alias("__imp__sub_8232D228"))) PPC_WEAK_FUNC(sub_8232D228);
PPC_FUNC_IMPL(__imp__sub_8232D228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f1,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D238"))) PPC_WEAK_FUNC(sub_8232D238);
PPC_FUNC_IMPL(__imp__sub_8232D238) {
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
	// bl 0x82d5c574
	ctx.lr = 0x8232D250;
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
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
	// lfs f27,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
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
	// beq cr6,0x8232d2f0
	if (ctx.cr6.eq) goto loc_8232D2F0;
	// lfs f1,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D2AC;
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
	ctx.lr = 0x8232D2D0;
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
	// b 0x8232d3a4
	goto loc_8232D3A4;
loc_8232D2F0:
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
	ctx.lr = 0x8232D314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x8232d34c
	if (!ctx.cr6.eq) goto loc_8232D34C;
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
	// b 0x8232d38c
	goto loc_8232D38C;
loc_8232D34C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-20868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8232d36c
	if (!ctx.cr6.lt) goto loc_8232D36C;
	// fmr f13,f27
	ctx.f13.f64 = ctx.f27.f64;
	// fmr f12,f27
	ctx.f12.f64 = ctx.f27.f64;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x8232d38c
	goto loc_8232D38C;
loc_8232D36C:
	// fsqrt f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = sqrt(ctx.f31.f64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-29008(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29008);
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
loc_8232D38C:
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
loc_8232D3A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82d5c5c0
	ctx.lr = 0x8232D3B4;
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

__attribute__((alias("__imp__sub_8232D3C8"))) PPC_WEAK_FUNC(sub_8232D3C8);
PPC_FUNC_IMPL(__imp__sub_8232D3C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D3D0"))) PPC_WEAK_FUNC(sub_8232D3D0);
PPC_FUNC_IMPL(__imp__sub_8232D3D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D3D8"))) PPC_WEAK_FUNC(sub_8232D3D8);
PPC_FUNC_IMPL(__imp__sub_8232D3D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D3E0"))) PPC_WEAK_FUNC(sub_8232D3E0);
PPC_FUNC_IMPL(__imp__sub_8232D3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f11,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x8232d424
	if (!ctx.cr6.gt) goto loc_8232D424;
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
loc_8232D424:
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

__attribute__((alias("__imp__sub_8232D448"))) PPC_WEAK_FUNC(sub_8232D448);
PPC_FUNC_IMPL(__imp__sub_8232D448) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D450"))) PPC_WEAK_FUNC(sub_8232D450);
PPC_FUNC_IMPL(__imp__sub_8232D450) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f2,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8232d488
	if (!ctx.cr6.gt) goto loc_8232D488;
	// bl 0x82d5bbd0
	ctx.lr = 0x8232D474;
	sub_82D5BBD0(ctx, base);
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
loc_8232D488:
	// fabs f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// bl 0x82d5bbd0
	ctx.lr = 0x8232D490;
	sub_82D5BBD0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21360);
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

__attribute__((alias("__imp__sub_8232D4B0"))) PPC_WEAK_FUNC(sub_8232D4B0);
PPC_FUNC_IMPL(__imp__sub_8232D4B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D4B8"))) PPC_WEAK_FUNC(sub_8232D4B8);
PPC_FUNC_IMPL(__imp__sub_8232D4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-29000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29000);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f1.f64 = double(temp.f32);
	// blt cr6,0x8232d4e0
	if (ctx.cr6.lt) goto loc_8232D4E0;
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
loc_8232D4E0:
	// lfs f13,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8232d504
	if (ctx.cr6.lt) goto loc_8232D504;
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8232d504
	if (ctx.cr6.gt) goto loc_8232D504;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f1,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8232D504:
	// stfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D510"))) PPC_WEAK_FUNC(sub_8232D510);
PPC_FUNC_IMPL(__imp__sub_8232D510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D520"))) PPC_WEAK_FUNC(sub_8232D520);
PPC_FUNC_IMPL(__imp__sub_8232D520) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D528"))) PPC_WEAK_FUNC(sub_8232D528);
PPC_FUNC_IMPL(__imp__sub_8232D528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8232d540
	if (!ctx.cr6.eq) goto loc_8232D540;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
loc_8232D540:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8232d554
	if (!ctx.cr6.eq) goto loc_8232D554;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
loc_8232D554:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D560"))) PPC_WEAK_FUNC(sub_8232D560);
PPC_FUNC_IMPL(__imp__sub_8232D560) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D568"))) PPC_WEAK_FUNC(sub_8232D568);
PPC_FUNC_IMPL(__imp__sub_8232D568) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f1,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8232d5a8
	if (!ctx.cr6.eq) goto loc_8232D5A8;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x8232d5c8
	goto loc_8232D5C8;
loc_8232D5A8:
	// bl 0x82d5bbd0
	ctx.lr = 0x8232D5AC;
	sub_82D5BBD0(ctx, base);
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
loc_8232D5C8:
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

__attribute__((alias("__imp__sub_8232D5E8"))) PPC_WEAK_FUNC(sub_8232D5E8);
PPC_FUNC_IMPL(__imp__sub_8232D5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
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

__attribute__((alias("__imp__sub_8232D600"))) PPC_WEAK_FUNC(sub_8232D600);
PPC_FUNC_IMPL(__imp__sub_8232D600) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D608"))) PPC_WEAK_FUNC(sub_8232D608);
PPC_FUNC_IMPL(__imp__sub_8232D608) {
	PPC_FUNC_PROLOGUE();
	// fmuls f1,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D610"))) PPC_WEAK_FUNC(sub_8232D610);
PPC_FUNC_IMPL(__imp__sub_8232D610) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D618"))) PPC_WEAK_FUNC(sub_8232D618);
PPC_FUNC_IMPL(__imp__sub_8232D618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// bge cr6,0x8232d650
	if (!ctx.cr6.lt) goto loc_8232D650;
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8232d678
	if (ctx.cr6.eq) goto loc_8232D678;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8232d674
	if (!ctx.cr6.eq) goto loc_8232D674;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
loc_8232D650:
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8232d678
	if (ctx.cr6.eq) goto loc_8232D678;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8232d674
	if (!ctx.cr6.eq) goto loc_8232D674;
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
loc_8232D674:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8232D678:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D688"))) PPC_WEAK_FUNC(sub_8232D688);
PPC_FUNC_IMPL(__imp__sub_8232D688) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D690"))) PPC_WEAK_FUNC(sub_8232D690);
PPC_FUNC_IMPL(__imp__sub_8232D690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x8232D698;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82d5c564
	ctx.lr = 0x8232D6A0;
	__savefpr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
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
	// lfs f31,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// bl 0x829935c0
	ctx.lr = 0x8232D6D8;
	sub_829935C0(ctx, base);
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
	// bl 0x829935c0
	ctx.lr = 0x8232D6EC;
	sub_829935C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lfs f29,-28016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28016);
	ctx.f29.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82993620
	ctx.lr = 0x8232D700;
	sub_82993620(ctx, base);
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
	// bl 0x82993620
	ctx.lr = 0x8232D714;
	sub_82993620(ctx, base);
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f25,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f25.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f26,-29008(r10)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r10.u32 + -29008);
	// fmadds f0,f1,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f0.f64));
	// lfs f23,-20868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20868);
	ctx.f23.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bne cr6,0x8232d768
	if (!ctx.cr6.eq) goto loc_8232D768;
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
	// b 0x8232d794
	goto loc_8232D794;
loc_8232D768:
	// fcmpu cr6,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// bge cr6,0x8232d780
	if (!ctx.cr6.lt) goto loc_8232D780;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// b 0x8232d794
	goto loc_8232D794;
loc_8232D780:
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
loc_8232D794:
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
	// bne cr6,0x8232d7e8
	if (!ctx.cr6.eq) goto loc_8232D7E8;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bne cr6,0x8232d7dc
	if (!ctx.cr6.eq) goto loc_8232D7DC;
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
	// b 0x8232d814
	goto loc_8232D814;
loc_8232D7DC:
	// fmr f12,f28
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f28.f64;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x8232d810
	goto loc_8232D810;
loc_8232D7E8:
	// fcmpu cr6,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x8232d7fc
	if (!ctx.cr6.lt) goto loc_8232D7FC;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8232d810
	goto loc_8232D810;
loc_8232D7FC:
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
loc_8232D810:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_8232D814:
	// fmuls f0,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fmadds f13,f12,f8,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f0.f64));
	// lfs f0,-5948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5948);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8232d838
	if (!ctx.cr6.lt) goto loc_8232D838;
	// stfs f31,88(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
loc_8232D838:
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
	ctx.lr = 0x8232D860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f25.f64);
	// bne cr6,0x8232d884
	if (!ctx.cr6.eq) goto loc_8232D884;
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
	// b 0x8232d8b0
	goto loc_8232D8B0;
loc_8232D884:
	// fcmpu cr6,f30,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f23.f64);
	// bge cr6,0x8232d898
	if (!ctx.cr6.lt) goto loc_8232D898;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// b 0x8232d8b0
	goto loc_8232D8B0;
loc_8232D898:
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
loc_8232D8B0:
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
	// bl 0x82d5c5b0
	ctx.lr = 0x8232D8D8;
	__restfpr_23(ctx, base);
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232D8E0"))) PPC_WEAK_FUNC(sub_8232D8E0);
PPC_FUNC_IMPL(__imp__sub_8232D8E0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// bl 0x82993578
	ctx.lr = 0x8232D90C;
	sub_82993578(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82993578
	ctx.lr = 0x8232D914;
	sub_82993578(ctx, base);
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

__attribute__((alias("__imp__sub_8232D928"))) PPC_WEAK_FUNC(sub_8232D928);
PPC_FUNC_IMPL(__imp__sub_8232D928) {
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
	// beq cr6,0x8232d974
	if (ctx.cr6.eq) goto loc_8232D974;
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
	ctx.lr = 0x8232D96C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8232d98c
	goto loc_8232D98C;
loc_8232D974:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
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
loc_8232D98C:
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

__attribute__((alias("__imp__sub_8232D9C0"))) PPC_WEAK_FUNC(sub_8232D9C0);
PPC_FUNC_IMPL(__imp__sub_8232D9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232D9C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31980
	ctx.r31.s64 = -2095841280;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28000
	ctx.r29.s64 = ctx.r10.s64 + -28000;
	// lwz r11,-31764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232d9f8
	if (!ctx.cr6.eq) goto loc_8232D9F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ba8d8
	ctx.lr = 0x8232D9EC;
	sub_829BA8D8(ctx, base);
	// stw r3,-31764(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31764, ctx.r3.u32);
	// bl 0x829ad970
	ctx.lr = 0x8232D9F4;
	sub_829AD970(ctx, base);
	// lwz r11,-31764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31764);
loc_8232D9F8:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4192);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232da2c
	if (ctx.cr6.eq) goto loc_8232DA2C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232da30
	if (!ctx.cr6.eq) goto loc_8232DA30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ba8d8
	ctx.lr = 0x8232DA18;
	sub_829BA8D8(ctx, base);
	// stw r3,-31764(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31764, ctx.r3.u32);
	// bl 0x829ad970
	ctx.lr = 0x8232DA20;
	sub_829AD970(ctx, base);
	// lwz r10,4192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4192);
	// lwz r11,-31764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31764);
	// b 0x8232da30
	goto loc_8232DA30;
loc_8232DA2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232DA30:
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232da60
	if (!ctx.cr6.eq) goto loc_8232DA60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232DA54;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232DA5C;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232DA60:
	// lwz r10,4192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4192);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232da8c
	if (!ctx.cr6.eq) goto loc_8232DA8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232DA80;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232DA88;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232DA8C:
	// lwz r10,4192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4192);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232DA98;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232dae4
	if (ctx.cr6.eq) goto loc_8232DAE4;
	// lwz r3,4192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4192);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232dacc
	if (!ctx.cr6.eq) goto loc_8232DACC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232DABC;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232DAC4;
	sub_8243CDD0(ctx, base);
	// lwz r3,4192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4192);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232DACC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232dae4
	if (!ctx.cr6.eq) goto loc_8232DAE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DAE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232DAE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232DAF0"))) PPC_WEAK_FUNC(sub_8232DAF0);
PPC_FUNC_IMPL(__imp__sub_8232DAF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232DAF8"))) PPC_WEAK_FUNC(sub_8232DAF8);
PPC_FUNC_IMPL(__imp__sub_8232DAF8) {
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
	// lis r31,-31980
	ctx.r31.s64 = -2095841280;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-31764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31764);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232db3c
	if (!ctx.cr6.eq) goto loc_8232DB3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28000
	ctx.r3.s64 = ctx.r11.s64 + -28000;
	// bl 0x829ba8d8
	ctx.lr = 0x8232DB30;
	sub_829BA8D8(ctx, base);
	// stw r3,-31764(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31764, ctx.r3.u32);
	// bl 0x829ad970
	ctx.lr = 0x8232DB38;
	sub_829AD970(ctx, base);
	// lwz r11,-31764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31764);
loc_8232DB3C:
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

__attribute__((alias("__imp__sub_8232DB68"))) PPC_WEAK_FUNC(sub_8232DB68);
PPC_FUNC_IMPL(__imp__sub_8232DB68) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8232db78
	if (!ctx.cr6.eq) goto loc_8232DB78;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8232DB78:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8232db9c
	if (ctx.cr6.eq) goto loc_8232DB9C;
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
loc_8232DB9C:
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

__attribute__((alias("__imp__sub_8232DBC0"))) PPC_WEAK_FUNC(sub_8232DBC0);
PPC_FUNC_IMPL(__imp__sub_8232DBC0) {
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

__attribute__((alias("__imp__sub_8232DBD8"))) PPC_WEAK_FUNC(sub_8232DBD8);
PPC_FUNC_IMPL(__imp__sub_8232DBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232DBE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28988
	ctx.r29.s64 = ctx.r10.s64 + -28988;
	// lwz r11,-2856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dc10
	if (!ctx.cr6.eq) goto loc_8232DC10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826381c8
	ctx.lr = 0x8232DC04;
	sub_826381C8(ctx, base);
	// stw r3,-2856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2856, ctx.r3.u32);
	// bl 0x8260aef0
	ctx.lr = 0x8232DC0C;
	sub_8260AEF0(ctx, base);
	// lwz r11,-2856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2856);
loc_8232DC10:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4196);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232dc44
	if (ctx.cr6.eq) goto loc_8232DC44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dc48
	if (!ctx.cr6.eq) goto loc_8232DC48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826381c8
	ctx.lr = 0x8232DC30;
	sub_826381C8(ctx, base);
	// stw r3,-2856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2856, ctx.r3.u32);
	// bl 0x8260aef0
	ctx.lr = 0x8232DC38;
	sub_8260AEF0(ctx, base);
	// lwz r10,4196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4196);
	// lwz r11,-2856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2856);
	// b 0x8232dc48
	goto loc_8232DC48;
loc_8232DC44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232DC48:
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dc78
	if (!ctx.cr6.eq) goto loc_8232DC78;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232DC6C;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232DC74;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232DC78:
	// lwz r10,4196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4196);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dca4
	if (!ctx.cr6.eq) goto loc_8232DCA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232DC98;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232DCA0;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232DCA4:
	// lwz r10,4196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4196);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232DCB0;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232dcfc
	if (ctx.cr6.eq) goto loc_8232DCFC;
	// lwz r3,4196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4196);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232dce4
	if (!ctx.cr6.eq) goto loc_8232DCE4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232DCD4;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232DCDC;
	sub_8243CDD0(ctx, base);
	// lwz r3,4196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4196);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232DCE4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232dcfc
	if (!ctx.cr6.eq) goto loc_8232DCFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DCFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232DCFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232DD08"))) PPC_WEAK_FUNC(sub_8232DD08);
PPC_FUNC_IMPL(__imp__sub_8232DD08) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232DD10"))) PPC_WEAK_FUNC(sub_8232DD10);
PPC_FUNC_IMPL(__imp__sub_8232DD10) {
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
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-2856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2856);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dd54
	if (!ctx.cr6.eq) goto loc_8232DD54;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28988
	ctx.r3.s64 = ctx.r11.s64 + -28988;
	// bl 0x826381c8
	ctx.lr = 0x8232DD48;
	sub_826381C8(ctx, base);
	// stw r3,-2856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2856, ctx.r3.u32);
	// bl 0x8260aef0
	ctx.lr = 0x8232DD50;
	sub_8260AEF0(ctx, base);
	// lwz r11,-2856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2856);
loc_8232DD54:
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

__attribute__((alias("__imp__sub_8232DD80"))) PPC_WEAK_FUNC(sub_8232DD80);
PPC_FUNC_IMPL(__imp__sub_8232DD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232DD88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ddb8
	if (!ctx.cr6.eq) goto loc_8232DDB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232DDAC;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232DDB4;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232DDB8:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4200);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232ddec
	if (ctx.cr6.eq) goto loc_8232DDEC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ddf0
	if (!ctx.cr6.eq) goto loc_8232DDF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232DDD8;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232DDE0;
	sub_82455520(ctx, base);
	// lwz r10,4200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4200);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// b 0x8232ddf0
	goto loc_8232DDF0;
loc_8232DDEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232DDF0:
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232de14
	if (!ctx.cr6.eq) goto loc_8232DE14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232DE08;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232DE10;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232DE14:
	// lwz r10,4200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4200);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232de40
	if (!ctx.cr6.eq) goto loc_8232DE40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232DE34;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232DE3C;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232DE40:
	// lwz r10,4200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4200);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232DE4C;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232de98
	if (ctx.cr6.eq) goto loc_8232DE98;
	// lwz r3,4200(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4200);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232de80
	if (!ctx.cr6.eq) goto loc_8232DE80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232DE70;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232DE78;
	sub_8243CDD0(ctx, base);
	// lwz r3,4200(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4200);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232DE80:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232de98
	if (!ctx.cr6.eq) goto loc_8232DE98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DE98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232DE98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232DEA0"))) PPC_WEAK_FUNC(sub_8232DEA0);
PPC_FUNC_IMPL(__imp__sub_8232DEA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232DEA8"))) PPC_WEAK_FUNC(sub_8232DEA8);
PPC_FUNC_IMPL(__imp__sub_8232DEA8) {
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
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232deec
	if (!ctx.cr6.eq) goto loc_8232DEEC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28996
	ctx.r3.s64 = ctx.r11.s64 + -28996;
	// bl 0x82458830
	ctx.lr = 0x8232DEE0;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232DEE8;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232DEEC:
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

__attribute__((alias("__imp__sub_8232DF18"))) PPC_WEAK_FUNC(sub_8232DF18);
PPC_FUNC_IMPL(__imp__sub_8232DF18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r10,r10,10640
	ctx.r10.s64 = ctx.r10.s64 + 10640;
	// addi r11,r11,18600
	ctx.r11.s64 = ctx.r11.s64 + 18600;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232DF38"))) PPC_WEAK_FUNC(sub_8232DF38);
PPC_FUNC_IMPL(__imp__sub_8232DF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232DF40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232df70
	if (!ctx.cr6.eq) goto loc_8232DF70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232DF64;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232DF6C;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232DF70:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4208);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232dfa4
	if (ctx.cr6.eq) goto loc_8232DFA4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dfa8
	if (!ctx.cr6.eq) goto loc_8232DFA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232DF90;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232DF98;
	sub_82455520(ctx, base);
	// lwz r10,4208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4208);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// b 0x8232dfa8
	goto loc_8232DFA8;
loc_8232DFA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232DFA8:
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dfcc
	if (!ctx.cr6.eq) goto loc_8232DFCC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232DFC0;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232DFC8;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232DFCC:
	// lwz r10,4208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4208);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dff8
	if (!ctx.cr6.eq) goto loc_8232DFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232DFEC;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232DFF4;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232DFF8:
	// lwz r10,4208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4208);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232E004;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232e050
	if (ctx.cr6.eq) goto loc_8232E050;
	// lwz r3,4208(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4208);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232e038
	if (!ctx.cr6.eq) goto loc_8232E038;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232E028;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232E030;
	sub_8243CDD0(ctx, base);
	// lwz r3,4208(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4208);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232E038:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232e050
	if (!ctx.cr6.eq) goto loc_8232E050;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232E050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232E050:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232E058"))) PPC_WEAK_FUNC(sub_8232E058);
PPC_FUNC_IMPL(__imp__sub_8232E058) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E060"))) PPC_WEAK_FUNC(sub_8232E060);
PPC_FUNC_IMPL(__imp__sub_8232E060) {
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
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e0a4
	if (!ctx.cr6.eq) goto loc_8232E0A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28996
	ctx.r3.s64 = ctx.r11.s64 + -28996;
	// bl 0x82458830
	ctx.lr = 0x8232E098;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232E0A0;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232E0A4:
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

__attribute__((alias("__imp__sub_8232E0D0"))) PPC_WEAK_FUNC(sub_8232E0D0);
PPC_FUNC_IMPL(__imp__sub_8232E0D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E0D8"))) PPC_WEAK_FUNC(sub_8232E0D8);
PPC_FUNC_IMPL(__imp__sub_8232E0D8) {
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
	// beq cr6,0x8232e100
	if (ctx.cr6.eq) goto loc_8232E100;
	// addi r5,r11,240
	ctx.r5.s64 = ctx.r11.s64 + 240;
	// b 0x8232e114
	goto loc_8232E114;
loc_8232E100:
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
loc_8232E114:
	// addi r6,r31,788
	ctx.r6.s64 = ctx.r31.s64 + 788;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8299cc20
	ctx.lr = 0x8232E124;
	sub_8299CC20(ctx, base);
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
	// bl 0x827cffc8
	ctx.lr = 0x8232E13C;
	sub_827CFFC8(ctx, base);
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

__attribute__((alias("__imp__sub_8232E150"))) PPC_WEAK_FUNC(sub_8232E150);
PPC_FUNC_IMPL(__imp__sub_8232E150) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1064);
	// rlwinm r3,r11,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E160"))) PPC_WEAK_FUNC(sub_8232E160);
PPC_FUNC_IMPL(__imp__sub_8232E160) {
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
	// lfs f0,-4416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82d5c0d0
	ctx.lr = 0x8232E188;
	sub_82D5C0D0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	ctx.f13.f64 = double(temp.f32);
	// lfd f2,-29008(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29008);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x82d5d3b8
	ctx.lr = 0x8232E1A0;
	sub_82D5D3B8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-4348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4348);
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

__attribute__((alias("__imp__sub_8232E1C8"))) PPC_WEAK_FUNC(sub_8232E1C8);
PPC_FUNC_IMPL(__imp__sub_8232E1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E1D0"))) PPC_WEAK_FUNC(sub_8232E1D0);
PPC_FUNC_IMPL(__imp__sub_8232E1D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232e210
	if (ctx.cr6.eq) goto loc_8232E210;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232e1fc
	if (ctx.cr6.eq) goto loc_8232E1FC;
loc_8232E1E8:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8232e208
	if (ctx.cr6.eq) goto loc_8232E208;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e1e8
	if (!ctx.cr6.eq) goto loc_8232E1E8;
loc_8232E1FC:
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_8232E208:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8232E210:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E218"))) PPC_WEAK_FUNC(sub_8232E218);
PPC_FUNC_IMPL(__imp__sub_8232E218) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E220"))) PPC_WEAK_FUNC(sub_8232E220);
PPC_FUNC_IMPL(__imp__sub_8232E220) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232e234
	if (ctx.cr6.eq) goto loc_8232E234;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// blr 
	return;
loc_8232E234:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E240"))) PPC_WEAK_FUNC(sub_8232E240);
PPC_FUNC_IMPL(__imp__sub_8232E240) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E248"))) PPC_WEAK_FUNC(sub_8232E248);
PPC_FUNC_IMPL(__imp__sub_8232E248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232E250;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31986
	ctx.r31.s64 = -2096234496;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-27992
	ctx.r29.s64 = ctx.r10.s64 + -27992;
	// lwz r11,5748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e280
	if (!ctx.cr6.eq) goto loc_8232E280;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c7690
	ctx.lr = 0x8232E274;
	sub_823C7690(ctx, base);
	// stw r3,5748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5748, ctx.r3.u32);
	// bl 0x823c14c8
	ctx.lr = 0x8232E27C;
	sub_823C14C8(ctx, base);
	// lwz r11,5748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5748);
loc_8232E280:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4216);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232e2b4
	if (ctx.cr6.eq) goto loc_8232E2B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e2b8
	if (!ctx.cr6.eq) goto loc_8232E2B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c7690
	ctx.lr = 0x8232E2A0;
	sub_823C7690(ctx, base);
	// stw r3,5748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5748, ctx.r3.u32);
	// bl 0x823c14c8
	ctx.lr = 0x8232E2A8;
	sub_823C14C8(ctx, base);
	// lwz r10,4216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4216);
	// lwz r11,5748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5748);
	// b 0x8232e2b8
	goto loc_8232E2B8;
loc_8232E2B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232E2B8:
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e2e8
	if (!ctx.cr6.eq) goto loc_8232E2E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232E2DC;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232E2E4;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232E2E8:
	// lwz r10,4216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4216);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e314
	if (!ctx.cr6.eq) goto loc_8232E314;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232E308;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232E310;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232E314:
	// lwz r10,4216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4216);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232E320;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232e36c
	if (ctx.cr6.eq) goto loc_8232E36C;
	// lwz r3,4216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4216);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232e354
	if (!ctx.cr6.eq) goto loc_8232E354;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232E344;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232E34C;
	sub_8243CDD0(ctx, base);
	// lwz r3,4216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4216);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232E354:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232e36c
	if (!ctx.cr6.eq) goto loc_8232E36C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232E36C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232E36C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232E378"))) PPC_WEAK_FUNC(sub_8232E378);
PPC_FUNC_IMPL(__imp__sub_8232E378) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r10,r10,10640
	ctx.r10.s64 = ctx.r10.s64 + 10640;
	// addi r11,r11,18600
	ctx.r11.s64 = ctx.r11.s64 + 18600;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E398"))) PPC_WEAK_FUNC(sub_8232E398);
PPC_FUNC_IMPL(__imp__sub_8232E398) {
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
	// lis r31,-31986
	ctx.r31.s64 = -2096234496;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,5748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5748);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e3dc
	if (!ctx.cr6.eq) goto loc_8232E3DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-27992
	ctx.r3.s64 = ctx.r11.s64 + -27992;
	// bl 0x823c7690
	ctx.lr = 0x8232E3D0;
	sub_823C7690(ctx, base);
	// stw r3,5748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5748, ctx.r3.u32);
	// bl 0x823c14c8
	ctx.lr = 0x8232E3D8;
	sub_823C14C8(ctx, base);
	// lwz r11,5748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5748);
loc_8232E3DC:
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

__attribute__((alias("__imp__sub_8232E408"))) PPC_WEAK_FUNC(sub_8232E408);
PPC_FUNC_IMPL(__imp__sub_8232E408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232E410;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28988
	ctx.r29.s64 = ctx.r10.s64 + -28988;
	// lwz r11,-2836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e440
	if (!ctx.cr6.eq) goto loc_8232E440;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826223b8
	ctx.lr = 0x8232E434;
	sub_826223B8(ctx, base);
	// stw r3,-2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2836, ctx.r3.u32);
	// bl 0x8260b3d8
	ctx.lr = 0x8232E43C;
	sub_8260B3D8(ctx, base);
	// lwz r11,-2836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2836);
loc_8232E440:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4220(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4220);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232e474
	if (ctx.cr6.eq) goto loc_8232E474;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e478
	if (!ctx.cr6.eq) goto loc_8232E478;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826223b8
	ctx.lr = 0x8232E460;
	sub_826223B8(ctx, base);
	// stw r3,-2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2836, ctx.r3.u32);
	// bl 0x8260b3d8
	ctx.lr = 0x8232E468;
	sub_8260B3D8(ctx, base);
	// lwz r10,4220(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4220);
	// lwz r11,-2836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2836);
	// b 0x8232e478
	goto loc_8232E478;
loc_8232E474:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232E478:
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e4a8
	if (!ctx.cr6.eq) goto loc_8232E4A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232E49C;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232E4A4;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232E4A8:
	// lwz r10,4220(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4220);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e4d4
	if (!ctx.cr6.eq) goto loc_8232E4D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232E4C8;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232E4D0;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232E4D4:
	// lwz r10,4220(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4220);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232E4E0;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232e52c
	if (ctx.cr6.eq) goto loc_8232E52C;
	// lwz r3,4220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4220);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232e514
	if (!ctx.cr6.eq) goto loc_8232E514;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232E504;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232E50C;
	sub_8243CDD0(ctx, base);
	// lwz r3,4220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4220);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232E514:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232e52c
	if (!ctx.cr6.eq) goto loc_8232E52C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232E52C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232E52C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232E538"))) PPC_WEAK_FUNC(sub_8232E538);
PPC_FUNC_IMPL(__imp__sub_8232E538) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E540"))) PPC_WEAK_FUNC(sub_8232E540);
PPC_FUNC_IMPL(__imp__sub_8232E540) {
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
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-2836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2836);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e584
	if (!ctx.cr6.eq) goto loc_8232E584;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28988
	ctx.r3.s64 = ctx.r11.s64 + -28988;
	// bl 0x826223b8
	ctx.lr = 0x8232E578;
	sub_826223B8(ctx, base);
	// stw r3,-2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2836, ctx.r3.u32);
	// bl 0x8260b3d8
	ctx.lr = 0x8232E580;
	sub_8260B3D8(ctx, base);
	// lwz r11,-2836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2836);
loc_8232E584:
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

__attribute__((alias("__imp__sub_8232E5B0"))) PPC_WEAK_FUNC(sub_8232E5B0);
PPC_FUNC_IMPL(__imp__sub_8232E5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232E5B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,-516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e5e8
	if (!ctx.cr6.eq) goto loc_8232E5E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824300f8
	ctx.lr = 0x8232E5DC;
	sub_824300F8(ctx, base);
	// stw r3,-516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -516, ctx.r3.u32);
	// bl 0x8243e0e8
	ctx.lr = 0x8232E5E4;
	sub_8243E0E8(ctx, base);
	// lwz r11,-516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -516);
loc_8232E5E8:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4224);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232e61c
	if (ctx.cr6.eq) goto loc_8232E61C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e620
	if (!ctx.cr6.eq) goto loc_8232E620;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824300f8
	ctx.lr = 0x8232E608;
	sub_824300F8(ctx, base);
	// stw r3,-516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -516, ctx.r3.u32);
	// bl 0x8243e0e8
	ctx.lr = 0x8232E610;
	sub_8243E0E8(ctx, base);
	// lwz r10,4224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4224);
	// lwz r11,-516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -516);
	// b 0x8232e620
	goto loc_8232E620;
loc_8232E61C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232E620:
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e648
	if (!ctx.cr6.eq) goto loc_8232E648;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232E63C;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232E644;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232E648:
	// lwz r10,4224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4224);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e674
	if (!ctx.cr6.eq) goto loc_8232E674;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232E668;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232E670;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232E674:
	// lwz r10,4224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4224);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232E680;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232e6cc
	if (ctx.cr6.eq) goto loc_8232E6CC;
	// lwz r3,4224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4224);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232e6b4
	if (!ctx.cr6.eq) goto loc_8232E6B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232E6A4;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232E6AC;
	sub_8243CDD0(ctx, base);
	// lwz r3,4224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4224);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232E6B4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232e6cc
	if (!ctx.cr6.eq) goto loc_8232E6CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232E6CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232E6CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232E6D8"))) PPC_WEAK_FUNC(sub_8232E6D8);
PPC_FUNC_IMPL(__imp__sub_8232E6D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E6E0"))) PPC_WEAK_FUNC(sub_8232E6E0);
PPC_FUNC_IMPL(__imp__sub_8232E6E0) {
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -516);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e724
	if (!ctx.cr6.eq) goto loc_8232E724;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28996
	ctx.r3.s64 = ctx.r11.s64 + -28996;
	// bl 0x824300f8
	ctx.lr = 0x8232E718;
	sub_824300F8(ctx, base);
	// stw r3,-516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -516, ctx.r3.u32);
	// bl 0x8243e0e8
	ctx.lr = 0x8232E720;
	sub_8243E0E8(ctx, base);
	// lwz r11,-516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -516);
loc_8232E724:
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

__attribute__((alias("__imp__sub_8232E750"))) PPC_WEAK_FUNC(sub_8232E750);
PPC_FUNC_IMPL(__imp__sub_8232E750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8232E758;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,-516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e788
	if (!ctx.cr6.eq) goto loc_8232E788;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824300f8
	ctx.lr = 0x8232E77C;
	sub_824300F8(ctx, base);
	// stw r3,-516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -516, ctx.r3.u32);
	// bl 0x8243e0e8
	ctx.lr = 0x8232E784;
	sub_8243E0E8(ctx, base);
	// lwz r11,-516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -516);
loc_8232E788:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4228);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232e7bc
	if (ctx.cr6.eq) goto loc_8232E7BC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e7c0
	if (!ctx.cr6.eq) goto loc_8232E7C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824300f8
	ctx.lr = 0x8232E7A8;
	sub_824300F8(ctx, base);
	// stw r3,-516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -516, ctx.r3.u32);
	// bl 0x8243e0e8
	ctx.lr = 0x8232E7B0;
	sub_8243E0E8(ctx, base);
	// lwz r10,4228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4228);
	// lwz r11,-516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -516);
	// b 0x8232e7c0
	goto loc_8232E7C0;
loc_8232E7BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232E7C0:
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e7e8
	if (!ctx.cr6.eq) goto loc_8232E7E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x8232E7DC;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x8232E7E4;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_8232E7E8:
	// lwz r10,4228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4228);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e814
	if (!ctx.cr6.eq) goto loc_8232E814;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232E808;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232E810;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232E814:
	// lwz r10,4228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4228);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x8232E820;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8232e86c
	if (ctx.cr6.eq) goto loc_8232E86C;
	// lwz r3,4228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4228);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x8232e854
	if (!ctx.cr6.eq) goto loc_8232E854;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x8232E844;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x8232E84C;
	sub_8243CDD0(ctx, base);
	// lwz r3,4228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4228);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_8232E854:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232e86c
	if (!ctx.cr6.eq) goto loc_8232E86C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232E86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232E86C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232E878"))) PPC_WEAK_FUNC(sub_8232E878);
PPC_FUNC_IMPL(__imp__sub_8232E878) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E880"))) PPC_WEAK_FUNC(sub_8232E880);
PPC_FUNC_IMPL(__imp__sub_8232E880) {
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -516);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232e8c4
	if (!ctx.cr6.eq) goto loc_8232E8C4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28996
	ctx.r3.s64 = ctx.r11.s64 + -28996;
	// bl 0x824300f8
	ctx.lr = 0x8232E8B8;
	sub_824300F8(ctx, base);
	// stw r3,-516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -516, ctx.r3.u32);
	// bl 0x8243e0e8
	ctx.lr = 0x8232E8C0;
	sub_8243E0E8(ctx, base);
	// lwz r11,-516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -516);
loc_8232E8C4:
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

__attribute__((alias("__imp__sub_8232E8F0"))) PPC_WEAK_FUNC(sub_8232E8F0);
PPC_FUNC_IMPL(__imp__sub_8232E8F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E8F8"))) PPC_WEAK_FUNC(sub_8232E8F8);
PPC_FUNC_IMPL(__imp__sub_8232E8F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E900"))) PPC_WEAK_FUNC(sub_8232E900);
PPC_FUNC_IMPL(__imp__sub_8232E900) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r10,r10,10640
	ctx.r10.s64 = ctx.r10.s64 + 10640;
	// addi r11,r11,18600
	ctx.r11.s64 = ctx.r11.s64 + 18600;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232E920"))) PPC_WEAK_FUNC(sub_8232E920);
PPC_FUNC_IMPL(__imp__sub_8232E920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8232E928;
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
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r10,-16968
	ctx.r30.s64 = ctx.r10.s64 + -16968;
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
	ctx.lr = 0x8232E96C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
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
	ctx.lr = 0x8232E9A4;
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
	// bne cr6,0x8232e9e0
	if (!ctx.cr6.eq) goto loc_8232E9E0;
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
	ctx.lr = 0x8232E9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232E9E0:
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
	ctx.lr = 0x8232E9FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232EA08"))) PPC_WEAK_FUNC(sub_8232EA08);
PPC_FUNC_IMPL(__imp__sub_8232EA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8232EA10;
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
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r10,-16968
	ctx.r30.s64 = ctx.r10.s64 + -16968;
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
	ctx.lr = 0x8232EA54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
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
	ctx.lr = 0x8232EA8C;
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
	// bne cr6,0x8232eac8
	if (!ctx.cr6.eq) goto loc_8232EAC8;
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
	ctx.lr = 0x8232EAC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232EAC8:
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
	ctx.lr = 0x8232EAE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232EAF0"))) PPC_WEAK_FUNC(sub_8232EAF0);
PPC_FUNC_IMPL(__imp__sub_8232EAF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EAF8"))) PPC_WEAK_FUNC(sub_8232EAF8);
PPC_FUNC_IMPL(__imp__sub_8232EAF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EB00"))) PPC_WEAK_FUNC(sub_8232EB00);
PPC_FUNC_IMPL(__imp__sub_8232EB00) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EB08"))) PPC_WEAK_FUNC(sub_8232EB08);
PPC_FUNC_IMPL(__imp__sub_8232EB08) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EB10"))) PPC_WEAK_FUNC(sub_8232EB10);
PPC_FUNC_IMPL(__imp__sub_8232EB10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r10,r10,10640
	ctx.r10.s64 = ctx.r10.s64 + 10640;
	// addi r11,r11,18600
	ctx.r11.s64 = ctx.r11.s64 + 18600;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EB30"))) PPC_WEAK_FUNC(sub_8232EB30);
PPC_FUNC_IMPL(__imp__sub_8232EB30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r10,r10,10640
	ctx.r10.s64 = ctx.r10.s64 + 10640;
	// addi r11,r11,18600
	ctx.r11.s64 = ctx.r11.s64 + 18600;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EB50"))) PPC_WEAK_FUNC(sub_8232EB50);
PPC_FUNC_IMPL(__imp__sub_8232EB50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EB58"))) PPC_WEAK_FUNC(sub_8232EB58);
PPC_FUNC_IMPL(__imp__sub_8232EB58) {
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

__attribute__((alias("__imp__sub_8232EB68"))) PPC_WEAK_FUNC(sub_8232EB68);
PPC_FUNC_IMPL(__imp__sub_8232EB68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EB70"))) PPC_WEAK_FUNC(sub_8232EB70);
PPC_FUNC_IMPL(__imp__sub_8232EB70) {
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
	// bl 0x823e1ca0
	ctx.lr = 0x8232EB90;
	sub_823E1CA0(ctx, base);
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

__attribute__((alias("__imp__sub_8232EBB0"))) PPC_WEAK_FUNC(sub_8232EBB0);
PPC_FUNC_IMPL(__imp__sub_8232EBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8232EBB8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82d5c578
	ctx.lr = 0x8232EBC0;
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
	// beq cr6,0x8232ee0c
	if (ctx.cr6.eq) goto loc_8232EE0C;
	// lfs f30,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x823e1ca0
	ctx.lr = 0x8232EBF4;
	sub_823E1CA0(ctx, base);
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
	// bl 0x823e1ca0
	ctx.lr = 0x8232EC08;
	sub_823E1CA0(ctx, base);
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
	// bl 0x82993510
	ctx.lr = 0x8232EC24;
	sub_82993510(ctx, base);
	// lfs f30,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x823e1ca0
	ctx.lr = 0x8232EC30;
	sub_823E1CA0(ctx, base);
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
	// bl 0x823e1ca0
	ctx.lr = 0x8232EC44;
	sub_823E1CA0(ctx, base);
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
	// bl 0x82993510
	ctx.lr = 0x8232EC60;
	sub_82993510(ctx, base);
	// lfs f30,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x823e1ca0
	ctx.lr = 0x8232EC6C;
	sub_823E1CA0(ctx, base);
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
	// bl 0x823e1ca0
	ctx.lr = 0x8232EC80;
	sub_823E1CA0(ctx, base);
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
	// bl 0x82993510
	ctx.lr = 0x8232EC9C;
	sub_82993510(ctx, base);
	// lfs f30,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x823e1ca0
	ctx.lr = 0x8232ECA8;
	sub_823E1CA0(ctx, base);
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
	// bl 0x823e1ca0
	ctx.lr = 0x8232ECBC;
	sub_823E1CA0(ctx, base);
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
	// bl 0x82993510
	ctx.lr = 0x8232ECD8;
	sub_82993510(ctx, base);
	// lfs f30,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x823e1ca0
	ctx.lr = 0x8232ECE4;
	sub_823E1CA0(ctx, base);
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
	// bl 0x823e1ca0
	ctx.lr = 0x8232ECF8;
	sub_823E1CA0(ctx, base);
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
	// bl 0x82993510
	ctx.lr = 0x8232ED14;
	sub_82993510(ctx, base);
	// lfs f30,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x823e1ca0
	ctx.lr = 0x8232ED20;
	sub_823E1CA0(ctx, base);
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
	// bl 0x823e1ca0
	ctx.lr = 0x8232ED34;
	sub_823E1CA0(ctx, base);
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
	// bl 0x82993510
	ctx.lr = 0x8232ED50;
	sub_82993510(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f3,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f3.f64 = double(temp.f32);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lfs f2,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829933a0
	ctx.lr = 0x8232ED68;
	sub_829933A0(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
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
	// lfs f0,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
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
loc_8232EE0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82d5c5c4
	ctx.lr = 0x8232EE18;
	__restfpr_28(ctx, base);
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232EE20"))) PPC_WEAK_FUNC(sub_8232EE20);
PPC_FUNC_IMPL(__imp__sub_8232EE20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EE28"))) PPC_WEAK_FUNC(sub_8232EE28);
PPC_FUNC_IMPL(__imp__sub_8232EE28) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ef04
	if (ctx.cr6.eq) goto loc_8232EF04;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237aa50
	ctx.lr = 0x8232EE74;
	sub_8237AA50(ctx, base);
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f13,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f12,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f2,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f5,684(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,688(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,692(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	ctx.f3.f64 = double(temp.f32);
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f11,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f11,f10,f6
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f13,684(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// fadds f13,f4,f11
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f13,688(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// fadds f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// stfs f0,692(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
loc_8232EF04:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_8232EF20"))) PPC_WEAK_FUNC(sub_8232EF20);
PPC_FUNC_IMPL(__imp__sub_8232EF20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EF28"))) PPC_WEAK_FUNC(sub_8232EF28);
PPC_FUNC_IMPL(__imp__sub_8232EF28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EF30"))) PPC_WEAK_FUNC(sub_8232EF30);
PPC_FUNC_IMPL(__imp__sub_8232EF30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232EF40"))) PPC_WEAK_FUNC(sub_8232EF40);
PPC_FUNC_IMPL(__imp__sub_8232EF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8232EF48;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82d5c550
	ctx.lr = 0x8232EF50;
	__savefpr_18(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,684(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// rlwinm r8,r10,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// lwz r9,692(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 692);
	// lwz r10,688(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 688);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r8,700(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 700);
	// lwz r7,696(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 696);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lwz r8,704(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// bne cr6,0x8232f000
	if (!ctx.cr6.eq) goto loc_8232F000;
	// addi r8,r31,108
	ctx.r8.s64 = ctx.r31.s64 + 108;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// bl 0x824165e8
	ctx.lr = 0x8232EFBC;
	sub_824165E8(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r10,r31,120
	ctx.r10.s64 = ctx.r31.s64 + 120;
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82d5c59c
	ctx.lr = 0x8232EFFC;
	__restfpr_18(ctx, base);
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
loc_8232F000:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f18,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f18.f64 = double(temp.f32);
	// beq cr6,0x8232f044
	if (ctx.cr6.eq) goto loc_8232F044;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232F028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// b 0x8232f068
	goto loc_8232F068;
loc_8232F044:
	// stfs f18,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f18,84(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f18,88(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_8232F068:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dcab0
	ctx.lr = 0x8232F074;
	sub_822DCAB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x824165e8
	ctx.lr = 0x8232F09C;
	sub_824165E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f11,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fneg f31,f10
	ctx.f31.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fneg f30,f10
	ctx.f30.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fneg f29,f10
	ctx.f29.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f28,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f9,f11,f28
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fmuls f8,f29,f11
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// fmuls f10,f29,f13
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fmuls f7,f29,f0
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmadds f9,f29,f12,f9
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmsubs f8,f12,f28,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 - ctx.f8.f64));
	// fmsubs f10,f0,f28,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 - ctx.f10.f64));
	// fmadds f7,f31,f11,f7
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fnmsubs f9,f31,f13,f9
	ctx.f9.f64 = double(float(-(ctx.f31.f64 * ctx.f13.f64 - ctx.f9.f64)));
	// fmadds f8,f30,f13,f8
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fnmsubs f10,f31,f12,f10
	ctx.f10.f64 = double(float(-(ctx.f31.f64 * ctx.f12.f64 - ctx.f10.f64)));
	// fmadds f13,f13,f28,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f7.f64));
	// fmadds f21,f30,f0,f9
	ctx.f21.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f20,f31,f0,f8
	ctx.f20.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fnmsubs f22,f30,f11,f10
	ctx.f22.f64 = double(float(-(ctx.f30.f64 * ctx.f11.f64 - ctx.f10.f64)));
	// fnmsubs f19,f30,f12,f13
	ctx.f19.f64 = double(float(-(ctx.f30.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// bl 0x824165e8
	ctx.lr = 0x8232F140;
	sub_824165E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lfs f26,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f13,f26,f28
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f28.f64));
	// lfs f27,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f0,f26,f29
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f29.f64));
	// lfs f24,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f12,f26,f31
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// lfs f25,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f11,f24,f29
	ctx.f11.f64 = double(float(ctx.f24.f64 * ctx.f29.f64));
	// fmadds f13,f27,f29,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmsubs f0,f27,f28,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f28.f64 - ctx.f0.f64));
	// fmadds f12,f25,f29,f12
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fmsubs f10,f25,f28,f11
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f28.f64 - ctx.f11.f64));
	// fnmsubs f13,f24,f31,f13
	ctx.f13.f64 = double(float(-(ctx.f24.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// fmadds f0,f25,f31,f0
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmadds f9,f24,f28,f12
	ctx.f9.f64 = double(float(ctx.f24.f64 * ctx.f28.f64 + ctx.f12.f64));
	// fmadds f11,f25,f30,f13
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmadds f12,f24,f30,f0
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fnmsubs f13,f27,f31,f10
	ctx.f13.f64 = double(float(-(ctx.f27.f64 * ctx.f31.f64 - ctx.f10.f64)));
	// fnmsubs f0,f27,f30,f9
	ctx.f0.f64 = double(float(-(ctx.f27.f64 * ctx.f30.f64 - ctx.f9.f64)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fnmsubs f13,f26,f30,f13
	ctx.f13.f64 = double(float(-(ctx.f26.f64 * ctx.f30.f64 - ctx.f13.f64)));
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmuls f8,f13,f21
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f21.f64));
	// fmuls f10,f0,f19
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// fmuls f9,f0,f21
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f21.f64));
	// fmadds f8,f0,f20,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f20.f64 + ctx.f8.f64));
	// fmsubs f10,f13,f22,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f22.f64 - ctx.f10.f64));
	// fmsubs f9,f13,f20,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f20.f64 - ctx.f9.f64));
	// fmuls f13,f13,f19
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f19.f64));
	// fnmsubs f8,f12,f19,f8
	ctx.f8.f64 = double(float(-(ctx.f12.f64 * ctx.f19.f64 - ctx.f8.f64)));
	// fnmsubs f10,f12,f20,f10
	ctx.f10.f64 = double(float(-(ctx.f12.f64 * ctx.f20.f64 - ctx.f10.f64)));
	// fmadds f7,f12,f22,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f22.f64 + ctx.f9.f64));
	// fmadds f0,f0,f22,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f22.f64 + ctx.f13.f64));
	// fmadds f9,f22,f11,f8
	ctx.f9.f64 = double(float(ctx.f22.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fnmsubs f10,f21,f11,f10
	ctx.f10.f64 = double(float(-(ctx.f21.f64 * ctx.f11.f64 - ctx.f10.f64)));
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f8,f19,f11,f7
	ctx.f8.f64 = double(float(ctx.f19.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f0,f12,f21,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f21.f64 + ctx.f0.f64));
	// fnmsubs f0,f20,f11,f0
	ctx.f0.f64 = double(float(-(ctx.f20.f64 * ctx.f11.f64 - ctx.f0.f64)));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82421ce8
	ctx.lr = 0x8232F244;
	sub_82421CE8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82d5b828
	ctx.lr = 0x8232F264;
	sub_82D5B828(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmul f1,f0,f23
	ctx.f1.f64 = ctx.f0.f64 * ctx.f23.f64;
	// bl 0x82d5c2d0
	ctx.lr = 0x8232F270;
	sub_82D5C2D0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x82d5b828
	ctx.lr = 0x8232F28C;
	sub_82D5B828(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmul f1,f0,f23
	ctx.f1.f64 = ctx.f0.f64 * ctx.f23.f64;
	// bl 0x82d5c2d0
	ctx.lr = 0x8232F298;
	sub_82D5C2D0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x82d5b828
	ctx.lr = 0x8232F2B4;
	sub_82D5B828(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmul f1,f0,f23
	ctx.f1.f64 = ctx.f0.f64 * ctx.f23.f64;
	// bl 0x82d5c2d0
	ctx.lr = 0x8232F2C0;
	sub_82D5C2D0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x824165e8
	ctx.lr = 0x8232F2DC;
	sub_824165E8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lfs f11,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f25
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f11,f24
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f24.f64));
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f0,f24
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// fmuls f10,f13,f24
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// fmadds f9,f12,f24,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f24.f64 + ctx.f9.f64));
	// fmsubs f8,f12,f25,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f25.f64 - ctx.f8.f64));
	// fmsubs f10,f0,f25,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 - ctx.f10.f64));
	// fnmsubs f9,f27,f13,f9
	ctx.f9.f64 = double(float(-(ctx.f27.f64 * ctx.f13.f64 - ctx.f9.f64)));
	// fmadds f8,f26,f13,f8
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f13,f25,f13,f7
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fnmsubs f10,f12,f27,f10
	ctx.f10.f64 = double(float(-(ctx.f12.f64 * ctx.f27.f64 - ctx.f10.f64)));
	// fmadds f9,f0,f26,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f9.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f0,f27,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f8.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f13,f11,f27,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 + ctx.f13.f64));
	// fnmsubs f10,f11,f26,f10
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f26.f64 - ctx.f10.f64)));
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fnmsubs f13,f12,f26,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f26.f64 - ctx.f13.f64)));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8232f3c0
	if (ctx.cr6.eq) goto loc_8232F3C0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232F3A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// b 0x8232f3e4
	goto loc_8232F3E4;
loc_8232F3C0:
	// stfs f18,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f18,84(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f18,88(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_8232F3E4:
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f28,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fsubs f31,f0,f28
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f30,f13,f27
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// fsubs f29,f0,f26
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// bl 0x8237aa50
	ctx.lr = 0x8232F414;
	sub_8237AA50(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f0,f11,f31,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f0.f64));
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f13,f10,f31,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// lfs f1,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f9,f31,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmadds f0,f8,f29,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f13,f7,f29,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmadds f12,f6,f29,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fmadds f31,f5,f18,f0
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f18.f64 + ctx.f0.f64));
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmadds f0,f4,f18,f13
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f18.f64 + ctx.f13.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f13,f3,f18,f12
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f18.f64 + ctx.f12.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82d5b828
	ctx.lr = 0x8232F4A0;
	sub_82D5B828(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmul f1,f0,f23
	ctx.f1.f64 = ctx.f0.f64 * ctx.f23.f64;
	// bl 0x82d5c2d0
	ctx.lr = 0x8232F4AC;
	sub_82D5C2D0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// fmuls f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// bl 0x82d5b828
	ctx.lr = 0x8232F4C0;
	sub_82D5B828(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmul f1,f0,f23
	ctx.f1.f64 = ctx.f0.f64 * ctx.f23.f64;
	// bl 0x82d5c2d0
	ctx.lr = 0x8232F4CC;
	sub_82D5C2D0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// fmuls f30,f13,f12
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// bl 0x82d5b828
	ctx.lr = 0x8232F4E4;
	sub_82D5B828(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmul f1,f0,f23
	ctx.f1.f64 = ctx.f0.f64 * ctx.f23.f64;
	// bl 0x82d5c2d0
	ctx.lr = 0x8232F4F0;
	sub_82D5C2D0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmuls f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x8237aa50
	ctx.lr = 0x8232F508;
	sub_8237AA50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f11,f29,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f0.f64));
	// lfs f9,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f10,f29,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f13.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f9,f29,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fmadds f0,f8,f31,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmadds f13,f7,f31,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f12,f6,f31,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmadds f0,f5,f18,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f18.f64 + ctx.f0.f64));
	// fmadds f13,f4,f18,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f18.f64 + ctx.f13.f64));
	// fmadds f12,f11,f18,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f18.f64 + ctx.f12.f64));
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f13,f27
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// fadds f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// stw r11,684(r29)
	PPC_STORE_U32(ctx.r29.u32 + 684, ctx.r11.u32);
	// stw r10,688(r29)
	PPC_STORE_U32(ctx.r29.u32 + 688, ctx.r10.u32);
	// stw r9,692(r29)
	PPC_STORE_U32(ctx.r29.u32 + 692, ctx.r9.u32);
	// bl 0x82421ce8
	ctx.lr = 0x8232F5B4;
	sub_82421CE8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,696(r29)
	PPC_STORE_U32(ctx.r29.u32 + 696, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,700(r29)
	PPC_STORE_U32(ctx.r29.u32 + 700, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,704(r29)
	PPC_STORE_U32(ctx.r29.u32 + 704, ctx.r11.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82d5c59c
	ctx.lr = 0x8232F5D8;
	__restfpr_18(ctx, base);
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232F5E0"))) PPC_WEAK_FUNC(sub_8232F5E0);
PPC_FUNC_IMPL(__imp__sub_8232F5E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F5E8"))) PPC_WEAK_FUNC(sub_8232F5E8);
PPC_FUNC_IMPL(__imp__sub_8232F5E8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,696
	ctx.r4.s64 = ctx.r30.s64 + 696;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237aa50
	ctx.lr = 0x8232F618;
	sub_8237AA50(ctx, base);
	// lfs f13,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f11,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f5,684(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 684);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,688(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,692(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	ctx.f3.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lfs f13,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f11,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f11,f10,f6
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f4,f11
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 684, ctx.r11.u32);
	// stw r10,688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 688, ctx.r10.u32);
	// stw r9,692(r30)
	PPC_STORE_U32(ctx.r30.u32 + 692, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F718"))) PPC_WEAK_FUNC(sub_8232F718);
PPC_FUNC_IMPL(__imp__sub_8232F718) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F738"))) PPC_WEAK_FUNC(sub_8232F738);
PPC_FUNC_IMPL(__imp__sub_8232F738) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F740"))) PPC_WEAK_FUNC(sub_8232F740);
PPC_FUNC_IMPL(__imp__sub_8232F740) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,696
	ctx.r4.s64 = ctx.r31.s64 + 696;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237aa50
	ctx.lr = 0x8232F770;
	sub_8237AA50(ctx, base);
	// lfs f13,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,684(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f4,688(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f3,692(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fadds f10,f8,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f13,f11,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f11,f10,f6
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f4,f11
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
	// stw r10,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r10.u32);
	// stw r9,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F840"))) PPC_WEAK_FUNC(sub_8232F840);
PPC_FUNC_IMPL(__imp__sub_8232F840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F860"))) PPC_WEAK_FUNC(sub_8232F860);
PPC_FUNC_IMPL(__imp__sub_8232F860) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232F868"))) PPC_WEAK_FUNC(sub_8232F868);
PPC_FUNC_IMPL(__imp__sub_8232F868) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f0.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f0.u32);
	// fctiwz f0,f12
	ctx.f0.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f0,0,r5
	PPC_STORE_U32(ctx.r5.u32, ctx.f0.u32);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r8,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232f984
	if (ctx.cr6.eq) goto loc_8232F984;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x8232f958
	if (!ctx.cr6.gt) goto loc_8232F958;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
loc_8232F958:
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8232f96c
	if (!ctx.cr6.gt) goto loc_8232F96C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8232F96C:
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8232f980
	if (!ctx.cr6.lt) goto loc_8232F980;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8232F980:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8232F984:
	// rlwinm r10,r8,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232f9d0
	if (ctx.cr6.eq) goto loc_8232F9D0;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x8232f9a4
	if (!ctx.cr6.gt) goto loc_8232F9A4;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
loc_8232F9A4:
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8232f9b8
	if (!ctx.cr6.gt) goto loc_8232F9B8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8232F9B8:
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8232f9cc
	if (!ctx.cr6.lt) goto loc_8232F9CC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8232F9CC:
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
loc_8232F9D0:
	// rlwinm r10,r8,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232fa1c
	if (ctx.cr6.eq) goto loc_8232FA1C;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x8232f9f0
	if (!ctx.cr6.gt) goto loc_8232F9F0;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
loc_8232F9F0:
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8232fa04
	if (!ctx.cr6.gt) goto loc_8232FA04;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8232FA04:
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8232fa18
	if (!ctx.cr6.lt) goto loc_8232FA18;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8232FA18:
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
loc_8232FA1C:
	// lfs f0,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,696
	ctx.r4.s64 = ctx.r30.s64 + 696;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,132(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// bl 0x824165e8
	ctx.lr = 0x8232FA34;
	sub_824165E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x824165a8
	ctx.lr = 0x8232FA68;
	sub_824165A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f9,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f8,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmadds f6,f0,f11,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmsubs f5,f0,f8,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 - ctx.f5.f64));
	// fmadds f4,f0,f7,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmsubs f0,f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 - ctx.f9.f64));
	// fmadds f9,f13,f7,f6
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f6,f10,f13,f5
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fnmsubs f5,f13,f11,f4
	ctx.f5.f64 = double(float(-(ctx.f13.f64 * ctx.f11.f64 - ctx.f4.f64)));
	// fnmsubs f0,f13,f8,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f8.f64 - ctx.f0.f64)));
	// fnmsubs f13,f8,f12,f9
	ctx.f13.f64 = double(float(-(ctx.f8.f64 * ctx.f12.f64 - ctx.f9.f64)));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f13,f12,f11,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f6.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f13,f10,f12,f5
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fnmsubs f0,f12,f7,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f7.f64 - ctx.f0.f64)));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82421ce8
	ctx.lr = 0x8232FB0C;
	sub_82421CE8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 696, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,700(r30)
	PPC_STORE_U32(ctx.r30.u32 + 700, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 704, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_8232FB40"))) PPC_WEAK_FUNC(sub_8232FB40);
PPC_FUNC_IMPL(__imp__sub_8232FB40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FB60"))) PPC_WEAK_FUNC(sub_8232FB60);
PPC_FUNC_IMPL(__imp__sub_8232FB60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FB80"))) PPC_WEAK_FUNC(sub_8232FB80);
PPC_FUNC_IMPL(__imp__sub_8232FB80) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FB88"))) PPC_WEAK_FUNC(sub_8232FB88);
PPC_FUNC_IMPL(__imp__sub_8232FB88) {
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
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8232fbb4
	if (ctx.cr6.lt) goto loc_8232FBB4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f1,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8232FBB4:
	// bl 0x823e1ca0
	ctx.lr = 0x8232FBB8;
	sub_823E1CA0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-18888(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18888);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FBD8"))) PPC_WEAK_FUNC(sub_8232FBD8);
PPC_FUNC_IMPL(__imp__sub_8232FBD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FBE0"))) PPC_WEAK_FUNC(sub_8232FBE0);
PPC_FUNC_IMPL(__imp__sub_8232FBE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FBE8"))) PPC_WEAK_FUNC(sub_8232FBE8);
PPC_FUNC_IMPL(__imp__sub_8232FBE8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,684
	ctx.r11.s64 = ctx.r4.s64 + 684;
	// addi r10,r4,720
	ctx.r10.s64 = ctx.r4.s64 + 720;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FC10"))) PPC_WEAK_FUNC(sub_8232FC10);
PPC_FUNC_IMPL(__imp__sub_8232FC10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FC18"))) PPC_WEAK_FUNC(sub_8232FC18);
PPC_FUNC_IMPL(__imp__sub_8232FC18) {
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
	// bl 0x82d5c574
	ctx.lr = 0x8232FC30;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f29,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// fabs f28,f0
	ctx.f28.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// bl 0x82993480
	ctx.lr = 0x8232FC54;
	sub_82993480(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f1
	ctx.f11.f64 = ctx.f1.f64;
	// lfs f12,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// fabs f27,f12
	ctx.f27.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f30,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f30.f64 = double(temp.f32);
	// fadds f13,f28,f30
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// fabs f28,f0
	ctx.f28.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f0,f29
	ctx.f0.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x82993480
	ctx.lr = 0x8232FC8C;
	sub_82993480(ctx, base);
	// fadds f13,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f9,700(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,696(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,704(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fsubs f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,700(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 700, temp.u32);
	// fadds f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f13,704(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 704, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,696(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 696, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82d5c5c0
	ctx.lr = 0x8232FCE0;
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

__attribute__((alias("__imp__sub_8232FCF8"))) PPC_WEAK_FUNC(sub_8232FCF8);
PPC_FUNC_IMPL(__imp__sub_8232FCF8) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// lfs f2,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82993510
	ctx.lr = 0x8232FD38;
	sub_82993510(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lfs f3,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82993510
	ctx.lr = 0x8232FD4C;
	sub_82993510(ctx, base);
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

__attribute__((alias("__imp__sub_8232FD60"))) PPC_WEAK_FUNC(sub_8232FD60);
PPC_FUNC_IMPL(__imp__sub_8232FD60) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FD68"))) PPC_WEAK_FUNC(sub_8232FD68);
PPC_FUNC_IMPL(__imp__sub_8232FD68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FD70"))) PPC_WEAK_FUNC(sub_8232FD70);
PPC_FUNC_IMPL(__imp__sub_8232FD70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FD90"))) PPC_WEAK_FUNC(sub_8232FD90);
PPC_FUNC_IMPL(__imp__sub_8232FD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r4,684
	ctx.r11.s64 = ctx.r4.s64 + 684;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f11,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f11,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f12,84(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FDF0"))) PPC_WEAK_FUNC(sub_8232FDF0);
PPC_FUNC_IMPL(__imp__sub_8232FDF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FDF8"))) PPC_WEAK_FUNC(sub_8232FDF8);
PPC_FUNC_IMPL(__imp__sub_8232FDF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FE18"))) PPC_WEAK_FUNC(sub_8232FE18);
PPC_FUNC_IMPL(__imp__sub_8232FE18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FE20"))) PPC_WEAK_FUNC(sub_8232FE20);
PPC_FUNC_IMPL(__imp__sub_8232FE20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,228
	ctx.r11.s64 = ctx.r11.s64 + 228;
	// addi r10,r4,684
	ctx.r10.s64 = ctx.r4.s64 + 684;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FE50"))) PPC_WEAK_FUNC(sub_8232FE50);
PPC_FUNC_IMPL(__imp__sub_8232FE50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FE58"))) PPC_WEAK_FUNC(sub_8232FE58);
PPC_FUNC_IMPL(__imp__sub_8232FE58) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// ld r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 76);
	// lwz r4,868(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 868);
	// bl 0x827fb190
	ctx.lr = 0x8232FE88;
	sub_827FB190(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,684
	ctx.r11.s64 = ctx.r31.s64 + 684;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8232FEB8"))) PPC_WEAK_FUNC(sub_8232FEB8);
PPC_FUNC_IMPL(__imp__sub_8232FEB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FEC0"))) PPC_WEAK_FUNC(sub_8232FEC0);
PPC_FUNC_IMPL(__imp__sub_8232FEC0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// beq cr6,0x8232ff70
	if (ctx.cr6.eq) goto loc_8232FF70;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 76);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 868);
	// addi r3,r11,656
	ctx.r3.s64 = ctx.r11.s64 + 656;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232FF34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232ff54
	if (!ctx.cr6.eq) goto loc_8232FF54;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r9,r11,228
	ctx.r9.s64 = ctx.r11.s64 + 228;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8232ff60
	goto loc_8232FF60;
loc_8232FF54:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8232FF60:
	// addi r8,r30,684
	ctx.r8.s64 = ctx.r30.s64 + 684;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
loc_8232FF70:
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

__attribute__((alias("__imp__sub_8232FF88"))) PPC_WEAK_FUNC(sub_8232FF88);
PPC_FUNC_IMPL(__imp__sub_8232FF88) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232FF90"))) PPC_WEAK_FUNC(sub_8232FF90);
PPC_FUNC_IMPL(__imp__sub_8232FF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// beq cr6,0x8232fffc
	if (ctx.cr6.eq) goto loc_8232FFFC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8237abf8
	ctx.lr = 0x8232FFE0;
	sub_8237ABF8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r31,684
	ctx.r11.s64 = ctx.r31.s64 + 684;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_8232FFFC:
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

__attribute__((alias("__imp__sub_82330010"))) PPC_WEAK_FUNC(sub_82330010);
PPC_FUNC_IMPL(__imp__sub_82330010) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330018"))) PPC_WEAK_FUNC(sub_82330018);
PPC_FUNC_IMPL(__imp__sub_82330018) {
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
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82330094
	if (ctx.cr6.eq) goto loc_82330094;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82285778
	ctx.lr = 0x82330048;
	sub_82285778(ctx, base);
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r30,684
	ctx.r11.s64 = ctx.r30.s64 + 684;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_82330094:
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

__attribute__((alias("__imp__sub_823300B0"))) PPC_WEAK_FUNC(sub_823300B0);
PPC_FUNC_IMPL(__imp__sub_823300B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823300B8"))) PPC_WEAK_FUNC(sub_823300B8);
PPC_FUNC_IMPL(__imp__sub_823300B8) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233010c
	if (ctx.cr6.eq) goto loc_8233010C;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823300F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r31,696
	ctx.r11.s64 = ctx.r31.s64 + 696;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8233010C:
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

__attribute__((alias("__imp__sub_82330120"))) PPC_WEAK_FUNC(sub_82330120);
PPC_FUNC_IMPL(__imp__sub_82330120) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330128"))) PPC_WEAK_FUNC(sub_82330128);
PPC_FUNC_IMPL(__imp__sub_82330128) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// ld r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 76);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r4,868(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 868);
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x827fb070
	ctx.lr = 0x82330174;
	sub_827FB070(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822dd728
	ctx.lr = 0x82330184;
	sub_822DD728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82416628
	ctx.lr = 0x82330190;
	sub_82416628(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r31,696
	ctx.r8.s64 = ctx.r31.s64 + 696;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_82330218"))) PPC_WEAK_FUNC(sub_82330218);
PPC_FUNC_IMPL(__imp__sub_82330218) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330220"))) PPC_WEAK_FUNC(sub_82330220);
PPC_FUNC_IMPL(__imp__sub_82330220) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// beq cr6,0x823302d4
	if (ctx.cr6.eq) goto loc_823302D4;
	// lwz r8,868(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 868);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823302d4
	if (ctx.cr6.eq) goto loc_823302D4;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// ld r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 76);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 868);
	// addi r3,r11,656
	ctx.r3.s64 = ctx.r11.s64 + 656;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823302A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823302c8
	if (!ctx.cr6.eq) goto loc_823302C8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x823302d4
	goto loc_823302D4;
loc_823302C8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_823302D4:
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r8,r30,696
	ctx.r8.s64 = ctx.r30.s64 + 696;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82330350"))) PPC_WEAK_FUNC(sub_82330350);
PPC_FUNC_IMPL(__imp__sub_82330350) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330358"))) PPC_WEAK_FUNC(sub_82330358);
PPC_FUNC_IMPL(__imp__sub_82330358) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330360"))) PPC_WEAK_FUNC(sub_82330360);
PPC_FUNC_IMPL(__imp__sub_82330360) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330368"))) PPC_WEAK_FUNC(sub_82330368);
PPC_FUNC_IMPL(__imp__sub_82330368) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330370"))) PPC_WEAK_FUNC(sub_82330370);
PPC_FUNC_IMPL(__imp__sub_82330370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82330378;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82d5c570
	ctx.lr = 0x82330380;
	__savefpr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330678
	if (ctx.cr6.eq) goto loc_82330678;
	// lwz r4,76(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82330678
	if (ctx.cr6.eq) goto loc_82330678;
	// lwz r3,72(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82330678
	if (ctx.cr6.eq) goto loc_82330678;
	// bl 0x8239e760
	ctx.lr = 0x823303B8;
	sub_8239E760(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82330678
	if (ctx.cr6.eq) goto loc_82330678;
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 868);
	// lwz r31,656(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// bl 0x823a3f30
	ctx.lr = 0x823303DC;
	sub_823A3F30(ctx, base);
	// lwz r10,72(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,868(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 868);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r3,r10,656
	ctx.r3.s64 = ctx.r10.s64 + 656;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82330404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82396448
	ctx.lr = 0x82330410;
	sub_82396448(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// bl 0x822dd528
	ctx.lr = 0x82330438;
	sub_822DD528(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823964a8
	ctx.lr = 0x82330440;
	sub_823964A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823305e8
	if (ctx.cr6.eq) goto loc_823305E8;
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82330468
	if (ctx.cr6.eq) goto loc_82330468;
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82330484
	if (!ctx.cr6.eq) goto loc_82330484;
loc_82330468:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 3221225472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82330484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82330484:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823964b0
	ctx.lr = 0x8233048C;
	sub_823964B0(ctx, base);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,588(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823304c8
	if (!ctx.cr6.eq) goto loc_823304C8;
	// lwz r8,592(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823304c8
	if (!ctx.cr6.eq) goto loc_823304C8;
	// lwz r8,596(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x823304e8
	if (ctx.cr6.eq) goto loc_823304E8;
loc_823304C8:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// stw r9,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r9.u32);
	// stw r10,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
	// lwz r8,328(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 328);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823304E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823304E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823964b0
	ctx.lr = 0x823304F0;
	sub_823964B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823964b0
	ctx.lr = 0x82330518;
	sub_823964B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f26,f13,f0
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823964b0
	ctx.lr = 0x82330540;
	sub_823964B0(ctx, base);
	// lfs f0,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fadds f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bne cr6,0x823305bc
	if (!ctx.cr6.eq) goto loc_823305BC;
	// lfs f13,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x823305bc
	if (!ctx.cr6.eq) goto loc_823305BC;
	// lfs f13,584(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x823305e8
	if (ctx.cr6.eq) goto loc_823305E8;
loc_823305BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// stw r10,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
	// stw r9,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r9.u32);
	// stw r8,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823305E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823305E8:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r25,684
	ctx.r11.s64 = ctx.r25.s64 + 684;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r25,696
	ctx.r7.s64 = ctx.r25.s64 + 696;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r9,244(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_82330678:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82d5c5bc
	ctx.lr = 0x82330684;
	__restfpr_26(ctx, base);
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330688"))) PPC_WEAK_FUNC(sub_82330688);
PPC_FUNC_IMPL(__imp__sub_82330688) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330690"))) PPC_WEAK_FUNC(sub_82330690);
PPC_FUNC_IMPL(__imp__sub_82330690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 + 20;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823306D0"))) PPC_WEAK_FUNC(sub_823306D0);
PPC_FUNC_IMPL(__imp__sub_823306D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823306D8"))) PPC_WEAK_FUNC(sub_823306D8);
PPC_FUNC_IMPL(__imp__sub_823306D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 + 20;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330718"))) PPC_WEAK_FUNC(sub_82330718);
PPC_FUNC_IMPL(__imp__sub_82330718) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330720"))) PPC_WEAK_FUNC(sub_82330720);
PPC_FUNC_IMPL(__imp__sub_82330720) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330728"))) PPC_WEAK_FUNC(sub_82330728);
PPC_FUNC_IMPL(__imp__sub_82330728) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 + 20;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330768"))) PPC_WEAK_FUNC(sub_82330768);
PPC_FUNC_IMPL(__imp__sub_82330768) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330770"))) PPC_WEAK_FUNC(sub_82330770);
PPC_FUNC_IMPL(__imp__sub_82330770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823307f8
	if (ctx.cr6.eq) goto loc_823307F8;
	// lfs f13,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,684(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f12,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,688(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,692(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8240b778
	ctx.lr = 0x823307D4;
	sub_8240B778(ctx, base);
	// lfs f0,704(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r31,696
	ctx.r11.s64 = ctx.r31.s64 + 696;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_823307F8:
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

__attribute__((alias("__imp__sub_82330810"))) PPC_WEAK_FUNC(sub_82330810);
PPC_FUNC_IMPL(__imp__sub_82330810) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330818"))) PPC_WEAK_FUNC(sub_82330818);
PPC_FUNC_IMPL(__imp__sub_82330818) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823308dc
	if (ctx.cr6.eq) goto loc_823308DC;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823308dc
	if (ctx.cr6.eq) goto loc_823308DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11940);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfd f0,-4344(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4344);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82d5c0d0
	ctx.lr = 0x82330874;
	sub_82D5C0D0(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lfs f0,684(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,692(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f10,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f12,688(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmuls f1,f10,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f2,f0
	ctx.f2.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82d5d3b8
	ctx.lr = 0x823308BC;
	sub_82D5D3B8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21356);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-18880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18880);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
loc_823308DC:
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

__attribute__((alias("__imp__sub_823308F8"))) PPC_WEAK_FUNC(sub_823308F8);
PPC_FUNC_IMPL(__imp__sub_823308F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330900"))) PPC_WEAK_FUNC(sub_82330900);
PPC_FUNC_IMPL(__imp__sub_82330900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lfs f11,696(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 696);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lfs f10,700(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 700);
	ctx.f10.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f9,704(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 704);
	ctx.f9.f64 = double(temp.f32);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// std r10,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r10.u64);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfd f0,-32(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f13,-24(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,696(r4)
	PPC_STORE_U32(ctx.r4.u32 + 696, ctx.r11.u32);
	// stw r10,700(r4)
	PPC_STORE_U32(ctx.r4.u32 + 700, ctx.r10.u32);
	// stw r9,704(r4)
	PPC_STORE_U32(ctx.r4.u32 + 704, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330998"))) PPC_WEAK_FUNC(sub_82330998);
PPC_FUNC_IMPL(__imp__sub_82330998) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823309B8"))) PPC_WEAK_FUNC(sub_823309B8);
PPC_FUNC_IMPL(__imp__sub_823309B8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f1,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f0.f64));
	// lfs f11,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// fmadds f0,f11,f1,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// bl 0x8237ec68
	ctx.lr = 0x82330A00;
	sub_8237EC68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f11,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 684, ctx.r11.u32);
	// stw r9,692(r30)
	PPC_STORE_U32(ctx.r30.u32 + 692, ctx.r9.u32);
	// stw r10,688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 688, ctx.r10.u32);
	// lfs f13,684(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 684);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,688(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,692(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8240b778
	ctx.lr = 0x82330A88;
	sub_8240B778(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r30,696
	ctx.r11.s64 = ctx.r30.s64 + 696;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82330AC0"))) PPC_WEAK_FUNC(sub_82330AC0);
PPC_FUNC_IMPL(__imp__sub_82330AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82330AC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,-524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330af8
	if (!ctx.cr6.eq) goto loc_82330AF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8242ff88
	ctx.lr = 0x82330AEC;
	sub_8242FF88(ctx, base);
	// stw r3,-524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -524, ctx.r3.u32);
	// bl 0x8243dea8
	ctx.lr = 0x82330AF4;
	sub_8243DEA8(ctx, base);
	// lwz r11,-524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -524);
loc_82330AF8:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4396(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4396);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82330b2c
	if (ctx.cr6.eq) goto loc_82330B2C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330b30
	if (!ctx.cr6.eq) goto loc_82330B30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8242ff88
	ctx.lr = 0x82330B18;
	sub_8242FF88(ctx, base);
	// stw r3,-524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -524, ctx.r3.u32);
	// bl 0x8243dea8
	ctx.lr = 0x82330B20;
	sub_8243DEA8(ctx, base);
	// lwz r10,4396(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4396);
	// lwz r11,-524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -524);
	// b 0x82330b30
	goto loc_82330B30;
loc_82330B2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82330B30:
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330b58
	if (!ctx.cr6.eq) goto loc_82330B58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x82330B4C;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x82330B54;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_82330B58:
	// lwz r10,4396(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4396);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330b84
	if (!ctx.cr6.eq) goto loc_82330B84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x82330B78;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x82330B80;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_82330B84:
	// lwz r10,4396(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4396);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x82330B90;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82330bdc
	if (ctx.cr6.eq) goto loc_82330BDC;
	// lwz r3,4396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4396);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82330bc4
	if (!ctx.cr6.eq) goto loc_82330BC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x82330BB4;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x82330BBC;
	sub_8243CDD0(ctx, base);
	// lwz r3,4396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4396);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_82330BC4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82330bdc
	if (!ctx.cr6.eq) goto loc_82330BDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82330BDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330BE8"))) PPC_WEAK_FUNC(sub_82330BE8);
PPC_FUNC_IMPL(__imp__sub_82330BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// addi r10,r10,10640
	ctx.r10.s64 = ctx.r10.s64 + 10640;
	// addi r11,r11,18600
	ctx.r11.s64 = ctx.r11.s64 + 18600;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330C08"))) PPC_WEAK_FUNC(sub_82330C08);
PPC_FUNC_IMPL(__imp__sub_82330C08) {
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -524);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330c4c
	if (!ctx.cr6.eq) goto loc_82330C4C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28996
	ctx.r3.s64 = ctx.r11.s64 + -28996;
	// bl 0x8242ff88
	ctx.lr = 0x82330C40;
	sub_8242FF88(ctx, base);
	// stw r3,-524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -524, ctx.r3.u32);
	// bl 0x8243dea8
	ctx.lr = 0x82330C48;
	sub_8243DEA8(ctx, base);
	// lwz r11,-524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -524);
loc_82330C4C:
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

__attribute__((alias("__imp__sub_82330C78"))) PPC_WEAK_FUNC(sub_82330C78);
PPC_FUNC_IMPL(__imp__sub_82330C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82330C80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330cb0
	if (!ctx.cr6.eq) goto loc_82330CB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x82330CA4;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x82330CAC;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_82330CB0:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4400(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4400);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82330ce4
	if (ctx.cr6.eq) goto loc_82330CE4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330ce8
	if (!ctx.cr6.eq) goto loc_82330CE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x82330CD0;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x82330CD8;
	sub_82455520(ctx, base);
	// lwz r10,4400(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4400);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// b 0x82330ce8
	goto loc_82330CE8;
loc_82330CE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82330CE8:
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330d0c
	if (!ctx.cr6.eq) goto loc_82330D0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x82330D00;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x82330D08;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_82330D0C:
	// lwz r10,4400(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4400);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330d38
	if (!ctx.cr6.eq) goto loc_82330D38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x82330D2C;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x82330D34;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_82330D38:
	// lwz r10,4400(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4400);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x82330D44;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82330d90
	if (ctx.cr6.eq) goto loc_82330D90;
	// lwz r3,4400(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4400);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82330d78
	if (!ctx.cr6.eq) goto loc_82330D78;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x82330D68;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x82330D70;
	sub_8243CDD0(ctx, base);
	// lwz r3,4400(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4400);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_82330D78:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82330d90
	if (!ctx.cr6.eq) goto loc_82330D90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82330D90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330D98"))) PPC_WEAK_FUNC(sub_82330D98);
PPC_FUNC_IMPL(__imp__sub_82330D98) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330DA0"))) PPC_WEAK_FUNC(sub_82330DA0);
PPC_FUNC_IMPL(__imp__sub_82330DA0) {
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
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330de4
	if (!ctx.cr6.eq) goto loc_82330DE4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28996
	ctx.r3.s64 = ctx.r11.s64 + -28996;
	// bl 0x82458830
	ctx.lr = 0x82330DD8;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x82330DE0;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_82330DE4:
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

__attribute__((alias("__imp__sub_82330E10"))) PPC_WEAK_FUNC(sub_82330E10);
PPC_FUNC_IMPL(__imp__sub_82330E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82330E18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28988
	ctx.r29.s64 = ctx.r10.s64 + -28988;
	// lwz r11,-16724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16724);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330e48
	if (!ctx.cr6.eq) goto loc_82330E48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825cb668
	ctx.lr = 0x82330E3C;
	sub_825CB668(ctx, base);
	// stw r3,-16724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16724, ctx.r3.u32);
	// bl 0x82596458
	ctx.lr = 0x82330E44;
	sub_82596458(ctx, base);
	// lwz r11,-16724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16724);
loc_82330E48:
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r10,4404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4404);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82330e7c
	if (ctx.cr6.eq) goto loc_82330E7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330e80
	if (!ctx.cr6.eq) goto loc_82330E80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825cb668
	ctx.lr = 0x82330E68;
	sub_825CB668(ctx, base);
	// stw r3,-16724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16724, ctx.r3.u32);
	// bl 0x82596458
	ctx.lr = 0x82330E70;
	sub_82596458(ctx, base);
	// lwz r10,4404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4404);
	// lwz r11,-16724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16724);
	// b 0x82330e80
	goto loc_82330E80;
loc_82330E7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82330E80:
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28996
	ctx.r29.s64 = ctx.r10.s64 + -28996;
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330eb0
	if (!ctx.cr6.eq) goto loc_82330EB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82458830
	ctx.lr = 0x82330EA4;
	sub_82458830(ctx, base);
	// stw r3,18024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18024, ctx.r3.u32);
	// bl 0x82455520
	ctx.lr = 0x82330EAC;
	sub_82455520(ctx, base);
	// lwz r11,18024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18024);
loc_82330EB0:
	// lwz r10,4404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4404);
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330edc
	if (!ctx.cr6.eq) goto loc_82330EDC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x82330ED0;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x82330ED8;
	sub_8243CDD0(ctx, base);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_82330EDC:
	// lwz r10,4404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4404);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// bl 0x824552a0
	ctx.lr = 0x82330EE8;
	sub_824552A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82330f34
	if (ctx.cr6.eq) goto loc_82330F34;
	// lwz r3,4404(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4404);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bne cr6,0x82330f1c
	if (!ctx.cr6.eq) goto loc_82330F1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824333f0
	ctx.lr = 0x82330F0C;
	sub_824333F0(ctx, base);
	// stw r3,-564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -564, ctx.r3.u32);
	// bl 0x8243cdd0
	ctx.lr = 0x82330F14;
	sub_8243CDD0(ctx, base);
	// lwz r3,4404(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4404);
	// lwz r11,-564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -564);
loc_82330F1C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82330f34
	if (!ctx.cr6.eq) goto loc_82330F34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82330F34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82330F40"))) PPC_WEAK_FUNC(sub_82330F40);
PPC_FUNC_IMPL(__imp__sub_82330F40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330F48"))) PPC_WEAK_FUNC(sub_82330F48);
PPC_FUNC_IMPL(__imp__sub_82330F48) {
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
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,-16724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16724);
	// lwz r30,60(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330f8c
	if (!ctx.cr6.eq) goto loc_82330F8C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28988
	ctx.r3.s64 = ctx.r11.s64 + -28988;
	// bl 0x825cb668
	ctx.lr = 0x82330F80;
	sub_825CB668(ctx, base);
	// stw r3,-16724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16724, ctx.r3.u32);
	// bl 0x82596458
	ctx.lr = 0x82330F88;
	sub_82596458(ctx, base);
	// lwz r11,-16724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16724);
loc_82330F8C:
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

__attribute__((alias("__imp__sub_82330FB8"))) PPC_WEAK_FUNC(sub_82330FB8);
PPC_FUNC_IMPL(__imp__sub_82330FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82330FD0"))) PPC_WEAK_FUNC(sub_82330FD0);
PPC_FUNC_IMPL(__imp__sub_82330FD0) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82330FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82331034
	if (!ctx.cr6.eq) goto loc_82331034;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82331034
	if (!ctx.cr6.eq) goto loc_82331034;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82331034
	if (!ctx.cr6.eq) goto loc_82331034;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82331038
	if (ctx.cr6.eq) goto loc_82331038;
loc_82331034:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82331038:
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

__attribute__((alias("__imp__sub_82331050"))) PPC_WEAK_FUNC(sub_82331050);
PPC_FUNC_IMPL(__imp__sub_82331050) {
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
	// bl 0x8293b0c0
	ctx.lr = 0x82331068;
	sub_8293B0C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331080
	if (ctx.cr6.eq) goto loc_82331080;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829444b8
	ctx.lr = 0x82331080;
	sub_829444B8(ctx, base);
loc_82331080:
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

__attribute__((alias("__imp__sub_82331098"))) PPC_WEAK_FUNC(sub_82331098);
PPC_FUNC_IMPL(__imp__sub_82331098) {
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
	// bl 0x8293b0c0
	ctx.lr = 0x823310B0;
	sub_8293B0C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823310c8
	if (ctx.cr6.eq) goto loc_823310C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829444b8
	ctx.lr = 0x823310C8;
	sub_829444B8(ctx, base);
loc_823310C8:
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

__attribute__((alias("__imp__sub_823310E0"))) PPC_WEAK_FUNC(sub_823310E0);
PPC_FUNC_IMPL(__imp__sub_823310E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82331104
	if (ctx.cr6.eq) goto loc_82331104;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lfs f0,160(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 824);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82331104:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331110"))) PPC_WEAK_FUNC(sub_82331110);
PPC_FUNC_IMPL(__imp__sub_82331110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f0,824(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 824);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f13,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331150"))) PPC_WEAK_FUNC(sub_82331150);
PPC_FUNC_IMPL(__imp__sub_82331150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lfs f0,824(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 824);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,3180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,3176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stfs f0,164(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331188"))) PPC_WEAK_FUNC(sub_82331188);
PPC_FUNC_IMPL(__imp__sub_82331188) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82331290
	if (ctx.cr6.eq) goto loc_82331290;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823311c0
	if (!ctx.cr6.eq) goto loc_823311C0;
loc_823311B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82331294
	goto loc_82331294;
loc_823311C0:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331290
	if (ctx.cr6.eq) goto loc_82331290;
	// bl 0x822e9318
	ctx.lr = 0x823311D0;
	sub_822E9318(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,-24
	ctx.r30.s64 = ctx.r11.s64 + -24;
	// beq cr6,0x82331230
	if (ctx.cr6.eq) goto loc_82331230;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,592
	ctx.r10.s64 = ctx.r10.s64 + 592;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82331210
	if (!ctx.cr6.eq) goto loc_82331210;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823311b8
	if (ctx.cr6.eq) goto loc_823311B8;
loc_82331210:
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82331230
	if (!ctx.cr6.eq) goto loc_82331230;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823311b8
	if (ctx.cr6.eq) goto loc_823311B8;
loc_82331230:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x822e9378
	ctx.lr = 0x82331238;
	sub_822E9378(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82331290
	if (ctx.cr6.eq) goto loc_82331290;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,1464
	ctx.r10.s64 = ctx.r10.s64 + 1464;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82331270
	if (!ctx.cr6.eq) goto loc_82331270;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823311b8
	if (ctx.cr6.eq) goto loc_823311B8;
loc_82331270:
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82331290
	if (!ctx.cr6.eq) goto loc_82331290;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823311b8
	if (ctx.cr6.eq) goto loc_823311B8;
loc_82331290:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82331294:
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

__attribute__((alias("__imp__sub_823312B0"))) PPC_WEAK_FUNC(sub_823312B0);
PPC_FUNC_IMPL(__imp__sub_823312B0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x823312c8
	if (ctx.cr6.eq) goto loc_823312C8;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_823312C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823312D0"))) PPC_WEAK_FUNC(sub_823312D0);
PPC_FUNC_IMPL(__imp__sub_823312D0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// beq cr6,0x823312f8
	if (ctx.cr6.eq) goto loc_823312F8;
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// beq cr6,0x823312f8
	if (ctx.cr6.eq) goto loc_823312F8;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// beq cr6,0x823312f8
	if (ctx.cr6.eq) goto loc_823312F8;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_823312F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82331300"))) PPC_WEAK_FUNC(sub_82331300);
PPC_FUNC_IMPL(__imp__sub_82331300) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// beq cr6,0x82331350
	if (ctx.cr6.eq) goto loc_82331350;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x82331350
	if (ctx.cr6.eq) goto loc_82331350;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// beq cr6,0x82331350
	if (ctx.cr6.eq) goto loc_82331350;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x82331350
	if (ctx.cr6.eq) goto loc_82331350;
	// cmplwi cr6,r11,111
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 111, ctx.xer);
	// beq cr6,0x82331350
	if (ctx.cr6.eq) goto loc_82331350;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x82331350
	if (ctx.cr6.eq) goto loc_82331350;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// beq cr6,0x82331350
	if (ctx.cr6.eq) goto loc_82331350;
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// beq cr6,0x82331350
	if (ctx.cr6.eq) goto loc_82331350;
	// cmplwi cr6,r11,104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82331350:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

