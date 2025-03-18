#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8304EEE8"))) PPC_WEAK_FUNC(sub_8304EEE8);
PPC_FUNC_IMPL(__imp__sub_8304EEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304EF18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ef18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EF18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304EF28"))) PPC_WEAK_FUNC(sub_8304EF28);
PPC_FUNC_IMPL(__imp__sub_8304EF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304ef68
	if (!ctx.cr6.eq) goto loc_8304EF68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304EF5C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ef5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EF5C;
loc_8304EF68:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ef88
	if (ctx.cr6.eq) goto loc_8304EF88;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,78
	ctx.r11.s64 = 78;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304EF88:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15936);
	// stw r11,312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 312, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304EF98"))) PPC_WEAK_FUNC(sub_8304EF98);
PPC_FUNC_IMPL(__imp__sub_8304EF98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304EFC8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304efc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EFC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304EFD8"))) PPC_WEAK_FUNC(sub_8304EFD8);
PPC_FUNC_IMPL(__imp__sub_8304EFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304f018
	if (!ctx.cr6.eq) goto loc_8304F018;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F00C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f00c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F00C;
loc_8304F018:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f038
	if (ctx.cr6.eq) goto loc_8304F038;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,79
	ctx.r11.s64 = 79;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304F038:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15932);
	// stw r11,316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F048"))) PPC_WEAK_FUNC(sub_8304F048);
PPC_FUNC_IMPL(__imp__sub_8304F048) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304F078:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F078;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F088"))) PPC_WEAK_FUNC(sub_8304F088);
PPC_FUNC_IMPL(__imp__sub_8304F088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304f0c8
	if (!ctx.cr6.eq) goto loc_8304F0C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F0BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f0bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F0BC;
loc_8304F0C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f0e8
	if (ctx.cr6.eq) goto loc_8304F0E8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,88
	ctx.r11.s64 = 88;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304F0E8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15928);
	// stw r11,352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F0F8"))) PPC_WEAK_FUNC(sub_8304F0F8);
PPC_FUNC_IMPL(__imp__sub_8304F0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304F128:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f128
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F138"))) PPC_WEAK_FUNC(sub_8304F138);
PPC_FUNC_IMPL(__imp__sub_8304F138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304f178
	if (!ctx.cr6.eq) goto loc_8304F178;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F16C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f16c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F16C;
loc_8304F178:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f198
	if (ctx.cr6.eq) goto loc_8304F198;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304F198:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15924);
	// stw r11,320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F1A8"))) PPC_WEAK_FUNC(sub_8304F1A8);
PPC_FUNC_IMPL(__imp__sub_8304F1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304F1D8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f1d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F1D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F1E8"))) PPC_WEAK_FUNC(sub_8304F1E8);
PPC_FUNC_IMPL(__imp__sub_8304F1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304f228
	if (!ctx.cr6.eq) goto loc_8304F228;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F21C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f21c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F21C;
loc_8304F228:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f248
	if (ctx.cr6.eq) goto loc_8304F248;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,81
	ctx.r11.s64 = 81;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304F248:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15920);
	// stw r11,324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F258"))) PPC_WEAK_FUNC(sub_8304F258);
PPC_FUNC_IMPL(__imp__sub_8304F258) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304F288:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f288
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F298"))) PPC_WEAK_FUNC(sub_8304F298);
PPC_FUNC_IMPL(__imp__sub_8304F298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304f2d8
	if (!ctx.cr6.eq) goto loc_8304F2D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F2CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f2cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F2CC;
loc_8304F2D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f2f8
	if (ctx.cr6.eq) goto loc_8304F2F8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,57
	ctx.r11.s64 = 57;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304F2F8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15916);
	// stw r11,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F308"))) PPC_WEAK_FUNC(sub_8304F308);
PPC_FUNC_IMPL(__imp__sub_8304F308) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304F338:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F338;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F348"))) PPC_WEAK_FUNC(sub_8304F348);
PPC_FUNC_IMPL(__imp__sub_8304F348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304f388
	if (!ctx.cr6.eq) goto loc_8304F388;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F37C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f37c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F37C;
loc_8304F388:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,356(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 356);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f3a8
	if (ctx.cr6.eq) goto loc_8304F3A8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,89
	ctx.r11.s64 = 89;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304F3A8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15912);
	// stw r11,356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 356, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F3B8"))) PPC_WEAK_FUNC(sub_8304F3B8);
PPC_FUNC_IMPL(__imp__sub_8304F3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304F3E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f3e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F3E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F3F8"))) PPC_WEAK_FUNC(sub_8304F3F8);
PPC_FUNC_IMPL(__imp__sub_8304F3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304f438
	if (!ctx.cr6.eq) goto loc_8304F438;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F42C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f42c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F42C;
loc_8304F438:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f458
	if (ctx.cr6.eq) goto loc_8304F458;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,97
	ctx.r11.s64 = 97;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304F458:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15908);
	// stw r11,388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F468"))) PPC_WEAK_FUNC(sub_8304F468);
PPC_FUNC_IMPL(__imp__sub_8304F468) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304F498:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F498;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F4A8"))) PPC_WEAK_FUNC(sub_8304F4A8);
PPC_FUNC_IMPL(__imp__sub_8304F4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304f4e8
	if (!ctx.cr6.eq) goto loc_8304F4E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F4DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f4dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F4DC;
loc_8304F4E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 392);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f508
	if (ctx.cr6.eq) goto loc_8304F508;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,98
	ctx.r11.s64 = 98;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304F508:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15904);
	// stw r11,392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F518"))) PPC_WEAK_FUNC(sub_8304F518);
PPC_FUNC_IMPL(__imp__sub_8304F518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304f558
	if (!ctx.cr6.eq) goto loc_8304F558;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F54C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f54c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F54C;
loc_8304F558:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 844);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f578
	if (ctx.cr6.eq) goto loc_8304F578;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,211
	ctx.r11.s64 = 211;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304F578:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15900);
	// stw r11,844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 844, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F588"))) PPC_WEAK_FUNC(sub_8304F588);
PPC_FUNC_IMPL(__imp__sub_8304F588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304f5c8
	if (!ctx.cr6.eq) goto loc_8304F5C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F5BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f5bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F5BC;
loc_8304F5C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,848(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 848);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f5e8
	if (ctx.cr6.eq) goto loc_8304F5E8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,212
	ctx.r11.s64 = 212;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304F5E8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15896);
	// stw r11,848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 848, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F5F8"))) PPC_WEAK_FUNC(sub_8304F5F8);
PPC_FUNC_IMPL(__imp__sub_8304F5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304f638
	if (!ctx.cr6.eq) goto loc_8304F638;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F62C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f62c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F62C;
loc_8304F638:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,852(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 852);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f658
	if (ctx.cr6.eq) goto loc_8304F658;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,213
	ctx.r11.s64 = 213;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304F658:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15892);
	// stw r11,852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 852, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F668"))) PPC_WEAK_FUNC(sub_8304F668);
PPC_FUNC_IMPL(__imp__sub_8304F668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304f6a8
	if (!ctx.cr6.eq) goto loc_8304F6A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F69C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f69c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F69C;
loc_8304F6A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1184);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f6c8
	if (ctx.cr6.eq) goto loc_8304F6C8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,296
	ctx.r11.s64 = 296;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304F6C8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15888);
	// stw r11,1184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F6D8"))) PPC_WEAK_FUNC(sub_8304F6D8);
PPC_FUNC_IMPL(__imp__sub_8304F6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304f718
	if (!ctx.cr6.eq) goto loc_8304F718;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F70C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f70c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F70C;
loc_8304F718:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,856(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f738
	if (ctx.cr6.eq) goto loc_8304F738;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,214
	ctx.r11.s64 = 214;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304F738:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15884);
	// stw r11,856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 856, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F748"))) PPC_WEAK_FUNC(sub_8304F748);
PPC_FUNC_IMPL(__imp__sub_8304F748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304f788
	if (!ctx.cr6.eq) goto loc_8304F788;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F77C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f77c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F77C;
loc_8304F788:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,860(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 860);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f7a8
	if (ctx.cr6.eq) goto loc_8304F7A8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,215
	ctx.r11.s64 = 215;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304F7A8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15880);
	// stw r11,860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 860, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F7B8"))) PPC_WEAK_FUNC(sub_8304F7B8);
PPC_FUNC_IMPL(__imp__sub_8304F7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304f7f8
	if (!ctx.cr6.eq) goto loc_8304F7F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F7EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f7ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F7EC;
loc_8304F7F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 864);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f818
	if (ctx.cr6.eq) goto loc_8304F818;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,216
	ctx.r11.s64 = 216;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304F818:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15876);
	// stw r11,864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F828"))) PPC_WEAK_FUNC(sub_8304F828);
PPC_FUNC_IMPL(__imp__sub_8304F828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304f868
	if (!ctx.cr6.eq) goto loc_8304F868;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F85C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f85c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F85C;
loc_8304F868:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1100);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f888
	if (ctx.cr6.eq) goto loc_8304F888;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,275
	ctx.r11.s64 = 275;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304F888:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15872);
	// stw r11,1100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F898"))) PPC_WEAK_FUNC(sub_8304F898);
PPC_FUNC_IMPL(__imp__sub_8304F898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304f8d8
	if (!ctx.cr6.eq) goto loc_8304F8D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F8CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f8cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F8CC;
loc_8304F8D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1104);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f8f8
	if (ctx.cr6.eq) goto loc_8304F8F8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,276
	ctx.r11.s64 = 276;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304F8F8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15868);
	// stw r11,1104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F908"))) PPC_WEAK_FUNC(sub_8304F908);
PPC_FUNC_IMPL(__imp__sub_8304F908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304f948
	if (!ctx.cr6.eq) goto loc_8304F948;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F93C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f93c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F93C;
loc_8304F948:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,868(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 868);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f968
	if (ctx.cr6.eq) goto loc_8304F968;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,217
	ctx.r11.s64 = 217;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304F968:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15864);
	// stw r11,868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 868, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F978"))) PPC_WEAK_FUNC(sub_8304F978);
PPC_FUNC_IMPL(__imp__sub_8304F978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304f9b8
	if (!ctx.cr6.eq) goto loc_8304F9B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304F9AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304f9ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304F9AC;
loc_8304F9B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,872(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 872);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304f9d8
	if (ctx.cr6.eq) goto loc_8304F9D8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,218
	ctx.r11.s64 = 218;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304F9D8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15860(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15860);
	// stw r11,872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 872, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304F9E8"))) PPC_WEAK_FUNC(sub_8304F9E8);
PPC_FUNC_IMPL(__imp__sub_8304F9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304fa28
	if (!ctx.cr6.eq) goto loc_8304FA28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304FA1C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304fa1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FA1C;
loc_8304FA28:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 876);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304fa48
	if (ctx.cr6.eq) goto loc_8304FA48;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,219
	ctx.r11.s64 = 219;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304FA48:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15856);
	// stw r11,876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 876, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FA58"))) PPC_WEAK_FUNC(sub_8304FA58);
PPC_FUNC_IMPL(__imp__sub_8304FA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304fa98
	if (!ctx.cr6.eq) goto loc_8304FA98;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304FA8C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304fa8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FA8C;
loc_8304FA98:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 880);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304fab8
	if (ctx.cr6.eq) goto loc_8304FAB8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,220
	ctx.r11.s64 = 220;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304FAB8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15852);
	// stw r11,880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 880, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FAC8"))) PPC_WEAK_FUNC(sub_8304FAC8);
PPC_FUNC_IMPL(__imp__sub_8304FAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304fb08
	if (!ctx.cr6.eq) goto loc_8304FB08;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304FAFC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304fafc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FAFC;
loc_8304FB08:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 884);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304fb28
	if (ctx.cr6.eq) goto loc_8304FB28;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,221
	ctx.r11.s64 = 221;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304FB28:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15848);
	// stw r11,884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 884, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FB38"))) PPC_WEAK_FUNC(sub_8304FB38);
PPC_FUNC_IMPL(__imp__sub_8304FB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304fb78
	if (!ctx.cr6.eq) goto loc_8304FB78;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304FB6C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304fb6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FB6C;
loc_8304FB78:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1188);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304fb98
	if (ctx.cr6.eq) goto loc_8304FB98;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,297
	ctx.r11.s64 = 297;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304FB98:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15844);
	// stw r11,1188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1188, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FBA8"))) PPC_WEAK_FUNC(sub_8304FBA8);
PPC_FUNC_IMPL(__imp__sub_8304FBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304fbe8
	if (!ctx.cr6.eq) goto loc_8304FBE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304FBDC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304fbdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FBDC;
loc_8304FBE8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 888);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304fc08
	if (ctx.cr6.eq) goto loc_8304FC08;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,222
	ctx.r11.s64 = 222;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304FC08:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15840);
	// stw r11,888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 888, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FC18"))) PPC_WEAK_FUNC(sub_8304FC18);
PPC_FUNC_IMPL(__imp__sub_8304FC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304fc58
	if (!ctx.cr6.eq) goto loc_8304FC58;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304FC4C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304fc4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FC4C;
loc_8304FC58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,892(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 892);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304fc78
	if (ctx.cr6.eq) goto loc_8304FC78;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,223
	ctx.r11.s64 = 223;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304FC78:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15836);
	// stw r11,892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 892, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FC88"))) PPC_WEAK_FUNC(sub_8304FC88);
PPC_FUNC_IMPL(__imp__sub_8304FC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304fcc8
	if (!ctx.cr6.eq) goto loc_8304FCC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304FCBC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304fcbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FCBC;
loc_8304FCC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 896);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304fce8
	if (ctx.cr6.eq) goto loc_8304FCE8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,224
	ctx.r11.s64 = 224;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304FCE8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15832);
	// stw r11,896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 896, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FCF8"))) PPC_WEAK_FUNC(sub_8304FCF8);
PPC_FUNC_IMPL(__imp__sub_8304FCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304fd38
	if (!ctx.cr6.eq) goto loc_8304FD38;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304FD2C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304fd2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FD2C;
loc_8304FD38:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 900);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304fd58
	if (ctx.cr6.eq) goto loc_8304FD58;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,225
	ctx.r11.s64 = 225;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304FD58:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15828);
	// stw r11,900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 900, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FD68"))) PPC_WEAK_FUNC(sub_8304FD68);
PPC_FUNC_IMPL(__imp__sub_8304FD68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304FD98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304fd98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FD98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FDA8"))) PPC_WEAK_FUNC(sub_8304FDA8);
PPC_FUNC_IMPL(__imp__sub_8304FDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304FDD8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304fdd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FDD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FDE8"))) PPC_WEAK_FUNC(sub_8304FDE8);
PPC_FUNC_IMPL(__imp__sub_8304FDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304FE18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304fe18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FE18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FE28"))) PPC_WEAK_FUNC(sub_8304FE28);
PPC_FUNC_IMPL(__imp__sub_8304FE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304fe68
	if (!ctx.cr6.eq) goto loc_8304FE68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304FE5C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304fe5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FE5C;
loc_8304FE68:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304fe88
	if (ctx.cr6.eq) goto loc_8304FE88;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,226
	ctx.r11.s64 = 226;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304FE88:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15812);
	// stw r11,904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 904, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FE98"))) PPC_WEAK_FUNC(sub_8304FE98);
PPC_FUNC_IMPL(__imp__sub_8304FE98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304FEC8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304fec8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FEC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FED8"))) PPC_WEAK_FUNC(sub_8304FED8);
PPC_FUNC_IMPL(__imp__sub_8304FED8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304FF08:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ff08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FF08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FF18"))) PPC_WEAK_FUNC(sub_8304FF18);
PPC_FUNC_IMPL(__imp__sub_8304FF18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304FF48:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ff48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FF48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FF58"))) PPC_WEAK_FUNC(sub_8304FF58);
PPC_FUNC_IMPL(__imp__sub_8304FF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ff98
	if (!ctx.cr6.eq) goto loc_8304FF98;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304FF8C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ff8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FF8C;
loc_8304FF98:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1008);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ffb8
	if (ctx.cr6.eq) goto loc_8304FFB8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,252
	ctx.r11.s64 = 252;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304FFB8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15796);
	// stw r11,1008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1008, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304FFC8"))) PPC_WEAK_FUNC(sub_8304FFC8);
PPC_FUNC_IMPL(__imp__sub_8304FFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83050008
	if (!ctx.cr6.eq) goto loc_83050008;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304FFFC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304fffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304FFFC;
loc_83050008:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1280);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83050028
	if (ctx.cr6.eq) goto loc_83050028;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,320
	ctx.r11.s64 = 320;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83050028:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15792);
	// stw r11,1280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050038"))) PPC_WEAK_FUNC(sub_83050038);
PPC_FUNC_IMPL(__imp__sub_83050038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83050078
	if (!ctx.cr6.eq) goto loc_83050078;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305006C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305006c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305006C;
loc_83050078:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1200);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83050098
	if (ctx.cr6.eq) goto loc_83050098;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,300
	ctx.r11.s64 = 300;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83050098:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15788);
	// stw r11,1200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830500A8"))) PPC_WEAK_FUNC(sub_830500A8);
PPC_FUNC_IMPL(__imp__sub_830500A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830500e8
	if (!ctx.cr6.eq) goto loc_830500E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830500DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830500dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830500DC;
loc_830500E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,6000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6000);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83050108
	if (ctx.cr6.eq) goto loc_83050108;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,1500
	ctx.r11.s64 = 1500;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83050108:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15784);
	// stw r11,6000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6000, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050118"))) PPC_WEAK_FUNC(sub_83050118);
PPC_FUNC_IMPL(__imp__sub_83050118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83050158
	if (!ctx.cr6.eq) goto loc_83050158;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305014C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305014c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305014C;
loc_83050158:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,6004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6004);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83050178
	if (ctx.cr6.eq) goto loc_83050178;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,1501
	ctx.r11.s64 = 1501;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83050178:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15780);
	// stw r11,6004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050188"))) PPC_WEAK_FUNC(sub_83050188);
PPC_FUNC_IMPL(__imp__sub_83050188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830501c8
	if (!ctx.cr6.eq) goto loc_830501C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830501BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830501bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830501BC;
loc_830501C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 568);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830501e8
	if (ctx.cr6.eq) goto loc_830501E8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,142
	ctx.r11.s64 = 142;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830501E8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15776);
	// stw r11,568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830501F8"))) PPC_WEAK_FUNC(sub_830501F8);
PPC_FUNC_IMPL(__imp__sub_830501F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83050238
	if (!ctx.cr6.eq) goto loc_83050238;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305022C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305022c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305022C;
loc_83050238:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 812);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83050258
	if (ctx.cr6.eq) goto loc_83050258;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,203
	ctx.r11.s64 = 203;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83050258:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15772);
	// stw r11,812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 812, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050268"))) PPC_WEAK_FUNC(sub_83050268);
PPC_FUNC_IMPL(__imp__sub_83050268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830502a8
	if (!ctx.cr6.eq) goto loc_830502A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305029C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305029c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305029C;
loc_830502A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1148);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830502c8
	if (ctx.cr6.eq) goto loc_830502C8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,287
	ctx.r11.s64 = 287;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830502C8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15768);
	// stw r11,1148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830502D8"))) PPC_WEAK_FUNC(sub_830502D8);
PPC_FUNC_IMPL(__imp__sub_830502D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83050318
	if (!ctx.cr6.eq) goto loc_83050318;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305030C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305030c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305030C;
loc_83050318:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1152);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83050338
	if (ctx.cr6.eq) goto loc_83050338;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,288
	ctx.r11.s64 = 288;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83050338:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15764);
	// stw r11,1152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050348"))) PPC_WEAK_FUNC(sub_83050348);
PPC_FUNC_IMPL(__imp__sub_83050348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83050388
	if (!ctx.cr6.eq) goto loc_83050388;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305037C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305037c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305037C;
loc_83050388:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1156);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830503a8
	if (ctx.cr6.eq) goto loc_830503A8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,289
	ctx.r11.s64 = 289;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830503A8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15760);
	// stw r11,1156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830503B8"))) PPC_WEAK_FUNC(sub_830503B8);
PPC_FUNC_IMPL(__imp__sub_830503B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830503f8
	if (!ctx.cr6.eq) goto loc_830503F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830503EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830503ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830503EC;
loc_830503F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1160);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83050418
	if (ctx.cr6.eq) goto loc_83050418;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,290
	ctx.r11.s64 = 290;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83050418:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15756);
	// stw r11,1160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050428"))) PPC_WEAK_FUNC(sub_83050428);
PPC_FUNC_IMPL(__imp__sub_83050428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83050468
	if (!ctx.cr6.eq) goto loc_83050468;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305045C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305045c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305045C;
loc_83050468:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1164);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83050488
	if (ctx.cr6.eq) goto loc_83050488;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,291
	ctx.r11.s64 = 291;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83050488:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15752);
	// stw r11,1164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050498"))) PPC_WEAK_FUNC(sub_83050498);
PPC_FUNC_IMPL(__imp__sub_83050498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830504d8
	if (!ctx.cr6.eq) goto loc_830504D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830504CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830504cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830504CC;
loc_830504D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1264);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830504f8
	if (ctx.cr6.eq) goto loc_830504F8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,316
	ctx.r11.s64 = 316;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830504F8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15748);
	// stw r11,1264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050508"))) PPC_WEAK_FUNC(sub_83050508);
PPC_FUNC_IMPL(__imp__sub_83050508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83050548
	if (!ctx.cr6.eq) goto loc_83050548;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305053C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305053c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305053C;
loc_83050548:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1268);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83050568
	if (ctx.cr6.eq) goto loc_83050568;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,317
	ctx.r11.s64 = 317;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83050568:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15744);
	// stw r11,1268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050578"))) PPC_WEAK_FUNC(sub_83050578);
PPC_FUNC_IMPL(__imp__sub_83050578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830505b8
	if (!ctx.cr6.eq) goto loc_830505B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830505AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830505ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830505AC;
loc_830505B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1272);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830505d8
	if (ctx.cr6.eq) goto loc_830505D8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,318
	ctx.r11.s64 = 318;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830505D8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15740);
	// stw r11,1272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830505E8"))) PPC_WEAK_FUNC(sub_830505E8);
PPC_FUNC_IMPL(__imp__sub_830505E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83050628
	if (!ctx.cr6.eq) goto loc_83050628;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305061C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305061c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305061C;
loc_83050628:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1276);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83050648
	if (ctx.cr6.eq) goto loc_83050648;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,319
	ctx.r11.s64 = 319;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83050648:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15736);
	// stw r11,1276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050658"))) PPC_WEAK_FUNC(sub_83050658);
PPC_FUNC_IMPL(__imp__sub_83050658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83050698
	if (!ctx.cr6.eq) goto loc_83050698;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305068C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305068c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305068C;
loc_83050698:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,916(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 916);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830506b8
	if (ctx.cr6.eq) goto loc_830506B8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,229
	ctx.r11.s64 = 229;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830506B8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15732);
	// stw r11,916(r10)
	PPC_STORE_U32(ctx.r10.u32 + 916, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830506C8"))) PPC_WEAK_FUNC(sub_830506C8);
PPC_FUNC_IMPL(__imp__sub_830506C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83050708
	if (!ctx.cr6.eq) goto loc_83050708;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830506FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830506fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830506FC;
loc_83050708:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,920(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 920);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83050728
	if (ctx.cr6.eq) goto loc_83050728;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,230
	ctx.r11.s64 = 230;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83050728:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15728);
	// stw r11,920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050738"))) PPC_WEAK_FUNC(sub_83050738);
PPC_FUNC_IMPL(__imp__sub_83050738) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050768:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050778"))) PPC_WEAK_FUNC(sub_83050778);
PPC_FUNC_IMPL(__imp__sub_83050778) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830507A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830507a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830507A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830507B8"))) PPC_WEAK_FUNC(sub_830507B8);
PPC_FUNC_IMPL(__imp__sub_830507B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830507E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830507e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830507E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830507F8"))) PPC_WEAK_FUNC(sub_830507F8);
PPC_FUNC_IMPL(__imp__sub_830507F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050828:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050838"))) PPC_WEAK_FUNC(sub_83050838);
PPC_FUNC_IMPL(__imp__sub_83050838) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050868:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050868;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050878"))) PPC_WEAK_FUNC(sub_83050878);
PPC_FUNC_IMPL(__imp__sub_83050878) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830508A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830508a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830508A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830508B8"))) PPC_WEAK_FUNC(sub_830508B8);
PPC_FUNC_IMPL(__imp__sub_830508B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830508E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830508e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830508E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830508F8"))) PPC_WEAK_FUNC(sub_830508F8);
PPC_FUNC_IMPL(__imp__sub_830508F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050928:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050938"))) PPC_WEAK_FUNC(sub_83050938);
PPC_FUNC_IMPL(__imp__sub_83050938) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050968:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050978"))) PPC_WEAK_FUNC(sub_83050978);
PPC_FUNC_IMPL(__imp__sub_83050978) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830509A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830509a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830509A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830509B8"))) PPC_WEAK_FUNC(sub_830509B8);
PPC_FUNC_IMPL(__imp__sub_830509B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830509E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830509e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830509E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830509F8"))) PPC_WEAK_FUNC(sub_830509F8);
PPC_FUNC_IMPL(__imp__sub_830509F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050A28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050a28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050A28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050A38"))) PPC_WEAK_FUNC(sub_83050A38);
PPC_FUNC_IMPL(__imp__sub_83050A38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050A68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050a68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050A68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050A78"))) PPC_WEAK_FUNC(sub_83050A78);
PPC_FUNC_IMPL(__imp__sub_83050A78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050AA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050aa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050AA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050AB8"))) PPC_WEAK_FUNC(sub_83050AB8);
PPC_FUNC_IMPL(__imp__sub_83050AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050AE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050ae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050AE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050AF8"))) PPC_WEAK_FUNC(sub_83050AF8);
PPC_FUNC_IMPL(__imp__sub_83050AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050B28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050b28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050B28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050B38"))) PPC_WEAK_FUNC(sub_83050B38);
PPC_FUNC_IMPL(__imp__sub_83050B38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050B68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050b68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050B68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050B78"))) PPC_WEAK_FUNC(sub_83050B78);
PPC_FUNC_IMPL(__imp__sub_83050B78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050BA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050BA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050BB8"))) PPC_WEAK_FUNC(sub_83050BB8);
PPC_FUNC_IMPL(__imp__sub_83050BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050BE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050be8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050BE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050BF8"))) PPC_WEAK_FUNC(sub_83050BF8);
PPC_FUNC_IMPL(__imp__sub_83050BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050C28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050c28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050C28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050C38"))) PPC_WEAK_FUNC(sub_83050C38);
PPC_FUNC_IMPL(__imp__sub_83050C38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050C68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050c68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050C68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050C78"))) PPC_WEAK_FUNC(sub_83050C78);
PPC_FUNC_IMPL(__imp__sub_83050C78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050CA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050ca8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050CA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050CB8"))) PPC_WEAK_FUNC(sub_83050CB8);
PPC_FUNC_IMPL(__imp__sub_83050CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050CE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050ce8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050CE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050CF8"))) PPC_WEAK_FUNC(sub_83050CF8);
PPC_FUNC_IMPL(__imp__sub_83050CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050D28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050d28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050D28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050D38"))) PPC_WEAK_FUNC(sub_83050D38);
PPC_FUNC_IMPL(__imp__sub_83050D38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050D68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050d68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050D68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050D78"))) PPC_WEAK_FUNC(sub_83050D78);
PPC_FUNC_IMPL(__imp__sub_83050D78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050DA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050da8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050DA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050DB8"))) PPC_WEAK_FUNC(sub_83050DB8);
PPC_FUNC_IMPL(__imp__sub_83050DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050DE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050de8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050DE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050DF8"))) PPC_WEAK_FUNC(sub_83050DF8);
PPC_FUNC_IMPL(__imp__sub_83050DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050E28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050e28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050E28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050E38"))) PPC_WEAK_FUNC(sub_83050E38);
PPC_FUNC_IMPL(__imp__sub_83050E38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050E68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050E68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050E78"))) PPC_WEAK_FUNC(sub_83050E78);
PPC_FUNC_IMPL(__imp__sub_83050E78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050EA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050ea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050EA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050EB8"))) PPC_WEAK_FUNC(sub_83050EB8);
PPC_FUNC_IMPL(__imp__sub_83050EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050EE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050EE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050EF8"))) PPC_WEAK_FUNC(sub_83050EF8);
PPC_FUNC_IMPL(__imp__sub_83050EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050F28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050f28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050F28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050F38"))) PPC_WEAK_FUNC(sub_83050F38);
PPC_FUNC_IMPL(__imp__sub_83050F38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050F68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050f68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050F68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050F78"))) PPC_WEAK_FUNC(sub_83050F78);
PPC_FUNC_IMPL(__imp__sub_83050F78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050FA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050fa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050FA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050FB8"))) PPC_WEAK_FUNC(sub_83050FB8);
PPC_FUNC_IMPL(__imp__sub_83050FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83050FE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83050fe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83050FE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83050FF8"))) PPC_WEAK_FUNC(sub_83050FF8);
PPC_FUNC_IMPL(__imp__sub_83050FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83051028:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051028;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051038"))) PPC_WEAK_FUNC(sub_83051038);
PPC_FUNC_IMPL(__imp__sub_83051038) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83051068:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051068
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051068;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051078"))) PPC_WEAK_FUNC(sub_83051078);
PPC_FUNC_IMPL(__imp__sub_83051078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830510b8
	if (!ctx.cr6.eq) goto loc_830510B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830510AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830510ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830510AC;
loc_830510B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1080(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1080);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830510d8
	if (ctx.cr6.eq) goto loc_830510D8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,270
	ctx.r11.s64 = 270;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830510D8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15576);
	// stw r11,1080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1080, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830510E8"))) PPC_WEAK_FUNC(sub_830510E8);
PPC_FUNC_IMPL(__imp__sub_830510E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051128
	if (!ctx.cr6.eq) goto loc_83051128;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305111C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305111c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305111C;
loc_83051128:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1084);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051148
	if (ctx.cr6.eq) goto loc_83051148;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,271
	ctx.r11.s64 = 271;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051148:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15572);
	// stw r11,1084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1084, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051158"))) PPC_WEAK_FUNC(sub_83051158);
PPC_FUNC_IMPL(__imp__sub_83051158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051198
	if (!ctx.cr6.eq) goto loc_83051198;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305118C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305118c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305118C;
loc_83051198:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830511b8
	if (ctx.cr6.eq) goto loc_830511B8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830511B8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15568);
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830511C8"))) PPC_WEAK_FUNC(sub_830511C8);
PPC_FUNC_IMPL(__imp__sub_830511C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051208
	if (!ctx.cr6.eq) goto loc_83051208;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830511FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830511fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830511FC;
loc_83051208:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 448);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051228
	if (ctx.cr6.eq) goto loc_83051228;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,112
	ctx.r11.s64 = 112;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051228:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15564);
	// stw r11,448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051238"))) PPC_WEAK_FUNC(sub_83051238);
PPC_FUNC_IMPL(__imp__sub_83051238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051278
	if (!ctx.cr6.eq) goto loc_83051278;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305126C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305126c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305126C;
loc_83051278:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 672);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051298
	if (ctx.cr6.eq) goto loc_83051298;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,168
	ctx.r11.s64 = 168;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051298:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15560);
	// stw r11,672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830512A8"))) PPC_WEAK_FUNC(sub_830512A8);
PPC_FUNC_IMPL(__imp__sub_830512A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830512e8
	if (!ctx.cr6.eq) goto loc_830512E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830512DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830512dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830512DC;
loc_830512E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 460);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051308
	if (ctx.cr6.eq) goto loc_83051308;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,115
	ctx.r11.s64 = 115;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051308:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15556);
	// stw r11,460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051318"))) PPC_WEAK_FUNC(sub_83051318);
PPC_FUNC_IMPL(__imp__sub_83051318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051358
	if (!ctx.cr6.eq) goto loc_83051358;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305134C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305134c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305134C;
loc_83051358:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 464);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051378
	if (ctx.cr6.eq) goto loc_83051378;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,116
	ctx.r11.s64 = 116;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051378:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15552);
	// stw r11,464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 464, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051388"))) PPC_WEAK_FUNC(sub_83051388);
PPC_FUNC_IMPL(__imp__sub_83051388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830513c8
	if (!ctx.cr6.eq) goto loc_830513C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830513BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830513bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830513BC;
loc_830513C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 480);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830513e8
	if (ctx.cr6.eq) goto loc_830513E8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,120
	ctx.r11.s64 = 120;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830513E8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15548);
	// stw r11,480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 480, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830513F8"))) PPC_WEAK_FUNC(sub_830513F8);
PPC_FUNC_IMPL(__imp__sub_830513F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051438
	if (!ctx.cr6.eq) goto loc_83051438;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305142C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305142c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305142C;
loc_83051438:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,484(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 484);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051458
	if (ctx.cr6.eq) goto loc_83051458;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,121
	ctx.r11.s64 = 121;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051458:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15544);
	// stw r11,484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051468"))) PPC_WEAK_FUNC(sub_83051468);
PPC_FUNC_IMPL(__imp__sub_83051468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830514a8
	if (!ctx.cr6.eq) goto loc_830514A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305149C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305149c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305149C;
loc_830514A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,488(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830514c8
	if (ctx.cr6.eq) goto loc_830514C8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,122
	ctx.r11.s64 = 122;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830514C8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15540);
	// stw r11,488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 488, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830514D8"))) PPC_WEAK_FUNC(sub_830514D8);
PPC_FUNC_IMPL(__imp__sub_830514D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051518
	if (!ctx.cr6.eq) goto loc_83051518;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305150C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305150c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305150C;
loc_83051518:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 492);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051538
	if (ctx.cr6.eq) goto loc_83051538;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,123
	ctx.r11.s64 = 123;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051538:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15536);
	// stw r11,492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 492, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051548"))) PPC_WEAK_FUNC(sub_83051548);
PPC_FUNC_IMPL(__imp__sub_83051548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051588
	if (!ctx.cr6.eq) goto loc_83051588;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305157C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305157c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305157C;
loc_83051588:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,496(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 496);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830515a8
	if (ctx.cr6.eq) goto loc_830515A8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,124
	ctx.r11.s64 = 124;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830515A8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15532);
	// stw r11,496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 496, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830515B8"))) PPC_WEAK_FUNC(sub_830515B8);
PPC_FUNC_IMPL(__imp__sub_830515B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830515f8
	if (!ctx.cr6.eq) goto loc_830515F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830515EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830515ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830515EC;
loc_830515F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1288);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051618
	if (ctx.cr6.eq) goto loc_83051618;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,322
	ctx.r11.s64 = 322;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051618:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15528);
	// stw r11,1288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1288, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051628"))) PPC_WEAK_FUNC(sub_83051628);
PPC_FUNC_IMPL(__imp__sub_83051628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051668
	if (!ctx.cr6.eq) goto loc_83051668;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305165C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305165c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305165C;
loc_83051668:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1292);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051688
	if (ctx.cr6.eq) goto loc_83051688;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,323
	ctx.r11.s64 = 323;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051688:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15524);
	// stw r11,1292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051698"))) PPC_WEAK_FUNC(sub_83051698);
PPC_FUNC_IMPL(__imp__sub_83051698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830516d8
	if (!ctx.cr6.eq) goto loc_830516D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830516CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830516cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830516CC;
loc_830516D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1296);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830516f8
	if (ctx.cr6.eq) goto loc_830516F8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,324
	ctx.r11.s64 = 324;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830516F8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15520);
	// stw r11,1296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051708"))) PPC_WEAK_FUNC(sub_83051708);
PPC_FUNC_IMPL(__imp__sub_83051708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051748
	if (!ctx.cr6.eq) goto loc_83051748;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305173C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305173c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305173C;
loc_83051748:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 500);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051768
	if (ctx.cr6.eq) goto loc_83051768;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,125
	ctx.r11.s64 = 125;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051768:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15516);
	// stw r11,500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051778"))) PPC_WEAK_FUNC(sub_83051778);
PPC_FUNC_IMPL(__imp__sub_83051778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830517b8
	if (!ctx.cr6.eq) goto loc_830517B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830517AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830517ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830517AC;
loc_830517B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830517d8
	if (ctx.cr6.eq) goto loc_830517D8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,126
	ctx.r11.s64 = 126;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830517D8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15512);
	// stw r11,504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 504, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830517E8"))) PPC_WEAK_FUNC(sub_830517E8);
PPC_FUNC_IMPL(__imp__sub_830517E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051828
	if (!ctx.cr6.eq) goto loc_83051828;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305181C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305181c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305181C;
loc_83051828:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 508);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051848
	if (ctx.cr6.eq) goto loc_83051848;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,127
	ctx.r11.s64 = 127;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051848:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15508);
	// stw r11,508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 508, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051858"))) PPC_WEAK_FUNC(sub_83051858);
PPC_FUNC_IMPL(__imp__sub_83051858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051898
	if (!ctx.cr6.eq) goto loc_83051898;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305188C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305188c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305188C;
loc_83051898:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,512(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 512);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830518b8
	if (ctx.cr6.eq) goto loc_830518B8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830518B8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15504);
	// stw r11,512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830518C8"))) PPC_WEAK_FUNC(sub_830518C8);
PPC_FUNC_IMPL(__imp__sub_830518C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051908
	if (!ctx.cr6.eq) goto loc_83051908;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830518FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830518fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830518FC;
loc_83051908:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,936(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 936);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051928
	if (ctx.cr6.eq) goto loc_83051928;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,234
	ctx.r11.s64 = 234;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051928:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15500);
	// stw r11,936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051938"))) PPC_WEAK_FUNC(sub_83051938);
PPC_FUNC_IMPL(__imp__sub_83051938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051978
	if (!ctx.cr6.eq) goto loc_83051978;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305196C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305196c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305196C;
loc_83051978:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 940);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051998
	if (ctx.cr6.eq) goto loc_83051998;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,235
	ctx.r11.s64 = 235;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051998:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15496);
	// stw r11,940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 940, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830519A8"))) PPC_WEAK_FUNC(sub_830519A8);
PPC_FUNC_IMPL(__imp__sub_830519A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830519e8
	if (!ctx.cr6.eq) goto loc_830519E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830519DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830519dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830519DC;
loc_830519E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 952);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051a08
	if (ctx.cr6.eq) goto loc_83051A08;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,238
	ctx.r11.s64 = 238;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051A08:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15492);
	// stw r11,952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 952, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051A18"))) PPC_WEAK_FUNC(sub_83051A18);
PPC_FUNC_IMPL(__imp__sub_83051A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051a58
	if (!ctx.cr6.eq) goto loc_83051A58;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83051A4C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051A4C;
loc_83051A58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 944);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051a78
	if (ctx.cr6.eq) goto loc_83051A78;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,236
	ctx.r11.s64 = 236;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051A78:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15488);
	// stw r11,944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051A88"))) PPC_WEAK_FUNC(sub_83051A88);
PPC_FUNC_IMPL(__imp__sub_83051A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051ac8
	if (!ctx.cr6.eq) goto loc_83051AC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83051ABC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051ABC;
loc_83051AC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,948(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 948);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051ae8
	if (ctx.cr6.eq) goto loc_83051AE8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,237
	ctx.r11.s64 = 237;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051AE8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15484);
	// stw r11,948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 948, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051AF8"))) PPC_WEAK_FUNC(sub_83051AF8);
PPC_FUNC_IMPL(__imp__sub_83051AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051b38
	if (!ctx.cr6.eq) goto loc_83051B38;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83051B2C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051b2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051B2C;
loc_83051B38:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 804);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051b58
	if (ctx.cr6.eq) goto loc_83051B58;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,201
	ctx.r11.s64 = 201;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051B58:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15480);
	// stw r11,804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 804, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051B68"))) PPC_WEAK_FUNC(sub_83051B68);
PPC_FUNC_IMPL(__imp__sub_83051B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051ba8
	if (!ctx.cr6.eq) goto loc_83051BA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83051B9C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051B9C;
loc_83051BA8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 808);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051bc8
	if (ctx.cr6.eq) goto loc_83051BC8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,202
	ctx.r11.s64 = 202;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051BC8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15476);
	// stw r11,808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 808, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051BD8"))) PPC_WEAK_FUNC(sub_83051BD8);
PPC_FUNC_IMPL(__imp__sub_83051BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051c18
	if (!ctx.cr6.eq) goto loc_83051C18;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83051C0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051c0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051C0C;
loc_83051C18:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1016);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051c38
	if (ctx.cr6.eq) goto loc_83051C38;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051C38:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15472);
	// stw r11,1016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1016, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051C48"))) PPC_WEAK_FUNC(sub_83051C48);
PPC_FUNC_IMPL(__imp__sub_83051C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051c88
	if (!ctx.cr6.eq) goto loc_83051C88;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83051C7C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051c7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051C7C;
loc_83051C88:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1020(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1020);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051ca8
	if (ctx.cr6.eq) goto loc_83051CA8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051CA8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15468);
	// stw r11,1020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1020, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051CB8"))) PPC_WEAK_FUNC(sub_83051CB8);
PPC_FUNC_IMPL(__imp__sub_83051CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051cf8
	if (!ctx.cr6.eq) goto loc_83051CF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83051CEC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051cec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051CEC;
loc_83051CF8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 456);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051d18
	if (ctx.cr6.eq) goto loc_83051D18;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,114
	ctx.r11.s64 = 114;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051D18:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15464);
	// stw r11,456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 456, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051D28"))) PPC_WEAK_FUNC(sub_83051D28);
PPC_FUNC_IMPL(__imp__sub_83051D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051d68
	if (!ctx.cr6.eq) goto loc_83051D68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83051D5C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051d5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051D5C;
loc_83051D68:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,476(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 476);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051d88
	if (ctx.cr6.eq) goto loc_83051D88;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,119
	ctx.r11.s64 = 119;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051D88:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15460);
	// stw r11,476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 476, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051D98"))) PPC_WEAK_FUNC(sub_83051D98);
PPC_FUNC_IMPL(__imp__sub_83051D98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83051DC8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051dc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051DC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051DD8"))) PPC_WEAK_FUNC(sub_83051DD8);
PPC_FUNC_IMPL(__imp__sub_83051DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83051E08:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051e08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051E08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051E18"))) PPC_WEAK_FUNC(sub_83051E18);
PPC_FUNC_IMPL(__imp__sub_83051E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051e58
	if (!ctx.cr6.eq) goto loc_83051E58;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83051E4C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051e4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051E4C;
loc_83051E58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,932(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 932);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051e78
	if (ctx.cr6.eq) goto loc_83051E78;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,233
	ctx.r11.s64 = 233;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051E78:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15448);
	// stw r11,932(r10)
	PPC_STORE_U32(ctx.r10.u32 + 932, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051E88"))) PPC_WEAK_FUNC(sub_83051E88);
PPC_FUNC_IMPL(__imp__sub_83051E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051ec8
	if (!ctx.cr6.eq) goto loc_83051EC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83051EBC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051ebc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051EBC;
loc_83051EC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 924);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051ee8
	if (ctx.cr6.eq) goto loc_83051EE8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,231
	ctx.r11.s64 = 231;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051EE8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15444);
	// stw r11,924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 924, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051EF8"))) PPC_WEAK_FUNC(sub_83051EF8);
PPC_FUNC_IMPL(__imp__sub_83051EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051f38
	if (!ctx.cr6.eq) goto loc_83051F38;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83051F2C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051f2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051F2C;
loc_83051F38:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 928);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83051f58
	if (ctx.cr6.eq) goto loc_83051F58;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,232
	ctx.r11.s64 = 232;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83051F58:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15440);
	// stw r11,928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 928, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051F68"))) PPC_WEAK_FUNC(sub_83051F68);
PPC_FUNC_IMPL(__imp__sub_83051F68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83051F98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051f98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051F98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83051FA8"))) PPC_WEAK_FUNC(sub_83051FA8);
PPC_FUNC_IMPL(__imp__sub_83051FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83051fe8
	if (!ctx.cr6.eq) goto loc_83051FE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83051FDC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83051fdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83051FDC;
loc_83051FE8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 384);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052008
	if (ctx.cr6.eq) goto loc_83052008;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,96
	ctx.r11.s64 = 96;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052008:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15432);
	// stw r11,384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052018"))) PPC_WEAK_FUNC(sub_83052018);
PPC_FUNC_IMPL(__imp__sub_83052018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052058
	if (!ctx.cr6.eq) goto loc_83052058;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305204C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305204c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305204C;
loc_83052058:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052078
	if (ctx.cr6.eq) goto loc_83052078;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,97
	ctx.r11.s64 = 97;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052078:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15428);
	// stw r11,388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 388, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052088"))) PPC_WEAK_FUNC(sub_83052088);
PPC_FUNC_IMPL(__imp__sub_83052088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830520c8
	if (!ctx.cr6.eq) goto loc_830520C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830520BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830520bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830520BC;
loc_830520C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 392);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830520e8
	if (ctx.cr6.eq) goto loc_830520E8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,98
	ctx.r11.s64 = 98;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830520E8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15424);
	// stw r11,392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830520F8"))) PPC_WEAK_FUNC(sub_830520F8);
PPC_FUNC_IMPL(__imp__sub_830520F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052138
	if (!ctx.cr6.eq) goto loc_83052138;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305212C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305212c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305212C;
loc_83052138:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 396);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052158
	if (ctx.cr6.eq) goto loc_83052158;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,99
	ctx.r11.s64 = 99;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052158:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15420);
	// stw r11,396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052168"))) PPC_WEAK_FUNC(sub_83052168);
PPC_FUNC_IMPL(__imp__sub_83052168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830521a8
	if (!ctx.cr6.eq) goto loc_830521A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305219C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305219c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305219C;
loc_830521A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 400);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830521c8
	if (ctx.cr6.eq) goto loc_830521C8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830521C8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15416);
	// stw r11,400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 400, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830521D8"))) PPC_WEAK_FUNC(sub_830521D8);
PPC_FUNC_IMPL(__imp__sub_830521D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052218
	if (!ctx.cr6.eq) goto loc_83052218;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305220C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305220c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305220C;
loc_83052218:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 404);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052238
	if (ctx.cr6.eq) goto loc_83052238;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,101
	ctx.r11.s64 = 101;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052238:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15412);
	// stw r11,404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 404, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052248"))) PPC_WEAK_FUNC(sub_83052248);
PPC_FUNC_IMPL(__imp__sub_83052248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052288
	if (!ctx.cr6.eq) goto loc_83052288;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305227C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305227c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305227C;
loc_83052288:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830522a8
	if (ctx.cr6.eq) goto loc_830522A8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,102
	ctx.r11.s64 = 102;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830522A8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15408);
	// stw r11,408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 408, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830522B8"))) PPC_WEAK_FUNC(sub_830522B8);
PPC_FUNC_IMPL(__imp__sub_830522B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830522f8
	if (!ctx.cr6.eq) goto loc_830522F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830522EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830522ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830522EC;
loc_830522F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 412);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052318
	if (ctx.cr6.eq) goto loc_83052318;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,103
	ctx.r11.s64 = 103;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052318:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15404);
	// stw r11,412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052328"))) PPC_WEAK_FUNC(sub_83052328);
PPC_FUNC_IMPL(__imp__sub_83052328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052368
	if (!ctx.cr6.eq) goto loc_83052368;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305235C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305235c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305235C;
loc_83052368:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 416);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052388
	if (ctx.cr6.eq) goto loc_83052388;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,104
	ctx.r11.s64 = 104;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052388:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15400);
	// stw r11,416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052398"))) PPC_WEAK_FUNC(sub_83052398);
PPC_FUNC_IMPL(__imp__sub_83052398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830523d8
	if (!ctx.cr6.eq) goto loc_830523D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830523CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830523cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830523CC;
loc_830523D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 420);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830523f8
	if (ctx.cr6.eq) goto loc_830523F8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,105
	ctx.r11.s64 = 105;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830523F8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15396);
	// stw r11,420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052408"))) PPC_WEAK_FUNC(sub_83052408);
PPC_FUNC_IMPL(__imp__sub_83052408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052448
	if (!ctx.cr6.eq) goto loc_83052448;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305243C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305243c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305243C;
loc_83052448:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,424(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 424);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052468
	if (ctx.cr6.eq) goto loc_83052468;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,106
	ctx.r11.s64 = 106;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052468:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15392);
	// stw r11,424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 424, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052478"))) PPC_WEAK_FUNC(sub_83052478);
PPC_FUNC_IMPL(__imp__sub_83052478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830524b8
	if (!ctx.cr6.eq) goto loc_830524B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830524AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830524ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830524AC;
loc_830524B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,428(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830524d8
	if (ctx.cr6.eq) goto loc_830524D8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,107
	ctx.r11.s64 = 107;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830524D8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15388);
	// stw r11,428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830524E8"))) PPC_WEAK_FUNC(sub_830524E8);
PPC_FUNC_IMPL(__imp__sub_830524E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052528
	if (!ctx.cr6.eq) goto loc_83052528;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305251C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305251c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305251C;
loc_83052528:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052548
	if (ctx.cr6.eq) goto loc_83052548;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,108
	ctx.r11.s64 = 108;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052548:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15384);
	// stw r11,432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 432, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052558"))) PPC_WEAK_FUNC(sub_83052558);
PPC_FUNC_IMPL(__imp__sub_83052558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052598
	if (!ctx.cr6.eq) goto loc_83052598;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305258C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305258c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305258C;
loc_83052598:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 436);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830525b8
	if (ctx.cr6.eq) goto loc_830525B8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,109
	ctx.r11.s64 = 109;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830525B8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15380);
	// stw r11,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830525C8"))) PPC_WEAK_FUNC(sub_830525C8);
PPC_FUNC_IMPL(__imp__sub_830525C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052608
	if (!ctx.cr6.eq) goto loc_83052608;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830525FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830525fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830525FC;
loc_83052608:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 440);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052628
	if (ctx.cr6.eq) goto loc_83052628;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,110
	ctx.r11.s64 = 110;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052628:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15376);
	// stw r11,440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 440, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052638"))) PPC_WEAK_FUNC(sub_83052638);
PPC_FUNC_IMPL(__imp__sub_83052638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052678
	if (!ctx.cr6.eq) goto loc_83052678;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305266C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305266c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305266C;
loc_83052678:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,444(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 444);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052698
	if (ctx.cr6.eq) goto loc_83052698;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,111
	ctx.r11.s64 = 111;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052698:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15372);
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830526A8"))) PPC_WEAK_FUNC(sub_830526A8);
PPC_FUNC_IMPL(__imp__sub_830526A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830526e8
	if (!ctx.cr6.eq) goto loc_830526E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830526DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830526dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830526DC;
loc_830526E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052708
	if (ctx.cr6.eq) goto loc_83052708;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052708:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15368);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052718"))) PPC_WEAK_FUNC(sub_83052718);
PPC_FUNC_IMPL(__imp__sub_83052718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052758
	if (!ctx.cr6.eq) goto loc_83052758;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305274C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305274c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305274C;
loc_83052758:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1032);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052778
	if (ctx.cr6.eq) goto loc_83052778;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,258
	ctx.r11.s64 = 258;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052778:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15364);
	// stw r11,1032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1032, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052788"))) PPC_WEAK_FUNC(sub_83052788);
PPC_FUNC_IMPL(__imp__sub_83052788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830527c8
	if (!ctx.cr6.eq) goto loc_830527C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830527BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830527bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830527BC;
loc_830527C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,452(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 452);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830527e8
	if (ctx.cr6.eq) goto loc_830527E8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,113
	ctx.r11.s64 = 113;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830527E8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15360);
	// stw r11,452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 452, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830527F8"))) PPC_WEAK_FUNC(sub_830527F8);
PPC_FUNC_IMPL(__imp__sub_830527F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052828:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052838"))) PPC_WEAK_FUNC(sub_83052838);
PPC_FUNC_IMPL(__imp__sub_83052838) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052868:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052868;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052878"))) PPC_WEAK_FUNC(sub_83052878);
PPC_FUNC_IMPL(__imp__sub_83052878) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830528A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830528a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830528A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830528B8"))) PPC_WEAK_FUNC(sub_830528B8);
PPC_FUNC_IMPL(__imp__sub_830528B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830528f8
	if (!ctx.cr6.eq) goto loc_830528F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830528EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830528ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830528EC;
loc_830528F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 468);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052918
	if (ctx.cr6.eq) goto loc_83052918;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,117
	ctx.r11.s64 = 117;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052918:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15344);
	// stw r11,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052928"))) PPC_WEAK_FUNC(sub_83052928);
PPC_FUNC_IMPL(__imp__sub_83052928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052968
	if (!ctx.cr6.eq) goto loc_83052968;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8305295C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8305295c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8305295C;
loc_83052968:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052988
	if (ctx.cr6.eq) goto loc_83052988;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,118
	ctx.r11.s64 = 118;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052988:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15340);
	// stw r11,472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 472, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052998"))) PPC_WEAK_FUNC(sub_83052998);
PPC_FUNC_IMPL(__imp__sub_83052998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830529d8
	if (!ctx.cr6.eq) goto loc_830529D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830529CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830529cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830529CC;
loc_830529D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,2144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830529f8
	if (ctx.cr6.eq) goto loc_830529F8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,536
	ctx.r11.s64 = 536;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830529F8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15336);
	// stw r11,2144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052A08"))) PPC_WEAK_FUNC(sub_83052A08);
PPC_FUNC_IMPL(__imp__sub_83052A08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052A38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052A38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052A48"))) PPC_WEAK_FUNC(sub_83052A48);
PPC_FUNC_IMPL(__imp__sub_83052A48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052A78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052a78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052A78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052A88"))) PPC_WEAK_FUNC(sub_83052A88);
PPC_FUNC_IMPL(__imp__sub_83052A88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052AB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052ab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052AB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052AC8"))) PPC_WEAK_FUNC(sub_83052AC8);
PPC_FUNC_IMPL(__imp__sub_83052AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052AF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052af8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052AF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052B08"))) PPC_WEAK_FUNC(sub_83052B08);
PPC_FUNC_IMPL(__imp__sub_83052B08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052B38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052b38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052B38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052B48"))) PPC_WEAK_FUNC(sub_83052B48);
PPC_FUNC_IMPL(__imp__sub_83052B48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052B78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052b78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052B78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052B88"))) PPC_WEAK_FUNC(sub_83052B88);
PPC_FUNC_IMPL(__imp__sub_83052B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052bc8
	if (!ctx.cr6.eq) goto loc_83052BC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83052BBC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052BBC;
loc_83052BC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1124);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052be8
	if (ctx.cr6.eq) goto loc_83052BE8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,281
	ctx.r11.s64 = 281;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052BE8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15308);
	// stw r11,1124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052BF8"))) PPC_WEAK_FUNC(sub_83052BF8);
PPC_FUNC_IMPL(__imp__sub_83052BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052c38
	if (!ctx.cr6.eq) goto loc_83052C38;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83052C2C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052c2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052C2C;
loc_83052C38:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,6664(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6664);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052c58
	if (ctx.cr6.eq) goto loc_83052C58;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,1666
	ctx.r11.s64 = 1666;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052C58:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15304);
	// stw r11,6664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6664, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052C68"))) PPC_WEAK_FUNC(sub_83052C68);
PPC_FUNC_IMPL(__imp__sub_83052C68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052C98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052c98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052C98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052CA8"))) PPC_WEAK_FUNC(sub_83052CA8);
PPC_FUNC_IMPL(__imp__sub_83052CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052ce8
	if (!ctx.cr6.eq) goto loc_83052CE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83052CDC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052CDC;
loc_83052CE8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1136);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052d08
	if (ctx.cr6.eq) goto loc_83052D08;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,284
	ctx.r11.s64 = 284;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052D08:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// stw r11,1136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052D18"))) PPC_WEAK_FUNC(sub_83052D18);
PPC_FUNC_IMPL(__imp__sub_83052D18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052D48:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052d48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052D48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052D58"))) PPC_WEAK_FUNC(sub_83052D58);
PPC_FUNC_IMPL(__imp__sub_83052D58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052D88:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052d88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052D88;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052D98"))) PPC_WEAK_FUNC(sub_83052D98);
PPC_FUNC_IMPL(__imp__sub_83052D98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052DC8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052dc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052DC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052DD8"))) PPC_WEAK_FUNC(sub_83052DD8);
PPC_FUNC_IMPL(__imp__sub_83052DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052E08:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052e08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052E08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052E18"))) PPC_WEAK_FUNC(sub_83052E18);
PPC_FUNC_IMPL(__imp__sub_83052E18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052E48:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052e48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052E48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052E58"))) PPC_WEAK_FUNC(sub_83052E58);
PPC_FUNC_IMPL(__imp__sub_83052E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052e98
	if (!ctx.cr6.eq) goto loc_83052E98;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83052E8C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052e8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052E8C;
loc_83052E98:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 788);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052eb8
	if (ctx.cr6.eq) goto loc_83052EB8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,197
	ctx.r11.s64 = 197;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052EB8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15272);
	// stw r11,788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 788, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052EC8"))) PPC_WEAK_FUNC(sub_83052EC8);
PPC_FUNC_IMPL(__imp__sub_83052EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83052EF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052ef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052EF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052F08"))) PPC_WEAK_FUNC(sub_83052F08);
PPC_FUNC_IMPL(__imp__sub_83052F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052f48
	if (!ctx.cr6.eq) goto loc_83052F48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83052F3C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052f3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052F3C;
loc_83052F48:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052f68
	if (ctx.cr6.eq) goto loc_83052F68;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,47
	ctx.r11.s64 = 47;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052F68:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15264);
	// stw r11,188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 188, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052F78"))) PPC_WEAK_FUNC(sub_83052F78);
PPC_FUNC_IMPL(__imp__sub_83052F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83052fb8
	if (!ctx.cr6.eq) goto loc_83052FB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83052FAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83052fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83052FAC;
loc_83052FB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83052fd8
	if (ctx.cr6.eq) goto loc_83052FD8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,88
	ctx.r11.s64 = 88;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83052FD8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15260);
	// stw r11,352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83052FE8"))) PPC_WEAK_FUNC(sub_83052FE8);
PPC_FUNC_IMPL(__imp__sub_83052FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7048
	ctx.r3.s64 = ctx.r11.s64 + -7048;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83052FF8"))) PPC_WEAK_FUNC(sub_83052FF8);
PPC_FUNC_IMPL(__imp__sub_83052FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7448
	ctx.r3.s64 = ctx.r11.s64 + -7448;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053008"))) PPC_WEAK_FUNC(sub_83053008);
PPC_FUNC_IMPL(__imp__sub_83053008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7168
	ctx.r3.s64 = ctx.r11.s64 + -7168;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053018"))) PPC_WEAK_FUNC(sub_83053018);
PPC_FUNC_IMPL(__imp__sub_83053018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,18160
	ctx.r11.s64 = ctx.r11.s64 + 18160;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053048"))) PPC_WEAK_FUNC(sub_83053048);
PPC_FUNC_IMPL(__imp__sub_83053048) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,18240
	ctx.r11.s64 = ctx.r11.s64 + 18240;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053078"))) PPC_WEAK_FUNC(sub_83053078);
PPC_FUNC_IMPL(__imp__sub_83053078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7948
	ctx.r11.u64 = ctx.r11.u64 | 7948;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7949
	ctx.r11.u64 = ctx.r11.u64 | 7949;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7950
	ctx.r11.u64 = ctx.r11.u64 | 7950;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7951
	ctx.r11.u64 = ctx.r11.u64 | 7951;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,18256
	ctx.r11.s64 = ctx.r11.s64 + 18256;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830530C0"))) PPC_WEAK_FUNC(sub_830530C0);
PPC_FUNC_IMPL(__imp__sub_830530C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7951
	ctx.r11.u64 = ctx.r11.u64 | 7951;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7950
	ctx.r11.u64 = ctx.r11.u64 | 7950;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7949
	ctx.r11.u64 = ctx.r11.u64 | 7949;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7948
	ctx.r11.u64 = ctx.r11.u64 | 7948;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,18176
	ctx.r11.s64 = ctx.r11.s64 + 18176;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053108"))) PPC_WEAK_FUNC(sub_83053108);
PPC_FUNC_IMPL(__imp__sub_83053108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7032
	ctx.r3.s64 = ctx.r11.s64 + -7032;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053118"))) PPC_WEAK_FUNC(sub_83053118);
PPC_FUNC_IMPL(__imp__sub_83053118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7016
	ctx.r3.s64 = ctx.r11.s64 + -7016;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053128"))) PPC_WEAK_FUNC(sub_83053128);
PPC_FUNC_IMPL(__imp__sub_83053128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7000
	ctx.r3.s64 = ctx.r11.s64 + -7000;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053138"))) PPC_WEAK_FUNC(sub_83053138);
PPC_FUNC_IMPL(__imp__sub_83053138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6984
	ctx.r3.s64 = ctx.r11.s64 + -6984;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053148"))) PPC_WEAK_FUNC(sub_83053148);
PPC_FUNC_IMPL(__imp__sub_83053148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6968
	ctx.r3.s64 = ctx.r11.s64 + -6968;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053158"))) PPC_WEAK_FUNC(sub_83053158);
PPC_FUNC_IMPL(__imp__sub_83053158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6952
	ctx.r3.s64 = ctx.r11.s64 + -6952;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053168"))) PPC_WEAK_FUNC(sub_83053168);
PPC_FUNC_IMPL(__imp__sub_83053168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6936
	ctx.r3.s64 = ctx.r11.s64 + -6936;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053178"))) PPC_WEAK_FUNC(sub_83053178);
PPC_FUNC_IMPL(__imp__sub_83053178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,32416
	ctx.r11.s64 = ctx.r11.s64 + 32416;
	// stw r11,17864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053190"))) PPC_WEAK_FUNC(sub_83053190);
PPC_FUNC_IMPL(__imp__sub_83053190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,18352
	ctx.r11.s64 = ctx.r11.s64 + 18352;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830531C0"))) PPC_WEAK_FUNC(sub_830531C0);
PPC_FUNC_IMPL(__imp__sub_830531C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,18384
	ctx.r11.s64 = ctx.r11.s64 + 18384;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830531F0"))) PPC_WEAK_FUNC(sub_830531F0);
PPC_FUNC_IMPL(__imp__sub_830531F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7948
	ctx.r11.u64 = ctx.r11.u64 | 7948;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7949
	ctx.r11.u64 = ctx.r11.u64 | 7949;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7950
	ctx.r11.u64 = ctx.r11.u64 | 7950;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7951
	ctx.r11.u64 = ctx.r11.u64 | 7951;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,18400
	ctx.r11.s64 = ctx.r11.s64 + 18400;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053238"))) PPC_WEAK_FUNC(sub_83053238);
PPC_FUNC_IMPL(__imp__sub_83053238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7951
	ctx.r11.u64 = ctx.r11.u64 | 7951;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7950
	ctx.r11.u64 = ctx.r11.u64 | 7950;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7949
	ctx.r11.u64 = ctx.r11.u64 | 7949;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7948
	ctx.r11.u64 = ctx.r11.u64 | 7948;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,18368
	ctx.r11.s64 = ctx.r11.s64 + 18368;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053280"))) PPC_WEAK_FUNC(sub_83053280);
PPC_FUNC_IMPL(__imp__sub_83053280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,21696
	ctx.r11.s64 = ctx.r11.s64 + 21696;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830532B0"))) PPC_WEAK_FUNC(sub_830532B0);
PPC_FUNC_IMPL(__imp__sub_830532B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,21744
	ctx.r11.s64 = ctx.r11.s64 + 21744;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830532E0"))) PPC_WEAK_FUNC(sub_830532E0);
PPC_FUNC_IMPL(__imp__sub_830532E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7948
	ctx.r11.u64 = ctx.r11.u64 | 7948;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7949
	ctx.r11.u64 = ctx.r11.u64 | 7949;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7950
	ctx.r11.u64 = ctx.r11.u64 | 7950;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7951
	ctx.r11.u64 = ctx.r11.u64 | 7951;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,21760
	ctx.r11.s64 = ctx.r11.s64 + 21760;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053328"))) PPC_WEAK_FUNC(sub_83053328);
PPC_FUNC_IMPL(__imp__sub_83053328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7951
	ctx.r11.u64 = ctx.r11.u64 | 7951;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7950
	ctx.r11.u64 = ctx.r11.u64 | 7950;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7949
	ctx.r11.u64 = ctx.r11.u64 | 7949;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7948
	ctx.r11.u64 = ctx.r11.u64 | 7948;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,21712
	ctx.r11.s64 = ctx.r11.s64 + 21712;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053370"))) PPC_WEAK_FUNC(sub_83053370);
PPC_FUNC_IMPL(__imp__sub_83053370) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r11,r11,-14360
	ctx.r11.s64 = ctx.r11.s64 + -14360;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8308acd4
	ctx.lr = 0x8305338C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6800
	ctx.r3.s64 = ctx.r11.s64 + -6800;
	// bl 0x82d5cd68
	ctx.lr = 0x83053398;
	sub_82D5CD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830533A8"))) PPC_WEAK_FUNC(sub_830533A8);
PPC_FUNC_IMPL(__imp__sub_830533A8) {
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
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,20644
	ctx.r3.s64 = ctx.r11.s64 + 20644;
	// bl 0x82457e68
	ctx.lr = 0x830533C4;
	sub_82457E68(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6752
	ctx.r3.s64 = ctx.r11.s64 + -6752;
	// bl 0x82d5cd68
	ctx.lr = 0x830533D0;
	sub_82D5CD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830533E0"))) PPC_WEAK_FUNC(sub_830533E0);
PPC_FUNC_IMPL(__imp__sub_830533E0) {
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
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r3,r11,21684
	ctx.r3.s64 = ctx.r11.s64 + 21684;
	// bl 0x82459df0
	ctx.lr = 0x830533F8;
	sub_82459DF0(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6728
	ctx.r3.s64 = ctx.r11.s64 + -6728;
	// bl 0x82d5cd68
	ctx.lr = 0x83053404;
	sub_82D5CD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053418"))) PPC_WEAK_FUNC(sub_83053418);
PPC_FUNC_IMPL(__imp__sub_83053418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6608
	ctx.r3.s64 = ctx.r11.s64 + -6608;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053428"))) PPC_WEAK_FUNC(sub_83053428);
PPC_FUNC_IMPL(__imp__sub_83053428) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r11,r11,-14276
	ctx.r11.s64 = ctx.r11.s64 + -14276;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x8308acd4
	ctx.lr = 0x83053444;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6592
	ctx.r3.s64 = ctx.r11.s64 + -6592;
	// bl 0x82d5cd68
	ctx.lr = 0x83053450;
	sub_82D5CD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053460"))) PPC_WEAK_FUNC(sub_83053460);
PPC_FUNC_IMPL(__imp__sub_83053460) {
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
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r3,r11,21776
	ctx.r3.s64 = ctx.r11.s64 + 21776;
	// bl 0x824824f0
	ctx.lr = 0x83053478;
	sub_824824F0(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6704
	ctx.r3.s64 = ctx.r11.s64 + -6704;
	// bl 0x82d5cd68
	ctx.lr = 0x83053484;
	sub_82D5CD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053498"))) PPC_WEAK_FUNC(sub_83053498);
PPC_FUNC_IMPL(__imp__sub_83053498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6776
	ctx.r3.s64 = ctx.r11.s64 + -6776;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830534A8"))) PPC_WEAK_FUNC(sub_830534A8);
PPC_FUNC_IMPL(__imp__sub_830534A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,21728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21728, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830534B8"))) PPC_WEAK_FUNC(sub_830534B8);
PPC_FUNC_IMPL(__imp__sub_830534B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,20596
	ctx.r11.s64 = ctx.r11.s64 + 20596;
	// lis r10,-31992
	ctx.r10.s64 = -2096627712;
	// addi r3,r10,-6688
	ctx.r3.s64 = ctx.r10.s64 + -6688;
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830534D8"))) PPC_WEAK_FUNC(sub_830534D8);
PPC_FUNC_IMPL(__imp__sub_830534D8) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r31,r11,-14216
	ctx.r31.s64 = ctx.r11.s64 + -14216;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dc718
	ctx.lr = 0x83053500;
	sub_822DC718(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bge cr6,0x83053524
	if (!ctx.cr6.lt) goto loc_83053524;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x822dc718
	ctx.lr = 0x83053524;
	sub_822DC718(ctx, base);
loc_83053524:
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6672
	ctx.r3.s64 = ctx.r11.s64 + -6672;
	// bl 0x82d5cd68
	ctx.lr = 0x83053530;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83053548"))) PPC_WEAK_FUNC(sub_83053548);
PPC_FUNC_IMPL(__imp__sub_83053548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,22480
	ctx.r11.s64 = ctx.r11.s64 + 22480;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053578"))) PPC_WEAK_FUNC(sub_83053578);
PPC_FUNC_IMPL(__imp__sub_83053578) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,22528
	ctx.r11.s64 = ctx.r11.s64 + 22528;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830535A8"))) PPC_WEAK_FUNC(sub_830535A8);
PPC_FUNC_IMPL(__imp__sub_830535A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7948
	ctx.r11.u64 = ctx.r11.u64 | 7948;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7949
	ctx.r11.u64 = ctx.r11.u64 | 7949;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7950
	ctx.r11.u64 = ctx.r11.u64 | 7950;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7951
	ctx.r11.u64 = ctx.r11.u64 | 7951;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,22544
	ctx.r11.s64 = ctx.r11.s64 + 22544;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830535F0"))) PPC_WEAK_FUNC(sub_830535F0);
PPC_FUNC_IMPL(__imp__sub_830535F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7951
	ctx.r11.u64 = ctx.r11.u64 | 7951;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7950
	ctx.r11.u64 = ctx.r11.u64 | 7950;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7949
	ctx.r11.u64 = ctx.r11.u64 | 7949;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7948
	ctx.r11.u64 = ctx.r11.u64 | 7948;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,22496
	ctx.r11.s64 = ctx.r11.s64 + 22496;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053638"))) PPC_WEAK_FUNC(sub_83053638);
PPC_FUNC_IMPL(__imp__sub_83053638) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14172
	ctx.r4.s64 = ctx.r11.s64 + -14172;
	// bl 0x824215d0
	ctx.lr = 0x83053654;
	sub_824215D0(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stb r3,22560(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22560, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053670"))) PPC_WEAK_FUNC(sub_83053670);
PPC_FUNC_IMPL(__imp__sub_83053670) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14168
	ctx.r4.s64 = ctx.r11.s64 + -14168;
	// bl 0x824215d0
	ctx.lr = 0x8305368C;
	sub_824215D0(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stb r3,22479(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22479, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830536A8"))) PPC_WEAK_FUNC(sub_830536A8);
PPC_FUNC_IMPL(__imp__sub_830536A8) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14164
	ctx.r4.s64 = ctx.r11.s64 + -14164;
	// bl 0x824215d0
	ctx.lr = 0x830536C4;
	sub_824215D0(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stb r3,22441(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22441, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830536E0"))) PPC_WEAK_FUNC(sub_830536E0);
PPC_FUNC_IMPL(__imp__sub_830536E0) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14160
	ctx.r4.s64 = ctx.r11.s64 + -14160;
	// bl 0x824215d0
	ctx.lr = 0x830536FC;
	sub_824215D0(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stb r3,22561(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22561, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053718"))) PPC_WEAK_FUNC(sub_83053718);
PPC_FUNC_IMPL(__imp__sub_83053718) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14156
	ctx.r4.s64 = ctx.r11.s64 + -14156;
	// bl 0x824215d0
	ctx.lr = 0x83053734;
	sub_824215D0(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stb r3,22478(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22478, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053750"))) PPC_WEAK_FUNC(sub_83053750);
PPC_FUNC_IMPL(__imp__sub_83053750) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14152
	ctx.r4.s64 = ctx.r11.s64 + -14152;
	// bl 0x824215d0
	ctx.lr = 0x8305376C;
	sub_824215D0(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stb r3,22442(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22442, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053788"))) PPC_WEAK_FUNC(sub_83053788);
PPC_FUNC_IMPL(__imp__sub_83053788) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14148
	ctx.r4.s64 = ctx.r11.s64 + -14148;
	// bl 0x824215d0
	ctx.lr = 0x830537A4;
	sub_824215D0(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stb r3,22443(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22443, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830537C0"))) PPC_WEAK_FUNC(sub_830537C0);
PPC_FUNC_IMPL(__imp__sub_830537C0) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14144
	ctx.r4.s64 = ctx.r11.s64 + -14144;
	// bl 0x824215d0
	ctx.lr = 0x830537DC;
	sub_824215D0(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stb r3,22476(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22476, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830537F8"))) PPC_WEAK_FUNC(sub_830537F8);
PPC_FUNC_IMPL(__imp__sub_830537F8) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14140
	ctx.r4.s64 = ctx.r11.s64 + -14140;
	// bl 0x824215d0
	ctx.lr = 0x83053814;
	sub_824215D0(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stb r3,22440(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22440, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053830"))) PPC_WEAK_FUNC(sub_83053830);
PPC_FUNC_IMPL(__imp__sub_83053830) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-14136
	ctx.r4.s64 = ctx.r11.s64 + -14136;
	// bl 0x824215d0
	ctx.lr = 0x8305384C;
	sub_824215D0(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stb r3,22477(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22477, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053868"))) PPC_WEAK_FUNC(sub_83053868);
PPC_FUNC_IMPL(__imp__sub_83053868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32183
	ctx.r11.s64 = -2109145088;
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// addi r11,r11,-17920
	ctx.r11.s64 = ctx.r11.s64 + -17920;
	// addi r10,r10,-18096
	ctx.r10.s64 = ctx.r10.s64 + -18096;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r11,r11,-13888
	ctx.r11.s64 = ctx.r11.s64 + -13888;
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830538B8"))) PPC_WEAK_FUNC(sub_830538B8);
PPC_FUNC_IMPL(__imp__sub_830538B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,22944
	ctx.r11.s64 = ctx.r11.s64 + 22944;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830538E8"))) PPC_WEAK_FUNC(sub_830538E8);
PPC_FUNC_IMPL(__imp__sub_830538E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,23184
	ctx.r11.s64 = ctx.r11.s64 + 23184;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053918"))) PPC_WEAK_FUNC(sub_83053918);
PPC_FUNC_IMPL(__imp__sub_83053918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7948
	ctx.r11.u64 = ctx.r11.u64 | 7948;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7949
	ctx.r11.u64 = ctx.r11.u64 | 7949;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7950
	ctx.r11.u64 = ctx.r11.u64 | 7950;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7951
	ctx.r11.u64 = ctx.r11.u64 | 7951;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,23200
	ctx.r11.s64 = ctx.r11.s64 + 23200;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053960"))) PPC_WEAK_FUNC(sub_83053960);
PPC_FUNC_IMPL(__imp__sub_83053960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7951
	ctx.r11.u64 = ctx.r11.u64 | 7951;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7950
	ctx.r11.u64 = ctx.r11.u64 | 7950;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7949
	ctx.r11.u64 = ctx.r11.u64 | 7949;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// lis r11,7967
	ctx.r11.s64 = 522125312;
	// ori r11,r11,7948
	ctx.r11.u64 = ctx.r11.u64 | 7948;
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,22960
	ctx.r11.s64 = ctx.r11.s64 + 22960;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830539A8"))) PPC_WEAK_FUNC(sub_830539A8);
PPC_FUNC_IMPL(__imp__sub_830539A8) {
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
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20616
	ctx.r5.s64 = ctx.r10.s64 + -20616;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-20644
	ctx.r4.s64 = ctx.r10.s64 + -20644;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,22848
	ctx.r31.s64 = ctx.r10.s64 + 22848;
	// addi r10,r11,1480
	ctx.r10.s64 = ctx.r11.s64 + 1480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83053A00;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-3488
	ctx.r3.s64 = ctx.r8.s64 + -3488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16888
	ctx.r11.s64 = ctx.r9.s64 + -16888;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83053A30;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83053A48"))) PPC_WEAK_FUNC(sub_83053A48);
PPC_FUNC_IMPL(__imp__sub_83053A48) {
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
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20552
	ctx.r5.s64 = ctx.r10.s64 + -20552;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-20588
	ctx.r4.s64 = ctx.r10.s64 + -20588;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,22756
	ctx.r31.s64 = ctx.r10.s64 + 22756;
	// addi r10,r11,-3848
	ctx.r10.s64 = ctx.r11.s64 + -3848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83053AA0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-4944
	ctx.r3.s64 = ctx.r8.s64 + -4944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16520
	ctx.r11.s64 = ctx.r9.s64 + -16520;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-20320
	ctx.r11.s64 = ctx.r10.s64 + -20320;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83053AD0;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83053AE8"))) PPC_WEAK_FUNC(sub_83053AE8);
PPC_FUNC_IMPL(__imp__sub_83053AE8) {
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
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-20488
	ctx.r5.s64 = ctx.r10.s64 + -20488;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-20516
	ctx.r4.s64 = ctx.r10.s64 + -20516;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,22656
	ctx.r31.s64 = ctx.r10.s64 + 22656;
	// addi r10,r11,-3848
	ctx.r10.s64 = ctx.r11.s64 + -3848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83053B40;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-4864
	ctx.r3.s64 = ctx.r8.s64 + -4864;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,23576
	ctx.r11.s64 = ctx.r9.s64 + 23576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83053B70;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83053B88"))) PPC_WEAK_FUNC(sub_83053B88);
PPC_FUNC_IMPL(__imp__sub_83053B88) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r3,r11,-13712
	ctx.r3.s64 = ctx.r11.s64 + -13712;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8252cb70
	ctx.lr = 0x83053BAC;
	sub_8252CB70(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-5024
	ctx.r3.s64 = ctx.r11.s64 + -5024;
	// bl 0x82d5cd68
	ctx.lr = 0x83053BB8;
	sub_82D5CD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83053BC8"))) PPC_WEAK_FUNC(sub_83053BC8);
PPC_FUNC_IMPL(__imp__sub_83053BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6512
	ctx.r3.s64 = ctx.r11.s64 + -6512;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053BD8"))) PPC_WEAK_FUNC(sub_83053BD8);
PPC_FUNC_IMPL(__imp__sub_83053BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6496
	ctx.r3.s64 = ctx.r11.s64 + -6496;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83053BE8"))) PPC_WEAK_FUNC(sub_83053BE8);
PPC_FUNC_IMPL(__imp__sub_83053BE8) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,29032
	ctx.r9.s64 = ctx.r10.s64 + 29032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,403
	ctx.r8.s64 = 403;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20436
	ctx.r5.s64 = ctx.r10.s64 + -20436;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-20460
	ctx.r4.s64 = ctx.r10.s64 + -20460;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,24676
	ctx.r31.s64 = ctx.r10.s64 + 24676;
	// addi r10,r11,2856
	ctx.r10.s64 = ctx.r11.s64 + 2856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83053C40;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-4784
	ctx.r3.s64 = ctx.r8.s64 + -4784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-5240
	ctx.r11.s64 = ctx.r9.s64 + -5240;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83053C70;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83053C88"))) PPC_WEAK_FUNC(sub_83053C88);
PPC_FUNC_IMPL(__imp__sub_83053C88) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,29280
	ctx.r9.s64 = ctx.r10.s64 + 29280;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,403
	ctx.r8.s64 = 403;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20436
	ctx.r5.s64 = ctx.r10.s64 + -20436;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-20400
	ctx.r4.s64 = ctx.r10.s64 + -20400;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,24400
	ctx.r31.s64 = ctx.r10.s64 + 24400;
	// addi r10,r11,4896
	ctx.r10.s64 = ctx.r11.s64 + 4896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83053CE0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-4704
	ctx.r3.s64 = ctx.r8.s64 + -4704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-5152
	ctx.r11.s64 = ctx.r9.s64 + -5152;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83053D10;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83053D28"))) PPC_WEAK_FUNC(sub_83053D28);
PPC_FUNC_IMPL(__imp__sub_83053D28) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,29528
	ctx.r9.s64 = ctx.r10.s64 + 29528;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,403
	ctx.r8.s64 = 403;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20436
	ctx.r5.s64 = ctx.r10.s64 + -20436;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-20376
	ctx.r4.s64 = ctx.r10.s64 + -20376;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,24308
	ctx.r31.s64 = ctx.r10.s64 + 24308;
	// addi r10,r11,6936
	ctx.r10.s64 = ctx.r11.s64 + 6936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83053D80;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-4624
	ctx.r3.s64 = ctx.r8.s64 + -4624;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-5064
	ctx.r11.s64 = ctx.r9.s64 + -5064;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83053DB0;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83053DC8"))) PPC_WEAK_FUNC(sub_83053DC8);
PPC_FUNC_IMPL(__imp__sub_83053DC8) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,29776
	ctx.r9.s64 = ctx.r10.s64 + 29776;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,403
	ctx.r8.s64 = 403;
	// addi r6,r10,-20324
	ctx.r6.s64 = ctx.r10.s64 + -20324;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20436
	ctx.r5.s64 = ctx.r10.s64 + -20436;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-20352
	ctx.r4.s64 = ctx.r10.s64 + -20352;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,23848
	ctx.r31.s64 = ctx.r10.s64 + 23848;
	// addi r10,r11,8976
	ctx.r10.s64 = ctx.r11.s64 + 8976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83053E20;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-4544
	ctx.r3.s64 = ctx.r8.s64 + -4544;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-4976
	ctx.r11.s64 = ctx.r9.s64 + -4976;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83053E50;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83053E68"))) PPC_WEAK_FUNC(sub_83053E68);
PPC_FUNC_IMPL(__imp__sub_83053E68) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,30024
	ctx.r9.s64 = ctx.r10.s64 + 30024;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,403
	ctx.r8.s64 = 403;
	// addi r6,r10,-20324
	ctx.r6.s64 = ctx.r10.s64 + -20324;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20436
	ctx.r5.s64 = ctx.r10.s64 + -20436;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-20308
	ctx.r4.s64 = ctx.r10.s64 + -20308;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,23756
	ctx.r31.s64 = ctx.r10.s64 + 23756;
	// addi r10,r11,10920
	ctx.r10.s64 = ctx.r11.s64 + 10920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83053EC0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-4464
	ctx.r3.s64 = ctx.r8.s64 + -4464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-4888
	ctx.r11.s64 = ctx.r9.s64 + -4888;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83053EF0;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83053F08"))) PPC_WEAK_FUNC(sub_83053F08);
PPC_FUNC_IMPL(__imp__sub_83053F08) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,30272
	ctx.r9.s64 = ctx.r10.s64 + 30272;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,403
	ctx.r8.s64 = 403;
	// addi r6,r10,-20324
	ctx.r6.s64 = ctx.r10.s64 + -20324;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20436
	ctx.r5.s64 = ctx.r10.s64 + -20436;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-20276
	ctx.r4.s64 = ctx.r10.s64 + -20276;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,24584
	ctx.r31.s64 = ctx.r10.s64 + 24584;
	// addi r10,r11,12864
	ctx.r10.s64 = ctx.r11.s64 + 12864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83053F60;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-4384
	ctx.r3.s64 = ctx.r8.s64 + -4384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-4800
	ctx.r11.s64 = ctx.r9.s64 + -4800;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83053F90;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83053FA8"))) PPC_WEAK_FUNC(sub_83053FA8);
PPC_FUNC_IMPL(__imp__sub_83053FA8) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,29776
	ctx.r9.s64 = ctx.r10.s64 + 29776;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r10,-20216
	ctx.r6.s64 = ctx.r10.s64 + -20216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20436
	ctx.r5.s64 = ctx.r10.s64 + -20436;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-20248
	ctx.r4.s64 = ctx.r10.s64 + -20248;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,24768
	ctx.r31.s64 = ctx.r10.s64 + 24768;
	// addi r10,r11,14808
	ctx.r10.s64 = ctx.r11.s64 + 14808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054000;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-4304
	ctx.r3.s64 = ctx.r8.s64 + -4304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-4712
	ctx.r11.s64 = ctx.r9.s64 + -4712;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054030;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83054048"))) PPC_WEAK_FUNC(sub_83054048);
PPC_FUNC_IMPL(__imp__sub_83054048) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,30024
	ctx.r9.s64 = ctx.r10.s64 + 30024;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r10,-20216
	ctx.r6.s64 = ctx.r10.s64 + -20216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20436
	ctx.r5.s64 = ctx.r10.s64 + -20436;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-20204
	ctx.r4.s64 = ctx.r10.s64 + -20204;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,24124
	ctx.r31.s64 = ctx.r10.s64 + 24124;
	// addi r10,r11,16784
	ctx.r10.s64 = ctx.r11.s64 + 16784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830540A0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-4224
	ctx.r3.s64 = ctx.r8.s64 + -4224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-4624
	ctx.r11.s64 = ctx.r9.s64 + -4624;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830540D0;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_830540E8"))) PPC_WEAK_FUNC(sub_830540E8);
PPC_FUNC_IMPL(__imp__sub_830540E8) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,30272
	ctx.r9.s64 = ctx.r10.s64 + 30272;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r10,-20216
	ctx.r6.s64 = ctx.r10.s64 + -20216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20436
	ctx.r5.s64 = ctx.r10.s64 + -20436;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-20168
	ctx.r4.s64 = ctx.r10.s64 + -20168;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,24492
	ctx.r31.s64 = ctx.r10.s64 + 24492;
	// addi r10,r11,18760
	ctx.r10.s64 = ctx.r11.s64 + 18760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054140;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-4144
	ctx.r3.s64 = ctx.r8.s64 + -4144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-4536
	ctx.r11.s64 = ctx.r9.s64 + -4536;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054170;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83054188"))) PPC_WEAK_FUNC(sub_83054188);
PPC_FUNC_IMPL(__imp__sub_83054188) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,30696
	ctx.r9.s64 = ctx.r10.s64 + 30696;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20084
	ctx.r5.s64 = ctx.r10.s64 + -20084;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-20136
	ctx.r4.s64 = ctx.r10.s64 + -20136;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,23940
	ctx.r31.s64 = ctx.r10.s64 + 23940;
	// addi r10,r11,20856
	ctx.r10.s64 = ctx.r11.s64 + 20856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830541E0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-4048
	ctx.r3.s64 = ctx.r8.s64 + -4048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16016
	ctx.r11.s64 = ctx.r9.s64 + -16016;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054210;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83054228"))) PPC_WEAK_FUNC(sub_83054228);
PPC_FUNC_IMPL(__imp__sub_83054228) {
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
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r9,r10,15592
	ctx.r9.s64 = ctx.r10.s64 + 15592;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-20000
	ctx.r5.s64 = ctx.r10.s64 + -20000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-20052
	ctx.r4.s64 = ctx.r10.s64 + -20052;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,24216
	ctx.r31.s64 = ctx.r10.s64 + 24216;
	// addi r10,r11,16088
	ctx.r10.s64 = ctx.r11.s64 + 16088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054280;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-3968
	ctx.r3.s64 = ctx.r8.s64 + -3968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-15928
	ctx.r11.s64 = ctx.r9.s64 + -15928;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830542B0;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_830542C8"))) PPC_WEAK_FUNC(sub_830542C8);
PPC_FUNC_IMPL(__imp__sub_830542C8) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,30520
	ctx.r9.s64 = ctx.r10.s64 + 30520;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20084
	ctx.r5.s64 = ctx.r10.s64 + -20084;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-19968
	ctx.r4.s64 = ctx.r10.s64 + -19968;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,24032
	ctx.r31.s64 = ctx.r10.s64 + 24032;
	// addi r10,r11,20856
	ctx.r10.s64 = ctx.r11.s64 + 20856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054320;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-3888
	ctx.r3.s64 = ctx.r8.s64 + -3888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16016
	ctx.r11.s64 = ctx.r9.s64 + -16016;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054350;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83054368"))) PPC_WEAK_FUNC(sub_83054368);
PPC_FUNC_IMPL(__imp__sub_83054368) {
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
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r9,r10,18792
	ctx.r9.s64 = ctx.r10.s64 + 18792;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-20000
	ctx.r5.s64 = ctx.r10.s64 + -20000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-19916
	ctx.r4.s64 = ctx.r10.s64 + -19916;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,24860
	ctx.r31.s64 = ctx.r10.s64 + 24860;
	// addi r10,r11,16088
	ctx.r10.s64 = ctx.r11.s64 + 16088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830543C0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-3808
	ctx.r3.s64 = ctx.r8.s64 + -3808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-15928
	ctx.r11.s64 = ctx.r9.s64 + -15928;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830543F0;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83054408"))) PPC_WEAK_FUNC(sub_83054408);
PPC_FUNC_IMPL(__imp__sub_83054408) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,30520
	ctx.r9.s64 = ctx.r10.s64 + 30520;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-19824
	ctx.r6.s64 = ctx.r10.s64 + -19824;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20084
	ctx.r5.s64 = ctx.r10.s64 + -20084;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-19864
	ctx.r4.s64 = ctx.r10.s64 + -19864;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,23084
	ctx.r31.s64 = ctx.r10.s64 + 23084;
	// addi r10,r11,28080
	ctx.r10.s64 = ctx.r11.s64 + 28080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054460;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-3728
	ctx.r3.s64 = ctx.r8.s64 + -3728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-7984
	ctx.r11.s64 = ctx.r9.s64 + -7984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-4880
	ctx.r11.s64 = ctx.r10.s64 + -4880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054490;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_830544A8"))) PPC_WEAK_FUNC(sub_830544A8);
PPC_FUNC_IMPL(__imp__sub_830544A8) {
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
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,-3808
	ctx.r9.s64 = ctx.r10.s64 + -3808;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-19784
	ctx.r5.s64 = ctx.r10.s64 + -19784;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-19816
	ctx.r4.s64 = ctx.r10.s64 + -19816;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,23232
	ctx.r31.s64 = ctx.r10.s64 + 23232;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054500;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-3648
	ctx.r3.s64 = ctx.r8.s64 + -3648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16328
	ctx.r11.s64 = ctx.r9.s64 + -16328;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-3816
	ctx.r11.s64 = ctx.r10.s64 + -3816;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054530;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83054548"))) PPC_WEAK_FUNC(sub_83054548);
PPC_FUNC_IMPL(__imp__sub_83054548) {
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
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,-3520
	ctx.r9.s64 = ctx.r10.s64 + -3520;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-19724
	ctx.r5.s64 = ctx.r10.s64 + -19724;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-19756
	ctx.r4.s64 = ctx.r10.s64 + -19756;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,22976
	ctx.r31.s64 = ctx.r10.s64 + 22976;
	// addi r10,r11,1928
	ctx.r10.s64 = ctx.r11.s64 + 1928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830545A0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-3568
	ctx.r3.s64 = ctx.r8.s64 + -3568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16240
	ctx.r11.s64 = ctx.r9.s64 + -16240;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-3528
	ctx.r11.s64 = ctx.r10.s64 + -3528;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830545D0;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_830545E8"))) PPC_WEAK_FUNC(sub_830545E8);
PPC_FUNC_IMPL(__imp__sub_830545E8) {
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
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r3,r11,23216
	ctx.r3.s64 = ctx.r11.s64 + 23216;
	// bl 0x8254d820
	ctx.lr = 0x83054600;
	sub_8254D820(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6560
	ctx.r3.s64 = ctx.r11.s64 + -6560;
	// bl 0x82d5cd68
	ctx.lr = 0x8305460C;
	sub_82D5CD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054620"))) PPC_WEAK_FUNC(sub_83054620);
PPC_FUNC_IMPL(__imp__sub_83054620) {
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
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r3,r11,23068
	ctx.r3.s64 = ctx.r11.s64 + 23068;
	// bl 0x8254d820
	ctx.lr = 0x83054638;
	sub_8254D820(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6544
	ctx.r3.s64 = ctx.r11.s64 + -6544;
	// bl 0x82d5cd68
	ctx.lr = 0x83054644;
	sub_82D5CD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054658"))) PPC_WEAK_FUNC(sub_83054658);
PPC_FUNC_IMPL(__imp__sub_83054658) {
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
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r3,r11,23324
	ctx.r3.s64 = ctx.r11.s64 + 23324;
	// bl 0x8254d820
	ctx.lr = 0x83054670;
	sub_8254D820(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-6528
	ctx.r3.s64 = ctx.r11.s64 + -6528;
	// bl 0x82d5cd68
	ctx.lr = 0x8305467C;
	sub_82D5CD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

