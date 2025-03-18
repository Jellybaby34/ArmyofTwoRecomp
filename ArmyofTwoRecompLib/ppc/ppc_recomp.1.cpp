#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82216BB0"))) PPC_WEAK_FUNC(sub_82216BB0);
PPC_FUNC_IMPL(__imp__sub_82216BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82216BB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r1,81
	ctx.r31.s64 = ctx.r1.s64 + 81;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r10,-8320
	ctx.r30.s64 = ctx.r10.s64 + -8320;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82d5f708
	ctx.lr = 0x82216C18;
	sub_82D5F708(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82216C24;
	sub_82D61E20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82216c34
	if (!ctx.cr0.eq) goto loc_82216C34;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82216c4c
	goto loc_82216C4C;
loc_82216C34:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82216610
	ctx.lr = 0x82216C40;
	sub_82216610(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82216c7c
	if (!ctx.cr0.eq) goto loc_82216C7C;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82216C4C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82216ae0
	ctx.lr = 0x82216C7C;
	sub_82216AE0(ctx, base);
loc_82216C7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216C88"))) PPC_WEAK_FUNC(sub_82216C88);
PPC_FUNC_IMPL(__imp__sub_82216C88) {
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
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d65728
	ctx.lr = 0x82216CA8;
	sub_82D65728(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82216cb8
	if (!ctx.cr0.eq) goto loc_82216CB8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82216cf8
	goto loc_82216CF8;
loc_82216CB8:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1900
	ctx.r10.s64 = ctx.r10.s64 + 1900;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82216ae0
	ctx.lr = 0x82216CF4;
	sub_82216AE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82216CF8:
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

__attribute__((alias("__imp__sub_82216D10"))) PPC_WEAK_FUNC(sub_82216D10);
PPC_FUNC_IMPL(__imp__sub_82216D10) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d65788
	ctx.lr = 0x82216D2C;
	sub_82D65788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82216c88
	ctx.lr = 0x82216D38;
	sub_82216C88(ctx, base);
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

__attribute__((alias("__imp__sub_82216D50"))) PPC_WEAK_FUNC(sub_82216D50);
PPC_FUNC_IMPL(__imp__sub_82216D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r6,9(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lha r10,6(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 6));
	// lbz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// addi r10,r10,-1900
	ctx.r10.s64 = ctx.r10.s64 + -1900;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82d650c8
	ctx.lr = 0x82216DBC;
	sub_82D650C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216DD0"))) PPC_WEAK_FUNC(sub_82216DD0);
PPC_FUNC_IMPL(__imp__sub_82216DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82216DD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// lhz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lbz r29,5(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// bgt cr6,0x82216e1c
	if (ctx.cr6.gt) goto loc_82216E1C;
	// bl 0x82216770
	ctx.lr = 0x82216E14;
	sub_82216770(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82216e20
	goto loc_82216E20;
loc_82216E1C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82216E20:
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// addi r5,r11,-8168
	ctx.r5.s64 = ctx.r11.s64 + -8168;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// extsb r7,r29
	ctx.r7.s64 = ctx.r29.s8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d649d8
	ctx.lr = 0x82216E48;
	sub_82D649D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82216E50"))) PPC_WEAK_FUNC(sub_82216E50);
PPC_FUNC_IMPL(__imp__sub_82216E50) {
	PPC_FUNC_PROLOGUE();
	// lha r11,6(r4)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 6));
	// lha r10,6(r3)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 6));
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82216e68
	if (!ctx.cr6.lt) goto loc_82216E68;
loc_82216E60:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82216E68:
	// bne cr6,0x82216f04
	if (!ctx.cr6.eq) goto loc_82216F04;
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82216e60
	if (ctx.cr6.lt) goto loc_82216E60;
	// bne cr6,0x82216f04
	if (!ctx.cr6.eq) goto loc_82216F04;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82216e60
	if (ctx.cr6.lt) goto loc_82216E60;
	// bne cr6,0x82216f04
	if (!ctx.cr6.eq) goto loc_82216F04;
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82216e60
	if (ctx.cr6.lt) goto loc_82216E60;
	// bne cr6,0x82216f04
	if (!ctx.cr6.eq) goto loc_82216F04;
	// lbz r11,9(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82216e60
	if (ctx.cr6.lt) goto loc_82216E60;
	// bne cr6,0x82216f04
	if (!ctx.cr6.eq) goto loc_82216F04;
	// lbz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82216efc
	if (ctx.cr6.lt) goto loc_82216EFC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82216EFC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82216F04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216F10"))) PPC_WEAK_FUNC(sub_82216F10);
PPC_FUNC_IMPL(__imp__sub_82216F10) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82216f74
	if (!ctx.cr6.eq) goto loc_82216F74;
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82216f74
	if (!ctx.cr6.eq) goto loc_82216F74;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82216f74
	if (!ctx.cr6.eq) goto loc_82216F74;
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82216f74
	if (!ctx.cr6.eq) goto loc_82216F74;
	// lbz r11,9(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82216f74
	if (!ctx.cr6.eq) goto loc_82216F74;
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82216F74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216F80"))) PPC_WEAK_FUNC(sub_82216F80);
PPC_FUNC_IMPL(__imp__sub_82216F80) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82216f90
	if (!ctx.cr6.eq) goto loc_82216F90;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82216F90:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82217008
	if (ctx.cr0.eq) goto loc_82217008;
	// lha r11,6(r4)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 6));
	// lha r10,10(r3)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 10));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82216fb8
	if (!ctx.cr6.lt) goto loc_82216FB8;
loc_82216FB0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82216ff8
	goto loc_82216FF8;
loc_82216FB8:
	// bne cr6,0x82216ff4
	if (!ctx.cr6.eq) goto loc_82216FF4;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82216fb0
	if (ctx.cr6.lt) goto loc_82216FB0;
	// bne cr6,0x82216ff4
	if (!ctx.cr6.eq) goto loc_82216FF4;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82216ff8
	if (ctx.cr6.lt) goto loc_82216FF8;
loc_82216FF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82216FF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82217008
	if (ctx.cr0.eq) goto loc_82217008;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82217008:
	// rlwinm. r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82217074
	if (ctx.cr0.eq) goto loc_82217074;
	// lha r11,6(r4)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 6));
	// lha r10,22(r3)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 22));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82217028
	if (!ctx.cr6.gt) goto loc_82217028;
loc_82217020:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82217068
	goto loc_82217068;
loc_82217028:
	// bne cr6,0x82217064
	if (!ctx.cr6.eq) goto loc_82217064;
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82217020
	if (ctx.cr6.gt) goto loc_82217020;
	// bne cr6,0x82217064
	if (!ctx.cr6.eq) goto loc_82217064;
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82217068
	if (ctx.cr6.gt) goto loc_82217068;
loc_82217064:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82217068:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82217074:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217080"))) PPC_WEAK_FUNC(sub_82217080);
PPC_FUNC_IMPL(__imp__sub_82217080) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217098"))) PPC_WEAK_FUNC(sub_82217098);
PPC_FUNC_IMPL(__imp__sub_82217098) {
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
	// lis r30,-31979
	ctx.r30.s64 = -2095775744;
	// lwz r11,-13976(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221716c
	if (!ctx.cr6.eq) goto loc_8221716C;
	// bl 0x82213850
	ctx.lr = 0x822170C0;
	sub_82213850(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221715c
	if (ctx.cr0.eq) goto loc_8221715C;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82217ec8
	ctx.lr = 0x822170D0;
	sub_82217EC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82217150
	if (ctx.cr0.eq) goto loc_82217150;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r10,-32047
	ctx.r10.s64 = -2100232192;
	// addi r11,r11,12104
	ctx.r11.s64 = ctx.r11.s64 + 12104;
	// addi r9,r9,30160
	ctx.r9.s64 = ctx.r9.s64 + 30160;
	// addi r10,r10,-28136
	ctx.r10.s64 = ctx.r10.s64 + -28136;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// bl 0x82213850
	ctx.lr = 0x82217110;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bl 0x82d5cb60
	ctx.lr = 0x82217138;
	sub_82D5CB60(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,-8060
	ctx.r4.s64 = ctx.r11.s64 + -8060;
	// bl 0x83010650
	ctx.lr = 0x82217148;
	sub_83010650(ctx, base);
	// stw r31,-13976(r30)
	PPC_STORE_U32(ctx.r30.u32 + -13976, ctx.r31.u32);
	// b 0x8221716c
	goto loc_8221716C;
loc_82217150:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-13976(r30)
	PPC_STORE_U32(ctx.r30.u32 + -13976, ctx.r11.u32);
	// b 0x8221716c
	goto loc_8221716C;
loc_8221715C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-8060
	ctx.r11.s64 = ctx.r11.s64 + -8060;
	// addi r3,r11,-76
	ctx.r3.s64 = ctx.r11.s64 + -76;
	// bl 0x82a39a40
	ctx.lr = 0x8221716C;
	sub_82A39A40(ctx, base);
loc_8221716C:
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

__attribute__((alias("__imp__sub_82217188"))) PPC_WEAK_FUNC(sub_82217188);
PPC_FUNC_IMPL(__imp__sub_82217188) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822171d8
	ctx.lr = 0x822171A8;
	sub_822171D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822171bc
	if (ctx.cr0.eq) goto loc_822171BC;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822138a8
	ctx.lr = 0x822171BC;
	sub_822138A8(ctx, base);
loc_822171BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_822171D8"))) PPC_WEAK_FUNC(sub_822171D8);
PPC_FUNC_IMPL(__imp__sub_822171D8) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,12104
	ctx.r11.s64 = ctx.r11.s64 + 12104;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82217220
	if (ctx.cr6.eq) goto loc_82217220;
	// bl 0x82213850
	ctx.lr = 0x82217208;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82217220:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x83010680
	ctx.lr = 0x82217228;
	sub_83010680(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,20780
	ctx.r11.s64 = ctx.r11.s64 + 20780;
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

__attribute__((alias("__imp__sub_82217248"))) PPC_WEAK_FUNC(sub_82217248);
PPC_FUNC_IMPL(__imp__sub_82217248) {
	PPC_FUNC_PROLOGUE();
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217258"))) PPC_WEAK_FUNC(sub_82217258);
PPC_FUNC_IMPL(__imp__sub_82217258) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217260"))) PPC_WEAK_FUNC(sub_82217260);
PPC_FUNC_IMPL(__imp__sub_82217260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82217268;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822172a8
	if (ctx.cr6.eq) goto loc_822172A8;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83010748
	ctx.lr = 0x8221728C;
	sub_83010748(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822172A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830107f8
	ctx.lr = 0x822172A8;
	sub_830107F8(ctx, base);
loc_822172A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822172B0"))) PPC_WEAK_FUNC(sub_822172B0);
PPC_FUNC_IMPL(__imp__sub_822172B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x822172B8;
	__savegprlr_28(ctx, base);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822173b4
	if (ctx.cr6.eq) goto loc_822173B4;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83010748
	ctx.lr = 0x822172F4;
	sub_83010748(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8221730c
	if (ctx.cr6.gt) goto loc_8221730C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217378
	if (!ctx.cr6.eq) goto loc_82217378;
loc_8221730C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217340
	if (ctx.cr6.eq) goto loc_82217340;
	// bl 0x82213850
	ctx.lr = 0x8221731C;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82217340:
	// rlwinm r11,r30,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82213850
	ctx.lr = 0x82217350;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bl 0x82d5cb60
	ctx.lr = 0x82217378;
	sub_82D5CB60(ctx, base);
loc_82217378:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d64498
	ctx.lr = 0x82217394;
	sub_82D64498(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822173AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830107f8
	ctx.lr = 0x822173B4;
	sub_830107F8(ctx, base);
loc_822173B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822173C0"))) PPC_WEAK_FUNC(sub_822173C0);
PPC_FUNC_IMPL(__imp__sub_822173C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x822173C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r28,r11,-30937
	ctx.r28.s64 = ctx.r11.s64 + -30937;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r28,22897
	ctx.r4.s64 = ctx.r28.s64 + 22897;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x822173FC;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82210160
	ctx.lr = 0x82217418;
	sub_82210160(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82217464
	if (ctx.cr0.eq) goto loc_82217464;
	// bl 0x82210160
	ctx.lr = 0x82217440;
	sub_82210160(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82217464:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82217484
	if (ctx.cr0.eq) goto loc_82217484;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82217484:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217490"))) PPC_WEAK_FUNC(sub_82217490);
PPC_FUNC_IMPL(__imp__sub_82217490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82217498;
	__savegprlr_27(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r28,r11,-30890
	ctx.r28.s64 = ctx.r11.s64 + -30890;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r28,22890
	ctx.r4.s64 = ctx.r28.s64 + 22890;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x822174CC;
	sub_82D5EA60(ctx, base);
	// bl 0x82210160
	ctx.lr = 0x822174D0;
	sub_82210160(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822174EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221751c
	if (ctx.cr0.eq) goto loc_8221751C;
	// bl 0x82210160
	ctx.lr = 0x822174F8;
	sub_82210160(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221751C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221751C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217540"))) PPC_WEAK_FUNC(sub_82217540);
PPC_FUNC_IMPL(__imp__sub_82217540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822175a4
	if (ctx.cr6.eq) goto loc_822175A4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822175a4
	if (ctx.cr6.eq) goto loc_822175A4;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-7960
	ctx.r4.s64 = ctx.r10.s64 + -7960;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221758C;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822175A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822175A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822175C0"))) PPC_WEAK_FUNC(sub_822175C0);
PPC_FUNC_IMPL(__imp__sub_822175C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r3,-13976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13976);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822175D0"))) PPC_WEAK_FUNC(sub_822175D0);
PPC_FUNC_IMPL(__imp__sub_822175D0) {
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
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r11,-2688(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -2688);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82217664
	if (!ctx.cr6.eq) goto loc_82217664;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82217664
	if (ctx.cr6.eq) goto loc_82217664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d65788
	ctx.lr = 0x8221760C;
	sub_82D65788(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d65440
	ctx.lr = 0x82217614;
	sub_82D65440(ctx, base);
	// bl 0x82d64af0
	ctx.lr = 0x82217618;
	sub_82D64AF0(ctx, base);
	// addi r4,r3,11
	ctx.r4.s64 = ctx.r3.s64 + 11;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82217624:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82217624
	if (!ctx.cr6.eq) goto loc_82217624;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-7912
	ctx.r11.s64 = ctx.r11.s64 + -7912;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stb r10,-5(r11)
	PPC_STORE_U8(ctx.r11.u32 + -5, ctx.r10.u8);
	// bl 0x82d5eba8
	ctx.lr = 0x82217660;
	sub_82D5EBA8(ctx, base);
	// b 0x82217674
	goto loc_82217674;
loc_82217664:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-7912
	ctx.r3.s64 = ctx.r11.s64 + -7912;
	// bl 0x82d5eba8
	ctx.lr = 0x82217674;
	sub_82D5EBA8(ctx, base);
loc_82217674:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221767C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221767c
	if (!ctx.cr6.eq) goto loc_8221767C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x822176b0
	if (!ctx.cr0.gt) goto loc_822176B0;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822176b4
	if (ctx.cr6.eq) goto loc_822176B4;
loc_822176B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822176B4:
	// stb r11,-2688(r30)
	PPC_STORE_U8(ctx.r30.u32 + -2688, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_822176D0"))) PPC_WEAK_FUNC(sub_822176D0);
PPC_FUNC_IMPL(__imp__sub_822176D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x822176D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// bl 0x82d5cb60
	ctx.lr = 0x822176FC;
	sub_82D5CB60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// addi r3,r1,129
	ctx.r3.s64 = ctx.r1.s64 + 129;
	// bl 0x82d5cb60
	ctx.lr = 0x82217710;
	sub_82D5CB60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// addi r3,r1,177
	ctx.r3.s64 = ctx.r1.s64 + 177;
	// bl 0x82d5cb60
	ctx.lr = 0x82217724;
	sub_82D5CB60(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r6,33
	ctx.r6.s64 = 33;
	// addi r29,r11,-7848
	ctx.r29.s64 = ctx.r11.s64 + -7848;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822267e0
	ctx.lr = 0x82217740;
	sub_822267E0(ctx, base);
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// li r6,33
	ctx.r6.s64 = 33;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822267e0
	ctx.lr = 0x82217754;
	sub_822267E0(ctx, base);
	// li r6,33
	ctx.r6.s64 = 33;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822267e0
	ctx.lr = 0x82217768;
	sub_822267E0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822103f8
	ctx.lr = 0x82217778;
	sub_822103F8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r3,r31,33
	ctx.r3.s64 = ctx.r31.s64 + 33;
	// bl 0x822103f8
	ctx.lr = 0x82217788;
	sub_822103F8(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r3,r31,66
	ctx.r3.s64 = ctx.r31.s64 + 66;
	// bl 0x822103f8
	ctx.lr = 0x82217798;
	sub_822103F8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822177A0"))) PPC_WEAK_FUNC(sub_822177A0);
PPC_FUNC_IMPL(__imp__sub_822177A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x822177A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82217878
	if (ctx.cr6.eq) goto loc_82217878;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x822177d4
	if (ctx.cr6.eq) goto loc_822177D4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82217878
	if (!ctx.cr6.eq) goto loc_82217878;
loc_822177D4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822177ec
	if (!ctx.cr6.eq) goto loc_822177EC;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// stb r11,33(r27)
	PPC_STORE_U8(ctx.r27.u32 + 33, ctx.r11.u8);
	// stb r11,66(r27)
	PPC_STORE_U8(ctx.r27.u32 + 66, ctx.r11.u8);
	// b 0x82217878
	goto loc_82217878;
loc_822177EC:
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822103f8
	ctx.lr = 0x822177F8;
	sub_822103F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-30846
	ctx.r31.s64 = ctx.r11.s64 + -30846;
	// addi r4,r31,23090
	ctx.r4.s64 = ctx.r31.s64 + 23090;
	// bl 0x82d648b8
	ctx.lr = 0x8221780C;
	sub_82D648B8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82217818
	if (!ctx.cr0.eq) goto loc_82217818;
	// addi r28,r31,-4
	ctx.r28.s64 = ctx.r31.s64 + -4;
loc_82217818:
	// addi r4,r31,23094
	ctx.r4.s64 = ctx.r31.s64 + 23094;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d648b8
	ctx.lr = 0x82217824;
	sub_82D648B8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82217830
	if (!ctx.cr0.eq) goto loc_82217830;
	// addi r29,r31,-3
	ctx.r29.s64 = ctx.r31.s64 + -3;
loc_82217830:
	// addi r4,r31,23098
	ctx.r4.s64 = ctx.r31.s64 + 23098;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d648b8
	ctx.lr = 0x8221783C;
	sub_82D648B8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82217848
	if (!ctx.cr0.eq) goto loc_82217848;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82217848:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822103f8
	ctx.lr = 0x82217858;
	sub_822103F8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r3,r27,33
	ctx.r3.s64 = ctx.r27.s64 + 33;
	// bl 0x822103f8
	ctx.lr = 0x82217868;
	sub_822103F8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r3,r27,66
	ctx.r3.s64 = ctx.r27.s64 + 66;
	// bl 0x822103f8
	ctx.lr = 0x82217878;
	sub_822103F8(ctx, base);
loc_82217878:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217880"))) PPC_WEAK_FUNC(sub_82217880);
PPC_FUNC_IMPL(__imp__sub_82217880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82217888;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217994
	if (ctx.cr6.eq) goto loc_82217994;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r31,r11,-7736
	ctx.r31.s64 = ctx.r11.s64 + -7736;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82d5ea60
	ctx.lr = 0x822178C0;
	sub_82D5EA60(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_822178C8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822178c8
	if (!ctx.cr6.eq) goto loc_822178C8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_822178DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x822178dc
	if (!ctx.cr0.eq) goto loc_822178DC;
	// lbz r11,33(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 33);
	// addi r5,r29,33
	ctx.r5.s64 = ctx.r29.s64 + 33;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217994
	if (ctx.cr6.eq) goto loc_82217994;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x82217910;
	sub_82D5EA60(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82217918:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82217918
	if (!ctx.cr6.eq) goto loc_82217918;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8221792C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x8221792c
	if (!ctx.cr0.eq) goto loc_8221792C;
	// lbz r11,66(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 66);
	// addi r5,r29,66
	ctx.r5.s64 = ctx.r29.s64 + 66;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217994
	if (ctx.cr6.eq) goto loc_82217994;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x82217960;
	sub_82D5EA60(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82217968:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82217968
	if (!ctx.cr6.eq) goto loc_82217968;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8221797C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x8221797c
	if (!ctx.cr0.eq) goto loc_8221797C;
loc_82217994:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822179A0"))) PPC_WEAK_FUNC(sub_822179A0);
PPC_FUNC_IMPL(__imp__sub_822179A0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d61e20
	ctx.lr = 0x822179C0;
	sub_82D61E20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822179f4
	if (!ctx.cr0.eq) goto loc_822179F4;
	// addi r4,r30,33
	ctx.r4.s64 = ctx.r30.s64 + 33;
	// addi r3,r31,33
	ctx.r3.s64 = ctx.r31.s64 + 33;
	// bl 0x82d61e20
	ctx.lr = 0x822179D4;
	sub_82D61E20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822179f4
	if (!ctx.cr0.eq) goto loc_822179F4;
	// addi r4,r30,66
	ctx.r4.s64 = ctx.r30.s64 + 66;
	// addi r3,r31,66
	ctx.r3.s64 = ctx.r31.s64 + 66;
	// bl 0x82d61e20
	ctx.lr = 0x822179E8;
	sub_82D61E20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x822179f8
	if (ctx.cr0.eq) goto loc_822179F8;
loc_822179F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822179F8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82217A18"))) PPC_WEAK_FUNC(sub_82217A18);
PPC_FUNC_IMPL(__imp__sub_82217A18) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x822103f8
	ctx.lr = 0x82217A40;
	sub_822103F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82217A58"))) PPC_WEAK_FUNC(sub_82217A58);
PPC_FUNC_IMPL(__imp__sub_82217A58) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82217ac0
	if (ctx.cr6.eq) goto loc_82217AC0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82217ab8
	if (ctx.cr6.eq) goto loc_82217AB8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82217ab0
	if (ctx.cr6.eq) goto loc_82217AB0;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x82217aa8
	if (ctx.cr6.eq) goto loc_82217AA8;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x82217aa0
	if (ctx.cr6.eq) goto loc_82217AA0;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// beq cr6,0x82217a98
	if (ctx.cr6.eq) goto loc_82217A98;
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// bne cr6,0x82217ac0
	if (!ctx.cr6.eq) goto loc_82217AC0;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82217A98:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82217AA0:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82217AA8:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82217AB0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82217AB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82217AC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217AC8"))) PPC_WEAK_FUNC(sub_82217AC8);
PPC_FUNC_IMPL(__imp__sub_82217AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x82217AD0;
	__savegprlr_22(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r11,-6924
	ctx.r31.s64 = ctx.r11.s64 + -6924;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// bl 0x82d5ea60
	ctx.lr = 0x82217AFC;
	sub_82D5EA60(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82217B0C;
	sub_82225FF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82217cc0
	if (ctx.cr6.eq) goto loc_82217CC0;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
loc_82217B1C:
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d5ea60
	ctx.lr = 0x82217B30;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,-12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// bl 0x82225ff0
	ctx.lr = 0x82217B40;
	sub_82225FF0(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d5ea60
	ctx.lr = 0x82217B54;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,-4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x822261f8
	ctx.lr = 0x82217B64;
	sub_822261F8(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d5ea60
	ctx.lr = 0x82217B78;
	sub_82D5EA60(ctx, base);
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r31,8824
	ctx.r4.s64 = ctx.r31.s64 + 8824;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82d5ea60
	ctx.lr = 0x82217B90;
	sub_82D5EA60(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822261f8
	ctx.lr = 0x82217BA0;
	sub_822261F8(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d5ea60
	ctx.lr = 0x82217BB4;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x822261f8
	ctx.lr = 0x82217BC4;
	sub_822261F8(ctx, base);
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d5ea60
	ctx.lr = 0x82217BD8;
	sub_82D5EA60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,31
	ctx.r5.s64 = 31;
	// lwz r23,-8(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d5cb60
	ctx.lr = 0x82217BF4;
	sub_82D5CB60(ctx, base);
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82217C00:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x82217c5c
	if (ctx.cr6.lt) goto loc_82217C5C;
	// beq cr6,0x82217c54
	if (ctx.cr6.eq) goto loc_82217C54;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// blt cr6,0x82217c4c
	if (ctx.cr6.lt) goto loc_82217C4C;
	// beq cr6,0x82217c44
	if (ctx.cr6.eq) goto loc_82217C44;
	// cmplwi cr6,r26,5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 5, ctx.xer);
	// blt cr6,0x82217c3c
	if (ctx.cr6.lt) goto loc_82217C3C;
	// beq cr6,0x82217c34
	if (ctx.cr6.eq) goto loc_82217C34;
	// cmplwi cr6,r26,7
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 7, ctx.xer);
	// bge cr6,0x82217c5c
	if (!ctx.cr6.lt) goto loc_82217C5C;
	// li r11,64
	ctx.r11.s64 = 64;
	// b 0x82217c60
	goto loc_82217C60;
loc_82217C34:
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x82217c60
	goto loc_82217C60;
loc_82217C3C:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82217c60
	goto loc_82217C60;
loc_82217C44:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82217c60
	goto loc_82217C60;
loc_82217C4C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82217c60
	goto loc_82217C60;
loc_82217C54:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82217c60
	goto loc_82217C60;
loc_82217C5C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82217C60:
	// and. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82217c94
	if (ctx.cr0.eq) goto loc_82217C94;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// beq 0x82217c84
	if (ctx.cr0.eq) goto loc_82217C84;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x82217c8c
	goto loc_82217C8C;
loc_82217C84:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82217C8C:
	// bl 0x82d5ea60
	ctx.lr = 0x82217C90;
	sub_82D5EA60(ctx, base);
	// add r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 + ctx.r25.u64;
loc_82217C94:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,7
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 7, ctx.xer);
	// blt cr6,0x82217c00
	if (ctx.cr6.lt) goto loc_82217C00;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822261f8
	ctx.lr = 0x82217CB0;
	sub_822261F8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82217b1c
	if (ctx.cr6.lt) goto loc_82217B1C;
loc_82217CC0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217CC8"))) PPC_WEAK_FUNC(sub_82217CC8);
PPC_FUNC_IMPL(__imp__sub_82217CC8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82217d18
	ctx.lr = 0x82217CE8;
	sub_82217D18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82217cfc
	if (ctx.cr0.eq) goto loc_82217CFC;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822138a8
	ctx.lr = 0x82217CFC;
	sub_822138A8(ctx, base);
loc_82217CFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82217D18"))) PPC_WEAK_FUNC(sub_82217D18);
PPC_FUNC_IMPL(__imp__sub_82217D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82217D20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,11204
	ctx.r11.s64 = ctx.r11.s64 + 11204;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82217d8c
	if (ctx.cr0.eq) goto loc_82217D8C;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82217D50:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82217d7c
	if (ctx.cr0.eq) goto loc_82217D7C;
	// addi r27,r31,28
	ctx.r27.s64 = ctx.r31.s64 + 28;
loc_82217D60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82213908
	ctx.lr = 0x82217D74;
	sub_82213908(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82217d60
	if (!ctx.cr6.eq) goto loc_82217D60;
loc_82217D7C:
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82217d50
	if (!ctx.cr0.eq) goto loc_82217D50;
loc_82217D8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82217db0
	if (!ctx.cr6.gt) goto loc_82217DB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82213908
	ctx.lr = 0x82217DB0;
	sub_82213908(ctx, base);
loc_82217DB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217DB8"))) PPC_WEAK_FUNC(sub_82217DB8);
PPC_FUNC_IMPL(__imp__sub_82217DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// divwu r11,r4,r10
	ctx.r11.u32 = ctx.r4.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82217df0
	goto loc_82217DF0;
loc_82217DE0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82217df8
	if (ctx.cr6.eq) goto loc_82217DF8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82217DF0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82217de0
	if (!ctx.cr0.eq) goto loc_82217DE0;
loc_82217DF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217e0c
	if (ctx.cr6.eq) goto loc_82217E0C;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// b 0x82217e20
	goto loc_82217E20;
loc_82217E0C:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
loc_82217E20:
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217E50"))) PPC_WEAK_FUNC(sub_82217E50);
PPC_FUNC_IMPL(__imp__sub_82217E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82217E58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82217e94
	if (ctx.cr0.eq) goto loc_82217E94;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82217E94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217db8
	ctx.lr = 0x82217EA0;
	sub_82217DB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// beq 0x82217ec0
	if (ctx.cr0.eq) goto loc_82217EC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82217EC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217EC8"))) PPC_WEAK_FUNC(sub_82217EC8);
PPC_FUNC_IMPL(__imp__sub_82217EC8) {
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
	// bl 0x82213850
	ctx.lr = 0x82217EE0;
	sub_82213850(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82217f08
	if (ctx.cr0.eq) goto loc_82217F08;
	// bl 0x82213850
	ctx.lr = 0x82217EEC;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82217f10
	goto loc_82217F10;
loc_82217F08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5e610
	ctx.lr = 0x82217F10;
	sub_82D5E610(ctx, base);
loc_82217F10:
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

__attribute__((alias("__imp__sub_82217F28"))) PPC_WEAK_FUNC(sub_82217F28);
PPC_FUNC_IMPL(__imp__sub_82217F28) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221801c
	if (ctx.cr6.eq) goto loc_8221801C;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r11,-13928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13928);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221801c
	if (!ctx.cr6.eq) goto loc_8221801C;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r11,-13984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13984);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r31,r11,-13938
	ctx.r31.s64 = ctx.r11.s64 + -13938;
	// bne cr6,0x82217f84
	if (!ctx.cr6.eq) goto loc_82217F84;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822136c8
	ctx.lr = 0x82217F7C;
	sub_822136C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-1(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1, ctx.r11.u8);
loc_82217F84:
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r11,-13976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217fa0
	if (!ctx.cr6.eq) goto loc_82217FA0;
	// bl 0x82217098
	ctx.lr = 0x82217F98;
	sub_82217098(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82217FA0:
	// lis r31,-31979
	ctx.r31.s64 = -2095775744;
	// lwz r11,-13980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217fd4
	if (!ctx.cr6.eq) goto loc_82217FD4;
	// li r3,960
	ctx.r3.s64 = 960;
	// bl 0x82217ec8
	ctx.lr = 0x82217FB8;
	sub_82217EC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82217fcc
	if (ctx.cr0.eq) goto loc_82217FCC;
	// bl 0x8221d3c8
	ctx.lr = 0x82217FC4;
	sub_8221D3C8(ctx, base);
	// stw r3,-13980(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13980, ctx.r3.u32);
	// b 0x82217fd4
	goto loc_82217FD4;
loc_82217FCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-13980(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13980, ctx.r11.u32);
loc_82217FD4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,-13980(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13980);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822305b8
	ctx.lr = 0x82218008;
	sub_822305B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82218020
	if (ctx.cr0.eq) goto loc_82218020;
	// bl 0x82218058
	ctx.lr = 0x82218014;
	sub_82218058(ctx, base);
	// li r3,-115
	ctx.r3.s64 = -115;
	// b 0x82218020
	goto loc_82218020;
loc_8221801C:
	// li r3,-114
	ctx.r3.s64 = -114;
loc_82218020:
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

__attribute__((alias("__imp__sub_82218038"))) PPC_WEAK_FUNC(sub_82218038);
PPC_FUNC_IMPL(__imp__sub_82218038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r3,-13980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13980);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218048"))) PPC_WEAK_FUNC(sub_82218048);
PPC_FUNC_IMPL(__imp__sub_82218048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r3,-13920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13920);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218058"))) PPC_WEAK_FUNC(sub_82218058);
PPC_FUNC_IMPL(__imp__sub_82218058) {
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
	// bl 0x82230740
	ctx.lr = 0x82218070;
	sub_82230740(ctx, base);
	// lis r31,-31979
	ctx.r31.s64 = -2095775744;
	// lwz r3,-13980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13980);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221809c
	if (ctx.cr6.eq) goto loc_8221809C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-13980(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13980, ctx.r11.u32);
loc_8221809C:
	// lis r31,-31979
	ctx.r31.s64 = -2095775744;
	// lwz r3,-13928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13928);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822180c8
	if (ctx.cr6.eq) goto loc_822180C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822180C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-13928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13928, ctx.r11.u32);
loc_822180C8:
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r30,r11,-13939
	ctx.r30.s64 = ctx.r11.s64 + -13939;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82218108
	if (ctx.cr0.eq) goto loc_82218108;
	// lis r31,-31979
	ctx.r31.s64 = -2095775744;
	// lwz r3,-13976(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82218100
	if (ctx.cr6.eq) goto loc_82218100;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82218100:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-13976(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13976, ctx.r11.u32);
loc_82218108:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82218118
	if (ctx.cr0.eq) goto loc_82218118;
	// bl 0x82213768
	ctx.lr = 0x82218118;
	sub_82213768(ctx, base);
loc_82218118:
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

__attribute__((alias("__imp__sub_82218130"))) PPC_WEAK_FUNC(sub_82218130);
PPC_FUNC_IMPL(__imp__sub_82218130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82218138;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lis r30,-31979
	ctx.r30.s64 = -2095775744;
	// lwz r29,-13980(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13980);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-13937(r30)
	PPC_STORE_U8(ctx.r30.u32 + -13937, ctx.r11.u8);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r31,-13920(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13920);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822181b4
	if (ctx.cr6.eq) goto loc_822181B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221819c
	if (ctx.cr0.eq) goto loc_8221819C;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221817c
	if (!ctx.cr0.eq) goto loc_8221817C;
	// bl 0x830126f8
	ctx.lr = 0x8221817C;
	sub_830126F8(ctx, base);
loc_8221817C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221819c
	if (ctx.cr0.eq) goto loc_8221819C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221819C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221819C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822181B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822181f0
	goto loc_822181F0;
loc_822181B4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82218200
	if (ctx.cr6.eq) goto loc_82218200;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r3,-13928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13928);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822181D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822181E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822181f0
	if (!ctx.cr0.eq) goto loc_822181F0;
	// bl 0x830126f8
	ctx.lr = 0x822181F0;
	sub_830126F8(ctx, base);
loc_822181F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82218200
	if (ctx.cr6.eq) goto loc_82218200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221d7d8
	ctx.lr = 0x82218200;
	sub_8221D7D8(ctx, base);
loc_82218200:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-13937(r30)
	PPC_STORE_U8(ctx.r30.u32 + -13937, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218210"))) PPC_WEAK_FUNC(sub_82218210);
PPC_FUNC_IMPL(__imp__sub_82218210) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x82218218;
	__savegprlr_23(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r11,r11,-30606
	ctx.r11.s64 = ctx.r11.s64 + -30606;
	// addi r10,r10,-4132
	ctx.r10.s64 = ctx.r10.s64 + -4132;
	// addi r9,r11,24794
	ctx.r9.s64 = ctx.r11.s64 + 24794;
	// addi r8,r11,24794
	ctx.r8.s64 = ctx.r11.s64 + 24794;
	// addi r7,r11,24794
	ctx.r7.s64 = ctx.r11.s64 + 24794;
	// addi r6,r11,24794
	ctx.r6.s64 = ctx.r11.s64 + 24794;
	// addi r5,r11,24794
	ctx.r5.s64 = ctx.r11.s64 + 24794;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lis r9,16725
	ctx.r9.s64 = 1096089600;
	// addi r4,r11,24794
	ctx.r4.s64 = ctx.r11.s64 + 24794;
	// ori r9,r9,21576
	ctx.r9.u64 = ctx.r9.u64 | 21576;
	// addi r3,r11,24794
	ctx.r3.s64 = ctx.r11.s64 + 24794;
	// addi r31,r11,24794
	ctx.r31.s64 = ctx.r11.s64 + 24794;
	// addi r30,r11,24794
	ctx.r30.s64 = ctx.r11.s64 + 24794;
	// addi r29,r11,24794
	ctx.r29.s64 = ctx.r11.s64 + 24794;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17481
	ctx.r9.s64 = 1145634816;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21315
	ctx.r9.u64 = ctx.r9.u64 | 21315;
	// addi r10,r10,-4120
	ctx.r10.s64 = ctx.r10.s64 + -4120;
	// addi r28,r11,24794
	ctx.r28.s64 = ctx.r11.s64 + 24794;
	// addi r27,r11,24794
	ctx.r27.s64 = ctx.r11.s64 + 24794;
	// addi r26,r11,24794
	ctx.r26.s64 = ctx.r11.s64 + 24794;
	// addi r25,r11,24794
	ctx.r25.s64 = ctx.r11.s64 + 24794;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r24,r11,24794
	ctx.r24.s64 = ctx.r11.s64 + 24794;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21843
	ctx.r9.s64 = 1431502848;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17224
	ctx.r9.u64 = ctx.r9.u64 | 17224;
	// addi r10,r10,-4108
	ctx.r10.s64 = ctx.r10.s64 + -4108;
	// addi r23,r11,24794
	ctx.r23.s64 = ctx.r11.s64 + 24794;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21843
	ctx.r9.s64 = 1431502848;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17746
	ctx.r9.u64 = ctx.r9.u64 | 17746;
	// addi r10,r10,-4096
	ctx.r10.s64 = ctx.r10.s64 + -4096;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20545
	ctx.r9.s64 = 1346437120;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17476
	ctx.r9.u64 = ctx.r9.u64 | 17476;
	// addi r10,r10,-4084
	ctx.r10.s64 = ctx.r10.s64 + -4084;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20548
	ctx.r9.s64 = 1346633728;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17740
	ctx.r9.u64 = ctx.r9.u64 | 17740;
	// addi r10,r10,-4072
	ctx.r10.s64 = ctx.r10.s64 + -4072;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20563
	ctx.r9.s64 = 1347616768;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17748
	ctx.r9.u64 = ctx.r9.u64 | 17748;
	// addi r10,r10,-4060
	ctx.r10.s64 = ctx.r10.s64 + -4060;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20551
	ctx.r9.s64 = 1346830336;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17748
	ctx.r9.u64 = ctx.r9.u64 | 17748;
	// addi r10,r10,-4048
	ctx.r10.s64 = ctx.r10.s64 + -4048;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21057
	ctx.r9.s64 = 1379991552;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17476
	ctx.r9.u64 = ctx.r9.u64 | 17476;
	// addi r10,r10,-4036
	ctx.r10.s64 = ctx.r10.s64 + -4036;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,21057
	ctx.r9.s64 = 1379991552;
	// addi r10,r10,-4024
	ctx.r10.s64 = ctx.r10.s64 + -4024;
	// ori r9,r9,17485
	ctx.r9.u64 = ctx.r9.u64 | 17485;
	// addi r8,r11,24794
	ctx.r8.s64 = ctx.r11.s64 + 24794;
	// addi r7,r11,24794
	ctx.r7.s64 = ctx.r11.s64 + 24794;
	// addi r6,r11,24794
	ctx.r6.s64 = ctx.r11.s64 + 24794;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// addi r5,r11,24794
	ctx.r5.s64 = ctx.r11.s64 + 24794;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21074
	ctx.r9.s64 = 1381105664;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21328
	ctx.r9.u64 = ctx.r9.u64 | 21328;
	// addi r10,r10,-4012
	ctx.r10.s64 = ctx.r10.s64 + -4012;
	// addi r4,r11,24794
	ctx.r4.s64 = ctx.r11.s64 + 24794;
	// addi r3,r11,24794
	ctx.r3.s64 = ctx.r11.s64 + 24794;
	// addi r31,r11,24794
	ctx.r31.s64 = ctx.r11.s64 + 24794;
	// addi r30,r11,24794
	ctx.r30.s64 = ctx.r11.s64 + 24794;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// addi r29,r11,24794
	ctx.r29.s64 = ctx.r11.s64 + 24794;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21060
	ctx.r9.s64 = 1380188160;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17740
	ctx.r9.u64 = ctx.r9.u64 | 17740;
	// addi r10,r10,-4000
	ctx.r10.s64 = ctx.r10.s64 + -4000;
	// addi r28,r11,24794
	ctx.r28.s64 = ctx.r11.s64 + 24794;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// addi r27,r11,24794
	ctx.r27.s64 = ctx.r11.s64 + 24794;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21060
	ctx.r9.s64 = 1380188160;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17741
	ctx.r9.u64 = ctx.r9.u64 | 17741;
	// addi r10,r10,-3988
	ctx.r10.s64 = ctx.r10.s64 + -3988;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// addi r26,r11,24794
	ctx.r26.s64 = ctx.r11.s64 + 24794;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21070
	ctx.r9.s64 = 1380843520;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,20308
	ctx.r9.u64 = ctx.r9.u64 | 20308;
	// addi r10,r10,-3976
	ctx.r10.s64 = ctx.r10.s64 + -3976;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21063
	ctx.r9.s64 = 1380384768;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17748
	ctx.r9.u64 = ctx.r9.u64 | 17748;
	// addi r10,r10,-3964
	ctx.r10.s64 = ctx.r10.s64 + -3964;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21071
	ctx.r9.s64 = 1380909056;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// addi r10,r10,-3952
	ctx.r10.s64 = ctx.r10.s64 + -3952;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r9,r11,24794
	ctx.r9.s64 = ctx.r11.s64 + 24794;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-3940
	ctx.r10.s64 = ctx.r10.s64 + -3940;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lis r9,19788
	ctx.r9.s64 = 1296826368;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21571
	ctx.r9.s64 = 1413677056;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,19276
	ctx.r9.u64 = ctx.r9.u64 | 19276;
	// addi r10,r10,-3928
	ctx.r10.s64 = ctx.r10.s64 + -3928;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18249
	ctx.r9.s64 = 1195966464;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,20054
	ctx.r9.u64 = ctx.r9.u64 | 20054;
	// addi r10,r10,-3916
	ctx.r10.s64 = ctx.r10.s64 + -3916;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18258
	ctx.r9.s64 = 1196556288;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21328
	ctx.r9.u64 = ctx.r9.u64 | 21328;
	// addi r10,r10,-3904
	ctx.r10.s64 = ctx.r10.s64 + -3904;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18258
	ctx.r9.s64 = 1196556288;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,22091
	ctx.r9.u64 = ctx.r9.u64 | 22091;
	// addi r10,r10,-3892
	ctx.r10.s64 = ctx.r10.s64 + -3892;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18254
	ctx.r9.s64 = 1196294144;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,20308
	ctx.r9.u64 = ctx.r9.u64 | 20308;
	// addi r10,r10,-3880
	ctx.r10.s64 = ctx.r10.s64 + -3880;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21317
	ctx.r9.s64 = 1397030912;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,20036
	ctx.r9.u64 = ctx.r9.u64 | 20036;
	// addi r10,r10,-3868
	ctx.r10.s64 = ctx.r10.s64 + -3868;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21061
	ctx.r9.s64 = 1380253696;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17238
	ctx.r9.u64 = ctx.r9.u64 | 17238;
	// addi r10,r10,-3856
	ctx.r10.s64 = ctx.r10.s64 + -3856;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,16978
	ctx.r9.s64 = 1112670208;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17475
	ctx.r9.u64 = ctx.r9.u64 | 17475;
	// addi r10,r10,-3844
	ctx.r10.s64 = ctx.r10.s64 + -3844;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17744
	ctx.r9.s64 = 1162870784;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// addi r10,r10,-3832
	ctx.r10.s64 = ctx.r10.s64 + -3832;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17744
	ctx.r9.s64 = 1162870784;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,18260
	ctx.r9.u64 = ctx.r9.u64 | 18260;
	// addi r10,r10,-3820
	ctx.r10.s64 = ctx.r10.s64 + -3820;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,16708
	ctx.r9.s64 = 1094975488;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,19790
	ctx.r9.u64 = ctx.r9.u64 | 19790;
	// addi r10,r10,-3808
	ctx.r10.s64 = ctx.r10.s64 + -3808;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20553
	ctx.r9.s64 = 1346961408;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,20039
	ctx.r9.u64 = ctx.r9.u64 | 20039;
	// addi r10,r10,-3796
	ctx.r10.s64 = ctx.r10.s64 + -3796;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-13936(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13936, ctx.r11.u8);
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822185D0"))) PPC_WEAK_FUNC(sub_822185D0);
PPC_FUNC_IMPL(__imp__sub_822185D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x822185D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// bl 0x82226848
	ctx.lr = 0x822185FC;
	sub_82226848(ctx, base);
	// lis r11,16725
	ctx.r11.s64 = 1096089600;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21576
	ctx.r10.u64 = ctx.r11.u64 | 21576;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8004
	ctx.r4.s64 = ctx.r11.s64 + 8004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x82218624;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,7284
	ctx.r4.s64 = ctx.r11.s64 + 7284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218638;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,8012
	ctx.r4.s64 = ctx.r11.s64 + 8012;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221864C;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,8020
	ctx.r4.s64 = ctx.r11.s64 + 8020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218660;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82218688
	if (ctx.cr6.eq) goto loc_82218688;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218688
	if (ctx.cr6.eq) goto loc_82218688;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7260
	ctx.r4.s64 = ctx.r11.s64 + 7260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218688;
	sub_822261F8(ctx, base);
loc_82218688:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218690"))) PPC_WEAK_FUNC(sub_82218690);
PPC_FUNC_IMPL(__imp__sub_82218690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82218698;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x82226848
	ctx.lr = 0x822186C0;
	sub_82226848(ctx, base);
	// lis r11,16725
	ctx.r11.s64 = 1096089600;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21576
	ctx.r10.u64 = ctx.r11.u64 | 21576;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x822186E8;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8028
	ctx.r4.s64 = ctx.r11.s64 + 8028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822186FC;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,7284
	ctx.r4.s64 = ctx.r11.s64 + 7284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218710;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,8012
	ctx.r4.s64 = ctx.r11.s64 + 8012;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218724;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,8020
	ctx.r4.s64 = ctx.r11.s64 + 8020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218738;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82218760
	if (ctx.cr6.eq) goto loc_82218760;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218760
	if (ctx.cr6.eq) goto loc_82218760;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7260
	ctx.r4.s64 = ctx.r11.s64 + 7260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218760;
	sub_822261F8(ctx, base);
loc_82218760:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218768"))) PPC_WEAK_FUNC(sub_82218768);
PPC_FUNC_IMPL(__imp__sub_82218768) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226848
	ctx.lr = 0x82218784;
	sub_82226848(ctx, base);
	// lis r11,17481
	ctx.r11.s64 = 1145634816;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,21315
	ctx.r11.u64 = ctx.r11.u64 | 21315;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822187B0"))) PPC_WEAK_FUNC(sub_822187B0);
PPC_FUNC_IMPL(__imp__sub_822187B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x822187B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82226848
	ctx.lr = 0x822187DC;
	sub_82226848(ctx, base);
	// lis r11,21843
	ctx.r11.s64 = 1431502848;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17224
	ctx.r10.u64 = ctx.r11.u64 | 17224;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x82218804;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82218848
	if (ctx.cr6.eq) goto loc_82218848;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82218814:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82218814
	if (!ctx.cr6.eq) goto loc_82218814;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218848
	if (ctx.cr0.eq) goto loc_82218848;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7252
	ctx.r4.s64 = ctx.r11.s64 + 7252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218848;
	sub_822261F8(ctx, base);
loc_82218848:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221888c
	if (ctx.cr6.eq) goto loc_8221888C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82218858:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82218858
	if (!ctx.cr6.eq) goto loc_82218858;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221888c
	if (ctx.cr0.eq) goto loc_8221888C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,7260
	ctx.r4.s64 = ctx.r11.s64 + 7260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221888C;
	sub_822261F8(ctx, base);
loc_8221888C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x822188a4
	if (ctx.cr0.eq) goto loc_822188A4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8036
	ctx.r5.s64 = ctx.r11.s64 + 8036;
	// b 0x822188ac
	goto loc_822188AC;
loc_822188A4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8048
	ctx.r5.s64 = ctx.r11.s64 + 8048;
loc_822188AC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,8040
	ctx.r4.s64 = ctx.r11.s64 + 8040;
	// bl 0x822261f8
	ctx.lr = 0x822188B8;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,8052
	ctx.r4.s64 = ctx.r11.s64 + 8052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822188CC;
	sub_82225FF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822188D8"))) PPC_WEAK_FUNC(sub_822188D8);
PPC_FUNC_IMPL(__imp__sub_822188D8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226848
	ctx.lr = 0x822188FC;
	sub_82226848(ctx, base);
	// lis r11,20545
	ctx.r11.s64 = 1346437120;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17476
	ctx.r10.u64 = ctx.r11.u64 | 17476;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x82218924;
	sub_822261F8(ctx, base);
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

__attribute__((alias("__imp__sub_82218940"))) PPC_WEAK_FUNC(sub_82218940);
PPC_FUNC_IMPL(__imp__sub_82218940) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226848
	ctx.lr = 0x82218964;
	sub_82226848(ctx, base);
	// lis r11,20548
	ctx.r11.s64 = 1346633728;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17740
	ctx.r10.u64 = ctx.r11.u64 | 17740;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x8221898C;
	sub_822261F8(ctx, base);
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

__attribute__((alias("__imp__sub_822189A8"))) PPC_WEAK_FUNC(sub_822189A8);
PPC_FUNC_IMPL(__imp__sub_822189A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x822189B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82226848
	ctx.lr = 0x822189D8;
	sub_82226848(ctx, base);
	// lis r11,20563
	ctx.r11.s64 = 1347616768;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,17748
	ctx.r11.u64 = ctx.r11.u64 | 17748;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq cr6,0x82218a08
	if (ctx.cr6.eq) goto loc_82218A08;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7260
	ctx.r4.s64 = ctx.r11.s64 + 7260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218A08;
	sub_822261F8(ctx, base);
loc_82218A08:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82218a74
	if (ctx.cr6.eq) goto loc_82218A74;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82218a68
	if (ctx.cr6.eq) goto loc_82218A68;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82218a5c
	if (ctx.cr6.eq) goto loc_82218A5C;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// beq cr6,0x82218a50
	if (ctx.cr6.eq) goto loc_82218A50;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// beq cr6,0x82218a44
	if (ctx.cr6.eq) goto loc_82218A44;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bne cr6,0x82218a8c
	if (!ctx.cr6.eq) goto loc_82218A8C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,7348
	ctx.r5.s64 = ctx.r11.s64 + 7348;
	// b 0x82218a7c
	goto loc_82218A7C;
loc_82218A44:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,7344
	ctx.r5.s64 = ctx.r11.s64 + 7344;
	// b 0x82218a7c
	goto loc_82218A7C;
loc_82218A50:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,7340
	ctx.r5.s64 = ctx.r11.s64 + 7340;
	// b 0x82218a7c
	goto loc_82218A7C;
loc_82218A5C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,7332
	ctx.r5.s64 = ctx.r11.s64 + 7332;
	// b 0x82218a7c
	goto loc_82218A7C;
loc_82218A68:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,7324
	ctx.r5.s64 = ctx.r11.s64 + 7324;
	// b 0x82218a7c
	goto loc_82218A7C;
loc_82218A74:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,7316
	ctx.r5.s64 = ctx.r11.s64 + 7316;
loc_82218A7C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7268
	ctx.r4.s64 = ctx.r11.s64 + 7268;
	// bl 0x822261f8
	ctx.lr = 0x82218A8C;
	sub_822261F8(ctx, base);
loc_82218A8C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,7276
	ctx.r4.s64 = ctx.r11.s64 + 7276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218AA0;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82218abc
	if (ctx.cr6.eq) goto loc_82218ABC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,7284
	ctx.r4.s64 = ctx.r11.s64 + 7284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218ABC;
	sub_822261F8(ctx, base);
loc_82218ABC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82218c04
	if (ctx.cr6.eq) goto loc_82218C04;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// clrlwi r9,r26,31
	ctx.r9.u64 = ctx.r26.u32 & 0x1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// bne cr6,0x82218b24
	if (!ctx.cr6.eq) goto loc_82218B24;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r11,8060
	ctx.r10.s64 = ctx.r11.s64 + 8060;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82218AF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82218af8
	if (!ctx.cr6.eq) goto loc_82218AF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82218B0C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82218b0c
	if (!ctx.cr0.eq) goto loc_82218B0C;
loc_82218B24:
	// rlwinm r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82218b68
	if (!ctx.cr6.eq) goto loc_82218B68;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r11,8064
	ctx.r10.s64 = ctx.r11.s64 + 8064;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82218B3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82218b3c
	if (!ctx.cr6.eq) goto loc_82218B3C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82218B50:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82218b50
	if (!ctx.cr0.eq) goto loc_82218B50;
loc_82218B68:
	// rlwinm r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82218bac
	if (!ctx.cr6.eq) goto loc_82218BAC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r11,8068
	ctx.r10.s64 = ctx.r11.s64 + 8068;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82218B80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82218b80
	if (!ctx.cr6.eq) goto loc_82218B80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82218B94:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82218b94
	if (!ctx.cr0.eq) goto loc_82218B94;
loc_82218BAC:
	// rlwinm r11,r26,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82218bf0
	if (!ctx.cr6.eq) goto loc_82218BF0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r11,8072
	ctx.r10.s64 = ctx.r11.s64 + 8072;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82218BC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82218bc4
	if (!ctx.cr6.eq) goto loc_82218BC4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82218BD8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82218bd8
	if (!ctx.cr0.eq) goto loc_82218BD8;
loc_82218BF0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7308
	ctx.r4.s64 = ctx.r11.s64 + 7308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218C04;
	sub_822261F8(ctx, base);
loc_82218C04:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82218c20
	if (ctx.cr6.eq) goto loc_82218C20;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,7292
	ctx.r4.s64 = ctx.r11.s64 + 7292;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218C20;
	sub_822261F8(ctx, base);
loc_82218C20:
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82218c3c
	if (ctx.cr6.eq) goto loc_82218C3C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7236
	ctx.r4.s64 = ctx.r11.s64 + 7236;
	// bl 0x822261f8
	ctx.lr = 0x82218C3C;
	sub_822261F8(ctx, base);
loc_82218C3C:
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82218c58
	if (ctx.cr6.eq) goto loc_82218C58;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7244
	ctx.r4.s64 = ctx.r11.s64 + 7244;
	// bl 0x82225ff0
	ctx.lr = 0x82218C58;
	sub_82225FF0(ctx, base);
loc_82218C58:
	// lwz r5,260(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82218c74
	if (ctx.cr6.eq) goto loc_82218C74;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7300
	ctx.r4.s64 = ctx.r11.s64 + 7300;
	// bl 0x822261f8
	ctx.lr = 0x82218C74;
	sub_822261F8(ctx, base);
loc_82218C74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218C80"))) PPC_WEAK_FUNC(sub_82218C80);
PPC_FUNC_IMPL(__imp__sub_82218C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82218C88;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82226848
	ctx.lr = 0x82218CB0;
	sub_82226848(ctx, base);
	// lis r11,21057
	ctx.r11.s64 = 1379991552;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,17476
	ctx.r11.u64 = ctx.r11.u64 | 17476;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r24,r11,8088
	ctx.r24.s64 = ctx.r11.s64 + 8088;
	// beq cr6,0x82218ce4
	if (ctx.cr6.eq) goto loc_82218CE4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82218cfc
	if (!ctx.cr6.eq) goto loc_82218CFC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82218cec
	goto loc_82218CEC;
loc_82218CE4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8076
	ctx.r5.s64 = ctx.r11.s64 + 8076;
loc_82218CEC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8080
	ctx.r4.s64 = ctx.r11.s64 + 8080;
	// bl 0x822261f8
	ctx.lr = 0x82218CFC;
	sub_822261F8(ctx, base);
loc_82218CFC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218D10;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82218d2c
	if (ctx.cr6.eq) goto loc_82218D2C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7360
	ctx.r4.s64 = ctx.r11.s64 + 7360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218D2C;
	sub_822261F8(ctx, base);
loc_82218D2C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82218d48
	if (ctx.cr6.eq) goto loc_82218D48;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,8092
	ctx.r4.s64 = ctx.r11.s64 + 8092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218D48;
	sub_822261F8(ctx, base);
loc_82218D48:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r11,8100
	ctx.r30.s64 = ctx.r11.s64 + 8100;
	// beq 0x82218d60
	if (ctx.cr0.eq) goto loc_82218D60;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x82218d68
	goto loc_82218D68;
loc_82218D60:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8104
	ctx.r5.s64 = ctx.r11.s64 + 8104;
loc_82218D68:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8020
	ctx.r4.s64 = ctx.r11.s64 + 8020;
	// bl 0x822261f8
	ctx.lr = 0x82218D78;
	sub_822261F8(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82218e70
	if (ctx.cr6.eq) goto loc_82218E70;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// bne cr6,0x82218ddc
	if (!ctx.cr6.eq) goto loc_82218DDC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r11,8108
	ctx.r10.s64 = ctx.r11.s64 + 8108;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82218DAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82218dac
	if (!ctx.cr6.eq) goto loc_82218DAC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82218DC0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82218dc0
	if (!ctx.cr0.eq) goto loc_82218DC0;
	// b 0x82218e5c
	goto loc_82218E5C;
loc_82218DDC:
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x82218e20
	if (!ctx.cr6.eq) goto loc_82218E20;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r11,8112
	ctx.r10.s64 = ctx.r11.s64 + 8112;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82218DF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82218df0
	if (!ctx.cr6.eq) goto loc_82218DF0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82218E04:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82218e04
	if (!ctx.cr0.eq) goto loc_82218E04;
	// b 0x82218e5c
	goto loc_82218E5C;
loc_82218E20:
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// bne cr6,0x82218e5c
	if (!ctx.cr6.eq) goto loc_82218E5C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82218E30:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82218e30
	if (!ctx.cr6.eq) goto loc_82218E30;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82218E44:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82218e44
	if (!ctx.cr0.eq) goto loc_82218E44;
loc_82218E5C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7308
	ctx.r4.s64 = ctx.r11.s64 + 7308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218E70;
	sub_822261F8(ctx, base);
loc_82218E70:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8116
	ctx.r4.s64 = ctx.r11.s64 + 8116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218E84;
	sub_822261F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218E90"))) PPC_WEAK_FUNC(sub_82218E90);
PPC_FUNC_IMPL(__imp__sub_82218E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82218E98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82226848
	ctx.lr = 0x82218EC0;
	sub_82226848(ctx, base);
	// lis r11,21057
	ctx.r11.s64 = 1379991552;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17485
	ctx.r10.u64 = ctx.r11.u64 | 17485;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x82218EE8;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82218f04
	if (ctx.cr6.eq) goto loc_82218F04;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7360
	ctx.r4.s64 = ctx.r11.s64 + 7360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218F04;
	sub_822261F8(ctx, base);
loc_82218F04:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82218f20
	if (ctx.cr6.eq) goto loc_82218F20;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8092
	ctx.r4.s64 = ctx.r11.s64 + 8092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218F20;
	sub_822261F8(ctx, base);
loc_82218F20:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218f34
	if (ctx.cr0.eq) goto loc_82218F34;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8100
	ctx.r5.s64 = ctx.r11.s64 + 8100;
	// b 0x82218f3c
	goto loc_82218F3C;
loc_82218F34:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8104
	ctx.r5.s64 = ctx.r11.s64 + 8104;
loc_82218F3C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8020
	ctx.r4.s64 = ctx.r11.s64 + 8020;
	// bl 0x822261f8
	ctx.lr = 0x82218F4C;
	sub_822261F8(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82218f78
	if (!ctx.cr6.gt) goto loc_82218F78;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82218f78
	if (!ctx.cr6.gt) goto loc_82218F78;
	// lwz r6,228(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82218f78
	if (ctx.cr6.eq) goto loc_82218F78;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219ac0
	ctx.lr = 0x82218F78;
	sub_82219AC0(ctx, base);
loc_82218F78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218F80"))) PPC_WEAK_FUNC(sub_82218F80);
PPC_FUNC_IMPL(__imp__sub_82218F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82218F88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82226848
	ctx.lr = 0x82218FA8;
	sub_82226848(ctx, base);
	// lis r11,21074
	ctx.r11.s64 = 1381105664;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21328
	ctx.r10.u64 = ctx.r11.u64 | 21328;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x82218FD0;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82218fec
	if (ctx.cr6.eq) goto loc_82218FEC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8092
	ctx.r4.s64 = ctx.r11.s64 + 8092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82218FEC;
	sub_822261F8(ctx, base);
loc_82218FEC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// addi r30,r11,8100
	ctx.r30.s64 = ctx.r11.s64 + 8100;
	// blt cr6,0x82219028
	if (ctx.cr6.lt) goto loc_82219028;
	// beq cr6,0x8221901c
	if (ctx.cr6.eq) goto loc_8221901C;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bge cr6,0x8221903c
	if (!ctx.cr6.lt) goto loc_8221903C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8076
	ctx.r5.s64 = ctx.r11.s64 + 8076;
loc_82219010:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,8124
	ctx.r4.s64 = ctx.r11.s64 + 8124;
	// b 0x82219064
	goto loc_82219064;
loc_8221901C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8104
	ctx.r5.s64 = ctx.r11.s64 + 8104;
	// b 0x82219010
	goto loc_82219010;
loc_82219028:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8124
	ctx.r4.s64 = ctx.r11.s64 + 8124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221903C;
	sub_822261F8(ctx, base);
loc_8221903C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8221906c
	if (!ctx.cr6.eq) goto loc_8221906C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219054
	if (ctx.cr0.eq) goto loc_82219054;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x8221905c
	goto loc_8221905C;
loc_82219054:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8104
	ctx.r5.s64 = ctx.r11.s64 + 8104;
loc_8221905C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,8020
	ctx.r4.s64 = ctx.r11.s64 + 8020;
loc_82219064:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221906C;
	sub_822261F8(ctx, base);
loc_8221906C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219078"))) PPC_WEAK_FUNC(sub_82219078);
PPC_FUNC_IMPL(__imp__sub_82219078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82219080;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82226848
	ctx.lr = 0x8221909C;
	sub_82226848(ctx, base);
	// lis r11,19788
	ctx.r11.s64 = 1296826368;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21332
	ctx.r10.u64 = ctx.r11.u64 | 21332;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x822190C4;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822190e0
	if (ctx.cr6.eq) goto loc_822190E0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7360
	ctx.r4.s64 = ctx.r11.s64 + 7360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822190E0;
	sub_822261F8(ctx, base);
loc_822190E0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822190fc
	if (ctx.cr6.eq) goto loc_822190FC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8092
	ctx.r4.s64 = ctx.r11.s64 + 8092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822190FC;
	sub_822261F8(ctx, base);
loc_822190FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219108"))) PPC_WEAK_FUNC(sub_82219108);
PPC_FUNC_IMPL(__imp__sub_82219108) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226848
	ctx.lr = 0x8221912C;
	sub_82226848(ctx, base);
	// lis r11,21571
	ctx.r11.s64 = 1413677056;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,19276
	ctx.r11.u64 = ctx.r11.u64 | 19276;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq cr6,0x8221915c
	if (ctx.cr6.eq) goto loc_8221915C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221915C;
	sub_822261F8(ctx, base);
loc_8221915C:
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

__attribute__((alias("__imp__sub_82219178"))) PPC_WEAK_FUNC(sub_82219178);
PPC_FUNC_IMPL(__imp__sub_82219178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82219180;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82226848
	ctx.lr = 0x822191A4;
	sub_82226848(ctx, base);
	// lis r11,21060
	ctx.r11.s64 = 1380188160;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,17740
	ctx.r11.u64 = ctx.r11.u64 | 17740;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq cr6,0x822191d4
	if (ctx.cr6.eq) goto loc_822191D4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x822191ec
	if (!ctx.cr6.eq) goto loc_822191EC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8088
	ctx.r5.s64 = ctx.r11.s64 + 8088;
	// b 0x822191dc
	goto loc_822191DC;
loc_822191D4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8076
	ctx.r5.s64 = ctx.r11.s64 + 8076;
loc_822191DC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8080
	ctx.r4.s64 = ctx.r11.s64 + 8080;
	// bl 0x822261f8
	ctx.lr = 0x822191EC;
	sub_822261F8(ctx, base);
loc_822191EC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82219200;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82219244
	if (ctx.cr6.eq) goto loc_82219244;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82219210:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82219210
	if (!ctx.cr6.eq) goto loc_82219210;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219244
	if (ctx.cr0.eq) goto loc_82219244;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7360
	ctx.r4.s64 = ctx.r11.s64 + 7360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82219244;
	sub_822261F8(ctx, base);
loc_82219244:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82219288
	if (ctx.cr6.eq) goto loc_82219288;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82219254:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82219254
	if (!ctx.cr6.eq) goto loc_82219254;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219288
	if (ctx.cr0.eq) goto loc_82219288;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,8092
	ctx.r4.s64 = ctx.r11.s64 + 8092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82219288;
	sub_822261F8(ctx, base);
loc_82219288:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221929c
	if (ctx.cr0.eq) goto loc_8221929C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8100
	ctx.r5.s64 = ctx.r11.s64 + 8100;
	// b 0x822192a4
	goto loc_822192A4;
loc_8221929C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8104
	ctx.r5.s64 = ctx.r11.s64 + 8104;
loc_822192A4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8020
	ctx.r4.s64 = ctx.r11.s64 + 8020;
	// bl 0x822261f8
	ctx.lr = 0x822192B4;
	sub_822261F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822192C0"))) PPC_WEAK_FUNC(sub_822192C0);
PPC_FUNC_IMPL(__imp__sub_822192C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x822192C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82226848
	ctx.lr = 0x822192E4;
	sub_82226848(ctx, base);
	// lis r11,21060
	ctx.r11.s64 = 1380188160;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17741
	ctx.r10.u64 = ctx.r11.u64 | 17741;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x8221930C;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82219350
	if (ctx.cr6.eq) goto loc_82219350;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221931C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221931c
	if (!ctx.cr6.eq) goto loc_8221931C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219350
	if (ctx.cr0.eq) goto loc_82219350;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7360
	ctx.r4.s64 = ctx.r11.s64 + 7360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82219350;
	sub_822261F8(ctx, base);
loc_82219350:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82219394
	if (ctx.cr6.eq) goto loc_82219394;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82219360:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82219360
	if (!ctx.cr6.eq) goto loc_82219360;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219394
	if (ctx.cr0.eq) goto loc_82219394;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8092
	ctx.r4.s64 = ctx.r11.s64 + 8092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82219394;
	sub_822261F8(ctx, base);
loc_82219394:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822193A0"))) PPC_WEAK_FUNC(sub_822193A0);
PPC_FUNC_IMPL(__imp__sub_822193A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x822193A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82226848
	ctx.lr = 0x822193CC;
	sub_82226848(ctx, base);
	// lis r11,21063
	ctx.r11.s64 = 1380384768;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,17748
	ctx.r11.u64 = ctx.r11.u64 | 17748;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq cr6,0x822193fc
	if (ctx.cr6.eq) goto loc_822193FC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82219414
	if (!ctx.cr6.eq) goto loc_82219414;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8088
	ctx.r5.s64 = ctx.r11.s64 + 8088;
	// b 0x82219404
	goto loc_82219404;
loc_822193FC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8076
	ctx.r5.s64 = ctx.r11.s64 + 8076;
loc_82219404:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8080
	ctx.r4.s64 = ctx.r11.s64 + 8080;
	// bl 0x822261f8
	ctx.lr = 0x82219414;
	sub_822261F8(ctx, base);
loc_82219414:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82219458
	if (ctx.cr6.eq) goto loc_82219458;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82219424:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82219424
	if (!ctx.cr6.eq) goto loc_82219424;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219458
	if (ctx.cr0.eq) goto loc_82219458;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7360
	ctx.r4.s64 = ctx.r11.s64 + 7360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82219458;
	sub_822261F8(ctx, base);
loc_82219458:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221949c
	if (ctx.cr6.eq) goto loc_8221949C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82219468:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82219468
	if (!ctx.cr6.eq) goto loc_82219468;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221949c
	if (ctx.cr0.eq) goto loc_8221949C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8092
	ctx.r4.s64 = ctx.r11.s64 + 8092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221949C;
	sub_822261F8(ctx, base);
loc_8221949C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r11,8100
	ctx.r30.s64 = ctx.r11.s64 + 8100;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r29,r11,8104
	ctx.r29.s64 = ctx.r11.s64 + 8104;
	// bne 0x822194bc
	if (!ctx.cr0.eq) goto loc_822194BC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_822194BC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8020
	ctx.r4.s64 = ctx.r11.s64 + 8020;
	// bl 0x822261f8
	ctx.lr = 0x822194CC;
	sub_822261F8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822194dc
	if (!ctx.cr0.eq) goto loc_822194DC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_822194DC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8132
	ctx.r4.s64 = ctx.r11.s64 + 8132;
	// bl 0x822261f8
	ctx.lr = 0x822194EC;
	sub_822261F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822194F8"))) PPC_WEAK_FUNC(sub_822194F8);
PPC_FUNC_IMPL(__imp__sub_822194F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82219500;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82226848
	ctx.lr = 0x82219528;
	sub_82226848(ctx, base);
	// lis r11,18249
	ctx.r11.s64 = 1195966464;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,20054
	ctx.r10.u64 = ctx.r11.u64 | 20054;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x82219550;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,7292
	ctx.r4.s64 = ctx.r11.s64 + 7292;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82219564;
	sub_82225FF0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82219580
	if (ctx.cr6.eq) goto loc_82219580;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7236
	ctx.r4.s64 = ctx.r11.s64 + 7236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82219580;
	sub_82225FF0(ctx, base);
loc_82219580:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8221959c
	if (ctx.cr6.eq) goto loc_8221959C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,7260
	ctx.r4.s64 = ctx.r11.s64 + 7260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221959C;
	sub_822261F8(ctx, base);
loc_8221959C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822195e0
	if (ctx.cr6.eq) goto loc_822195E0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822195AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822195ac
	if (!ctx.cr6.eq) goto loc_822195AC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822195e0
	if (ctx.cr0.eq) goto loc_822195E0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,7376
	ctx.r4.s64 = ctx.r11.s64 + 7376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822195E0;
	sub_822261F8(ctx, base);
loc_822195E0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8221960c
	if (!ctx.cr6.gt) goto loc_8221960C;
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8221960c
	if (!ctx.cr6.gt) goto loc_8221960C;
	// lwz r6,236(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221960c
	if (ctx.cr6.eq) goto loc_8221960C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219ac0
	ctx.lr = 0x8221960C;
	sub_82219AC0(ctx, base);
loc_8221960C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219618"))) PPC_WEAK_FUNC(sub_82219618);
PPC_FUNC_IMPL(__imp__sub_82219618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82219620;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82226848
	ctx.lr = 0x8221963C;
	sub_82226848(ctx, base);
	// lis r11,18258
	ctx.r11.s64 = 1196556288;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21328
	ctx.r10.u64 = ctx.r11.u64 | 21328;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x82219664;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82219690
	if (ctx.cr6.lt) goto loc_82219690;
	// beq cr6,0x82219684
	if (ctx.cr6.eq) goto loc_82219684;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x822196a8
	if (!ctx.cr6.lt) goto loc_822196A8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8140
	ctx.r5.s64 = ctx.r11.s64 + 8140;
	// b 0x82219698
	goto loc_82219698;
loc_82219684:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8104
	ctx.r5.s64 = ctx.r11.s64 + 8104;
	// b 0x82219698
	goto loc_82219698;
loc_82219690:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8100
	ctx.r5.s64 = ctx.r11.s64 + 8100;
loc_82219698:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8124
	ctx.r4.s64 = ctx.r11.s64 + 8124;
	// bl 0x822261f8
	ctx.lr = 0x822196A8;
	sub_822261F8(ctx, base);
loc_822196A8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822196c4
	if (ctx.cr6.eq) goto loc_822196C4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,7260
	ctx.r4.s64 = ctx.r11.s64 + 7260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822196C4;
	sub_822261F8(ctx, base);
loc_822196C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822196D0"))) PPC_WEAK_FUNC(sub_822196D0);
PPC_FUNC_IMPL(__imp__sub_822196D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x822196D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82226848
	ctx.lr = 0x822196F4;
	sub_82226848(ctx, base);
	// lis r11,18258
	ctx.r11.s64 = 1196556288;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,22091
	ctx.r10.u64 = ctx.r11.u64 | 22091;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x8221971C;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,7292
	ctx.r4.s64 = ctx.r11.s64 + 7292;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82219730;
	sub_82225FF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221974c
	if (ctx.cr6.eq) goto loc_8221974C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7260
	ctx.r4.s64 = ctx.r11.s64 + 7260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221974C;
	sub_822261F8(ctx, base);
loc_8221974C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219758"))) PPC_WEAK_FUNC(sub_82219758);
PPC_FUNC_IMPL(__imp__sub_82219758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82219760;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82226848
	ctx.lr = 0x82219784;
	sub_82226848(ctx, base);
	// lis r11,21317
	ctx.r11.s64 = 1397030912;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,20036
	ctx.r11.u64 = ctx.r11.u64 | 20036;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq cr6,0x822197b4
	if (ctx.cr6.eq) goto loc_822197B4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x822197cc
	if (!ctx.cr6.eq) goto loc_822197CC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8108
	ctx.r5.s64 = ctx.r11.s64 + 8108;
	// b 0x822197bc
	goto loc_822197BC;
loc_822197B4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8144
	ctx.r5.s64 = ctx.r11.s64 + 8144;
loc_822197BC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7172
	ctx.r4.s64 = ctx.r11.s64 + 7172;
	// bl 0x822261f8
	ctx.lr = 0x822197CC;
	sub_822261F8(ctx, base);
loc_822197CC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822197E0;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,7384
	ctx.r4.s64 = ctx.r11.s64 + 7384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822197F4;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,7392
	ctx.r4.s64 = ctx.r11.s64 + 7392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82219808;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,7416
	ctx.r4.s64 = ctx.r11.s64 + 7416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221981C;
	sub_82225FF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219828"))) PPC_WEAK_FUNC(sub_82219828);
PPC_FUNC_IMPL(__imp__sub_82219828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82219830;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82226848
	ctx.lr = 0x82219854;
	sub_82226848(ctx, base);
	// lis r11,16978
	ctx.r11.s64 = 1112670208;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,17475
	ctx.r11.u64 = ctx.r11.u64 | 17475;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq cr6,0x82219884
	if (ctx.cr6.eq) goto loc_82219884;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8221989c
	if (!ctx.cr6.eq) goto loc_8221989C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8108
	ctx.r5.s64 = ctx.r11.s64 + 8108;
	// b 0x8221988c
	goto loc_8221988C;
loc_82219884:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8144
	ctx.r5.s64 = ctx.r11.s64 + 8144;
loc_8221988C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7172
	ctx.r4.s64 = ctx.r11.s64 + 7172;
	// bl 0x822261f8
	ctx.lr = 0x8221989C;
	sub_822261F8(ctx, base);
loc_8221989C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822198B0;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,7384
	ctx.r4.s64 = ctx.r11.s64 + 7384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822198C4;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,7392
	ctx.r4.s64 = ctx.r11.s64 + 7392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822198D8;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,7416
	ctx.r4.s64 = ctx.r11.s64 + 7416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822198EC;
	sub_82225FF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822198F8"))) PPC_WEAK_FUNC(sub_822198F8);
PPC_FUNC_IMPL(__imp__sub_822198F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82219900;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82226848
	ctx.lr = 0x8221991C;
	sub_82226848(ctx, base);
	// lis r11,17744
	ctx.r11.s64 = 1162870784;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21332
	ctx.r10.u64 = ctx.r11.u64 | 21332;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7400
	ctx.r4.s64 = ctx.r11.s64 + 7400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x82219944;
	sub_822261F8(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r11,8036
	ctx.r30.s64 = ctx.r11.s64 + 8036;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r29,r11,8048
	ctx.r29.s64 = ctx.r11.s64 + 8048;
	// bne 0x82219964
	if (!ctx.cr0.eq) goto loc_82219964;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82219964:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7408
	ctx.r4.s64 = ctx.r11.s64 + 7408;
	// bl 0x822261f8
	ctx.lr = 0x82219974;
	sub_822261F8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82219984
	if (!ctx.cr0.eq) goto loc_82219984;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82219984:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8148
	ctx.r4.s64 = ctx.r11.s64 + 8148;
	// bl 0x822261f8
	ctx.lr = 0x82219994;
	sub_822261F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822199A0"))) PPC_WEAK_FUNC(sub_822199A0);
PPC_FUNC_IMPL(__imp__sub_822199A0) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226848
	ctx.lr = 0x822199BC;
	sub_82226848(ctx, base);
	// lis r11,17744
	ctx.r11.s64 = 1162870784;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,18260
	ctx.r11.u64 = ctx.r11.u64 | 18260;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822199E8"))) PPC_WEAK_FUNC(sub_822199E8);
PPC_FUNC_IMPL(__imp__sub_822199E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x822199F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82226848
	ctx.lr = 0x82219A08;
	sub_82226848(ctx, base);
	// lis r11,20553
	ctx.r11.s64 = 1346961408;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,20039
	ctx.r11.u64 = ctx.r11.u64 | 20039;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82210000
	ctx.lr = 0x82219A28;
	sub_82210000(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219A38"))) PPC_WEAK_FUNC(sub_82219A38);
PPC_FUNC_IMPL(__imp__sub_82219A38) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219A70"))) PPC_WEAK_FUNC(sub_82219A70);
PPC_FUNC_IMPL(__imp__sub_82219A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82219aac
	if (ctx.cr6.eq) goto loc_82219AAC;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r11,r11,-6200
	ctx.r11.s64 = ctx.r11.s64 + -6200;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82219aac
	if (ctx.cr6.eq) goto loc_82219AAC;
loc_82219A90:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82219ab4
	if (ctx.cr6.eq) goto loc_82219AB4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82219a90
	if (!ctx.cr0.eq) goto loc_82219A90;
loc_82219AAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82219AB4:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219AC0"))) PPC_WEAK_FUNC(sub_82219AC0);
PPC_FUNC_IMPL(__imp__sub_82219AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82219AC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,8156
	ctx.r4.s64 = ctx.r11.s64 + 8156;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82219AE8;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,8164
	ctx.r4.s64 = ctx.r11.s64 + 8164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82219AFC;
	sub_82225FF0(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82213850
	ctx.lr = 0x82219B10;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82219b54
	if (!ctx.cr0.eq) goto loc_82219B54;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13976);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8172
	ctx.r5.s64 = ctx.r11.s64 + 8172;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82219b90
	goto loc_82219B90;
loc_82219B54:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8300acc0
	ctx.lr = 0x82219B64;
	sub_8300ACC0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,8192
	ctx.r4.s64 = ctx.r11.s64 + 8192;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82226500
	ctx.lr = 0x82219B7C;
	sub_82226500(ctx, base);
	// bl 0x82213850
	ctx.lr = 0x82219B80;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_82219B90:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219BA0"))) PPC_WEAK_FUNC(sub_82219BA0);
PPC_FUNC_IMPL(__imp__sub_82219BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r9,136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,12264
	ctx.r11.s64 = ctx.r11.s64 + 12264;
	// addi r10,r10,12308
	ctx.r10.s64 = ctx.r10.s64 + 12308;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// ble cr6,0x82219c04
	if (!ctx.cr6.gt) goto loc_82219C04;
	// lwz r9,140(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_82219BD4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82219bf4
	if (ctx.cr6.eq) goto loc_82219BF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x82219bd4
	if (ctx.cr6.lt) goto loc_82219BD4;
	// b 0x82219c04
	goto loc_82219C04;
loc_82219BF4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82219C04:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,17672
	ctx.r11.s64 = ctx.r11.s64 + 17672;
	// addi r10,r10,17512
	ctx.r10.s64 = ctx.r10.s64 + 17512;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219C20"))) PPC_WEAK_FUNC(sub_82219C20);
PPC_FUNC_IMPL(__imp__sub_82219C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82219C28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82219d0c
	if (!ctx.cr6.lt) goto loc_82219D0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
loc_82219C4C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82219c68
	if (!ctx.cr6.eq) goto loc_82219C68;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x82219c6c
	if (ctx.cr6.eq) goto loc_82219C6C;
loc_82219C68:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82219C6C:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82219c88
	if (ctx.cr0.eq) goto loc_82219C88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82219c4c
	if (ctx.cr6.lt) goto loc_82219C4C;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82219C88:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,24
	ctx.r5.s64 = 24;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82d5c630
	ctx.lr = 0x82219CA0;
	sub_82D5C630(ctx, base);
	// li r4,10000
	ctx.r4.s64 = 10000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// bl 0x830103b8
	ctx.lr = 0x82219CB0;
	sub_830103B8(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bne cr6,0x82219d04
	if (!ctx.cr6.eq) goto loc_82219D04;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
loc_82219CD8:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82219cf8
	if (ctx.cr6.eq) goto loc_82219CF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x82219cd8
	if (ctx.cr6.lt) goto loc_82219CD8;
	// b 0x82219d04
	goto loc_82219D04;
loc_82219CF8:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_82219D04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82219d10
	goto loc_82219D10;
loc_82219D0C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82219D10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219D18"))) PPC_WEAK_FUNC(sub_82219D18);
PPC_FUNC_IMPL(__imp__sub_82219D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82219D20;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r26,r29,32
	ctx.r26.s64 = ctx.r29.s64 + 32;
	// li r25,4
	ctx.r25.s64 = 4;
	// lis r27,-31979
	ctx.r27.s64 = -2095775744;
	// addi r28,r11,8200
	ctx.r28.s64 = ctx.r11.s64 + 8200;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82219D40:
	// lwz r11,-28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -28);
	// addi r31,r26,-28
	ctx.r31.s64 = ctx.r26.s64 + -28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82219d60
	if (!ctx.cr6.eq) goto loc_82219D60;
	// lwz r11,-20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x82219d64
	if (ctx.cr6.eq) goto loc_82219D64;
loc_82219D60:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82219D64:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219e7c
	if (ctx.cr0.eq) goto loc_82219E7C;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219e7c
	if (ctx.cr0.eq) goto loc_82219E7C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82219e7c
	if (ctx.cr0.eq) goto loc_82219E7C;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r11,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
	// bge cr6,0x82219de8
	if (!ctx.cr6.lt) goto loc_82219DE8;
	// addic. r11,r29,-4
	ctx.xer.ca = ctx.r29.u32 > 3;
	ctx.r11.s64 = ctx.r29.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bne 0x82219db0
	if (!ctx.cr0.eq) goto loc_82219DB0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_82219DB0:
	// lwz r9,136(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_82219DBC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82219ddc
	if (ctx.cr6.eq) goto loc_82219DDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x82219dbc
	if (ctx.cr6.lt) goto loc_82219DBC;
	// b 0x82219de8
	goto loc_82219DE8;
loc_82219DDC:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u32);
loc_82219DE8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq 0x82219e14
	if (ctx.cr0.eq) goto loc_82219E14;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82219e2c
	goto loc_82219E2C;
loc_82219E14:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219e2c
	if (ctx.cr0.eq) goto loc_82219E2C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82219E2C:
	// lwz r3,-13976(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -13976);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82219E7C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// bne 0x82219d40
	if (!ctx.cr0.eq) goto loc_82219D40;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219E90"))) PPC_WEAK_FUNC(sub_82219E90);
PPC_FUNC_IMPL(__imp__sub_82219E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_82219EAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82219eac
	if (!ctx.cr6.eq) goto loc_82219EAC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82219ED0:
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82219ed0
	if (!ctx.cr6.eq) goto loc_82219ED0;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// cmplwi cr6,r11,130
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 130, ctx.xer);
	// bge cr6,0x8221a040
	if (!ctx.cr6.lt) goto loc_8221A040;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82219F04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82219f04
	if (!ctx.cr6.eq) goto loc_82219F04;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82219F18:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82219f18
	if (!ctx.cr0.eq) goto loc_82219F18;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r11,8232
	ctx.r10.s64 = ctx.r11.s64 + 8232;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82219F3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82219f3c
	if (!ctx.cr6.eq) goto loc_82219F3C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82219F50:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82219f50
	if (!ctx.cr0.eq) goto loc_82219F50;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82219fe8
	if (ctx.cr6.eq) goto loc_82219FE8;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219fe8
	if (ctx.cr6.eq) goto loc_82219FE8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r11,8240
	ctx.r10.s64 = ctx.r11.s64 + 8240;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82219F88:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82219f88
	if (!ctx.cr6.eq) goto loc_82219F88;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82219F9C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82219f9c
	if (!ctx.cr0.eq) goto loc_82219F9C;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82219FBC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82219fbc
	if (!ctx.cr6.eq) goto loc_82219FBC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82219FD0:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82219fd0
	if (!ctx.cr0.eq) goto loc_82219FD0;
loc_82219FE8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r11,8244
	ctx.r10.s64 = ctx.r11.s64 + 8244;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82219FF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82219ff4
	if (!ctx.cr6.eq) goto loc_82219FF4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8221A008:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8221a008
	if (!ctx.cr0.eq) goto loc_8221A008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A03C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221a044
	goto loc_8221A044;
loc_8221A040:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221A044:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A058"))) PPC_WEAK_FUNC(sub_8221A058);
PPC_FUNC_IMPL(__imp__sub_8221A058) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8221a068
	if (ctx.cr6.gt) goto loc_8221A068;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
loc_8221A068:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r3,208
	ctx.r4.s64 = ctx.r3.s64 + 208;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221A088"))) PPC_WEAK_FUNC(sub_8221A088);
PPC_FUNC_IMPL(__imp__sub_8221A088) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8221a098
	if (ctx.cr6.gt) goto loc_8221A098;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
loc_8221A098:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r3,144
	ctx.r4.s64 = ctx.r3.s64 + 144;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221A0B8"))) PPC_WEAK_FUNC(sub_8221A0B8);
PPC_FUNC_IMPL(__imp__sub_8221A0B8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82d5e188
	ctx.lr = 0x8221A0E0;
	sub_82D5E188(ctx, base);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8221A100"))) PPC_WEAK_FUNC(sub_8221A100);
PPC_FUNC_IMPL(__imp__sub_8221A100) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82d5e188
	ctx.lr = 0x8221A128;
	sub_82D5E188(ctx, base);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8221A148"))) PPC_WEAK_FUNC(sub_8221A148);
PPC_FUNC_IMPL(__imp__sub_8221A148) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,280
	ctx.r3.s64 = ctx.r3.s64 + 280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A150"))) PPC_WEAK_FUNC(sub_8221A150);
PPC_FUNC_IMPL(__imp__sub_8221A150) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,280
	ctx.r3.s64 = ctx.r3.s64 + 280;
	// li r5,99
	ctx.r5.s64 = 99;
	// b 0x82d5c630
	sub_82D5C630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A160"))) PPC_WEAK_FUNC(sub_8221A160);
PPC_FUNC_IMPL(__imp__sub_8221A160) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A168"))) PPC_WEAK_FUNC(sub_8221A168);
PPC_FUNC_IMPL(__imp__sub_8221A168) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A170"))) PPC_WEAK_FUNC(sub_8221A170);
PPC_FUNC_IMPL(__imp__sub_8221A170) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82219ba0
	ctx.lr = 0x8221A190;
	sub_82219BA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221a1a4
	if (ctx.cr0.eq) goto loc_8221A1A4;
	// li r4,380
	ctx.r4.s64 = 380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822138a8
	ctx.lr = 0x8221A1A4;
	sub_822138A8(ctx, base);
loc_8221A1A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8221A1C0"))) PPC_WEAK_FUNC(sub_8221A1C0);
PPC_FUNC_IMPL(__imp__sub_8221A1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221A1C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x82217ec8
	ctx.lr = 0x8221A1D8;
	sub_82217EC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8221a260
	if (ctx.cr0.eq) goto loc_8221A260;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,17672
	ctx.r10.s64 = ctx.r11.s64 + 17672;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r9,r11,12264
	ctx.r9.s64 = ctx.r11.s64 + 12264;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r8,r11,12308
	ctx.r8.s64 = ctx.r11.s64 + 12308;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8221A210:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bge 0x8221a210
	if (!ctx.cr0.lt) goto loc_8221A210;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// addi r4,r11,5983
	ctx.r4.s64 = ctx.r11.s64 + 5983;
	// bl 0x822177a0
	ctx.lr = 0x8221A240;
	sub_822177A0(ctx, base);
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r30.u8);
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// b 0x8221a264
	goto loc_8221A264;
loc_8221A260:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221A264:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A270"))) PPC_WEAK_FUNC(sub_8221A270);
PPC_FUNC_IMPL(__imp__sub_8221A270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8221A278;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addic. r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r31.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8221a2a8
	if (ctx.cr0.lt) goto loc_8221A2A8;
loc_8221A290:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8221A29C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bge 0x8221a290
	if (!ctx.cr0.lt) goto loc_8221A290;
loc_8221A2A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A2B0"))) PPC_WEAK_FUNC(sub_8221A2B0);
PPC_FUNC_IMPL(__imp__sub_8221A2B0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8221a2e0
	if (!ctx.cr6.eq) goto loc_8221A2E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x8221a2f8
	goto loc_8221A2F8;
loc_8221A2E0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
loc_8221A2F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8221A310"))) PPC_WEAK_FUNC(sub_8221A310);
PPC_FUNC_IMPL(__imp__sub_8221A310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8221A318;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221bed0
	ctx.lr = 0x8221A330;
	sub_8221BED0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
loc_8221A338:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822179a0
	ctx.lr = 0x8221A344;
	sub_822179A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221a360
	if (!ctx.cr0.eq) goto loc_8221A360;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,148
	ctx.r29.s64 = ctx.r29.s64 + 148;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x8221a338
	if (ctx.cr6.lt) goto loc_8221A338;
	// b 0x8221a3a8
	goto loc_8221A3A8;
loc_8221A360:
	// mulli r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 * 148;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221a38c
	if (ctx.cr0.eq) goto loc_8221A38C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221a3a8
	goto loc_8221A3A8;
loc_8221A38C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221a3a8
	if (ctx.cr0.eq) goto loc_8221A3A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221A3A8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A3B0"))) PPC_WEAK_FUNC(sub_8221A3B0);
PPC_FUNC_IMPL(__imp__sub_8221A3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8221A3B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221c0f0
	ctx.lr = 0x8221A3D0;
	sub_8221C0F0(ctx, base);
	// lbz r11,315(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 315);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221a454
	if (ctx.cr0.eq) goto loc_8221A454;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
loc_8221A3E4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822179a0
	ctx.lr = 0x8221A3F0;
	sub_822179A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221a40c
	if (!ctx.cr0.eq) goto loc_8221A40C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,148
	ctx.r30.s64 = ctx.r30.s64 + 148;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x8221a3e4
	if (ctx.cr6.lt) goto loc_8221A3E4;
	// b 0x8221a454
	goto loc_8221A454;
loc_8221A40C:
	// mulli r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 * 148;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,136
	ctx.r3.s64 = ctx.r11.s64 + 136;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221a438
	if (ctx.cr0.eq) goto loc_8221A438;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221a454
	goto loc_8221A454;
loc_8221A438:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221a454
	if (ctx.cr0.eq) goto loc_8221A454;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221A454:
	// bl 0x82213850
	ctx.lr = 0x8221A458;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A478"))) PPC_WEAK_FUNC(sub_8221A478);
PPC_FUNC_IMPL(__imp__sub_8221A478) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,12340
	ctx.r10.s64 = ctx.r11.s64 + 12340;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r11,r11,9832
	ctx.r11.s64 = ctx.r11.s64 + 9832;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// clrlwi. r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r9,-13935(r8)
	PPC_STORE_U8(ctx.r8.u32 + -13935, ctx.r9.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8221a4c4
	if (ctx.cr0.eq) goto loc_8221A4C4;
	// li r4,308
	ctx.r4.s64 = 308;
	// bl 0x822138a8
	ctx.lr = 0x8221A4C4;
	sub_822138A8(ctx, base);
loc_8221A4C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8221A4E0"))) PPC_WEAK_FUNC(sub_8221A4E0);
PPC_FUNC_IMPL(__imp__sub_8221A4E0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,5983
	ctx.r4.s64 = ctx.r11.s64 + 5983;
	// bl 0x822177a0
	ctx.lr = 0x8221A500;
	sub_822177A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8221A538"))) PPC_WEAK_FUNC(sub_8221A538);
PPC_FUNC_IMPL(__imp__sub_8221A538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8221A540;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31979
	ctx.r28.s64 = -2095775744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,-13935(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -13935);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8221a650
	if (!ctx.cr0.eq) goto loc_8221A650;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r11,r11,-5804
	ctx.r11.s64 = ctx.r11.s64 + -5804;
	// addi r10,r10,-3784
	ctx.r10.s64 = ctx.r10.s64 + -3784;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 + 44;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-3772
	ctx.r10.s64 = ctx.r10.s64 + -3772;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r30,r10,-3760
	ctx.r30.s64 = ctx.r10.s64 + -3760;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-3748
	ctx.r10.s64 = ctx.r10.s64 + -3748;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r29,r10,-3736
	ctx.r29.s64 = ctx.r10.s64 + -3736;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r5.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A5F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-23632
	ctx.r5.s64 = ctx.r11.s64 + -23632;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-23792
	ctx.r5.s64 = ctx.r11.s64 + -23792;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-13935(r28)
	PPC_STORE_U8(ctx.r28.u32 + -13935, ctx.r11.u8);
loc_8221A650:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A658"))) PPC_WEAK_FUNC(sub_8221A658);
PPC_FUNC_IMPL(__imp__sub_8221A658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4a0
	ctx.lr = 0x8221A660;
	__savegprlr_18(ctx, base);
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r11,r11,-13924
	ctx.r11.s64 = ctx.r11.s64 + -13924;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,257
	ctx.r4.s64 = 257;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8222e6b8
	ctx.lr = 0x8221A6A0;
	sub_8222E6B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82226848
	ctx.lr = 0x8221A6A8;
	sub_82226848(ctx, base);
	// lis r11,28782
	ctx.r11.s64 = 1886257152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,28535
	ctx.r10.u64 = ctx.r11.u64 | 28535;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r31,r11,-30792
	ctx.r31.s64 = ctx.r11.s64 + -30792;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r4,r31,25040
	ctx.r4.s64 = ctx.r31.s64 + 25040;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// addi r11,r11,-3784
	ctx.r11.s64 = ctx.r11.s64 + -3784;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822261f8
	ctx.lr = 0x8221A6D4;
	sub_822261F8(ctx, base);
	// addi r5,r31,25044
	ctx.r5.s64 = ctx.r31.s64 + 25044;
	// addi r4,r31,25432
	ctx.r4.s64 = ctx.r31.s64 + 25432;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d5ea60
	ctx.lr = 0x8221A6E4;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82217880
	ctx.lr = 0x8221A6F0;
	sub_82217880(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221A700;
	sub_822261F8(ctx, base);
	// lis r22,-31979
	ctx.r22.s64 = -2095775744;
	// lwz r3,-13980(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -13980);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r31,13
	ctx.r29.s64 = ctx.r31.s64 + 13;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8221a774
	if (ctx.cr6.lt) goto loc_8221A774;
	// beq cr6,0x8221a76c
	if (ctx.cr6.eq) goto loc_8221A76C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8221a764
	if (ctx.cr6.lt) goto loc_8221A764;
	// bne cr6,0x8221a778
	if (!ctx.cr6.eq) goto loc_8221A778;
	// addi r29,r31,26040
	ctx.r29.s64 = ctx.r31.s64 + 26040;
	// b 0x8221a778
	goto loc_8221A778;
loc_8221A764:
	// addi r29,r31,26036
	ctx.r29.s64 = ctx.r31.s64 + 26036;
	// b 0x8221a778
	goto loc_8221A778;
loc_8221A76C:
	// addi r29,r31,26028
	ctx.r29.s64 = ctx.r31.s64 + 26028;
	// b 0x8221a778
	goto loc_8221A778;
loc_8221A774:
	// addi r29,r31,26024
	ctx.r29.s64 = ctx.r31.s64 + 26024;
loc_8221A778:
	// addi r4,r31,26044
	ctx.r4.s64 = ctx.r31.s64 + 26044;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221A788;
	sub_822261F8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,25056
	ctx.r4.s64 = ctx.r31.s64 + 25056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221A7AC;
	sub_82225FF0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// beq cr6,0x8221a7ec
	if (ctx.cr6.eq) goto loc_8221A7EC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A7DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,25064
	ctx.r4.s64 = ctx.r31.s64 + 25064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822260f0
	ctx.lr = 0x8221A7EC;
	sub_822260F0(ctx, base);
loc_8221A7EC:
	// lwz r3,-13980(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -13980);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221a844
	if (ctx.cr6.eq) goto loc_8221A844;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x8221a844
	if (ctx.cr0.eq) goto loc_8221A844;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x8221a848
	goto loc_8221A848;
loc_8221A844:
	// li r23,1
	ctx.r23.s64 = 1;
loc_8221A848:
	// addi r4,r31,25104
	ctx.r4.s64 = ctx.r31.s64 + 25104;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221A858;
	sub_82225FF0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r31,25116
	ctx.r5.s64 = ctx.r31.s64 + 25116;
	// addi r4,r31,25408
	ctx.r4.s64 = ctx.r31.s64 + 25408;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d5ea60
	ctx.lr = 0x8221A880;
	sub_82D5EA60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822260f0
	ctx.lr = 0x8221A890;
	sub_822260F0(ctx, base);
	// addi r5,r31,25116
	ctx.r5.s64 = ctx.r31.s64 + 25116;
	// addi r4,r31,25420
	ctx.r4.s64 = ctx.r31.s64 + 25420;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d5ea60
	ctx.lr = 0x8221A8A0;
	sub_82D5EA60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221A8B0;
	sub_82225FF0(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8221a9f0
	if (ctx.cr6.eq) goto loc_8221A9F0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221a9f0
	if (ctx.cr0.eq) goto loc_8221A9F0;
loc_8221A8DC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A8F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221a9d0
	if (!ctx.cr0.eq) goto loc_8221A9D0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r31,25128
	ctx.r4.s64 = ctx.r31.s64 + 25128;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82d5ea60
	ctx.lr = 0x8221A948;
	sub_82D5EA60(ctx, base);
	// addi r4,r31,25408
	ctx.r4.s64 = ctx.r31.s64 + 25408;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d5ea60
	ctx.lr = 0x8221A958;
	sub_82D5EA60(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822260f0
	ctx.lr = 0x8221A968;
	sub_822260F0(ctx, base);
	// addi r4,r31,25420
	ctx.r4.s64 = ctx.r31.s64 + 25420;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d5ea60
	ctx.lr = 0x8221A978;
	sub_82D5EA60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221A988;
	sub_82225FF0(ctx, base);
	// addi r4,r31,25140
	ctx.r4.s64 = ctx.r31.s64 + 25140;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82d5ea60
	ctx.lr = 0x8221A998;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A9B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A9C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221A9D0;
	sub_822261F8(ctx, base);
loc_8221A9D0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A9E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8221a8dc
	if (ctx.cr6.lt) goto loc_8221A8DC;
loc_8221A9F0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AA04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r31,7
	ctx.r29.s64 = ctx.r31.s64 + 7;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x8221aa3c
	if (ctx.cr6.lt) goto loc_8221AA3C;
	// beq cr6,0x8221aa34
	if (ctx.cr6.eq) goto loc_8221AA34;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// blt cr6,0x8221aa2c
	if (ctx.cr6.lt) goto loc_8221AA2C;
	// bne cr6,0x8221aa40
	if (!ctx.cr6.eq) goto loc_8221AA40;
	// addi r29,r31,25996
	ctx.r29.s64 = ctx.r31.s64 + 25996;
	// b 0x8221aa40
	goto loc_8221AA40;
loc_8221AA2C:
	// addi r29,r31,25972
	ctx.r29.s64 = ctx.r31.s64 + 25972;
	// b 0x8221aa40
	goto loc_8221AA40;
loc_8221AA34:
	// addi r29,r31,25984
	ctx.r29.s64 = ctx.r31.s64 + 25984;
	// b 0x8221aa40
	goto loc_8221AA40;
loc_8221AA3C:
	// addi r29,r31,25960
	ctx.r29.s64 = ctx.r31.s64 + 25960;
loc_8221AA40:
	// addi r5,r31,25164
	ctx.r5.s64 = ctx.r31.s64 + 25164;
	// addi r4,r31,26008
	ctx.r4.s64 = ctx.r31.s64 + 26008;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d5ea60
	ctx.lr = 0x8221AA50;
	sub_82D5EA60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221AA60;
	sub_822261F8(ctx, base);
	// addi r5,r31,25164
	ctx.r5.s64 = ctx.r31.s64 + 25164;
	// addi r4,r31,25184
	ctx.r4.s64 = ctx.r31.s64 + 25184;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d5ea60
	ctx.lr = 0x8221AA70;
	sub_82D5EA60(ctx, base);
	// lwz r3,-13980(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -13980);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AAA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221AAB4;
	sub_822261F8(ctx, base);
	// lwz r3,-13980(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -13980);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AAC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AAD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8221ab10
	if (ctx.cr6.lt) goto loc_8221AB10;
	// beq cr6,0x8221ab08
	if (ctx.cr6.eq) goto loc_8221AB08;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8221ab00
	if (ctx.cr6.lt) goto loc_8221AB00;
	// beq cr6,0x8221aaf8
	if (ctx.cr6.eq) goto loc_8221AAF8;
	// addi r29,r31,78
	ctx.r29.s64 = ctx.r31.s64 + 78;
	// b 0x8221ab14
	goto loc_8221AB14;
loc_8221AAF8:
	// addi r29,r31,26276
	ctx.r29.s64 = ctx.r31.s64 + 26276;
	// b 0x8221ab14
	goto loc_8221AB14;
loc_8221AB00:
	// addi r29,r31,26268
	ctx.r29.s64 = ctx.r31.s64 + 26268;
	// b 0x8221ab14
	goto loc_8221AB14;
loc_8221AB08:
	// addi r29,r31,26260
	ctx.r29.s64 = ctx.r31.s64 + 26260;
	// b 0x8221ab14
	goto loc_8221AB14;
loc_8221AB10:
	// addi r29,r31,26252
	ctx.r29.s64 = ctx.r31.s64 + 26252;
loc_8221AB14:
	// addi r5,r31,25164
	ctx.r5.s64 = ctx.r31.s64 + 25164;
	// addi r4,r31,26284
	ctx.r4.s64 = ctx.r31.s64 + 26284;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82d5ea60
	ctx.lr = 0x8221AB24;
	sub_82D5EA60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221AB34;
	sub_822261F8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8221ab58
	if (ctx.cr6.eq) goto loc_8221AB58;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AB54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8221AB58:
	// addi r5,r31,25164
	ctx.r5.s64 = ctx.r31.s64 + 25164;
	// addi r4,r31,25196
	ctx.r4.s64 = ctx.r31.s64 + 25196;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d5ea60
	ctx.lr = 0x8221AB68;
	sub_82D5EA60(ctx, base);
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x8221abbc
	if (ctx.cr6.eq) goto loc_8221ABBC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8221abbc
	if (ctx.cr6.eq) goto loc_8221ABBC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8221abb0
	if (ctx.cr6.lt) goto loc_8221ABB0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221ABA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8221abc0
	goto loc_8221ABC0;
loc_8221ABB0:
	// li r11,-103
	ctx.r11.s64 = -103;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// b 0x8221abcc
	goto loc_8221ABCC;
loc_8221ABBC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8221ABC0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221ABCC;
	sub_82225FF0(ctx, base);
loc_8221ABCC:
	// addi r5,r31,25164
	ctx.r5.s64 = ctx.r31.s64 + 25164;
	// addi r4,r31,25216
	ctx.r4.s64 = ctx.r31.s64 + 25216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d5ea60
	ctx.lr = 0x8221ABDC;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221ABF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221AC00;
	sub_82225FF0(ctx, base);
	// addi r5,r31,25164
	ctx.r5.s64 = ctx.r31.s64 + 25164;
	// addi r4,r31,25232
	ctx.r4.s64 = ctx.r31.s64 + 25232;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d5ea60
	ctx.lr = 0x8221AC10;
	sub_82D5EA60(ctx, base);
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x8221ac44
	if (ctx.cr6.eq) goto loc_8221AC44;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8221ac44
	if (ctx.cr6.eq) goto loc_8221AC44;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AC34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82265e78
	ctx.lr = 0x8221AC3C;
	sub_82265E78(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8221ac58
	goto loc_8221AC58;
loc_8221AC44:
	// addi r4,r31,25256
	ctx.r4.s64 = ctx.r31.s64 + 25256;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d5ea60
	ctx.lr = 0x8221AC54;
	sub_82D5EA60(ctx, base);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
loc_8221AC58:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221AC64;
	sub_822261F8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r23,6
	ctx.r23.s64 = 6;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AC7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8221acd4
	if (!ctx.cr0.eq) goto loc_8221ACD4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r23,7
	ctx.r23.s64 = 7;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AC9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82265e78
	ctx.lr = 0x8221ACA4;
	sub_82265E78(ctx, base);
	// addi r5,r31,25164
	ctx.r5.s64 = ctx.r31.s64 + 25164;
	// addi r4,r31,25264
	ctx.r4.s64 = ctx.r31.s64 + 25264;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d5ea60
	ctx.lr = 0x8221ACB4;
	sub_82D5EA60(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221acd0
	if (!ctx.cr6.eq) goto loc_8221ACD0;
	// addi r5,r31,25284
	ctx.r5.s64 = ctx.r31.s64 + 25284;
loc_8221ACD0:
	// bl 0x822261f8
	ctx.lr = 0x8221ACD4;
	sub_822261F8(ctx, base);
loc_8221ACD4:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x8221ad48
	if (ctx.cr6.eq) goto loc_8221AD48;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x8221ad48
	if (ctx.cr6.eq) goto loc_8221AD48;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bne cr6,0x8221ad80
	if (!ctx.cr6.eq) goto loc_8221AD80;
	// addi r5,r31,25164
	ctx.r5.s64 = ctx.r31.s64 + 25164;
	// addi r4,r31,25312
	ctx.r4.s64 = ctx.r31.s64 + 25312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d5ea60
	ctx.lr = 0x8221ACFC;
	sub_82D5EA60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221AD0C;
	sub_82225FF0(ctx, base);
	// addi r5,r31,25164
	ctx.r5.s64 = ctx.r31.s64 + 25164;
	// addi r4,r31,25340
	ctx.r4.s64 = ctx.r31.s64 + 25340;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d5ea60
	ctx.lr = 0x8221AD1C;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AD30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221AD40;
	sub_82225FF0(ctx, base);
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// b 0x8221ad80
	goto loc_8221AD80;
loc_8221AD48:
	// addi r5,r31,25164
	ctx.r5.s64 = ctx.r31.s64 + 25164;
	// addi r4,r31,25288
	ctx.r4.s64 = ctx.r31.s64 + 25288;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d5ea60
	ctx.lr = 0x8221AD58;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221AD7C;
	sub_82225FF0(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_8221AD80:
	// lwz r3,-13980(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -13980);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AD94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,160(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 160);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221ae78
	if (ctx.cr0.eq) goto loc_8221AE78;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r25,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x8221ae78
	if (ctx.cr0.eq) goto loc_8221AE78;
	// addi r5,r31,25164
	ctx.r5.s64 = ctx.r31.s64 + 25164;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d5ea60
	ctx.lr = 0x8221ADCC;
	sub_82D5EA60(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8221ae64
	if (ctx.cr6.eq) goto loc_8221AE64;
loc_8221ADDC:
	// lwz r3,160(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 160);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221ADF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AE20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// bl 0x82d5ea60
	ctx.lr = 0x8221AE38;
	sub_82D5EA60(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8221ae64
	if (!ctx.cr6.lt) goto loc_8221AE64;
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82d5ea60
	ctx.lr = 0x8221AE58;
	sub_82D5EA60(ctx, base);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8221addc
	if (ctx.cr6.lt) goto loc_8221ADDC;
loc_8221AE64:
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221AE74;
	sub_822261F8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8221AE78:
	// addi r5,r31,25164
	ctx.r5.s64 = ctx.r31.s64 + 25164;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8221bc08
	ctx.lr = 0x8221AE8C;
	sub_8221BC08(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r5,r31,25164
	ctx.r5.s64 = ctx.r31.s64 + 25164;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x8221b298
	ctx.lr = 0x8221AEA8;
	sub_8221B298(ctx, base);
	// add r5,r3,r29
	ctx.r5.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r4,r31,25368
	ctx.r4.s64 = ctx.r31.s64 + 25368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221AEB8;
	sub_82225FF0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r21,112
	ctx.r30.s64 = ctx.r21.s64 + 112;
loc_8221AEC0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221aedc
	if (!ctx.cr6.eq) goto loc_8221AEDC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8221aee0
	if (ctx.cr6.eq) goto loc_8221AEE0;
loc_8221AEDC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8221AEE0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// beq 0x8221af10
	if (ctx.cr0.eq) goto loc_8221AF10;
	// addi r3,r30,-100
	ctx.r3.s64 = ctx.r30.s64 + -100;
	// bl 0x822179a0
	ctx.lr = 0x8221AEF4;
	sub_822179A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221af28
	if (!ctx.cr0.eq) goto loc_8221AF28;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,148
	ctx.r30.s64 = ctx.r30.s64 + 148;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x8221aec0
	if (ctx.cr6.lt) goto loc_8221AEC0;
	// b 0x8221af50
	goto loc_8221AF50;
loc_8221AF10:
	// mulli r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 * 148;
	// add r31,r11,r21
	ctx.r31.u64 = ctx.r11.u64 + ctx.r21.u64;
	// li r5,99
	ctx.r5.s64 = 99;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82d5c630
	ctx.lr = 0x8221AF24;
	sub_82D5C630(ctx, base);
	// b 0x8221af30
	goto loc_8221AF30;
loc_8221AF28:
	// mulli r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 * 148;
	// add r31,r11,r21
	ctx.r31.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_8221AF30:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82d5c630
	ctx.lr = 0x8221AF40;
	sub_82D5C630(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82d5c630
	ctx.lr = 0x8221AF50;
	sub_82D5C630(ctx, base);
loc_8221AF50:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x8221af74
	if (!ctx.cr6.gt) goto loc_8221AF74;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221af74
	if (ctx.cr6.eq) goto loc_8221AF74;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82213908
	ctx.lr = 0x8221AF74;
	sub_82213908(ctx, base);
loc_8221AF74:
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// b 0x82d5c4f0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221AF80"))) PPC_WEAK_FUNC(sub_8221AF80);
PPC_FUNC_IMPL(__imp__sub_8221AF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x8221AF88;
	__savegprlr_27(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82226848
	ctx.lr = 0x8221AFA4;
	sub_82226848(ctx, base);
	// lis r11,28782
	ctx.r11.s64 = 1886257152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,28535
	ctx.r10.u64 = ctx.r11.u64 | 28535;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r31,r11,-5360
	ctx.r31.s64 = ctx.r11.s64 + -5360;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// addi r11,r11,-3772
	ctx.r11.s64 = ctx.r11.s64 + -3772;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822261f8
	ctx.lr = 0x8221AFD0;
	sub_822261F8(ctx, base);
	// addi r5,r31,-25430
	ctx.r5.s64 = ctx.r31.s64 + -25430;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221AFE0;
	sub_82D5EA60(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822260f0
	ctx.lr = 0x8221AFF0;
	sub_822260F0(ctx, base);
	// addi r5,r31,-25430
	ctx.r5.s64 = ctx.r31.s64 + -25430;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B000;
	sub_82D5EA60(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B010;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82217880
	ctx.lr = 0x8221B01C;
	sub_82217880(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221B02C;
	sub_822261F8(ctx, base);
	// addi r31,r29,120
	ctx.r31.s64 = ctx.r29.s64 + 120;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8221B038:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,-108
	ctx.r3.s64 = ctx.r31.s64 + -108;
	// bl 0x822179a0
	ctx.lr = 0x8221B044;
	sub_822179A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221b064
	if (ctx.cr0.eq) goto loc_8221B064;
	// stw r29,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r29.u32);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_8221B064:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,148
	ctx.r31.s64 = ctx.r31.s64 + 148;
	// bne 0x8221b038
	if (!ctx.cr0.eq) goto loc_8221B038;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B078"))) PPC_WEAK_FUNC(sub_8221B078);
PPC_FUNC_IMPL(__imp__sub_8221B078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8221B080;
	__savegprlr_28(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82226848
	ctx.lr = 0x8221B098;
	sub_82226848(ctx, base);
	// lis r11,28782
	ctx.r11.s64 = 1886257152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,28535
	ctx.r10.u64 = ctx.r11.u64 | 28535;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r31,r11,-5360
	ctx.r31.s64 = ctx.r11.s64 + -5360;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// addi r11,r11,-3748
	ctx.r11.s64 = ctx.r11.s64 + -3748;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822261f8
	ctx.lr = 0x8221B0C4;
	sub_822261F8(ctx, base);
	// addi r5,r31,-25429
	ctx.r5.s64 = ctx.r31.s64 + -25429;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B0D4;
	sub_82D5EA60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822260f0
	ctx.lr = 0x8221B0E4;
	sub_822260F0(ctx, base);
	// addi r5,r31,-25429
	ctx.r5.s64 = ctx.r31.s64 + -25429;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B0F4;
	sub_82D5EA60(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B104;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82217880
	ctx.lr = 0x8221B110;
	sub_82217880(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221B120;
	sub_822261F8(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B128"))) PPC_WEAK_FUNC(sub_8221B128);
PPC_FUNC_IMPL(__imp__sub_8221B128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-5404
	ctx.r4.s64 = ctx.r11.s64 + -5404;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822267e0
	ctx.lr = 0x8221B14C;
	sub_822267E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221b1b0
	if (ctx.cr0.eq) goto loc_8221B1B0;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r11,r11,-6080
	ctx.r11.s64 = ctx.r11.s64 + -6080;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221b1b0
	if (ctx.cr6.eq) goto loc_8221B1B0;
loc_8221B16C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8221B174:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221b198
	if (ctx.cr0.eq) goto loc_8221B198;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221b174
	if (ctx.cr6.eq) goto loc_8221B174;
loc_8221B198:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8221b1c4
	if (ctx.cr0.eq) goto loc_8221B1C4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8221b16c
	if (!ctx.cr0.eq) goto loc_8221B16C;
loc_8221B1B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221B1B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221B1C4:
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x8221b1b4
	goto loc_8221B1B4;
}

__attribute__((alias("__imp__sub_8221B1D0"))) PPC_WEAK_FUNC(sub_8221B1D0);
PPC_FUNC_IMPL(__imp__sub_8221B1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221B1D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r11,-13924
	ctx.r11.s64 = ctx.r11.s64 + -13924;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r31,r11,-5628
	ctx.r31.s64 = ctx.r11.s64 + -5628;
	// bne 0x8221b234
	if (!ctx.cr0.eq) goto loc_8221B234;
	// addi r11,r31,280
	ctx.r11.s64 = ctx.r31.s64 + 280;
	// addi r4,r31,280
	ctx.r4.s64 = ctx.r31.s64 + 280;
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222e820
	ctx.lr = 0x8221B230;
	sub_8222E820(ctx, base);
	// b 0x8221b240
	goto loc_8221B240;
loc_8221B234:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82265e78
	ctx.lr = 0x8221B240;
	sub_82265E78(ctx, base);
loc_8221B240:
	// addi r4,r31,284
	ctx.r4.s64 = ctx.r31.s64 + 284;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B254;
	sub_82D5EA60(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221B268;
	sub_822261F8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r5,r31,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x8221b28c
	if (!ctx.cr6.gt) goto loc_8221B28C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221b28c
	if (ctx.cr6.eq) goto loc_8221B28C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82213908
	ctx.lr = 0x8221B28C;
	sub_82213908(ctx, base);
loc_8221B28C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B298"))) PPC_WEAK_FUNC(sub_8221B298);
PPC_FUNC_IMPL(__imp__sub_8221B298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4a4
	ctx.lr = 0x8221B2A0;
	__savegprlr_19(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r23,r11,-13924
	ctx.r23.s64 = ctx.r11.s64 + -13924;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// addi r10,r23,1
	ctx.r10.s64 = ctx.r23.s64 + 1;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B2E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-148
	ctx.r31.s64 = ctx.r3.s64 + -148;
	// bne 0x8221b304
	if (!ctx.cr0.eq) goto loc_8221B304;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221B304:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-27044
	ctx.r30.s64 = ctx.r11.s64 + -27044;
	// beq cr6,0x8221b7b0
	if (ctx.cr6.eq) goto loc_8221B7B0;
	// li r22,52
	ctx.r22.s64 = 52;
loc_8221B318:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B32C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21724
	ctx.r4.s64 = ctx.r30.s64 + 21724;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B340;
	sub_82D5EA60(ctx, base);
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// li r4,257
	ctx.r4.s64 = 257;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8222e6b8
	ctx.lr = 0x8221B35C;
	sub_8222E6B8(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221b37c
	if (ctx.cr6.eq) goto loc_8221B37C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
loc_8221B37C:
	// lwz r29,188(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r28,192(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8221b3e8
	if (ctx.cr6.eq) goto loc_8221B3E8;
loc_8221B38C:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221B398:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221b398
	if (!ctx.cr6.eq) goto loc_8221B398;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x8222f2c8
	ctx.lr = 0x8221B3C0;
	sub_8222F2C8(ctx, base);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8221b3e4
	if (ctx.cr6.eq) goto loc_8221B3E4;
	// addi r11,r30,-528
	ctx.r11.s64 = ctx.r30.s64 + -528;
	// addi r4,r30,-528
	ctx.r4.s64 = ctx.r30.s64 + -528;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222f2c8
	ctx.lr = 0x8221B3E0;
	sub_8222F2C8(ctx, base);
	// b 0x8221b38c
	goto loc_8221B38C;
loc_8221B3E4:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8221B3E8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221b404
	if (!ctx.cr6.eq) goto loc_8221B404;
	// addi r4,r30,252
	ctx.r4.s64 = ctx.r30.s64 + 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82265d28
	ctx.lr = 0x8221B400;
	sub_82265D28(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8221B404:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221B410;
	sub_822261F8(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r25,r31,148
	ctx.r25.s64 = ctx.r31.s64 + 148;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8221b444
	if (ctx.cr6.lt) goto loc_8221B444;
	// beq cr6,0x8221b43c
	if (ctx.cr6.eq) goto loc_8221B43C;
	// addi r29,r30,21756
	ctx.r29.s64 = ctx.r30.s64 + 21756;
	// b 0x8221b448
	goto loc_8221B448;
loc_8221B43C:
	// addi r29,r30,21736
	ctx.r29.s64 = ctx.r30.s64 + 21736;
	// b 0x8221b448
	goto loc_8221B448;
loc_8221B444:
	// addi r29,r30,21744
	ctx.r29.s64 = ctx.r30.s64 + 21744;
loc_8221B448:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21768
	ctx.r4.s64 = ctx.r30.s64 + 21768;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B470;
	sub_82D5EA60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221B480;
	sub_822261F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21792
	ctx.r4.s64 = ctx.r30.s64 + 21792;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B4A8;
	sub_82D5EA60(ctx, base);
	// addi r5,r30,-4170
	ctx.r5.s64 = ctx.r30.s64 + -4170;
	// addi r4,r30,-4170
	ctx.r4.s64 = ctx.r30.s64 + -4170;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8222e820
	ctx.lr = 0x8221B4B8;
	sub_8222E820(ctx, base);
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r26,r11,r22
	ctx.r26.s32 = ctx.r11.s32 / ctx.r22.s32;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8221b548
	if (ctx.cr0.eq) goto loc_8221B548;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8221B4D8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221B4E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221b4e8
	if (!ctx.cr6.eq) goto loc_8221B4E8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x8222f2c8
	ctx.lr = 0x8221B510;
	sub_8222F2C8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	ctx.r11.s32 = ctx.r11.s32 / ctx.r22.s32;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8221b53c
	if (!ctx.cr6.lt) goto loc_8221B53C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8222f2c8
	ctx.lr = 0x8221B53C;
	sub_8222F2C8(ctx, base);
loc_8221B53C:
	// addi r27,r27,52
	ctx.r27.s64 = ctx.r27.s64 + 52;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8221b4d8
	if (ctx.cr6.lt) goto loc_8221B4D8;
loc_8221B548:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221B558;
	sub_822261F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21812
	ctx.r4.s64 = ctx.r30.s64 + 21812;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B580;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82265b28
	ctx.lr = 0x8221B58C;
	sub_82265B28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822261f8
	ctx.lr = 0x8221B59C;
	sub_822261F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B5B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21828
	ctx.r4.s64 = ctx.r30.s64 + 21828;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B5C4;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B5D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221B5E8;
	sub_82225FF0(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r20,r20,5
	ctx.r20.s64 = ctx.r20.s64 + 5;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221b650
	if (ctx.cr0.eq) goto loc_8221B650;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B61C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x8221b1d0
	ctx.lr = 0x8221B64C;
	sub_8221B1D0(ctx, base);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_8221B650:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8221B668:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221b668
	if (!ctx.cr6.eq) goto loc_8221B668;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221b760
	if (ctx.cr0.eq) goto loc_8221B760;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21848
	ctx.r4.s64 = ctx.r30.s64 + 21848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B6B0;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,21868
	ctx.r4.s64 = ctx.r30.s64 + 21868;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B6D4;
	sub_82D5EA60(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221B6E4;
	sub_822261F8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221b75c
	if (ctx.cr0.eq) goto loc_8221B75C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r29,r30,21896
	ctx.r29.s64 = ctx.r30.s64 + 21896;
	// bne cr6,0x8221b724
	if (!ctx.cr6.eq) goto loc_8221B724;
	// addi r29,r30,21876
	ctx.r29.s64 = ctx.r30.s64 + 21876;
loc_8221B724:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21908
	ctx.r4.s64 = ctx.r30.s64 + 21908;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B74C;
	sub_82D5EA60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221B75C;
	sub_822261F8(ctx, base);
loc_8221B75C:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_8221B760:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-148
	ctx.r31.s64 = ctx.r3.s64 + -148;
	// bne 0x8221b784
	if (!ctx.cr0.eq) goto loc_8221B784;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221B784:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x8221b7a8
	if (!ctx.cr6.gt) goto loc_8221B7A8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221b7a8
	if (ctx.cr6.eq) goto loc_8221B7A8;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82213908
	ctx.lr = 0x8221B7A8;
	sub_82213908(ctx, base);
loc_8221B7A8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8221b318
	if (!ctx.cr6.eq) goto loc_8221B318;
loc_8221B7B0:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B7C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B7D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-148
	ctx.r31.s64 = ctx.r3.s64 + -148;
	// bne 0x8221b7e8
	if (!ctx.cr0.eq) goto loc_8221B7E8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221B7E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221bbd4
	if (ctx.cr6.eq) goto loc_8221BBD4;
	// lis r23,-31979
	ctx.r23.s64 = -2095775744;
loc_8221B7F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21932
	ctx.r4.s64 = ctx.r30.s64 + 21932;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B81C;
	sub_82D5EA60(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r29,r31,148
	ctx.r29.s64 = ctx.r31.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221B844;
	sub_82225FF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21944
	ctx.r4.s64 = ctx.r30.s64 + 21944;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B86C;
	sub_82D5EA60(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82225ff0
	ctx.lr = 0x8221B894;
	sub_82225FF0(ctx, base);
	// lwz r3,-13980(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13980);
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221b998
	if (ctx.cr6.eq) goto loc_8221B998;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B8B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8221b998
	if (ctx.cr0.eq) goto loc_8221B998;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B8E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221b998
	if (ctx.cr0.eq) goto loc_8221B998;
loc_8221B8F0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B91C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221b978
	if (!ctx.cr0.eq) goto loc_8221B978;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r30,21960
	ctx.r4.s64 = ctx.r30.s64 + 21960;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B94C;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221B978;
	sub_82225FF0(ctx, base);
loc_8221B978:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8221b8f0
	if (ctx.cr6.lt) goto loc_8221B8F0;
loc_8221B998:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21988
	ctx.r4.s64 = ctx.r30.s64 + 21988;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221B9C0;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B9D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221B9E4;
	sub_82225FF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221B9F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,22004
	ctx.r4.s64 = ctx.r30.s64 + 22004;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221BA0C;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221BA30;
	sub_82225FF0(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r20,r20,3
	ctx.r20.s64 = ctx.r20.s64 + 3;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BA48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221ba98
	if (ctx.cr0.eq) goto loc_8221BA98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x8221b1d0
	ctx.lr = 0x8221BA94;
	sub_8221B1D0(ctx, base);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_8221BA98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BAAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8221BAB0:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221bab0
	if (!ctx.cr6.eq) goto loc_8221BAB0;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221bba8
	if (ctx.cr0.eq) goto loc_8221BBA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BAE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,22024
	ctx.r4.s64 = ctx.r30.s64 + 22024;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221BAF8;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,22044
	ctx.r4.s64 = ctx.r30.s64 + 22044;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d5ea60
	ctx.lr = 0x8221BB1C;
	sub_82D5EA60(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221BB2C;
	sub_822261F8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BB40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221bba4
	if (ctx.cr0.eq) goto loc_8221BBA4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r29,r30,22072
	ctx.r29.s64 = ctx.r30.s64 + 22072;
	// bne cr6,0x8221bb6c
	if (!ctx.cr6.eq) goto loc_8221BB6C;
	// addi r29,r30,22052
	ctx.r29.s64 = ctx.r30.s64 + 22052;
loc_8221BB6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BB80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,22084
	ctx.r4.s64 = ctx.r30.s64 + 22084;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221BB94;
	sub_82D5EA60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221BBA4;
	sub_822261F8(ctx, base);
loc_8221BBA4:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_8221BBA8:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BBBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-148
	ctx.r31.s64 = ctx.r3.s64 + -148;
	// bne 0x8221bbcc
	if (!ctx.cr0.eq) goto loc_8221BBCC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221BBCC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8221b7f4
	if (!ctx.cr6.eq) goto loc_8221B7F4;
loc_8221BBD4:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x8221bbf8
	if (!ctx.cr6.gt) goto loc_8221BBF8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221bbf8
	if (ctx.cr6.eq) goto loc_8221BBF8;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82213908
	ctx.lr = 0x8221BBF8;
	sub_82213908(ctx, base);
loc_8221BBF8:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82d5c4f4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221BC08"))) PPC_WEAK_FUNC(sub_8221BC08);
PPC_FUNC_IMPL(__imp__sub_8221BC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x8221BC10;
	__savegprlr_24(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r29,r11,-5628
	ctx.r29.s64 = ctx.r11.s64 + -5628;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r29,692
	ctx.r4.s64 = ctx.r29.s64 + 692;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r25,2
	ctx.r25.s64 = 2;
	// bl 0x82d5ea60
	ctx.lr = 0x8221BC38;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BC4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221BC5C;
	sub_822261F8(ctx, base);
	// addi r4,r29,712
	ctx.r4.s64 = ctx.r29.s64 + 712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82d5ea60
	ctx.lr = 0x8221BC6C;
	sub_82D5EA60(ctx, base);
	// addi r5,r29,740
	ctx.r5.s64 = ctx.r29.s64 + 740;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221BC7C;
	sub_822261F8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BC90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BCA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-148
	ctx.r31.s64 = ctx.r3.s64 + -148;
	// bne 0x8221bcb8
	if (!ctx.cr0.eq) goto loc_8221BCB8;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8221BCB8:
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// stb r24,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r24.u8);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r1,356
	ctx.r11.s64 = ctx.r1.s64 + 356;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x8221be90
	goto loc_8221BE90;
loc_8221BCE0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221bcf8
	if (ctx.cr6.eq) goto loc_8221BCF8;
	// stb r24,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r24.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8221BCF8:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r28,r31,148
	ctx.r28.s64 = ctx.r31.s64 + 148;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BD10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BD24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8221bd94
	if (ctx.cr0.eq) goto loc_8221BD94;
loc_8221BD2C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221BD34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221bd34
	if (!ctx.cr6.eq) goto loc_8221BD34;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822672f8
	ctx.lr = 0x8221BD60;
	sub_822672F8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BD74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8221bd94
	if (ctx.cr0.eq) goto loc_8221BD94;
	// addi r11,r29,748
	ctx.r11.s64 = ctx.r29.s64 + 748;
	// addi r4,r29,748
	ctx.r4.s64 = ctx.r29.s64 + 748;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822672f8
	ctx.lr = 0x8221BD90;
	sub_822672F8(ctx, base);
	// b 0x8221bd2c
	goto loc_8221BD2C;
loc_8221BD94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r29,752
	ctx.r4.s64 = ctx.r29.s64 + 752;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82d5ea60
	ctx.lr = 0x8221BDBC;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822261f8
	ctx.lr = 0x8221BDCC;
	sub_822261F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BDE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8221BDE8:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221bde8
	if (!ctx.cr6.eq) goto loc_8221BDE8;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221be68
	if (ctx.cr0.eq) goto loc_8221BE68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BE1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r29,768
	ctx.r4.s64 = ctx.r29.s64 + 768;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82d5ea60
	ctx.lr = 0x8221BE30;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r29,788
	ctx.r4.s64 = ctx.r29.s64 + 788;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82d5ea60
	ctx.lr = 0x8221BE54;
	sub_82D5EA60(ctx, base);
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221BE64;
	sub_822261F8(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8221BE68:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-148
	ctx.r31.s64 = ctx.r3.s64 + -148;
	// bne 0x8221be8c
	if (!ctx.cr0.eq) goto loc_8221BE8C;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8221BE8C:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8221BE90:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8221bce0
	if (!ctx.cr6.eq) goto loc_8221BCE0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x8221bec4
	if (!ctx.cr6.gt) goto loc_8221BEC4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221bec4
	if (ctx.cr6.eq) goto loc_8221BEC4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221bec4
	if (ctx.cr6.eq) goto loc_8221BEC4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82213908
	ctx.lr = 0x8221BEC4;
	sub_82213908(ctx, base);
loc_8221BEC4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221BED0"))) PPC_WEAK_FUNC(sub_8221BED0);
PPC_FUNC_IMPL(__imp__sub_8221BED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8221BED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// addi r30,r11,-4616
	ctx.r30.s64 = ctx.r11.s64 + -4616;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r30,-26161
	ctx.r4.s64 = ctx.r30.s64 + -26161;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822177a0
	ctx.lr = 0x8221BEFC;
	sub_822177A0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// stw r31,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r31.u32);
	// addi r11,r11,11360
	ctx.r11.s64 = ctx.r11.s64 + 11360;
	// addi r6,r30,-96
	ctx.r6.s64 = ctx.r30.s64 + -96;
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82214df8
	ctx.lr = 0x8221BF20;
	sub_82214DF8(ctx, base);
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226148
	ctx.lr = 0x8221BF30;
	sub_82226148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// bl 0x822267e0
	ctx.lr = 0x8221BF4C;
	sub_822267E0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822177a0
	ctx.lr = 0x8221BF58;
	sub_822177A0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r28)
	PPC_STORE_U32(ctx.r28.u32 + 108, ctx.r11.u32);
	// bl 0x822267e0
	ctx.lr = 0x8221BF74;
	sub_822267E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221c0e0
	if (ctx.cr0.eq) goto loc_8221C0E0;
	// addi r10,r30,-44
	ctx.r10.s64 = ctx.r30.s64 + -44;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221BF84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221bfa8
	if (ctx.cr0.eq) goto loc_8221BFA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221bf84
	if (ctx.cr6.eq) goto loc_8221BF84;
loc_8221BFA8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8221bfb8
	if (!ctx.cr0.eq) goto loc_8221BFB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8221c0dc
	goto loc_8221C0DC;
loc_8221BFB8:
	// addi r10,r30,-40
	ctx.r10.s64 = ctx.r30.s64 + -40;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221BFC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221bfe4
	if (ctx.cr0.eq) goto loc_8221BFE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221bfc0
	if (ctx.cr6.eq) goto loc_8221BFC0;
loc_8221BFE4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8221bff4
	if (!ctx.cr0.eq) goto loc_8221BFF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8221c0dc
	goto loc_8221C0DC;
loc_8221BFF4:
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221BFFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221c020
	if (ctx.cr0.eq) goto loc_8221C020;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221bffc
	if (ctx.cr6.eq) goto loc_8221BFFC;
loc_8221C020:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8221c030
	if (!ctx.cr0.eq) goto loc_8221C030;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8221c0dc
	goto loc_8221C0DC;
loc_8221C030:
	// addi r10,r30,-20
	ctx.r10.s64 = ctx.r30.s64 + -20;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221C038:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221c05c
	if (ctx.cr0.eq) goto loc_8221C05C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221c038
	if (ctx.cr6.eq) goto loc_8221C038;
loc_8221C05C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8221c06c
	if (!ctx.cr0.eq) goto loc_8221C06C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8221c0dc
	goto loc_8221C0DC;
loc_8221C06C:
	// addi r10,r30,-12
	ctx.r10.s64 = ctx.r30.s64 + -12;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221C074:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221c098
	if (ctx.cr0.eq) goto loc_8221C098;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221c074
	if (ctx.cr6.eq) goto loc_8221C074;
loc_8221C098:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8221c0a8
	if (!ctx.cr0.eq) goto loc_8221C0A8;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8221c0dc
	goto loc_8221C0DC;
loc_8221C0A8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221C0AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq 0x8221c0d0
	if (ctx.cr0.eq) goto loc_8221C0D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8221c0ac
	if (ctx.cr6.eq) goto loc_8221C0AC;
loc_8221C0D0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8221c0e0
	if (!ctx.cr0.eq) goto loc_8221C0E0;
	// li r11,5
	ctx.r11.s64 = 5;
loc_8221C0DC:
	// stw r11,108(r28)
	PPC_STORE_U32(ctx.r28.u32 + 108, ctx.r11.u32);
loc_8221C0E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C0F0"))) PPC_WEAK_FUNC(sub_8221C0F0);
PPC_FUNC_IMPL(__imp__sub_8221C0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x8221C0F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// addi r31,r11,-30621
	ctx.r31.s64 = ctx.r11.s64 + -30621;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822177a0
	ctx.lr = 0x8221C11C;
	sub_822177A0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r4,r31,26013
	ctx.r4.s64 = ctx.r31.s64 + 26013;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r27.u32);
	// bl 0x82226148
	ctx.lr = 0x8221C134;
	sub_82226148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,26021
	ctx.r4.s64 = ctx.r31.s64 + 26021;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// bl 0x822267e0
	ctx.lr = 0x8221C150;
	sub_822267E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221c164
	if (ctx.cr0.eq) goto loc_8221C164;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822177a0
	ctx.lr = 0x8221C164;
	sub_822177A0(ctx, base);
loc_8221C164:
	// addi r28,r30,107
	ctx.r28.s64 = ctx.r30.s64 + 107;
	// stb r27,107(r30)
	PPC_STORE_U8(ctx.r30.u32 + 107, ctx.r27.u8);
	// addi r4,r31,26037
	ctx.r4.s64 = ctx.r31.s64 + 26037;
	// li r6,128
	ctx.r6.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822267e0
	ctx.lr = 0x8221C180;
	sub_822267E0(ctx, base);
	// addi r11,r31,26049
	ctx.r11.s64 = ctx.r31.s64 + 26049;
loc_8221C184:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq 0x8221c1a8
	if (ctx.cr0.eq) goto loc_8221C1A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8221c184
	if (ctx.cr6.eq) goto loc_8221C184;
loc_8221C1A8:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r4,r31,26057
	ctx.r4.s64 = ctx.r31.s64 + 26057;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,235(r30)
	PPC_STORE_U8(ctx.r30.u32 + 235, ctx.r11.u8);
	// bl 0x82225f60
	ctx.lr = 0x8221C1C0;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221c1dc
	if (ctx.cr0.eq) goto loc_8221C1DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83008990
	ctx.lr = 0x8221C1D8;
	sub_83008990(ctx, base);
	// b 0x8221c1e0
	goto loc_8221C1E0;
loc_8221C1DC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8221C1E0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8221c1f8
	if (!ctx.cr6.eq) goto loc_8221C1F8;
	// addi r3,r31,-94
	ctx.r3.s64 = ctx.r31.s64 + -94;
	// bl 0x822104c0
	ctx.lr = 0x8221C1F0;
	sub_822104C0(ctx, base);
	// stw r3,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r3.u32);
	// b 0x8221c230
	goto loc_8221C230;
loc_8221C1F8:
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// bl 0x82213850
	ctx.lr = 0x8221C200;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,26069
	ctx.r4.s64 = ctx.r31.s64 + 26069;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r5,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r5.u32);
	// bl 0x822267e0
	ctx.lr = 0x8221C230;
	sub_822267E0(ctx, base);
loc_8221C230:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C240"))) PPC_WEAK_FUNC(sub_8221C240);
PPC_FUNC_IMPL(__imp__sub_8221C240) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221C248;
	__savegprlr_29(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r9,r10,8344
	ctx.r9.s64 = ctx.r10.s64 + 8344;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-4080
	ctx.r11.s64 = ctx.r11.s64 + -4080;
	// addi r8,r10,8356
	ctx.r8.s64 = ctx.r10.s64 + 8356;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r7,r10,8368
	ctx.r7.s64 = ctx.r10.s64 + 8368;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r6,r10,8388
	ctx.r6.s64 = ctx.r10.s64 + 8388;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r5,r10,8404
	ctx.r5.s64 = ctx.r10.s64 + 8404;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r4,r10,8428
	ctx.r4.s64 = ctx.r10.s64 + 8428;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r3,r10,8436
	ctx.r3.s64 = ctx.r10.s64 + 8436;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r31,r10,8452
	ctx.r31.s64 = ctx.r10.s64 + 8452;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r30,r10,8468
	ctx.r30.s64 = ctx.r10.s64 + 8468;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r29,r10,6456
	ctx.r29.s64 = ctx.r10.s64 + 6456;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-3652
	ctx.r10.s64 = ctx.r10.s64 + -3652;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-3640
	ctx.r10.s64 = ctx.r10.s64 + -3640;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-3616
	ctx.r10.s64 = ctx.r10.s64 + -3616;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-3628
	ctx.r10.s64 = ctx.r10.s64 + -3628;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-3604
	ctx.r10.s64 = ctx.r10.s64 + -3604;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-3592
	ctx.r10.s64 = ctx.r10.s64 + -3592;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-3580
	ctx.r10.s64 = ctx.r10.s64 + -3580;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-3568
	ctx.r10.s64 = ctx.r10.s64 + -3568;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-3556
	ctx.r10.s64 = ctx.r10.s64 + -3556;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-3544
	ctx.r10.s64 = ctx.r10.s64 + -3544;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-13932(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13932, ctx.r11.u8);
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C380"))) PPC_WEAK_FUNC(sub_8221C380);
PPC_FUNC_IMPL(__imp__sub_8221C380) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226848
	ctx.lr = 0x8221C3A4;
	sub_82226848(ctx, base);
	// lis r11,29281
	ctx.r11.s64 = 1918959616;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r10,r11,28267
	ctx.r10.u64 = ctx.r11.u64 | 28267;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6596
	ctx.r4.s64 = ctx.r11.s64 + 6596;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x8221C3C4;
	sub_822261F8(ctx, base);
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

__attribute__((alias("__imp__sub_8221C3E0"))) PPC_WEAK_FUNC(sub_8221C3E0);
PPC_FUNC_IMPL(__imp__sub_8221C3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x8221C3E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-3652
	ctx.r11.s64 = ctx.r11.s64 + -3652;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221c380
	ctx.lr = 0x8221C408;
	sub_8221C380(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8221c4c8
	if (ctx.cr6.eq) goto loc_8221C4C8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// addi r26,r11,8500
	ctx.r26.s64 = ctx.r11.s64 + 8500;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r25,r11,8492
	ctx.r25.s64 = ctx.r11.s64 + 8492;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r24,r11,8484
	ctx.r24.s64 = ctx.r11.s64 + 8484;
loc_8221C430:
	// addi r10,r29,-20
	ctx.r10.s64 = ctx.r29.s64 + -20;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// ld r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(ctx.r28.s64, 0, ctx.xer);
	// beq cr6,0x8221c494
	if (ctx.cr6.eq) goto loc_8221C494;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d5ea60
	ctx.lr = 0x8221C464;
	sub_82D5EA60(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822260f0
	ctx.lr = 0x8221C474;
	sub_822260F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d5ea60
	ctx.lr = 0x8221C484;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82225ff0
	ctx.lr = 0x8221C494;
	sub_82225FF0(ctx, base);
loc_8221C494:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d5ea60
	ctx.lr = 0x8221C4A4;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82217ac8
	ctx.lr = 0x8221C4B8;
	sub_82217AC8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8221c430
	if (ctx.cr6.lt) goto loc_8221C430;
loc_8221C4C8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,8508
	ctx.r4.s64 = ctx.r11.s64 + 8508;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221C4DC;
	sub_82225FF0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C4E8"))) PPC_WEAK_FUNC(sub_8221C4E8);
PPC_FUNC_IMPL(__imp__sub_8221C4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x8221C4F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221c544
	if (ctx.cr6.eq) goto loc_8221C544;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r27,r11,7956
	ctx.r27.s64 = ctx.r11.s64 + 7956;
loc_8221C514:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221C524;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822261f8
	ctx.lr = 0x8221C534;
	sub_822261F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8221c514
	if (ctx.cr6.lt) goto loc_8221C514;
loc_8221C544:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7948
	ctx.r4.s64 = ctx.r11.s64 + 7948;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221C558;
	sub_82225FF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C560"))) PPC_WEAK_FUNC(sub_8221C560);
PPC_FUNC_IMPL(__imp__sub_8221C560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x8221C568;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221c5e4
	if (ctx.cr6.eq) goto loc_8221C5E4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r27,r11,8568
	ctx.r27.s64 = ctx.r11.s64 + 8568;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r26,r11,7956
	ctx.r26.s64 = ctx.r11.s64 + 7956;
loc_8221C594:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221C5A4;
	sub_82D5EA60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221C5B4;
	sub_822261F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221C5C4;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,64(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82225ff0
	ctx.lr = 0x8221C5D4;
	sub_82225FF0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8221c594
	if (ctx.cr6.lt) goto loc_8221C594;
loc_8221C5E4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,7948
	ctx.r4.s64 = ctx.r11.s64 + 7948;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221C5F8;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8584
	ctx.r4.s64 = ctx.r11.s64 + 8584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221C60C;
	sub_82225FF0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C618"))) PPC_WEAK_FUNC(sub_8221C618);
PPC_FUNC_IMPL(__imp__sub_8221C618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x8221C620;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-3640
	ctx.r11.s64 = ctx.r11.s64 + -3640;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x8221c380
	ctx.lr = 0x8221C650;
	sub_8221C380(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221c680
	if (ctx.cr6.eq) goto loc_8221C680;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7436
	ctx.r4.s64 = ctx.r11.s64 + 7436;
	// bl 0x822260f0
	ctx.lr = 0x8221C66C;
	sub_822260F0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,7148
	ctx.r4.s64 = ctx.r11.s64 + 7148;
	// bl 0x82225ff0
	ctx.lr = 0x8221C680;
	sub_82225FF0(ctx, base);
loc_8221C680:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82217a58
	ctx.lr = 0x8221C688;
	sub_82217A58(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,8600
	ctx.r4.s64 = ctx.r11.s64 + 8600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221C69C;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,8612
	ctx.r4.s64 = ctx.r11.s64 + 8612;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221C6B0;
	sub_82225FF0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221c4e8
	ctx.lr = 0x8221C6C4;
	sub_8221C4E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C6D0"))) PPC_WEAK_FUNC(sub_8221C6D0);
PPC_FUNC_IMPL(__imp__sub_8221C6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x8221C6D8;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r11,r11,-3616
	ctx.r11.s64 = ctx.r11.s64 + -3616;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// bl 0x8221c380
	ctx.lr = 0x8221C708;
	sub_8221C380(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8516
	ctx.r4.s64 = ctx.r11.s64 + 8516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221C71C;
	sub_82225FF0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221c790
	if (ctx.cr6.eq) goto loc_8221C790;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221c790
	if (ctx.cr6.eq) goto loc_8221C790;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r26,r11,8548
	ctx.r26.s64 = ctx.r11.s64 + 8548;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r25,r11,8528
	ctx.r25.s64 = ctx.r11.s64 + 8528;
loc_8221C740:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221C750;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x822260f0
	ctx.lr = 0x8221C760;
	sub_822260F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221C770;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82225ff0
	ctx.lr = 0x8221C780;
	sub_82225FF0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8221c740
	if (ctx.cr6.lt) goto loc_8221C740;
loc_8221C790:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82217a58
	ctx.lr = 0x8221C798;
	sub_82217A58(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,8600
	ctx.r4.s64 = ctx.r11.s64 + 8600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221C7AC;
	sub_82225FF0(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221c4e8
	ctx.lr = 0x8221C7C0;
	sub_8221C4E8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C7C8"))) PPC_WEAK_FUNC(sub_8221C7C8);
PPC_FUNC_IMPL(__imp__sub_8221C7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x8221C7D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-3628
	ctx.r11.s64 = ctx.r11.s64 + -3628;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x8221c380
	ctx.lr = 0x8221C800;
	sub_8221C380(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221c830
	if (ctx.cr6.eq) goto loc_8221C830;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7436
	ctx.r4.s64 = ctx.r11.s64 + 7436;
	// bl 0x822260f0
	ctx.lr = 0x8221C81C;
	sub_822260F0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,7148
	ctx.r4.s64 = ctx.r11.s64 + 7148;
	// bl 0x82225ff0
	ctx.lr = 0x8221C830;
	sub_82225FF0(ctx, base);
loc_8221C830:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82217a58
	ctx.lr = 0x8221C838;
	sub_82217A58(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,8600
	ctx.r4.s64 = ctx.r11.s64 + 8600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221C84C;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,8612
	ctx.r4.s64 = ctx.r11.s64 + 8612;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221C860;
	sub_82225FF0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221c560
	ctx.lr = 0x8221C874;
	sub_8221C560(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C880"))) PPC_WEAK_FUNC(sub_8221C880);
PPC_FUNC_IMPL(__imp__sub_8221C880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x8221C888;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-3628
	ctx.r11.s64 = ctx.r11.s64 + -3628;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x8221c380
	ctx.lr = 0x8221C8B8;
	sub_8221C380(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221c8e8
	if (ctx.cr6.eq) goto loc_8221C8E8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7436
	ctx.r4.s64 = ctx.r11.s64 + 7436;
	// bl 0x822260f0
	ctx.lr = 0x8221C8D4;
	sub_822260F0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,7148
	ctx.r4.s64 = ctx.r11.s64 + 7148;
	// bl 0x82225ff0
	ctx.lr = 0x8221C8E8;
	sub_82225FF0(ctx, base);
loc_8221C8E8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82217a58
	ctx.lr = 0x8221C8F0;
	sub_82217A58(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,8600
	ctx.r4.s64 = ctx.r11.s64 + 8600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221C904;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,8612
	ctx.r4.s64 = ctx.r11.s64 + 8612;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221C918;
	sub_82225FF0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221c4e8
	ctx.lr = 0x8221C92C;
	sub_8221C4E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C938"))) PPC_WEAK_FUNC(sub_8221C938);
PPC_FUNC_IMPL(__imp__sub_8221C938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x8221C940;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r11,r11,-3604
	ctx.r11.s64 = ctx.r11.s64 + -3604;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// bl 0x8221c380
	ctx.lr = 0x8221C970;
	sub_8221C380(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8516
	ctx.r4.s64 = ctx.r11.s64 + 8516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221C984;
	sub_82225FF0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221c9f8
	if (ctx.cr6.eq) goto loc_8221C9F8;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221c9f8
	if (ctx.cr6.eq) goto loc_8221C9F8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r26,r11,8548
	ctx.r26.s64 = ctx.r11.s64 + 8548;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r25,r11,8528
	ctx.r25.s64 = ctx.r11.s64 + 8528;
loc_8221C9A8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221C9B8;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x822260f0
	ctx.lr = 0x8221C9C8;
	sub_822260F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221C9D8;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82225ff0
	ctx.lr = 0x8221C9E8;
	sub_82225FF0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8221c9a8
	if (ctx.cr6.lt) goto loc_8221C9A8;
loc_8221C9F8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82217a58
	ctx.lr = 0x8221CA00;
	sub_82217A58(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,8600
	ctx.r4.s64 = ctx.r11.s64 + 8600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221CA14;
	sub_82225FF0(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221c560
	ctx.lr = 0x8221CA28;
	sub_8221C560(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CA30"))) PPC_WEAK_FUNC(sub_8221CA30);
PPC_FUNC_IMPL(__imp__sub_8221CA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x8221CA38;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r11,r11,-3604
	ctx.r11.s64 = ctx.r11.s64 + -3604;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// bl 0x8221c380
	ctx.lr = 0x8221CA68;
	sub_8221C380(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8516
	ctx.r4.s64 = ctx.r11.s64 + 8516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221CA7C;
	sub_82225FF0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221caf0
	if (ctx.cr6.eq) goto loc_8221CAF0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221caf0
	if (ctx.cr6.eq) goto loc_8221CAF0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r26,r11,8548
	ctx.r26.s64 = ctx.r11.s64 + 8548;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r25,r11,8528
	ctx.r25.s64 = ctx.r11.s64 + 8528;
loc_8221CAA0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221CAB0;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x822260f0
	ctx.lr = 0x8221CAC0;
	sub_822260F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221CAD0;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82225ff0
	ctx.lr = 0x8221CAE0;
	sub_82225FF0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8221caa0
	if (ctx.cr6.lt) goto loc_8221CAA0;
loc_8221CAF0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82217a58
	ctx.lr = 0x8221CAF8;
	sub_82217A58(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,8600
	ctx.r4.s64 = ctx.r11.s64 + 8600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221CB0C;
	sub_82225FF0(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221c4e8
	ctx.lr = 0x8221CB20;
	sub_8221C4E8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CB28"))) PPC_WEAK_FUNC(sub_8221CB28);
PPC_FUNC_IMPL(__imp__sub_8221CB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x8221CB30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7976
	ctx.r4.s64 = ctx.r11.s64 + 7976;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221CB5C;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7148
	ctx.r4.s64 = ctx.r11.s64 + 7148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221CB70;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8624
	ctx.r4.s64 = ctx.r11.s64 + 8624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221CB84;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8632
	ctx.r4.s64 = ctx.r11.s64 + 8632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221CB98;
	sub_82225FF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82217a58
	ctx.lr = 0x8221CBA0;
	sub_82217A58(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,8600
	ctx.r4.s64 = ctx.r11.s64 + 8600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221CBB4;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,8612
	ctx.r4.s64 = ctx.r11.s64 + 8612;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221CBC8;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r4,r11,8640
	ctx.r4.s64 = ctx.r11.s64 + 8640;
	// bl 0x82225ff0
	ctx.lr = 0x8221CBDC;
	sub_82225FF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CBE8"))) PPC_WEAK_FUNC(sub_8221CBE8);
PPC_FUNC_IMPL(__imp__sub_8221CBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x8221CBF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-3592
	ctx.r11.s64 = ctx.r11.s64 + -3592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x8221c380
	ctx.lr = 0x8221CC24;
	sub_8221C380(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221cb28
	ctx.lr = 0x8221CC50;
	sub_8221CB28(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CC58"))) PPC_WEAK_FUNC(sub_8221CC58);
PPC_FUNC_IMPL(__imp__sub_8221CC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x8221CC60;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-3580
	ctx.r11.s64 = ctx.r11.s64 + -3580;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x8221c380
	ctx.lr = 0x8221CC94;
	sub_8221C380(ctx, base);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221cb28
	ctx.lr = 0x8221CCBC;
	sub_8221CB28(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,8652
	ctx.r4.s64 = ctx.r11.s64 + 8652;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221CCD0;
	sub_82225FF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CCD8"))) PPC_WEAK_FUNC(sub_8221CCD8);
PPC_FUNC_IMPL(__imp__sub_8221CCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x8221CCE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-3568
	ctx.r11.s64 = ctx.r11.s64 + -3568;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x8221c380
	ctx.lr = 0x8221CD14;
	sub_8221C380(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221cb28
	ctx.lr = 0x8221CD40;
	sub_8221CB28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,252(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x8221c4e8
	ctx.lr = 0x8221CD54;
	sub_8221C4E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CD60"))) PPC_WEAK_FUNC(sub_8221CD60);
PPC_FUNC_IMPL(__imp__sub_8221CD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221CD68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-3556
	ctx.r11.s64 = ctx.r11.s64 + -3556;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221c380
	ctx.lr = 0x8221CD88;
	sub_8221C380(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7976
	ctx.r4.s64 = ctx.r11.s64 + 7976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221CD9C;
	sub_822261F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82217a58
	ctx.lr = 0x8221CDA4;
	sub_82217A58(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,8600
	ctx.r4.s64 = ctx.r11.s64 + 8600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221CDB8;
	sub_82225FF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CDC0"))) PPC_WEAK_FUNC(sub_8221CDC0);
PPC_FUNC_IMPL(__imp__sub_8221CDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,6596
	ctx.r4.s64 = ctx.r11.s64 + 6596;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822267e0
	ctx.lr = 0x8221CDE4;
	sub_822267E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221ce48
	if (ctx.cr0.eq) goto loc_8221CE48;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r11,r11,-6012
	ctx.r11.s64 = ctx.r11.s64 + -6012;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221ce48
	if (ctx.cr6.eq) goto loc_8221CE48;
loc_8221CE04:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8221CE0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221ce30
	if (ctx.cr0.eq) goto loc_8221CE30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221ce0c
	if (ctx.cr6.eq) goto loc_8221CE0C;
loc_8221CE30:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8221ce5c
	if (ctx.cr0.eq) goto loc_8221CE5C;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8221ce04
	if (!ctx.cr0.eq) goto loc_8221CE04;
loc_8221CE48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221CE4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221CE5C:
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x8221ce4c
	goto loc_8221CE4C;
}

__attribute__((alias("__imp__sub_8221CE68"))) PPC_WEAK_FUNC(sub_8221CE68);
PPC_FUNC_IMPL(__imp__sub_8221CE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8221CE70;
	__savegprlr_28(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,-4056
	ctx.r29.s64 = ctx.r11.s64 + -4056;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221CE98;
	sub_82D5EA60(ctx, base);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822267e0
	ctx.lr = 0x8221CEAC;
	sub_822267E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221cebc
	if (!ctx.cr0.eq) goto loc_8221CEBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221cf40
	goto loc_8221CF40;
loc_8221CEBC:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822103f8
	ctx.lr = 0x8221CECC;
	sub_822103F8(ctx, base);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221CEDC;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225f60
	ctx.lr = 0x8221CEE8;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221cefc
	if (ctx.cr0.eq) goto loc_8221CEFC;
	// bl 0x82d5d600
	ctx.lr = 0x8221CEF4;
	sub_82D5D600(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x8221cf04
	goto loc_8221CF04;
loc_8221CEFC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
loc_8221CF04:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f0,64(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 64, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221CF18;
	sub_82D5EA60(ctx, base);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822267e0
	ctx.lr = 0x8221CF2C;
	sub_822267E0(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r28,68
	ctx.r3.s64 = ctx.r28.s64 + 68;
	// bl 0x822103f8
	ctx.lr = 0x8221CF3C;
	sub_822103F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8221CF40:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CF48"))) PPC_WEAK_FUNC(sub_8221CF48);
PPC_FUNC_IMPL(__imp__sub_8221CF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221CF50;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8221ce68
	ctx.lr = 0x8221CF64;
	sub_8221CE68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221cf74
	if (!ctx.cr0.eq) goto loc_8221CF74;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221cfb8
	goto loc_8221CFB8;
loc_8221CF74:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-4048
	ctx.r4.s64 = ctx.r11.s64 + -4048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221CF88;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225f60
	ctx.lr = 0x8221CF94;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221cfac
	if (ctx.cr0.eq) goto loc_8221CFAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x8221CFA4;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221cfb0
	goto loc_8221CFB0;
loc_8221CFAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221CFB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,324(r29)
	PPC_STORE_U32(ctx.r29.u32 + 324, ctx.r11.u32);
loc_8221CFB8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CFC0"))) PPC_WEAK_FUNC(sub_8221CFC0);
PPC_FUNC_IMPL(__imp__sub_8221CFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8221CFC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,-4008
	ctx.r29.s64 = ctx.r11.s64 + -4008;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221CFF0;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225f60
	ctx.lr = 0x8221CFFC;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d010
	if (ctx.cr0.eq) goto loc_8221D010;
	// bl 0x82d5d600
	ctx.lr = 0x8221D008;
	sub_82D5D600(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x8221d018
	goto loc_8221D018;
loc_8221D010:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
loc_8221D018:
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// stfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221D02C;
	sub_82D5EA60(ctx, base);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822267e0
	ctx.lr = 0x8221D040;
	sub_822267E0(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// bl 0x822103f8
	ctx.lr = 0x8221D050;
	sub_822103F8(ctx, base);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221D060;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225f60
	ctx.lr = 0x8221D06C;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d084
	if (ctx.cr0.eq) goto loc_8221D084;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x8221D07C;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221d088
	goto loc_8221D088;
loc_8221D084:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221D088:
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221D09C;
	sub_82D5EA60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226148
	ctx.lr = 0x8221D0AC;
	sub_82226148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r11.u64);
	// bl 0x82d5ea60
	ctx.lr = 0x8221D0C4;
	sub_82D5EA60(ctx, base);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822267e0
	ctx.lr = 0x8221D0D8;
	sub_822267E0(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x822103f8
	ctx.lr = 0x8221D0E8;
	sub_822103F8(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D0F0"))) PPC_WEAK_FUNC(sub_8221D0F0);
PPC_FUNC_IMPL(__imp__sub_8221D0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8221D0F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-3756
	ctx.r28.s64 = ctx.r11.s64 + -3756;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x82225f60
	ctx.lr = 0x8221D130;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d148
	if (ctx.cr0.eq) goto loc_8221D148;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x8221D140;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221d14c
	goto loc_8221D14C;
loc_8221D148:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8221D14C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82225f60
	ctx.lr = 0x8221D15C;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d170
	if (ctx.cr0.eq) goto loc_8221D170;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x8221D16C;
	sub_830083A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8221D170:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D180"))) PPC_WEAK_FUNC(sub_8221D180);
PPC_FUNC_IMPL(__imp__sub_8221D180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8221D188;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221d1ac
	if (ctx.cr6.lt) goto loc_8221D1AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221d21c
	goto loc_8221D21C;
loc_8221D1AC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r31,r11,-3696
	ctx.r31.s64 = ctx.r11.s64 + -3696;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// bl 0x82d5ea60
	ctx.lr = 0x8221D1C4;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82225f60
	ctx.lr = 0x8221D1D0;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d1e8
	if (ctx.cr0.eq) goto loc_8221D1E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x8221D1E0;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221d1ec
	goto loc_8221D1EC;
loc_8221D1E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221D1EC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221D200;
	sub_82D5EA60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82226148
	ctx.lr = 0x8221D210;
	sub_82226148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_8221D21C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D228"))) PPC_WEAK_FUNC(sub_8221D228);
PPC_FUNC_IMPL(__imp__sub_8221D228) {
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
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lfs f0,21348(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8221d2a8
	if (!ctx.cr6.lt) goto loc_8221D2A8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8221d2a8
	if (!ctx.cr6.lt) goto loc_8221D2A8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r11,-3672
	ctx.r4.s64 = ctx.r11.s64 + -3672;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221D294;
	sub_82D5EA60(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8221cf48
	ctx.lr = 0x8221D2A4;
	sub_8221CF48(ctx, base);
	// b 0x8221d2ac
	goto loc_8221D2AC;
loc_8221D2A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221D2AC:
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

__attribute__((alias("__imp__sub_8221D2C8"))) PPC_WEAK_FUNC(sub_8221D2C8);
PPC_FUNC_IMPL(__imp__sub_8221D2C8) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-3580
	ctx.r4.s64 = ctx.r11.s64 + -3580;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82225f60
	ctx.lr = 0x8221D2F8;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d310
	if (ctx.cr0.eq) goto loc_8221D310;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x8221D308;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221d314
	goto loc_8221D314;
loc_8221D310:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221D314:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8221D330"))) PPC_WEAK_FUNC(sub_8221D330);
PPC_FUNC_IMPL(__imp__sub_8221D330) {
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
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lfs f0,21348(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221d384
	if (ctx.cr6.lt) goto loc_8221D384;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221d3ac
	goto loc_8221D3AC;
loc_8221D384:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r4,r11,-3568
	ctx.r4.s64 = ctx.r11.s64 + -3568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221D398;
	sub_82D5EA60(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8221cfc0
	ctx.lr = 0x8221D3A8;
	sub_8221CFC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8221D3AC:
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

__attribute__((alias("__imp__sub_8221D3C8"))) PPC_WEAK_FUNC(sub_8221D3C8);
PPC_FUNC_IMPL(__imp__sub_8221D3C8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,11056
	ctx.r10.s64 = ctx.r10.s64 + 11056;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r9,9656
	ctx.r9.s64 = ctx.r9.s64 + 9656;
	// addi r11,r31,300
	ctx.r11.s64 = ctx.r31.s64 + 300;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r9.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// sth r30,256(r31)
	PPC_STORE_U16(ctx.r31.u32 + 256, ctx.r30.u16);
	// stw r9,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r9.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// sth r30,276(r31)
	PPC_STORE_U16(ctx.r31.u32 + 276, ctx.r30.u16);
	// stw r9,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r9.u32);
	// addi r9,r10,640
	ctx.r9.s64 = ctx.r10.s64 + 640;
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// sth r30,296(r31)
	PPC_STORE_U16(ctx.r31.u32 + 296, ctx.r30.u16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bl 0x82d5cb60
	ctx.lr = 0x8221D448;
	sub_82D5CB60(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82d5cb60
	ctx.lr = 0x8221D458;
	sub_82D5CB60(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x82d5cb60
	ctx.lr = 0x8221D468;
	sub_82D5CB60(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// bl 0x82217ec8
	ctx.lr = 0x8221D474;
	sub_82217EC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d49c
	if (ctx.cr0.eq) goto loc_8221D49C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r11,10944
	ctx.r10.s64 = ctx.r11.s64 + 10944;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// b 0x8221d4a0
	goto loc_8221D4A0;
loc_8221D49C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8221D4A0:
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8221D4E8"))) PPC_WEAK_FUNC(sub_8221D4E8);
PPC_FUNC_IMPL(__imp__sub_8221D4E8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221d538
	ctx.lr = 0x8221D508;
	sub_8221D538(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d51c
	if (ctx.cr0.eq) goto loc_8221D51C;
	// li r4,960
	ctx.r4.s64 = 960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822138a8
	ctx.lr = 0x8221D51C;
	sub_822138A8(ctx, base);
loc_8221D51C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8221D538"))) PPC_WEAK_FUNC(sub_8221D538);
PPC_FUNC_IMPL(__imp__sub_8221D538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x8221D540;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,11056
	ctx.r11.s64 = ctx.r11.s64 + 11056;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,108
	ctx.r29.s64 = ctx.r31.s64 + 108;
	// lis r27,-31979
	ctx.r27.s64 = -2095775744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r28,r11,-3188
	ctx.r28.s64 = ctx.r11.s64 + -3188;
loc_8221D568:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d594
	if (ctx.cr6.eq) goto loc_8221D594;
	// lwz r3,-13976(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -13976);
	// addi r5,r28,-48
	ctx.r5.s64 = ctx.r28.s64 + -48;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221D594:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,21
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 21, ctx.xer);
	// blt cr6,0x8221d568
	if (ctx.cr6.lt) goto loc_8221D568;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,192
	ctx.r29.s64 = ctx.r31.s64 + 192;
loc_8221D5AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d5d8
	if (ctx.cr6.eq) goto loc_8221D5D8;
	// lwz r3,-13976(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -13976);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D5D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221D5D8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// blt cr6,0x8221d5ac
	if (ctx.cr6.lt) goto loc_8221D5AC;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d608
	if (ctx.cr0.eq) goto loc_8221D608;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221D608:
	// addi r11,r31,300
	ctx.r11.s64 = ctx.r31.s64 + 300;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8221d640
	if (ctx.cr0.eq) goto loc_8221D640;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221d640
	if (ctx.cr6.eq) goto loc_8221D640;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,80
	ctx.r10.s64 = 80;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 * 80;
	// bl 0x82213908
	ctx.lr = 0x8221D640;
	sub_82213908(ctx, base);
loc_8221D640:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,9832
	ctx.r11.s64 = ctx.r11.s64 + 9832;
	// addi r10,r10,9728
	ctx.r10.s64 = ctx.r10.s64 + 9728;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D668"))) PPC_WEAK_FUNC(sub_8221D668);
PPC_FUNC_IMPL(__imp__sub_8221D668) {
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
	// addi r11,r4,27
	ctx.r11.s64 = ctx.r4.s64 + 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d6a8
	if (ctx.cr0.eq) goto loc_8221D6A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D6A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221D6A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8221D6C8"))) PPC_WEAK_FUNC(sub_8221D6C8);
PPC_FUNC_IMPL(__imp__sub_8221D6C8) {
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
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d708
	if (ctx.cr0.eq) goto loc_8221D708;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221D708:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8221D728"))) PPC_WEAK_FUNC(sub_8221D728);
PPC_FUNC_IMPL(__imp__sub_8221D728) {
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
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8221d794
	if (ctx.cr6.lt) goto loc_8221D794;
	// beq cr6,0x8221d784
	if (ctx.cr6.eq) goto loc_8221D784;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// blt cr6,0x8221d778
	if (ctx.cr6.lt) goto loc_8221D778;
	// addi r3,r11,-784
	ctx.r3.s64 = ctx.r11.s64 + -784;
	// b 0x8221d7a0
	goto loc_8221D7A0;
loc_8221D778:
	// addi r11,r11,-784
	ctx.r11.s64 = ctx.r11.s64 + -784;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// b 0x8221d7a0
	goto loc_8221D7A0;
loc_8221D784:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-784
	ctx.r11.s64 = ctx.r11.s64 + -784;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x8221d7a0
	goto loc_8221D7A0;
loc_8221D794:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-784
	ctx.r11.s64 = ctx.r11.s64 + -784;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
loc_8221D7A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221D7B0"))) PPC_WEAK_FUNC(sub_8221D7B0);
PPC_FUNC_IMPL(__imp__sub_8221D7B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d7d0
	if (ctx.cr6.eq) goto loc_8221D7D0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8221D7D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221D7D8"))) PPC_WEAK_FUNC(sub_8221D7D8);
PPC_FUNC_IMPL(__imp__sub_8221D7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x8221D7E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-2716
	ctx.r29.s64 = ctx.r11.s64 + -2716;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r6,r11,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cmplwi cr6,r6,10000
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10000, ctx.xer);
	// ble cr6,0x8221d858
	if (!ctx.cr6.gt) goto loc_8221D858;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d858
	if (ctx.cr6.eq) goto loc_8221D858;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13976);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,-3140
	ctx.r5.s64 = ctx.r11.s64 + -3140;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221D858:
	// lwz r26,304(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r27,r30,300
	ctx.r27.s64 = ctx.r30.s64 + 300;
	// lwz r31,300(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// stw r28,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r28.u32);
	// b 0x8221d894
	goto loc_8221D894;
loc_8221D86C:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221d890
	if (ctx.cr0.eq) goto loc_8221D890;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221D890:
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
loc_8221D894:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8221d86c
	if (!ctx.cr6.eq) goto loc_8221D86C;
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r25,0(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplw cr6,r31,r31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8221d8d4
	if (ctx.cr6.eq) goto loc_8221D8D4;
loc_8221D8B4:
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8221D8C4;
	sub_82D5C630(ctx, base);
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
	// addi r26,r26,80
	ctx.r26.s64 = ctx.r26.s64 + 80;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8221d8b4
	if (!ctx.cr6.eq) goto loc_8221D8B4;
loc_8221D8D4:
	// subf r11,r25,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r25.s64;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r9,80
	ctx.r9.s64 = 80;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// li r30,16
	ctx.r30.s64 = 16;
	// mulli r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 * 80;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_8221D8F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d934
	if (ctx.cr6.eq) goto loc_8221D934;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221D934:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8221d8f8
	if (!ctx.cr0.eq) goto loc_8221D8F8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D960"))) PPC_WEAK_FUNC(sub_8221D960);
PPC_FUNC_IMPL(__imp__sub_8221D960) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221da7c
	if (!ctx.cr6.eq) goto loc_8221DA7C;
	// bl 0x8221a1c0
	ctx.lr = 0x8221D984;
	sub_8221A1C0(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,-13928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13928);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D9B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82213d68
	ctx.lr = 0x8221D9B8;
	sub_82213D68(ctx, base);
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D9D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,3480
	ctx.r3.s64 = 3480;
	// bl 0x82217ec8
	ctx.lr = 0x8221D9D8;
	sub_82217EC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d9ec
	if (ctx.cr0.eq) goto loc_8221D9EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82227428
	ctx.lr = 0x8221D9E8;
	sub_82227428(ctx, base);
	// b 0x8221d9f0
	goto loc_8221D9F0;
loc_8221D9EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221D9F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r3.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8221da04
	if (!ctx.cr6.eq) goto loc_8221DA04;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8221DA04:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DA18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r11,r11,-2708
	ctx.r11.s64 = ctx.r11.s64 + -2708;
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// bne 0x8221da48
	if (!ctx.cr0.eq) goto loc_8221DA48;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8221DA48:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
loc_8221DA50:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221da70
	if (ctx.cr6.eq) goto loc_8221DA70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8221da50
	if (ctx.cr6.lt) goto loc_8221DA50;
	// b 0x8221da7c
	goto loc_8221DA7C;
loc_8221DA70:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
loc_8221DA7C:
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

__attribute__((alias("__imp__sub_8221DA90"))) PPC_WEAK_FUNC(sub_8221DA90);
PPC_FUNC_IMPL(__imp__sub_8221DA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x8221DA98;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83012510
	ctx.lr = 0x8221DAA4;
	sub_83012510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x82d5e188
	ctx.lr = 0x8221DAB4;
	sub_82D5E188(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DAC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DAD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,3136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3136);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DAF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r3,-13928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13928);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DB10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r10,r10,20464
	ctx.r10.s64 = ctx.r10.s64 + 20464;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r10,r10,-9112
	ctx.r10.s64 = ctx.r10.s64 + -9112;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// beq cr6,0x8221dbdc
	if (ctx.cr6.eq) goto loc_8221DBDC;
	// bl 0x82d5c630
	ctx.lr = 0x8221DBA8;
	sub_82D5C630(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82d5c630
	ctx.lr = 0x8221DBB8;
	sub_82D5C630(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DBD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221dc60
	goto loc_8221DC60;
loc_8221DBDC:
	// bl 0x82d5c630
	ctx.lr = 0x8221DBE0;
	sub_82D5C630(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82d5c630
	ctx.lr = 0x8221DBF0;
	sub_82D5C630(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r11,-13920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13920);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221dc0c
	if (ctx.cr0.eq) goto loc_8221DC0C;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_8221DC0C:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82223f78
	ctx.lr = 0x8221DC20;
	sub_82223F78(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r31,r31,1068
	ctx.r31.s64 = ctx.r31.s64 + 1068;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DC60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221DC60:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221DC68"))) PPC_WEAK_FUNC(sub_8221DC68);
PPC_FUNC_IMPL(__imp__sub_8221DC68) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221dce4
	if (ctx.cr6.eq) goto loc_8221DCE4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r9,244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// sth r10,256(r31)
	PPC_STORE_U16(ctx.r31.u32 + 256, ctx.r10.u16);
	// lwz r3,3136(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3136);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DCB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,248
	ctx.r4.s64 = ctx.r31.s64 + 248;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DCD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221dd0c
	if (ctx.cr0.eq) goto loc_8221DD0C;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// b 0x8221dcf0
	goto loc_8221DCF0;
loc_8221DCE4:
	// li r10,-203
	ctx.r10.s64 = -203;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8221DCF0:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3136);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DD0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221DD0C:
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

__attribute__((alias("__imp__sub_8221DD20"))) PPC_WEAK_FUNC(sub_8221DD20);
PPC_FUNC_IMPL(__imp__sub_8221DD20) {
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
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221de7c
	if (!ctx.cr6.eq) goto loc_8221DE7C;
	// li r3,8096
	ctx.r3.s64 = 8096;
	// bl 0x82213d68
	ctx.lr = 0x8221DD4C;
	sub_82213D68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,3480
	ctx.r3.s64 = 3480;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// bl 0x82217ec8
	ctx.lr = 0x8221DD5C;
	sub_82217EC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221dd70
	if (ctx.cr0.eq) goto loc_8221DD70;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82227428
	ctx.lr = 0x8221DD6C;
	sub_82227428(ctx, base);
	// b 0x8221dd74
	goto loc_8221DD74;
loc_8221DD70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221DD74:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8221dd88
	if (!ctx.cr6.eq) goto loc_8221DD88;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8221DD88:
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DD9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r11,r11,-2704
	ctx.r11.s64 = ctx.r11.s64 + -2704;
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// bne 0x8221ddcc
	if (!ctx.cr0.eq) goto loc_8221DDCC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8221DDCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
loc_8221DDD4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221ddf4
	if (ctx.cr6.eq) goto loc_8221DDF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8221ddd4
	if (ctx.cr6.lt) goto loc_8221DDD4;
	// b 0x8221de00
	goto loc_8221DE00;
loc_8221DDF4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
loc_8221DE00:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82217ec8
	ctx.lr = 0x8221DE08;
	sub_82217EC8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8221de50
	if (ctx.cr0.eq) goto loc_8221DE50;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r11,r11,11188
	ctx.r11.s64 = ctx.r11.s64 + 11188;
	// addi r10,r10,12144
	ctx.r10.s64 = ctx.r10.s64 + 12144;
	// addi r9,r9,12248
	ctx.r9.s64 = ctx.r9.s64 + 12248;
	// lbz r8,-13936(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + -13936);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// bne 0x8221de54
	if (!ctx.cr0.eq) goto loc_8221DE54;
	// bl 0x82218210
	ctx.lr = 0x8221DE4C;
	sub_82218210(ctx, base);
	// b 0x8221de54
	goto loc_8221DE54;
loc_8221DE50:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221DE54:
	// li r3,23680
	ctx.r3.s64 = 23680;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// bl 0x82217ec8
	ctx.lr = 0x8221DE60;
	sub_82217EC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221de74
	if (ctx.cr0.eq) goto loc_8221DE74;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x8222a6d8
	ctx.lr = 0x8221DE70;
	sub_8222A6D8(ctx, base);
	// b 0x8221de78
	goto loc_8221DE78;
loc_8221DE74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221DE78:
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
loc_8221DE7C:
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

__attribute__((alias("__imp__sub_8221DE98"))) PPC_WEAK_FUNC(sub_8221DE98);
PPC_FUNC_IMPL(__imp__sub_8221DE98) {
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
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221df80
	if (ctx.cr6.eq) goto loc_8221DF80;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221dedc
	if (ctx.cr0.eq) goto loc_8221DEDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DEDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221DEDC:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// bl 0x8221d668
	ctx.lr = 0x8221DEF0;
	sub_8221D668(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// bne 0x8221df04
	if (!ctx.cr0.eq) goto loc_8221DF04;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8221DF04:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
loc_8221DF0C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221df2c
	if (ctx.cr6.eq) goto loc_8221DF2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8221df0c
	if (ctx.cr6.lt) goto loc_8221DF0C;
	// b 0x8221df38
	goto loc_8221DF38;
loc_8221DF2C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
loc_8221DF38:
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221df58
	if (ctx.cr0.eq) goto loc_8221DF58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DF58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221DF58:
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221df7c
	if (ctx.cr0.eq) goto loc_8221DF7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221DF7C:
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
loc_8221DF80:
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

__attribute__((alias("__imp__sub_8221DF98"))) PPC_WEAK_FUNC(sub_8221DF98);
PPC_FUNC_IMPL(__imp__sub_8221DF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x8221DFA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8221dd20
	ctx.lr = 0x8221DFAC;
	sub_8221DD20(ctx, base);
	// lwz r26,264(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,3136(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3136);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DFCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r3,-13928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13928);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DFF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e0bc
	if (ctx.cr6.eq) goto loc_8221E0BC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bgt cr6,0x8221e03c
	if (ctx.cr6.gt) goto loc_8221E03C;
	// li r27,13505
	ctx.r27.s64 = 13505;
loc_8221E03C:
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r10,r10,20464
	ctx.r10.s64 = ctx.r10.s64 + 20464;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r10,r10,-7656
	ctx.r10.s64 = ctx.r10.s64 + -7656;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x82d5c630
	ctx.lr = 0x8221E088;
	sub_82D5C630(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82d5c630
	ctx.lr = 0x8221E098;
	sub_82D5C630(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E0B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221e180
	goto loc_8221E180;
loc_8221E0BC:
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r10,r10,20464
	ctx.r10.s64 = ctx.r10.s64 + 20464;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r10,r10,-7656
	ctx.r10.s64 = ctx.r10.s64 + -7656;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x82d5c630
	ctx.lr = 0x8221E108;
	sub_82D5C630(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82d5c630
	ctx.lr = 0x8221E118;
	sub_82D5C630(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r11,-13920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13920);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221e138
	if (ctx.cr0.eq) goto loc_8221E138;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x8221e13c
	goto loc_8221E13C;
loc_8221E138:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8221E13C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r24,r11,1068
	ctx.r24.s64 = ctx.r11.s64 + 1068;
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221E180:
	// lwz r30,232(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stb r11,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r11.u8);
	// stw r26,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r26.u32);
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// stw r30,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r30.u32);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r30,76
	ctx.r29.s64 = ctx.r30.s64 + 76;
	// li r5,19600
	ctx.r5.s64 = 19600;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x8221E1C8;
	sub_82D5CB60(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222b7c0
	ctx.lr = 0x8221E1D8;
	sub_8222B7C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,100
	ctx.r3.s64 = 100;
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// bl 0x82b74b58
	ctx.lr = 0x8221E1E8;
	sub_82B74B58(ctx, base);
	// li r5,800
	ctx.r5.s64 = 800;
	// stw r31,19676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 19676, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,22880
	ctx.r3.s64 = ctx.r30.s64 + 22880;
	// bl 0x82d5cb60
	ctx.lr = 0x8221E1FC;
	sub_82D5CB60(ctx, base);
	// li r5,3200
	ctx.r5.s64 = 3200;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,19680
	ctx.r3.s64 = ctx.r30.s64 + 19680;
	// bl 0x82d5cb60
	ctx.lr = 0x8221E20C;
	sub_82D5CB60(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E218"))) PPC_WEAK_FUNC(sub_8221E218);
PPC_FUNC_IMPL(__imp__sub_8221E218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221E220;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// beq cr6,0x8221e280
	if (ctx.cr6.eq) goto loc_8221E280;
	// lwz r3,3136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3136);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r29,276(r31)
	PPC_STORE_U16(ctx.r31.u32 + 276, ctx.r29.u16);
	// addi r4,r31,268
	ctx.r4.s64 = ctx.r31.s64 + 268;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E27C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221e2a4
	goto loc_8221E2A4;
loc_8221E280:
	// li r10,-203
	ctx.r10.s64 = -203;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,3136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3136);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221E2A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E2B0"))) PPC_WEAK_FUNC(sub_8221E2B0);
PPC_FUNC_IMPL(__imp__sub_8221E2B0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221e3f8
	if (!ctx.cr6.eq) goto loc_8221E3F8;
	// li r3,8096
	ctx.r3.s64 = 8096;
	// bl 0x82213d68
	ctx.lr = 0x8221E2DC;
	sub_82213D68(ctx, base);
	// stw r3,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,3480
	ctx.r3.s64 = 3480;
	// bl 0x82217ec8
	ctx.lr = 0x8221E2FC;
	sub_82217EC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221e310
	if (ctx.cr0.eq) goto loc_8221E310;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82227428
	ctx.lr = 0x8221E30C;
	sub_82227428(ctx, base);
	// b 0x8221e314
	goto loc_8221E314;
loc_8221E310:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221E314:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r3.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8221e328
	if (!ctx.cr6.eq) goto loc_8221E328;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8221E328:
	// lwz r3,280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E33C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,284(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// lwz r9,280(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r11,r11,-2700
	ctx.r11.s64 = ctx.r11.s64 + -2700;
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,284(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// bne 0x8221e36c
	if (!ctx.cr0.eq) goto loc_8221E36C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8221E36C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
loc_8221E374:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221e394
	if (ctx.cr6.eq) goto loc_8221E394;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8221e374
	if (ctx.cr6.lt) goto loc_8221E374;
	// b 0x8221e3a0
	goto loc_8221E3A0;
loc_8221E394:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
loc_8221E3A0:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82217ec8
	ctx.lr = 0x8221E3A8;
	sub_82217EC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8221e3f0
	if (ctx.cr0.eq) goto loc_8221E3F0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r11,r11,11188
	ctx.r11.s64 = ctx.r11.s64 + 11188;
	// addi r10,r10,12520
	ctx.r10.s64 = ctx.r10.s64 + 12520;
	// addi r9,r9,12680
	ctx.r9.s64 = ctx.r9.s64 + 12680;
	// lbz r8,-13930(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + -13930);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bne 0x8221e3f4
	if (!ctx.cr0.eq) goto loc_8221E3F4;
	// bl 0x8221f2b0
	ctx.lr = 0x8221E3EC;
	sub_8221F2B0(ctx, base);
	// b 0x8221e3f4
	goto loc_8221E3F4;
loc_8221E3F0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221E3F4:
	// stw r31,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r31.u32);
loc_8221E3F8:
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

__attribute__((alias("__imp__sub_8221E410"))) PPC_WEAK_FUNC(sub_8221E410);
PPC_FUNC_IMPL(__imp__sub_8221E410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x8221E418;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8221e2b0
	ctx.lr = 0x8221E424;
	sub_8221E2B0(ctx, base);
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,3136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3136);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r3,-13928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13928);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,20464
	ctx.r10.s64 = ctx.r10.s64 + 20464;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-6744
	ctx.r10.s64 = ctx.r10.s64 + -6744;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// beq cr6,0x8221e528
	if (ctx.cr6.eq) goto loc_8221E528;
	// bl 0x82d5c630
	ctx.lr = 0x8221E4E8;
	sub_82D5C630(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82d5c630
	ctx.lr = 0x8221E4F8;
	sub_82D5C630(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bgt cr6,0x8221e504
	if (ctx.cr6.gt) goto loc_8221E504;
	// li r27,14300
	ctx.r27.s64 = 14300;
loc_8221E504:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221e59c
	goto loc_8221E59C;
loc_8221E528:
	// bl 0x82d5c630
	ctx.lr = 0x8221E52C;
	sub_82D5C630(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82d5c630
	ctx.lr = 0x8221E53C;
	sub_82D5C630(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r11,-13920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13920);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221e558
	if (ctx.cr0.eq) goto loc_8221E558;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_8221E558:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
	// addi r31,r31,1068
	ctx.r31.s64 = ctx.r31.s64 + 1068;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E57C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221E59C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E5A8"))) PPC_WEAK_FUNC(sub_8221E5A8);
PPC_FUNC_IMPL(__imp__sub_8221E5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221E5B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// beq cr6,0x8221e610
	if (ctx.cr6.eq) goto loc_8221E610;
	// lwz r3,3136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3136);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E5E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r29,296(r31)
	PPC_STORE_U16(ctx.r31.u32 + 296, ctx.r29.u16);
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221e634
	goto loc_8221E634;
loc_8221E610:
	// li r10,-203
	ctx.r10.s64 = -203;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,3136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3136);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221E634:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E640"))) PPC_WEAK_FUNC(sub_8221E640);
PPC_FUNC_IMPL(__imp__sub_8221E640) {
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
	// li r10,-205
	ctx.r10.s64 = -205;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221e698
	if (ctx.cr0.eq) goto loc_8221E698;
	// lwz r3,3136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3136);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221E698:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221e6d4
	if (ctx.cr0.eq) goto loc_8221E6D4;
	// lwz r3,3136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3136);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E6C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E6D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221E6D4:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221e710
	if (ctx.cr0.eq) goto loc_8221E710;
	// lwz r3,3136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3136);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221E710:
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

__attribute__((alias("__imp__sub_8221E728"))) PPC_WEAK_FUNC(sub_8221E728);
PPC_FUNC_IMPL(__imp__sub_8221E728) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E730"))) PPC_WEAK_FUNC(sub_8221E730);
PPC_FUNC_IMPL(__imp__sub_8221E730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8221E738;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8221e794
	if (ctx.cr6.eq) goto loc_8221E794;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r29,r3,72
	ctx.r29.s64 = ctx.r3.s64 + 72;
	// b 0x8221e78c
	goto loc_8221E78C;
loc_8221E760:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221e788
	if (ctx.cr0.eq) goto loc_8221E788;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221E788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221E788:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_8221E78C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8221e760
	if (ctx.cr6.lt) goto loc_8221E760;
loc_8221E794:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E7A0"))) PPC_WEAK_FUNC(sub_8221E7A0);
PPC_FUNC_IMPL(__imp__sub_8221E7A0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// b 0x8221e7bc
	goto loc_8221E7BC;
loc_8221E7AC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221e7c8
	if (ctx.cr6.eq) goto loc_8221E7C8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8221E7BC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8221e7ac
	if (ctx.cr6.lt) goto loc_8221E7AC;
	// blr 
	return;
loc_8221E7C8:
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E7D8"))) PPC_WEAK_FUNC(sub_8221E7D8);
PPC_FUNC_IMPL(__imp__sub_8221E7D8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// b 0x8221e7f4
	goto loc_8221E7F4;
loc_8221E7E4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8221e800
	if (ctx.cr6.eq) goto loc_8221E800;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8221E7F4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8221e7e4
	if (ctx.cr6.lt) goto loc_8221E7E4;
	// blr 
	return;
loc_8221E800:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E810"))) PPC_WEAK_FUNC(sub_8221E810);
PPC_FUNC_IMPL(__imp__sub_8221E810) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15788
	ctx.r11.s64 = ctx.r11.s64 + 15788;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8221e840
	if (ctx.cr0.eq) goto loc_8221E840;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x822138a8
	ctx.lr = 0x8221E840;
	sub_822138A8(ctx, base);
loc_8221E840:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8221E858"))) PPC_WEAK_FUNC(sub_8221E858);
PPC_FUNC_IMPL(__imp__sub_8221E858) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226848
	ctx.lr = 0x8221E87C;
	sub_82226848(ctx, base);
	// lis r11,29557
	ctx.r11.s64 = 1937047552;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r10,r11,25203
	ctx.r10.u64 = ctx.r11.u64 | 25203;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6596
	ctx.r4.s64 = ctx.r11.s64 + 6596;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x8221E89C;
	sub_822261F8(ctx, base);
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

__attribute__((alias("__imp__sub_8221E8B8"))) PPC_WEAK_FUNC(sub_8221E8B8);
PPC_FUNC_IMPL(__imp__sub_8221E8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221E8C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-3448
	ctx.r11.s64 = ctx.r11.s64 + -3448;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221e858
	ctx.lr = 0x8221E8E0;
	sub_8221E858(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,6712
	ctx.r4.s64 = ctx.r11.s64 + 6712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221E8F4;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221e910
	if (ctx.cr6.eq) goto loc_8221E910;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,6836
	ctx.r4.s64 = ctx.r11.s64 + 6836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221E910;
	sub_822261F8(ctx, base);
loc_8221E910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E918"))) PPC_WEAK_FUNC(sub_8221E918);
PPC_FUNC_IMPL(__imp__sub_8221E918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221E920;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-3436
	ctx.r11.s64 = ctx.r11.s64 + -3436;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221e858
	ctx.lr = 0x8221E940;
	sub_8221E858(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8664
	ctx.r4.s64 = ctx.r11.s64 + 8664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221E954;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221e970
	if (ctx.cr6.eq) goto loc_8221E970;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,6836
	ctx.r4.s64 = ctx.r11.s64 + 6836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221E970;
	sub_822261F8(ctx, base);
loc_8221E970:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E978"))) PPC_WEAK_FUNC(sub_8221E978);
PPC_FUNC_IMPL(__imp__sub_8221E978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221E980;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-3424
	ctx.r11.s64 = ctx.r11.s64 + -3424;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221e858
	ctx.lr = 0x8221E9A0;
	sub_8221E858(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8676
	ctx.r4.s64 = ctx.r11.s64 + 8676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221E9B4;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221e9d0
	if (ctx.cr6.eq) goto loc_8221E9D0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,6836
	ctx.r4.s64 = ctx.r11.s64 + 6836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221E9D0;
	sub_822261F8(ctx, base);
loc_8221E9D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E9D8"))) PPC_WEAK_FUNC(sub_8221E9D8);
PPC_FUNC_IMPL(__imp__sub_8221E9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x8221E9E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-3412
	ctx.r11.s64 = ctx.r11.s64 + -3412;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x8221e858
	ctx.lr = 0x8221EA0C;
	sub_8221E858(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8676
	ctx.r4.s64 = ctx.r11.s64 + 8676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221EA20;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8696
	ctx.r4.s64 = ctx.r11.s64 + 8696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221EA34;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,8712
	ctx.r4.s64 = ctx.r11.s64 + 8712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221EA48;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,8728
	ctx.r4.s64 = ctx.r11.s64 + 8728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221EA5C;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8756
	ctx.r4.s64 = ctx.r11.s64 + 8756;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221EA70;
	sub_82225FF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EA78"))) PPC_WEAK_FUNC(sub_8221EA78);
PPC_FUNC_IMPL(__imp__sub_8221EA78) {
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
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-3400
	ctx.r11.s64 = ctx.r11.s64 + -3400;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221e858
	ctx.lr = 0x8221EAA4;
	sub_8221E858(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8664
	ctx.r4.s64 = ctx.r11.s64 + 8664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221EAB8;
	sub_822261F8(ctx, base);
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

__attribute__((alias("__imp__sub_8221EAD0"))) PPC_WEAK_FUNC(sub_8221EAD0);
PPC_FUNC_IMPL(__imp__sub_8221EAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221EAD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-3388
	ctx.r11.s64 = ctx.r11.s64 + -3388;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221e858
	ctx.lr = 0x8221EAF8;
	sub_8221E858(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8664
	ctx.r4.s64 = ctx.r11.s64 + 8664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221EB0C;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221eb28
	if (ctx.cr6.eq) goto loc_8221EB28;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,6836
	ctx.r4.s64 = ctx.r11.s64 + 6836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221EB28;
	sub_822261F8(ctx, base);
loc_8221EB28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EB30"))) PPC_WEAK_FUNC(sub_8221EB30);
PPC_FUNC_IMPL(__imp__sub_8221EB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221EB38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-3376
	ctx.r11.s64 = ctx.r11.s64 + -3376;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221e858
	ctx.lr = 0x8221EB58;
	sub_8221E858(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8768
	ctx.r4.s64 = ctx.r11.s64 + 8768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221EB6C;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221eb88
	if (ctx.cr6.eq) goto loc_8221EB88;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,6836
	ctx.r4.s64 = ctx.r11.s64 + 6836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221EB88;
	sub_822261F8(ctx, base);
loc_8221EB88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EB90"))) PPC_WEAK_FUNC(sub_8221EB90);
PPC_FUNC_IMPL(__imp__sub_8221EB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221EB98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-3364
	ctx.r11.s64 = ctx.r11.s64 + -3364;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221e858
	ctx.lr = 0x8221EBB8;
	sub_8221E858(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8664
	ctx.r4.s64 = ctx.r11.s64 + 8664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221EBCC;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// addi r4,r11,8784
	ctx.r4.s64 = ctx.r11.s64 + 8784;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82225ff0
	ctx.lr = 0x8221EBEC;
	sub_82225FF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EBF8"))) PPC_WEAK_FUNC(sub_8221EBF8);
PPC_FUNC_IMPL(__imp__sub_8221EBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r11,r11,-3340
	ctx.r11.s64 = ctx.r11.s64 + -3340;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8221e858
	sub_8221E858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EC08"))) PPC_WEAK_FUNC(sub_8221EC08);
PPC_FUNC_IMPL(__imp__sub_8221EC08) {
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
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-3352
	ctx.r11.s64 = ctx.r11.s64 + -3352;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221e858
	ctx.lr = 0x8221EC34;
	sub_8221E858(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8664
	ctx.r4.s64 = ctx.r11.s64 + 8664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221EC48;
	sub_822261F8(ctx, base);
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

__attribute__((alias("__imp__sub_8221EC60"))) PPC_WEAK_FUNC(sub_8221EC60);
PPC_FUNC_IMPL(__imp__sub_8221EC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,6596
	ctx.r4.s64 = ctx.r11.s64 + 6596;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822267e0
	ctx.lr = 0x8221EC84;
	sub_822267E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221ece8
	if (ctx.cr0.eq) goto loc_8221ECE8;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r11,r11,-5928
	ctx.r11.s64 = ctx.r11.s64 + -5928;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221ece8
	if (ctx.cr6.eq) goto loc_8221ECE8;
loc_8221ECA4:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8221ECAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221ecd0
	if (ctx.cr0.eq) goto loc_8221ECD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221ecac
	if (ctx.cr6.eq) goto loc_8221ECAC;
loc_8221ECD0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8221ecfc
	if (ctx.cr0.eq) goto loc_8221ECFC;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8221eca4
	if (!ctx.cr0.eq) goto loc_8221ECA4;
loc_8221ECE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221ECEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221ECFC:
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x8221ecec
	goto loc_8221ECEC;
}

__attribute__((alias("__imp__sub_8221ED08"))) PPC_WEAK_FUNC(sub_8221ED08);
PPC_FUNC_IMPL(__imp__sub_8221ED08) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r30,r11,-2768
	ctx.r30.s64 = ctx.r11.s64 + -2768;
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82225f60
	ctx.lr = 0x8221ED38;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221ed50
	if (ctx.cr0.eq) goto loc_8221ED50;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x8221ED48;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221ed54
	goto loc_8221ED54;
loc_8221ED50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221ED54:
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,128
	ctx.r6.s64 = 128;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// bl 0x822267e0
	ctx.lr = 0x8221ED6C;
	sub_822267E0(ctx, base);
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// li r6,128
	ctx.r6.s64 = 128;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r31,136
	ctx.r5.s64 = ctx.r31.s64 + 136;
	// bl 0x822267e0
	ctx.lr = 0x8221ED80;
	sub_822267E0(ctx, base);
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82225f60
	ctx.lr = 0x8221ED8C;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221eda4
	if (ctx.cr0.eq) goto loc_8221EDA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x8221ED9C;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221eda8
	goto loc_8221EDA8;
loc_8221EDA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221EDA8:
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// addi r5,r31,268
	ctx.r5.s64 = ctx.r31.s64 + 268;
	// bl 0x822267e0
	ctx.lr = 0x8221EDC0;
	sub_822267E0(ctx, base);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r31,284
	ctx.r5.s64 = ctx.r31.s64 + 284;
	// bl 0x822267e0
	ctx.lr = 0x8221EDD4;
	sub_822267E0(ctx, base);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r31,300
	ctx.r5.s64 = ctx.r31.s64 + 300;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822267e0
	ctx.lr = 0x8221EDE8;
	sub_822267E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8221EE08"))) PPC_WEAK_FUNC(sub_8221EE08);
PPC_FUNC_IMPL(__imp__sub_8221EE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8221EE10;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f31,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82a39b30
	ctx.lr = 0x8221EE30;
	sub_82A39B30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8221ee50
	if (!ctx.cr0.eq) goto loc_8221EE50;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,21352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21352);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8221EE50:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82d5cb60
	ctx.lr = 0x8221EE68;
	sub_82D5CB60(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// addi r30,r11,-2056
	ctx.r30.s64 = ctx.r11.s64 + -2056;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// bl 0x82d5ea60
	ctx.lr = 0x8221EE88;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,18500
	ctx.r10.s64 = 1212416000;
	// lis r5,18500
	ctx.r5.s64 = 1212416000;
	// ori r28,r10,22354
	ctx.r28.u64 = ctx.r10.u64 | 22354;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r5,r5,21328
	ctx.r5.u64 = ctx.r5.u64 | 21328;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221EEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82b4d2a0
	ctx.lr = 0x8221EEBC;
	sub_82B4D2A0(ctx, base);
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221eec8
	if (ctx.cr0.eq) goto loc_8221EEC8;
	// addi r29,r30,-52
	ctx.r29.s64 = ctx.r30.s64 + -52;
loc_8221EEC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,21328
	ctx.r5.s64 = 1397751808;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r5,r5,17732
	ctx.r5.u64 = ctx.r5.u64 | 17732;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221EEEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82b4d2a0
	ctx.lr = 0x8221EEF4;
	sub_82B4D2A0(ctx, base);
	// rlwinm. r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221ef04
	if (ctx.cr0.eq) goto loc_8221EF04;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8221ef10
	goto loc_8221EF10;
loc_8221EF04:
	// rlwinm. r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221ef10
	if (ctx.cr0.eq) goto loc_8221EF10;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8221EF10:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r6,r30,-116
	ctx.r6.s64 = ctx.r30.s64 + -116;
	// bne 0x8221ef20
	if (!ctx.cr0.eq) goto loc_8221EF20;
	// addi r6,r30,-108
	ctx.r6.s64 = ctx.r30.s64 + -108;
loc_8221EF20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,17493
	ctx.r5.s64 = 1146421248;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r5,r5,20549
	ctx.r5.u64 = ctx.r5.u64 | 20549;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221EF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8308a9e4
	ctx.lr = 0x8221EF48;
	__imp__XGetVideoMode(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r6,r30,-100
	ctx.r6.s64 = ctx.r30.s64 + -100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221ef5c
	if (!ctx.cr6.eq) goto loc_8221EF5C;
	// addi r6,r30,-96
	ctx.r6.s64 = ctx.r30.s64 + -96;
loc_8221EF5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,21315
	ctx.r5.s64 = 1396899840;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r5,r5,21070
	ctx.r5.u64 = ctx.r5.u64 | 21070;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221EF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8308a9e4
	ctx.lr = 0x8221EF84;
	__imp__XGetVideoMode(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r29,r11,-2684
	ctx.r29.s64 = ctx.r11.s64 + -2684;
	// rlwinm r11,r10,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r11,112
	ctx.r6.s64 = ctx.r11.s64 + 112;
	// bl 0x82d5ea60
	ctx.lr = 0x8221EFB0;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,18500
	ctx.r5.s64 = 1212416000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r5,r5,21590
	ctx.r5.u64 = ctx.r5.u64 | 21590;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221EFD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r30,-24
	ctx.r29.s64 = ctx.r30.s64 + -24;
	// bl 0x8308b874
	ctx.lr = 0x8221EFE0;
	__imp__XAudioGetSpeakerConfig(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8221f000
	if (!ctx.cr0.eq) goto loc_8221F000;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r29,r30,-12
	ctx.r29.s64 = ctx.r30.s64 + -12;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221f000
	if (ctx.cr6.eq) goto loc_8221F000;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8221F000:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,16725
	ctx.r5.s64 = 1096089600;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r5,r5,17481
	ctx.r5.u64 = ctx.r5.u64 | 17481;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221f060
	ctx.lr = 0x8221F030;
	sub_8221F060(ctx, base);
	// lis r5,19521
	ctx.r5.s64 = 1279328256;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r5,r5,20039
	ctx.r5.u64 = ctx.r5.u64 | 20039;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F060"))) PPC_WEAK_FUNC(sub_8221F060);
PPC_FUNC_IMPL(__imp__sub_8221F060) {
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
	// bl 0x82a399b0
	ctx.lr = 0x8221F070;
	sub_82A399B0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8221f164
	if (ctx.cr6.gt) goto loc_8221F164;
	// lis r12,-32230
	ctx.r12.s64 = -2112225280;
	// addi r12,r12,5464
	ctx.r12.s64 = ctx.r12.s64 + 5464;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-3932
	ctx.r12.s64 = ctx.r12.s64 + -3932;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8221F0A4;
	case 1:
		goto loc_8221F0B4;
	case 2:
		goto loc_8221F0C4;
	case 3:
		goto loc_8221F0D4;
	case 4:
		goto loc_8221F0E4;
	case 5:
		goto loc_8221F0F4;
	case 6:
		goto loc_8221F104;
	case 7:
		goto loc_8221F114;
	case 8:
		goto loc_8221F134;
	case 9:
		goto loc_8221F124;
	case 10:
		goto loc_8221F144;
	case 11:
		goto loc_8221F154;
	default:
		__builtin_unreachable();
	}
loc_8221F0A4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-1924
	ctx.r11.s64 = ctx.r11.s64 + -1924;
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// b 0x8221f16c
	goto loc_8221F16C;
loc_8221F0B4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-1924
	ctx.r11.s64 = ctx.r11.s64 + -1924;
	// addi r3,r11,-104
	ctx.r3.s64 = ctx.r11.s64 + -104;
	// b 0x8221f16c
	goto loc_8221F16C;
loc_8221F0C4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-1924
	ctx.r11.s64 = ctx.r11.s64 + -1924;
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// b 0x8221f16c
	goto loc_8221F16C;
loc_8221F0D4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-1924
	ctx.r11.s64 = ctx.r11.s64 + -1924;
	// addi r3,r11,-84
	ctx.r3.s64 = ctx.r11.s64 + -84;
	// b 0x8221f16c
	goto loc_8221F16C;
loc_8221F0E4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-1924
	ctx.r11.s64 = ctx.r11.s64 + -1924;
	// addi r3,r11,-76
	ctx.r3.s64 = ctx.r11.s64 + -76;
	// b 0x8221f16c
	goto loc_8221F16C;
loc_8221F0F4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-1924
	ctx.r11.s64 = ctx.r11.s64 + -1924;
	// addi r3,r11,-68
	ctx.r3.s64 = ctx.r11.s64 + -68;
	// b 0x8221f16c
	goto loc_8221F16C;
loc_8221F104:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-1924
	ctx.r11.s64 = ctx.r11.s64 + -1924;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// b 0x8221f16c
	goto loc_8221F16C;
loc_8221F114:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-1924
	ctx.r11.s64 = ctx.r11.s64 + -1924;
	// addi r3,r11,-52
	ctx.r3.s64 = ctx.r11.s64 + -52;
	// b 0x8221f16c
	goto loc_8221F16C;
loc_8221F124:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-1924
	ctx.r11.s64 = ctx.r11.s64 + -1924;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// b 0x8221f16c
	goto loc_8221F16C;
loc_8221F134:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-1924
	ctx.r11.s64 = ctx.r11.s64 + -1924;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// b 0x8221f16c
	goto loc_8221F16C;
loc_8221F144:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-1924
	ctx.r11.s64 = ctx.r11.s64 + -1924;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// b 0x8221f16c
	goto loc_8221F16C;
loc_8221F154:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-1924
	ctx.r11.s64 = ctx.r11.s64 + -1924;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x8221f16c
	goto loc_8221F16C;
loc_8221F164:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-1924
	ctx.r3.s64 = ctx.r11.s64 + -1924;
loc_8221F16C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F180"))) PPC_WEAK_FUNC(sub_8221F180);
PPC_FUNC_IMPL(__imp__sub_8221F180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8221F188;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-13980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13980);
	// lwz r31,224(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8221f1fc
	if (ctx.cr0.eq) goto loc_8221F1FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d5cb60
	ctx.lr = 0x8221F1C4;
	sub_82D5CB60(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-2204
	ctx.r4.s64 = ctx.r11.s64 + -2204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8221F1D8;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F1F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221f200
	goto loc_8221F200;
loc_8221F1FC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8221F200:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F208"))) PPC_WEAK_FUNC(sub_8221F208);
PPC_FUNC_IMPL(__imp__sub_8221F208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,-13980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13980);
	// lwz r31,224(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8221f294
	if (ctx.cr0.eq) goto loc_8221F294;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d5cb60
	ctx.lr = 0x8221F24C;
	sub_82D5CB60(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// addi r4,r11,-2200
	ctx.r4.s64 = ctx.r11.s64 + -2200;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82d5ea60
	ctx.lr = 0x8221F268;
	sub_82D5EA60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,17993
	ctx.r5.s64 = 1179189248;
	// lis r4,20558
	ctx.r4.s64 = 1347289088;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,21571
	ctx.r5.u64 = ctx.r5.u64 | 21571;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r4,r4,20311
	ctx.r4.u64 = ctx.r4.u64 | 20311;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221f298
	goto loc_8221F298;
loc_8221F294:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8221F298:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F2B0"))) PPC_WEAK_FUNC(sub_8221F2B0);
PPC_FUNC_IMPL(__imp__sub_8221F2B0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x8221F2B8;
	__savegprlr_22(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r11,r11,-30606
	ctx.r11.s64 = ctx.r11.s64 + -30606;
	// addi r10,r10,-3328
	ctx.r10.s64 = ctx.r10.s64 + -3328;
	// addi r9,r11,28890
	ctx.r9.s64 = ctx.r11.s64 + 28890;
	// addi r8,r11,28890
	ctx.r8.s64 = ctx.r11.s64 + 28890;
	// addi r7,r11,28890
	ctx.r7.s64 = ctx.r11.s64 + 28890;
	// addi r6,r11,28890
	ctx.r6.s64 = ctx.r11.s64 + 28890;
	// addi r5,r11,28890
	ctx.r5.s64 = ctx.r11.s64 + 28890;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lis r9,17231
	ctx.r9.s64 = 1129250816;
	// addi r4,r11,28890
	ctx.r4.s64 = ctx.r11.s64 + 28890;
	// ori r9,r9,20046
	ctx.r9.u64 = ctx.r9.u64 | 20046;
	// addi r3,r11,28890
	ctx.r3.s64 = ctx.r11.s64 + 28890;
	// addi r31,r11,28890
	ctx.r31.s64 = ctx.r11.s64 + 28890;
	// addi r30,r11,28890
	ctx.r30.s64 = ctx.r11.s64 + 28890;
	// addi r29,r11,28890
	ctx.r29.s64 = ctx.r11.s64 + 28890;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21843
	ctx.r9.s64 = 1431502848;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17746
	ctx.r9.u64 = ctx.r9.u64 | 17746;
	// addi r10,r10,-3316
	ctx.r10.s64 = ctx.r10.s64 + -3316;
	// addi r28,r11,28890
	ctx.r28.s64 = ctx.r11.s64 + 28890;
	// addi r27,r11,28890
	ctx.r27.s64 = ctx.r11.s64 + 28890;
	// addi r26,r11,28890
	ctx.r26.s64 = ctx.r11.s64 + 28890;
	// addi r25,r11,28890
	ctx.r25.s64 = ctx.r11.s64 + 28890;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r24,r11,28890
	ctx.r24.s64 = ctx.r11.s64 + 28890;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21068
	ctx.r9.s64 = 1380712448;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// addi r10,r10,-3304
	ctx.r10.s64 = ctx.r10.s64 + -3304;
	// addi r23,r11,28890
	ctx.r23.s64 = ctx.r11.s64 + 28890;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21060
	ctx.r9.s64 = 1380188160;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,16724
	ctx.r9.u64 = ctx.r9.u64 | 16724;
	// addi r10,r10,-3292
	ctx.r10.s64 = ctx.r10.s64 + -3292;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,19532
	ctx.r9.s64 = 1280049152;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// addi r10,r10,-3280
	ctx.r10.s64 = ctx.r10.s64 + -3280;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,19524
	ctx.r9.s64 = 1279524864;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,16724
	ctx.r9.u64 = ctx.r9.u64 | 16724;
	// addi r10,r10,-3268
	ctx.r10.s64 = ctx.r10.s64 + -3268;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18252
	ctx.r9.s64 = 1196163072;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// addi r10,r10,-3256
	ctx.r10.s64 = ctx.r10.s64 + -3256;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18244
	ctx.r9.s64 = 1195638784;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,16724
	ctx.r9.u64 = ctx.r9.u64 | 16724;
	// addi r10,r10,-3244
	ctx.r10.s64 = ctx.r10.s64 + -3244;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18244
	ctx.r9.s64 = 1195638784;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17748
	ctx.r9.u64 = ctx.r9.u64 | 17748;
	// addi r10,r10,-3232
	ctx.r10.s64 = ctx.r10.s64 + -3232;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,20548
	ctx.r9.s64 = 1346633728;
	// addi r10,r10,-3220
	ctx.r10.s64 = ctx.r10.s64 + -3220;
	// ori r9,r9,16724
	ctx.r9.u64 = ctx.r9.u64 | 16724;
	// addi r8,r11,28890
	ctx.r8.s64 = ctx.r11.s64 + 28890;
	// addi r7,r11,28890
	ctx.r7.s64 = ctx.r11.s64 + 28890;
	// addi r6,r11,28890
	ctx.r6.s64 = ctx.r11.s64 + 28890;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// addi r5,r11,28890
	ctx.r5.s64 = ctx.r11.s64 + 28890;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17223
	ctx.r9.s64 = 1128726528;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,16717
	ctx.r9.u64 = ctx.r9.u64 | 16717;
	// addi r10,r10,-3208
	ctx.r10.s64 = ctx.r10.s64 + -3208;
	// addi r4,r11,28890
	ctx.r4.s64 = ctx.r11.s64 + 28890;
	// addi r3,r11,28890
	ctx.r3.s64 = ctx.r11.s64 + 28890;
	// addi r31,r11,28890
	ctx.r31.s64 = ctx.r11.s64 + 28890;
	// addi r30,r11,28890
	ctx.r30.s64 = ctx.r11.s64 + 28890;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// addi r29,r11,28890
	ctx.r29.s64 = ctx.r11.s64 + 28890;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21831
	ctx.r9.s64 = 1430716416;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,16717
	ctx.r9.u64 = ctx.r9.u64 | 16717;
	// addi r10,r10,-3196
	ctx.r10.s64 = ctx.r10.s64 + -3196;
	// addi r28,r11,28890
	ctx.r28.s64 = ctx.r11.s64 + 28890;
	// addi r22,r11,28890
	ctx.r22.s64 = ctx.r11.s64 + 28890;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// addi r27,r11,28890
	ctx.r27.s64 = ctx.r11.s64 + 28890;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21831
	ctx.r9.s64 = 1430716416;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17477
	ctx.r9.u64 = ctx.r9.u64 | 17477;
	// addi r10,r10,-3184
	ctx.r10.s64 = ctx.r10.s64 + -3184;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// addi r26,r11,28890
	ctx.r26.s64 = ctx.r11.s64 + 28890;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21840
	ctx.r9.s64 = 1431306240;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,19521
	ctx.r9.u64 = ctx.r9.u64 | 19521;
	// addi r10,r10,-3172
	ctx.r10.s64 = ctx.r10.s64 + -3172;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// addi r25,r11,28890
	ctx.r25.s64 = ctx.r11.s64 + 28890;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21826
	ctx.r9.s64 = 1430388736;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21057
	ctx.r9.u64 = ctx.r9.u64 | 21057;
	// addi r10,r10,-3160
	ctx.r10.s64 = ctx.r10.s64 + -3160;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// addi r24,r11,28890
	ctx.r24.s64 = ctx.r11.s64 + 28890;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17735
	ctx.r9.s64 = 1162280960;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,16717
	ctx.r9.u64 = ctx.r9.u64 | 16717;
	// addi r10,r10,-3148
	ctx.r10.s64 = ctx.r10.s64 + -3148;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// addi r23,r11,28890
	ctx.r23.s64 = ctx.r11.s64 + 28890;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r9,r11,28890
	ctx.r9.s64 = ctx.r11.s64 + 28890;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-3136
	ctx.r10.s64 = ctx.r10.s64 + -3136;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lis r9,17735
	ctx.r9.s64 = 1162280960;
	// ori r9,r9,17735
	ctx.r9.u64 = ctx.r9.u64 | 17735;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17731
	ctx.r9.s64 = 1162018816;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,20044
	ctx.r9.u64 = ctx.r9.u64 | 20044;
	// addi r10,r10,-3124
	ctx.r10.s64 = ctx.r10.s64 + -3124;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,17735
	ctx.r9.s64 = 1162280960;
	// addi r10,r10,-3112
	ctx.r10.s64 = ctx.r10.s64 + -3112;
	// ori r9,r9,21073
	ctx.r9.u64 = ctx.r9.u64 | 21073;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17735
	ctx.r9.s64 = 1162280960;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21075
	ctx.r9.u64 = ctx.r9.u64 | 21075;
	// addi r10,r10,-3100
	ctx.r10.s64 = ctx.r10.s64 + -3100;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20812
	ctx.r9.s64 = 1363935232;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17742
	ctx.r9.u64 = ctx.r9.u64 | 17742;
	// addi r10,r10,-3088
	ctx.r10.s64 = ctx.r10.s64 + -3088;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20549
	ctx.r9.s64 = 1346699264;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,20052
	ctx.r9.u64 = ctx.r9.u64 | 20052;
	// addi r10,r10,-3076
	ctx.r10.s64 = ctx.r10.s64 + -3076;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20556
	ctx.r9.s64 = 1347158016;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,22100
	ctx.r9.u64 = ctx.r9.u64 | 22100;
	// addi r10,r10,-3064
	ctx.r10.s64 = ctx.r10.s64 + -3064;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21063
	ctx.r9.s64 = 1380384768;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,16717
	ctx.r9.u64 = ctx.r9.u64 | 16717;
	// addi r10,r10,-3052
	ctx.r10.s64 = ctx.r10.s64 + -3052;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20553
	ctx.r9.s64 = 1346961408;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,20039
	ctx.r9.u64 = ctx.r9.u64 | 20039;
	// addi r10,r10,-3040
	ctx.r10.s64 = ctx.r10.s64 + -3040;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18511
	ctx.r9.s64 = 1213136896;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,19783
	ctx.r9.u64 = ctx.r9.u64 | 19783;
	// addi r10,r10,-3028
	ctx.r10.s64 = ctx.r10.s64 + -3028;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18509
	ctx.r9.s64 = 1213005824;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21073
	ctx.r9.u64 = ctx.r9.u64 | 21073;
	// addi r10,r10,-3016
	ctx.r10.s64 = ctx.r10.s64 + -3016;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,19273
	ctx.r9.s64 = 1263075328;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17227
	ctx.r9.u64 = ctx.r9.u64 | 17227;
	// addi r10,r10,-3004
	ctx.r10.s64 = ctx.r10.s64 + -3004;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18258
	ctx.r9.s64 = 1196556288;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17741
	ctx.r9.u64 = ctx.r9.u64 | 17741;
	// addi r10,r10,-2992
	ctx.r10.s64 = ctx.r10.s64 + -2992;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,19271
	ctx.r9.s64 = 1262944256;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,16717
	ctx.r9.u64 = ctx.r9.u64 | 16717;
	// addi r10,r10,-2980
	ctx.r10.s64 = ctx.r10.s64 + -2980;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,16706
	ctx.r9.s64 = 1094844416;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21843
	ctx.r9.u64 = ctx.r9.u64 | 21843;
	// addi r10,r10,-2968
	ctx.r10.s64 = ctx.r10.s64 + -2968;
	// addi r8,r11,28890
	ctx.r8.s64 = ctx.r11.s64 + 28890;
	// addi r7,r11,28890
	ctx.r7.s64 = ctx.r11.s64 + 28890;
	// addi r6,r11,28890
	ctx.r6.s64 = ctx.r11.s64 + 28890;
	// addi r5,r11,28890
	ctx.r5.s64 = ctx.r11.s64 + 28890;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// addi r4,r11,28890
	ctx.r4.s64 = ctx.r11.s64 + 28890;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17481
	ctx.r9.s64 = 1145634816;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21315
	ctx.r9.u64 = ctx.r9.u64 | 21315;
	// addi r10,r10,-2956
	ctx.r10.s64 = ctx.r10.s64 + -2956;
	// addi r3,r11,28890
	ctx.r3.s64 = ctx.r11.s64 + 28890;
	// addi r31,r11,28890
	ctx.r31.s64 = ctx.r11.s64 + 28890;
	// addi r30,r11,28890
	ctx.r30.s64 = ctx.r11.s64 + 28890;
	// addi r29,r11,28890
	ctx.r29.s64 = ctx.r11.s64 + 28890;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// addi r28,r11,28890
	ctx.r28.s64 = ctx.r11.s64 + 28890;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21061
	ctx.r9.s64 = 1380253696;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21334
	ctx.r9.u64 = ctx.r9.u64 | 21334;
	// addi r10,r10,-2944
	ctx.r10.s64 = ctx.r10.s64 + -2944;
	// addi r27,r11,28890
	ctx.r27.s64 = ctx.r11.s64 + 28890;
	// addi r26,r11,28890
	ctx.r26.s64 = ctx.r11.s64 + 28890;
	// addi r25,r11,28890
	ctx.r25.s64 = ctx.r11.s64 + 28890;
	// addi r24,r11,28890
	ctx.r24.s64 = ctx.r11.s64 + 28890;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// addi r23,r11,28890
	ctx.r23.s64 = ctx.r11.s64 + 28890;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,19269
	ctx.r9.s64 = 1262813184;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17744
	ctx.r9.u64 = ctx.r9.u64 | 17744;
	// addi r10,r10,-2932
	ctx.r10.s64 = ctx.r10.s64 + -2932;
	// addi r22,r11,28890
	ctx.r22.s64 = ctx.r11.s64 + 28890;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18503
	ctx.r9.s64 = 1212612608;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,16717
	ctx.r9.u64 = ctx.r9.u64 | 16717;
	// addi r10,r10,-2920
	ctx.r10.s64 = ctx.r10.s64 + -2920;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18258
	ctx.r9.s64 = 1196556288;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// addi r10,r10,-2908
	ctx.r10.s64 = ctx.r10.s64 + -2908;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21059
	ctx.r9.s64 = 1380122624;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,19533
	ctx.r9.u64 = ctx.r9.u64 | 19533;
	// addi r10,r10,-2896
	ctx.r10.s64 = ctx.r10.s64 + -2896;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20547
	ctx.r9.s64 = 1346568192;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,20052
	ctx.r9.u64 = ctx.r9.u64 | 20052;
	// addi r10,r10,-2884
	ctx.r10.s64 = ctx.r10.s64 + -2884;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18508
	ctx.r9.s64 = 1212940288;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// addi r10,r10,-2872
	ctx.r10.s64 = ctx.r10.s64 + -2872;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// lis r9,18497
	ctx.r9.s64 = 1212219392;
	// addi r10,r10,-2860
	ctx.r10.s64 = ctx.r10.s64 + -2860;
	// ori r9,r9,17227
	ctx.r9.u64 = ctx.r9.u64 | 17227;
	// addi r8,r11,28890
	ctx.r8.s64 = ctx.r11.s64 + 28890;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18520
	ctx.r9.s64 = 1213726720;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,18002
	ctx.r9.u64 = ctx.r9.u64 | 18002;
	// addi r10,r10,-2848
	ctx.r10.s64 = ctx.r10.s64 + -2848;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18516
	ctx.r9.s64 = 1213464576;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21326
	ctx.r9.u64 = ctx.r9.u64 | 21326;
	// addi r10,r10,-2836
	ctx.r10.s64 = ctx.r10.s64 + -2836;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18516
	ctx.r9.s64 = 1213464576;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21075
	ctx.r9.u64 = ctx.r9.u64 | 21075;
	// addi r10,r10,-2824
	ctx.r10.s64 = ctx.r10.s64 + -2824;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18516
	ctx.r9.s64 = 1213464576;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17998
	ctx.r9.u64 = ctx.r9.u64 | 17998;
	// addi r10,r10,-2812
	ctx.r10.s64 = ctx.r10.s64 + -2812;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21075
	ctx.r9.s64 = 1381171200;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,21073
	ctx.r9.u64 = ctx.r9.u64 | 21073;
	// addi r10,r10,-2800
	ctx.r10.s64 = ctx.r10.s64 + -2800;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21075
	ctx.r9.s64 = 1381171200;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17228
	ctx.r9.u64 = ctx.r9.u64 | 17228;
	// addi r10,r10,-2788
	ctx.r10.s64 = ctx.r10.s64 + -2788;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20805
	ctx.r9.s64 = 1363476480;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,20052
	ctx.r9.u64 = ctx.r9.u64 | 20052;
	// addi r10,r10,-2776
	ctx.r10.s64 = ctx.r10.s64 + -2776;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20812
	ctx.r9.s64 = 1363935232;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,22100
	ctx.r9.u64 = ctx.r9.u64 | 22100;
	// addi r10,r10,-2764
	ctx.r10.s64 = ctx.r10.s64 + -2764;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17489
	ctx.r9.s64 = 1146159104;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// ori r9,r9,17735
	ctx.r9.u64 = ctx.r9.u64 | 17735;
	// addi r10,r10,-2752
	ctx.r10.s64 = ctx.r10.s64 + -2752;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r9,r11,28890
	ctx.r9.s64 = ctx.r11.s64 + 28890;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-2740
	ctx.r10.s64 = ctx.r10.s64 + -2740;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lis r9,20811
	ctx.r9.s64 = 1363869696;
	// ori r9,r9,17227
	ctx.r9.u64 = ctx.r9.u64 | 17227;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-2728
	ctx.r10.s64 = ctx.r10.s64 + -2728;
	// lis r9,21841
	ctx.r9.s64 = 1431371776;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// ori r9,r9,21829
	ctx.r9.u64 = ctx.r9.u64 | 21829;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-13930(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13930, ctx.r11.u8);
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F930"))) PPC_WEAK_FUNC(sub_8221F930);
PPC_FUNC_IMPL(__imp__sub_8221F930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x8221F938;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82226848
	ctx.lr = 0x8221F95C;
	sub_82226848(ctx, base);
	// lis r11,17231
	ctx.r11.s64 = 1129250816;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,20046
	ctx.r10.u64 = ctx.r11.u64 | 20046;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-1708
	ctx.r5.s64 = ctx.r11.s64 + -1708;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r4,r11,8264
	ctx.r4.s64 = ctx.r11.s64 + 8264;
	// bl 0x822261f8
	ctx.lr = 0x8221F988;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7284
	ctx.r4.s64 = ctx.r11.s64 + 7284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221F99C;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8012
	ctx.r4.s64 = ctx.r11.s64 + 8012;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221F9B0;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221f9f4
	if (ctx.cr6.eq) goto loc_8221F9F4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221F9C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221f9c0
	if (!ctx.cr6.eq) goto loc_8221F9C0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221f9f4
	if (ctx.cr0.eq) goto loc_8221F9F4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8796
	ctx.r4.s64 = ctx.r11.s64 + 8796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221F9F4;
	sub_822261F8(ctx, base);
loc_8221F9F4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,8280
	ctx.r4.s64 = ctx.r11.s64 + 8280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221FA08;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,8804
	ctx.r4.s64 = ctx.r11.s64 + 8804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221FA1C;
	sub_822261F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FA28"))) PPC_WEAK_FUNC(sub_8221FA28);
PPC_FUNC_IMPL(__imp__sub_8221FA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x8221FA30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82226848
	ctx.lr = 0x8221FA54;
	sub_82226848(ctx, base);
	// lis r11,21843
	ctx.r11.s64 = 1431502848;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17746
	ctx.r10.u64 = ctx.r11.u64 | 17746;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8816
	ctx.r4.s64 = ctx.r11.s64 + 8816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x8221FA7C;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8820
	ctx.r4.s64 = ctx.r11.s64 + 8820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221FA90;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8824
	ctx.r4.s64 = ctx.r11.s64 + 8824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221FAA4;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,8004
	ctx.r4.s64 = ctx.r11.s64 + 8004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221FAB8;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,8272
	ctx.r4.s64 = ctx.r11.s64 + 8272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x8221FACC;
	sub_822261F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FAD8"))) PPC_WEAK_FUNC(sub_8221FAD8);
PPC_FUNC_IMPL(__imp__sub_8221FAD8) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226848
	ctx.lr = 0x8221FAF4;
	sub_82226848(ctx, base);
	// lis r11,21068
	ctx.r11.s64 = 1380712448;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,21332
	ctx.r11.u64 = ctx.r11.u64 | 21332;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8221FB20"))) PPC_WEAK_FUNC(sub_8221FB20);
PPC_FUNC_IMPL(__imp__sub_8221FB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x8221FB28;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x82226848
	ctx.lr = 0x8221FB50;
	sub_82226848(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lis r10,19532
	ctx.r10.s64 = 1280049152;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// ori r10,r10,21332
	ctx.r10.u64 = ctx.r10.u64 | 21332;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r9,3
	ctx.r9.s64 = 3;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// xori r5,r8,1
	ctx.r5.u64 = ctx.r8.u64 ^ 1;
	// addi r4,r11,8828
	ctx.r4.s64 = ctx.r11.s64 + 8828;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// bl 0x82225ff0
	ctx.lr = 0x8221FB84;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r4,r11,8844
	ctx.r4.s64 = ctx.r11.s64 + 8844;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82225ff0
	ctx.lr = 0x8221FBA4;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// addi r4,r11,8860
	ctx.r4.s64 = ctx.r11.s64 + 8860;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82225ff0
	ctx.lr = 0x8221FBC4;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// addi r4,r11,8880
	ctx.r4.s64 = ctx.r11.s64 + 8880;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82225ff0
	ctx.lr = 0x8221FBE4;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,8900
	ctx.r4.s64 = ctx.r11.s64 + 8900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221FBF8;
	sub_82225FF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221fc28
	if (ctx.cr6.eq) goto loc_8221FC28;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,5983
	ctx.r6.s64 = ctx.r11.s64 + 5983;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,8916
	ctx.r5.s64 = ctx.r11.s64 + 8916;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221FC28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221FC28:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8932
	ctx.r4.s64 = ctx.r11.s64 + 8932;
	// bl 0x822261f8
	ctx.lr = 0x8221FC3C;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// addi r4,r11,8944
	ctx.r4.s64 = ctx.r11.s64 + 8944;
	// bl 0x822261f8
	ctx.lr = 0x8221FC50;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r4,r11,8956
	ctx.r4.s64 = ctx.r11.s64 + 8956;
	// bl 0x822261f8
	ctx.lr = 0x8221FC64;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r4,r11,8972
	ctx.r4.s64 = ctx.r11.s64 + 8972;
	// bl 0x822261f8
	ctx.lr = 0x8221FC78;
	sub_822261F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FC80"))) PPC_WEAK_FUNC(sub_8221FC80);
PPC_FUNC_IMPL(__imp__sub_8221FC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x8221FC88;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82226848
	ctx.lr = 0x8221FCB0;
	sub_82226848(ctx, base);
	// lis r11,18252
	ctx.r11.s64 = 1196163072;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21332
	ctx.r10.u64 = ctx.r11.u64 | 21332;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x8221FCD8;
	sub_82225FF0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8221fcf0
	if (ctx.cr6.lt) goto loc_8221FCF0;
	// bne cr6,0x8221fd08
	if (!ctx.cr6.eq) goto loc_8221FD08;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8068
	ctx.r5.s64 = ctx.r11.s64 + 8068;
	// b 0x8221fcf8
	goto loc_8221FCF8;
loc_8221FCF0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9516
	ctx.r5.s64 = ctx.r11.s64 + 9516;
loc_8221FCF8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7172
	ctx.r4.s64 = ctx.r11.s64 + 7172;
	// bl 0x822261f8
	ctx.lr = 0x8221FD08;
	sub_822261F8(ctx, base);
loc_8221FD08:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r4,r11,8828
	ctx.r4.s64 = ctx.r11.s64 + 8828;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82225ff0
	ctx.lr = 0x8221FD28;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// addi r4,r11,8844
	ctx.r4.s64 = ctx.r11.s64 + 8844;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82225ff0
	ctx.lr = 0x8221FD48;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// addi r4,r11,8860
	ctx.r4.s64 = ctx.r11.s64 + 8860;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82225ff0
	ctx.lr = 0x8221FD68;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// addi r4,r11,8880
	ctx.r4.s64 = ctx.r11.s64 + 8880;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82225ff0
	ctx.lr = 0x8221FD88;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r4,r11,8900
	ctx.r4.s64 = ctx.r11.s64 + 8900;
	// bl 0x82225ff0
	ctx.lr = 0x8221FD9C;
	sub_82225FF0(ctx, base);
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221fdcc
	if (ctx.cr6.eq) goto loc_8221FDCC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,5983
	ctx.r6.s64 = ctx.r11.s64 + 5983;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8916
	ctx.r5.s64 = ctx.r11.s64 + 8916;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221FDCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221FDCC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8932
	ctx.r4.s64 = ctx.r11.s64 + 8932;
	// bl 0x822261f8
	ctx.lr = 0x8221FDE0;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r4,r11,8944
	ctx.r4.s64 = ctx.r11.s64 + 8944;
	// bl 0x822261f8
	ctx.lr = 0x8221FDF4;
	sub_822261F8(ctx, base);
	// lwz r5,260(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8221fe10
	if (!ctx.cr6.gt) goto loc_8221FE10;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// bl 0x82225ff0
	ctx.lr = 0x8221FE10;
	sub_82225FF0(ctx, base);
loc_8221FE10:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r5,268(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8252
	ctx.r4.s64 = ctx.r11.s64 + 8252;
	// bl 0x82225ff0
	ctx.lr = 0x8221FE24;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r4,r11,8956
	ctx.r4.s64 = ctx.r11.s64 + 8956;
	// bl 0x822261f8
	ctx.lr = 0x8221FE38;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// addi r4,r11,8972
	ctx.r4.s64 = ctx.r11.s64 + 8972;
	// bl 0x822261f8
	ctx.lr = 0x8221FE4C;
	sub_822261F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FE58"))) PPC_WEAK_FUNC(sub_8221FE58);
PPC_FUNC_IMPL(__imp__sub_8221FE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221FE60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82226848
	ctx.lr = 0x8221FE78;
	sub_82226848(ctx, base);
	// lis r11,18244
	ctx.r11.s64 = 1195638784;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16724
	ctx.r10.u64 = ctx.r11.u64 | 16724;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x8221FEA0;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8221FEB4;
	sub_82225FF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FEC0"))) PPC_WEAK_FUNC(sub_8221FEC0);
PPC_FUNC_IMPL(__imp__sub_8221FEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221FEC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82226848
	ctx.lr = 0x8221FEE0;
	sub_82226848(ctx, base);
	// lis r11,18244
	ctx.r11.s64 = 1195638784;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16724
	ctx.r10.u64 = ctx.r11.u64 | 16724;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822261f8
	ctx.lr = 0x8221FF08;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8221ff20
	if (ctx.cr6.lt) goto loc_8221FF20;
	// bne cr6,0x8221ff38
	if (!ctx.cr6.eq) goto loc_8221FF38;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8068
	ctx.r5.s64 = ctx.r11.s64 + 8068;
	// b 0x8221ff28
	goto loc_8221FF28;
loc_8221FF20:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9516
	ctx.r5.s64 = ctx.r11.s64 + 9516;
loc_8221FF28:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7172
	ctx.r4.s64 = ctx.r11.s64 + 7172;
	// bl 0x822261f8
	ctx.lr = 0x8221FF38;
	sub_822261F8(ctx, base);
loc_8221FF38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FF40"))) PPC_WEAK_FUNC(sub_8221FF40);
PPC_FUNC_IMPL(__imp__sub_8221FF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221FF48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82226848
	ctx.lr = 0x8221FF60;
	sub_82226848(ctx, base);
	// lis r11,18244
	ctx.r11.s64 = 1195638784;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16724
	ctx.r10.u64 = ctx.r11.u64 | 16724;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,7356
	ctx.r4.s64 = ctx.r11.s64 + 7356;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x822260f0
	ctx.lr = 0x8221FF88;
	sub_822260F0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8221ffa0
	if (ctx.cr6.lt) goto loc_8221FFA0;
	// bne cr6,0x8221ffb8
	if (!ctx.cr6.eq) goto loc_8221FFB8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8068
	ctx.r5.s64 = ctx.r11.s64 + 8068;
	// b 0x8221ffa8
	goto loc_8221FFA8;
loc_8221FFA0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9516
	ctx.r5.s64 = ctx.r11.s64 + 9516;
loc_8221FFA8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7172
	ctx.r4.s64 = ctx.r11.s64 + 7172;
	// bl 0x822261f8
	ctx.lr = 0x8221FFB8;
	sub_822261F8(ctx, base);
loc_8221FFB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FFC0"))) PPC_WEAK_FUNC(sub_8221FFC0);
PPC_FUNC_IMPL(__imp__sub_8221FFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8221FFC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82226848
	ctx.lr = 0x8221FFE0;
	sub_82226848(ctx, base);
	// lis r11,18244
	ctx.r11.s64 = 1195638784;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16724
	ctx.r10.u64 = ctx.r11.u64 | 16724;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7368
	ctx.r4.s64 = ctx.r11.s64 + 7368;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x822260f0
	ctx.lr = 0x82220008;
	sub_822260F0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82220020
	if (ctx.cr6.lt) goto loc_82220020;
	// bne cr6,0x82220038
	if (!ctx.cr6.eq) goto loc_82220038;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8068
	ctx.r5.s64 = ctx.r11.s64 + 8068;
	// b 0x82220028
	goto loc_82220028;
loc_82220020:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9516
	ctx.r5.s64 = ctx.r11.s64 + 9516;
loc_82220028:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7172
	ctx.r4.s64 = ctx.r11.s64 + 7172;
	// bl 0x822261f8
	ctx.lr = 0x82220038;
	sub_822261F8(ctx, base);
loc_82220038:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220040"))) PPC_WEAK_FUNC(sub_82220040);
PPC_FUNC_IMPL(__imp__sub_82220040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4a8
	ctx.lr = 0x82220048;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82226848
	ctx.lr = 0x82220060;
	sub_82226848(ctx, base);
	// lis r11,17223
	ctx.r11.s64 = 1128726528;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16717
	ctx.r10.u64 = ctx.r11.u64 | 16717;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r5,132(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x82225ff0
	ctx.lr = 0x82220088;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lbz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9004
	ctx.r4.s64 = ctx.r11.s64 + 9004;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82225ff0
	ctx.lr = 0x822200A8;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r30,141
	ctx.r5.s64 = ctx.r30.s64 + 141;
	// addi r4,r11,8272
	ctx.r4.s64 = ctx.r11.s64 + 8272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822200BC;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,9020
	ctx.r4.s64 = ctx.r11.s64 + 9020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822200D0;
	sub_82225FF0(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r3,-13928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13928);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822200E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822200F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8222012c
	if (ctx.cr6.eq) goto loc_8222012C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82220154
	if (!ctx.cr6.eq) goto loc_82220154;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r5,528(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9040
	ctx.r4.s64 = ctx.r11.s64 + 9040;
	// bl 0x82225ff0
	ctx.lr = 0x8222011C;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r30,532
	ctx.r5.s64 = ctx.r30.s64 + 532;
	// addi r4,r11,9052
	ctx.r4.s64 = ctx.r11.s64 + 9052;
	// b 0x8222014c
	goto loc_8222014C;
loc_8222012C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r5,492(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9028
	ctx.r4.s64 = ctx.r11.s64 + 9028;
	// bl 0x82225ff0
	ctx.lr = 0x82220140;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r30,496
	ctx.r5.s64 = ctx.r30.s64 + 496;
	// addi r4,r11,9036
	ctx.r4.s64 = ctx.r11.s64 + 9036;
loc_8222014C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82220154;
	sub_822261F8(ctx, base);
loc_82220154:
	// lwz r11,740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222016c
	if (!ctx.cr6.eq) goto loc_8222016C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8108
	ctx.r5.s64 = ctx.r11.s64 + 8108;
	// b 0x82220174
	goto loc_82220174;
loc_8222016C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8072
	ctx.r5.s64 = ctx.r11.s64 + 8072;
loc_82220174:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9064
	ctx.r4.s64 = ctx.r11.s64 + 9064;
	// bl 0x822261f8
	ctx.lr = 0x82220184;
	sub_822261F8(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822201a0
	if (ctx.cr6.lt) goto loc_822201A0;
	// bne cr6,0x822201b8
	if (!ctx.cr6.eq) goto loc_822201B8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8068
	ctx.r5.s64 = ctx.r11.s64 + 8068;
	// b 0x822201a8
	goto loc_822201A8;
loc_822201A0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9516
	ctx.r5.s64 = ctx.r11.s64 + 9516;
loc_822201A8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7172
	ctx.r4.s64 = ctx.r11.s64 + 7172;
	// bl 0x822261f8
	ctx.lr = 0x822201B8;
	sub_822261F8(ctx, base);
loc_822201B8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r5,136(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8288
	ctx.r4.s64 = ctx.r11.s64 + 8288;
	// bl 0x82225ff0
	ctx.lr = 0x822201CC;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lbz r10,752(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 752);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9072
	ctx.r4.s64 = ctx.r11.s64 + 9072;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82225ff0
	ctx.lr = 0x822201EC;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lbz r10,736(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 736);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9096
	ctx.r4.s64 = ctx.r11.s64 + 9096;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82225ff0
	ctx.lr = 0x8222020C;
	sub_82225FF0(ctx, base);
	// lis r3,24932
	ctx.r3.s64 = 1633943552;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,25714
	ctx.r3.u64 = ctx.r3.u64 | 25714;
	// bl 0x83011c48
	ctx.lr = 0x82220224;
	sub_83011C48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82220274
	if (ctx.cr0.eq) goto loc_82220274;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r7,r3,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// rlwinm r6,r3,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// rlwinm r5,r3,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// addi r4,r11,9104
	ctx.r4.s64 = ctx.r11.s64 + 9104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x8222024C;
	sub_82D5EA60(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,276(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// addi r4,r11,9120
	ctx.r4.s64 = ctx.r11.s64 + 9120;
	// bl 0x82225ff0
	ctx.lr = 0x82220260;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9132
	ctx.r4.s64 = ctx.r11.s64 + 9132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82220274;
	sub_822261F8(ctx, base);
loc_82220274:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r5,744(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9140
	ctx.r4.s64 = ctx.r11.s64 + 9140;
	// bl 0x82225ff0
	ctx.lr = 0x82220288;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,748(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	// addi r4,r11,9152
	ctx.r4.s64 = ctx.r11.s64 + 9152;
	// bl 0x82225ff0
	ctx.lr = 0x8222029C;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,9168
	ctx.r4.s64 = ctx.r11.s64 + 9168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822202B0;
	sub_82225FF0(ctx, base);
	// lbz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 280);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822202d0
	if (ctx.cr0.eq) goto loc_822202D0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,9184
	ctx.r4.s64 = ctx.r11.s64 + 9184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822202D0;
	sub_82225FF0(ctx, base);
loc_822202D0:
	// addic. r5,r30,300
	ctx.xer.ca = ctx.r30.u32 > 4294966995;
	ctx.r5.s64 = ctx.r30.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x822202fc
	if (ctx.cr0.eq) goto loc_822202FC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9196
	ctx.r4.s64 = ctx.r11.s64 + 9196;
	// bl 0x822261f8
	ctx.lr = 0x822202E8;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r30,364
	ctx.r5.s64 = ctx.r30.s64 + 364;
	// addi r4,r11,9204
	ctx.r4.s64 = ctx.r11.s64 + 9204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822202FC;
	sub_822261F8(ctx, base);
loc_822202FC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,5983
	ctx.r6.s64 = ctx.r11.s64 + 5983;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9212
	ctx.r5.s64 = ctx.r11.s64 + 9212;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// addi r4,r11,9220
	ctx.r4.s64 = ctx.r11.s64 + 9220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82220338;
	sub_822261F8(ctx, base);
	// lwz r29,288(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// lwz r25,292(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x822204f4
	if (ctx.cr0.eq) goto loc_822204F4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822204f4
	if (ctx.cr6.eq) goto loc_822204F4;
	// bl 0x82213850
	ctx.lr = 0x82220354;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r4,r25,35
	ctx.r4.s64 = ctx.r25.s64 * 35;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222036C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stb r26,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r26.u8);
	// beq cr6,0x822204b0
	if (ctx.cr6.eq) goto loc_822204B0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r20,r25,-1
	ctx.r20.s64 = ctx.r25.s64 + -1;
	// addi r22,r11,9236
	ctx.r22.s64 = ctx.r11.s64 + 9236;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r24,r11,7996
	ctx.r24.s64 = ctx.r11.s64 + 7996;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r21,r11,9232
	ctx.r21.s64 = ctx.r11.s64 + 9232;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r23,r11,7516
	ctx.r23.s64 = ctx.r11.s64 + 7516;
loc_822203A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82d5ea60
	ctx.lr = 0x822203B4;
	sub_82D5EA60(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_822203BC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822203bc
	if (!ctx.cr6.eq) goto loc_822203BC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_822203D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x822203d0
	if (!ctx.cr0.eq) goto loc_822203D0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_822203F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822203f0
	if (!ctx.cr6.eq) goto loc_822203F0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82220404:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82220404
	if (!ctx.cr0.eq) goto loc_82220404;
	// addi r27,r26,1
	ctx.r27.s64 = ctx.r26.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82d5ea60
	ctx.lr = 0x82220430;
	sub_82D5EA60(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82220438:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82220438
	if (!ctx.cr6.eq) goto loc_82220438;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8222044C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x8222044c
	if (!ctx.cr0.eq) goto loc_8222044C;
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x822204a0
	if (!ctx.cr6.lt) goto loc_822204A0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82220474:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82220474
	if (!ctx.cr6.eq) goto loc_82220474;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82220488:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82220488
	if (!ctx.cr0.eq) goto loc_82220488;
loc_822204A0:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x822203a4
	if (ctx.cr6.lt) goto loc_822203A4;
loc_822204B0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,9240
	ctx.r4.s64 = ctx.r11.s64 + 9240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822204C4;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,296(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// addi r4,r11,9252
	ctx.r4.s64 = ctx.r11.s64 + 9252;
	// bl 0x82225ff0
	ctx.lr = 0x822204D8;
	sub_82225FF0(ctx, base);
	// bl 0x82213850
	ctx.lr = 0x822204DC;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822204F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822204F4:
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82220524
	if (ctx.cr6.lt) goto loc_82220524;
	// beq cr6,0x82220518
	if (ctx.cr6.eq) goto loc_82220518;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8222053c
	if (!ctx.cr6.lt) goto loc_8222053C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8144
	ctx.r5.s64 = ctx.r11.s64 + 8144;
	// b 0x8222052c
	goto loc_8222052C;
loc_82220518:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9000
	ctx.r5.s64 = ctx.r11.s64 + 9000;
	// b 0x8222052c
	goto loc_8222052C;
loc_82220524:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8988
	ctx.r5.s64 = ctx.r11.s64 + 8988;
loc_8222052C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8992
	ctx.r4.s64 = ctx.r11.s64 + 8992;
	// bl 0x822261f8
	ctx.lr = 0x8222053C;
	sub_822261F8(ctx, base);
loc_8222053C:
	// addic. r5,r30,596
	ctx.xer.ca = ctx.r30.u32 > 4294966699;
	ctx.r5.s64 = ctx.r30.s64 + 596;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82220554
	if (ctx.cr0.eq) goto loc_82220554;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9268
	ctx.r4.s64 = ctx.r11.s64 + 9268;
	// bl 0x822261f8
	ctx.lr = 0x82220554;
	sub_822261F8(ctx, base);
loc_82220554:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// ld r5,728(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 728);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9272
	ctx.r4.s64 = ctx.r11.s64 + 9272;
	// bl 0x822260f0
	ctx.lr = 0x82220568;
	sub_822260F0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82d5c4f8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220570"))) PPC_WEAK_FUNC(sub_82220570);
PPC_FUNC_IMPL(__imp__sub_82220570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82220578;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82226848
	ctx.lr = 0x8222059C;
	sub_82226848(ctx, base);
	// lis r11,21831
	ctx.r11.s64 = 1430716416;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16717
	ctx.r10.u64 = ctx.r11.u64 | 16717;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x822205C4;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822205D8;
	sub_82225FF0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82220604
	if (ctx.cr6.lt) goto loc_82220604;
	// beq cr6,0x822205f8
	if (ctx.cr6.eq) goto loc_822205F8;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x8222061c
	if (!ctx.cr6.lt) goto loc_8222061C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8144
	ctx.r5.s64 = ctx.r11.s64 + 8144;
	// b 0x8222060c
	goto loc_8222060C;
loc_822205F8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9000
	ctx.r5.s64 = ctx.r11.s64 + 9000;
	// b 0x8222060c
	goto loc_8222060C;
loc_82220604:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8988
	ctx.r5.s64 = ctx.r11.s64 + 8988;
loc_8222060C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8992
	ctx.r4.s64 = ctx.r11.s64 + 8992;
	// bl 0x822261f8
	ctx.lr = 0x8222061C;
	sub_822261F8(ctx, base);
loc_8222061C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9140
	ctx.r4.s64 = ctx.r11.s64 + 9140;
	// bl 0x82225ff0
	ctx.lr = 0x82220630;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r11,9152
	ctx.r4.s64 = ctx.r11.s64 + 9152;
	// bl 0x82225ff0
	ctx.lr = 0x82220644;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r4,r11,9168
	ctx.r4.s64 = ctx.r11.s64 + 9168;
	// bl 0x82225ff0
	ctx.lr = 0x82220658;
	sub_82225FF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220660"))) PPC_WEAK_FUNC(sub_82220660);
PPC_FUNC_IMPL(__imp__sub_82220660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82220668;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82226848
	ctx.lr = 0x82220690;
	sub_82226848(ctx, base);
	// lis r11,21831
	ctx.r11.s64 = 1430716416;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16717
	ctx.r10.u64 = ctx.r11.u64 | 16717;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x822206B8;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822206CC;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,8272
	ctx.r4.s64 = ctx.r11.s64 + 8272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822206E0;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82220710
	if (ctx.cr6.eq) goto loc_82220710;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,5983
	ctx.r6.s64 = ctx.r11.s64 + 5983;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,9212
	ctx.r5.s64 = ctx.r11.s64 + 9212;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82220710:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x8222073c
	if (ctx.cr6.lt) goto loc_8222073C;
	// beq cr6,0x82220730
	if (ctx.cr6.eq) goto loc_82220730;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bge cr6,0x82220754
	if (!ctx.cr6.lt) goto loc_82220754;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8144
	ctx.r5.s64 = ctx.r11.s64 + 8144;
	// b 0x82220744
	goto loc_82220744;
loc_82220730:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9000
	ctx.r5.s64 = ctx.r11.s64 + 9000;
	// b 0x82220744
	goto loc_82220744;
loc_8222073C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8988
	ctx.r5.s64 = ctx.r11.s64 + 8988;
loc_82220744:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8992
	ctx.r4.s64 = ctx.r11.s64 + 8992;
	// bl 0x822261f8
	ctx.lr = 0x82220754;
	sub_822261F8(ctx, base);
loc_82220754:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82220770
	if (ctx.cr6.eq) goto loc_82220770;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,9268
	ctx.r4.s64 = ctx.r11.s64 + 9268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82220770;
	sub_822261F8(ctx, base);
loc_82220770:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220778"))) PPC_WEAK_FUNC(sub_82220778);
PPC_FUNC_IMPL(__imp__sub_82220778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82220780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82226848
	ctx.lr = 0x8222079C;
	sub_82226848(ctx, base);
	// lis r11,21831
	ctx.r11.s64 = 1430716416;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17477
	ctx.r10.u64 = ctx.r11.u64 | 17477;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x822207C4;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822207D8;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,5983
	ctx.r6.s64 = ctx.r11.s64 + 5983;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,9284
	ctx.r5.s64 = ctx.r11.s64 + 9284;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220808"))) PPC_WEAK_FUNC(sub_82220808);
PPC_FUNC_IMPL(__imp__sub_82220808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82220810;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82226848
	ctx.lr = 0x82220834;
	sub_82226848(ctx, base);
	// lis r11,21840
	ctx.r11.s64 = 1431306240;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,19521
	ctx.r10.u64 = ctx.r11.u64 | 19521;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x8222085C;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82220870;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,8304
	ctx.r4.s64 = ctx.r11.s64 + 8304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82220884;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,9288
	ctx.r4.s64 = ctx.r11.s64 + 9288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82220898;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,5983
	ctx.r6.s64 = ctx.r11.s64 + 5983;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,9292
	ctx.r5.s64 = ctx.r11.s64 + 9292;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822208C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822208C8"))) PPC_WEAK_FUNC(sub_822208C8);
PPC_FUNC_IMPL(__imp__sub_822208C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x822208D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82226848
	ctx.lr = 0x822208EC;
	sub_82226848(ctx, base);
	// lis r11,21826
	ctx.r11.s64 = 1430388736;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21057
	ctx.r10.u64 = ctx.r11.u64 | 21057;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x82220914;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82220928;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r4,r11,9296
	ctx.r4.s64 = ctx.r11.s64 + 9296;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82225ff0
	ctx.lr = 0x82220948;
	sub_82225FF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220950"))) PPC_WEAK_FUNC(sub_82220950);
PPC_FUNC_IMPL(__imp__sub_82220950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82220958;
	__savegprlr_26(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x82226848
	ctx.lr = 0x8222097C;
	sub_82226848(ctx, base);
	// lis r11,17735
	ctx.r11.s64 = 1162280960;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,16717
	ctx.r11.u64 = ctx.r11.u64 | 16717;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq cr6,0x822209c0
	if (ctx.cr6.eq) goto loc_822209C0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,5983
	ctx.r6.s64 = ctx.r11.s64 + 5983;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,9304
	ctx.r5.s64 = ctx.r11.s64 + 9304;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822209C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822209C0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,9020
	ctx.r4.s64 = ctx.r11.s64 + 9020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822209D4;
	sub_82225FF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b4d290
	ctx.lr = 0x822209DC;
	sub_82B4D290(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r4,r11,9312
	ctx.r4.s64 = ctx.r11.s64 + 9312;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226d98
	ctx.lr = 0x822209F4;
	sub_82226D98(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82220a5c
	if (ctx.cr6.eq) goto loc_82220A5C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82220a5c
	if (ctx.cr6.eq) goto loc_82220A5C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,9324
	ctx.r4.s64 = ctx.r11.s64 + 9324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82220A18;
	sub_82225FF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82220a5c
	if (ctx.cr6.eq) goto loc_82220A5C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r28,r11,9336
	ctx.r28.s64 = ctx.r11.s64 + 9336;
loc_82220A2C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d5ea60
	ctx.lr = 0x82220A3C;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x822260f0
	ctx.lr = 0x82220A4C;
	sub_822260F0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82220a2c
	if (ctx.cr6.lt) goto loc_82220A2C;
loc_82220A5C:
	// ld r5,528(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 528);
	// cmpdi cr6,r5,0
	ctx.cr6.compare<int64_t>(ctx.r5.s64, 0, ctx.xer);
	// beq cr6,0x82220a78
	if (ctx.cr6.eq) goto loc_82220A78;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9348
	ctx.r4.s64 = ctx.r11.s64 + 9348;
	// bl 0x822260f0
	ctx.lr = 0x82220A78;
	sub_822260F0(ctx, base);
loc_82220A78:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82220a8c
	if (!ctx.cr6.eq) goto loc_82220A8C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8068
	ctx.r5.s64 = ctx.r11.s64 + 8068;
	// b 0x82220a9c
	goto loc_82220A9C;
loc_82220A8C:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x82220aac
	if (!ctx.cr6.eq) goto loc_82220AAC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8988
	ctx.r5.s64 = ctx.r11.s64 + 8988;
loc_82220A9C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9360
	ctx.r4.s64 = ctx.r11.s64 + 9360;
	// bl 0x822261f8
	ctx.lr = 0x82220AAC;
	sub_822261F8(ctx, base);
loc_82220AAC:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220AB8"))) PPC_WEAK_FUNC(sub_82220AB8);
PPC_FUNC_IMPL(__imp__sub_82220AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82220AC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// ld r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82220B14;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82220B28;
	sub_82225FF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220B30"))) PPC_WEAK_FUNC(sub_82220B30);
PPC_FUNC_IMPL(__imp__sub_82220B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82220B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// ld r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82220B8C;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,9368
	ctx.r4.s64 = ctx.r11.s64 + 9368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82220BA0;
	sub_822261F8(ctx, base);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82220bb8
	if (ctx.cr6.lt) goto loc_82220BB8;
	// bne cr6,0x82220bd0
	if (!ctx.cr6.eq) goto loc_82220BD0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8068
	ctx.r5.s64 = ctx.r11.s64 + 8068;
	// b 0x82220bc0
	goto loc_82220BC0;
loc_82220BB8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9516
	ctx.r5.s64 = ctx.r11.s64 + 9516;
loc_82220BC0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7172
	ctx.r4.s64 = ctx.r11.s64 + 7172;
	// bl 0x822261f8
	ctx.lr = 0x82220BD0;
	sub_822261F8(ctx, base);
loc_82220BD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220BD8"))) PPC_WEAK_FUNC(sub_82220BD8);
PPC_FUNC_IMPL(__imp__sub_82220BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82220BE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// ld r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7356
	ctx.r4.s64 = ctx.r11.s64 + 7356;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822260f0
	ctx.lr = 0x82220C34;
	sub_822260F0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,9376
	ctx.r4.s64 = ctx.r11.s64 + 9376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822260f0
	ctx.lr = 0x82220C48;
	sub_822260F0(ctx, base);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82220c60
	if (ctx.cr6.lt) goto loc_82220C60;
	// bne cr6,0x82220c78
	if (!ctx.cr6.eq) goto loc_82220C78;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8068
	ctx.r5.s64 = ctx.r11.s64 + 8068;
	// b 0x82220c68
	goto loc_82220C68;
loc_82220C60:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9516
	ctx.r5.s64 = ctx.r11.s64 + 9516;
loc_82220C68:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7172
	ctx.r4.s64 = ctx.r11.s64 + 7172;
	// bl 0x822261f8
	ctx.lr = 0x82220C78;
	sub_822261F8(ctx, base);
loc_82220C78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220C80"))) PPC_WEAK_FUNC(sub_82220C80);
PPC_FUNC_IMPL(__imp__sub_82220C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82220C88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// ld r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r4,r11,7368
	ctx.r4.s64 = ctx.r11.s64 + 7368;
	// bl 0x822260f0
	ctx.lr = 0x82220CDC;
	sub_822260F0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r4,r11,9384
	ctx.r4.s64 = ctx.r11.s64 + 9384;
	// bl 0x822260f0
	ctx.lr = 0x82220CF0;
	sub_822260F0(ctx, base);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82220d08
	if (ctx.cr6.lt) goto loc_82220D08;
	// bne cr6,0x82220d20
	if (!ctx.cr6.eq) goto loc_82220D20;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8068
	ctx.r5.s64 = ctx.r11.s64 + 8068;
	// b 0x82220d10
	goto loc_82220D10;
loc_82220D08:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9516
	ctx.r5.s64 = ctx.r11.s64 + 9516;
loc_82220D10:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7172
	ctx.r4.s64 = ctx.r11.s64 + 7172;
	// bl 0x822261f8
	ctx.lr = 0x82220D20;
	sub_822261F8(ctx, base);
loc_82220D20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220D28"))) PPC_WEAK_FUNC(sub_82220D28);
PPC_FUNC_IMPL(__imp__sub_82220D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82220D30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82226848
	ctx.lr = 0x82220D48;
	sub_82226848(ctx, base);
	// lis r11,17731
	ctx.r11.s64 = 1162018816;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,20044
	ctx.r10.u64 = ctx.r11.u64 | 20044;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x82220D70;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82220D84;
	sub_82225FF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220D90"))) PPC_WEAK_FUNC(sub_82220D90);
PPC_FUNC_IMPL(__imp__sub_82220D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82220D98;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82226848
	ctx.lr = 0x82220DBC;
	sub_82226848(ctx, base);
	// lis r11,17735
	ctx.r11.s64 = 1162280960;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21075
	ctx.r10.u64 = ctx.r11.u64 | 21075;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x82220DE4;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82220DF8;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi r30,r28,24
	ctx.r30.u64 = ctx.r28.u32 & 0xFF;
	// addi r4,r11,9392
	ctx.r4.s64 = ctx.r11.s64 + 9392;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82225ff0
	ctx.lr = 0x82220E18;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,8304
	ctx.r4.s64 = ctx.r11.s64 + 8304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82220E2C;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,7996
	ctx.r4.s64 = ctx.r11.s64 + 7996;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x82220E40;
	sub_82D5EA60(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82220e5c
	if (!ctx.cr6.eq) goto loc_82220E5C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8296
	ctx.r4.s64 = ctx.r11.s64 + 8296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82220E5C;
	sub_822261F8(ctx, base);
loc_82220E5C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220E68"))) PPC_WEAK_FUNC(sub_82220E68);
PPC_FUNC_IMPL(__imp__sub_82220E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82220E70;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// bl 0x82226848
	ctx.lr = 0x82220E94;
	sub_82226848(ctx, base);
	// lis r11,20549
	ctx.r11.s64 = 1346699264;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,20052
	ctx.r10.u64 = ctx.r11.u64 | 20052;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x82220EBC;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82220ED0;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,8304
	ctx.r4.s64 = ctx.r11.s64 + 8304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82220EE4;
	sub_82225FF0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82220f3c
	if (!ctx.cr6.gt) goto loc_82220F3C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r28,r11,9400
	ctx.r28.s64 = ctx.r11.s64 + 9400;
loc_82220EF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,63
	ctx.r5.s64 = 63;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82d5cb60
	ctx.lr = 0x82220F10;
	sub_82D5CB60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d5ea60
	ctx.lr = 0x82220F20;
	sub_82D5EA60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x822261f8
	ctx.lr = 0x82220F30;
	sub_822261F8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82220ef8
	if (!ctx.cr0.eq) goto loc_82220EF8;
loc_82220F3C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220F48"))) PPC_WEAK_FUNC(sub_82220F48);
PPC_FUNC_IMPL(__imp__sub_82220F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82220F50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82226848
	ctx.lr = 0x82220F6C;
	sub_82226848(ctx, base);
	// lis r11,20556
	ctx.r11.s64 = 1347158016;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,22100
	ctx.r10.u64 = ctx.r11.u64 | 22100;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x82220F94;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82220FA8;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8304
	ctx.r4.s64 = ctx.r11.s64 + 8304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82220FBC;
	sub_82225FF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220FC8"))) PPC_WEAK_FUNC(sub_82220FC8);
PPC_FUNC_IMPL(__imp__sub_82220FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82220FD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82226848
	ctx.lr = 0x82220FE8;
	sub_82226848(ctx, base);
	// lis r11,21063
	ctx.r11.s64 = 1380384768;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16717
	ctx.r10.u64 = ctx.r11.u64 | 16717;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x82221010;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82221024;
	sub_82225FF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221030"))) PPC_WEAK_FUNC(sub_82221030);
PPC_FUNC_IMPL(__imp__sub_82221030) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226848
	ctx.lr = 0x82221054;
	sub_82226848(ctx, base);
	// lis r11,21063
	ctx.r11.s64 = 1380384768;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,16717
	ctx.r11.u64 = ctx.r11.u64 | 16717;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// blt cr6,0x82221080
	if (ctx.cr6.lt) goto loc_82221080;
	// bne cr6,0x82221098
	if (!ctx.cr6.eq) goto loc_82221098;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8068
	ctx.r5.s64 = ctx.r11.s64 + 8068;
	// b 0x82221088
	goto loc_82221088;
loc_82221080:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9516
	ctx.r5.s64 = ctx.r11.s64 + 9516;
loc_82221088:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7172
	ctx.r4.s64 = ctx.r11.s64 + 7172;
	// bl 0x822261f8
	ctx.lr = 0x82221098;
	sub_822261F8(ctx, base);
loc_82221098:
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

__attribute__((alias("__imp__sub_822210B0"))) PPC_WEAK_FUNC(sub_822210B0);
PPC_FUNC_IMPL(__imp__sub_822210B0) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226848
	ctx.lr = 0x822210CC;
	sub_82226848(ctx, base);
	// lis r11,20553
	ctx.r11.s64 = 1346961408;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,20039
	ctx.r11.u64 = ctx.r11.u64 | 20039;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822210F8"))) PPC_WEAK_FUNC(sub_822210F8);
PPC_FUNC_IMPL(__imp__sub_822210F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82221100;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82226848
	ctx.lr = 0x82221124;
	sub_82226848(ctx, base);
	// lis r11,16706
	ctx.r11.s64 = 1094844416;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21843
	ctx.r10.u64 = ctx.r11.u64 | 21843;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x8222114C;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82221160;
	sub_82225FF0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8222117c
	if (ctx.cr6.eq) goto loc_8222117C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8304
	ctx.r4.s64 = ctx.r11.s64 + 8304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8222117C;
	sub_82225FF0(ctx, base);
loc_8222117C:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x822211e8
	if (ctx.cr6.eq) goto loc_822211E8;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x822211dc
	if (ctx.cr6.eq) goto loc_822211DC;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x822211d0
	if (ctx.cr6.eq) goto loc_822211D0;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// beq cr6,0x822211c4
	if (ctx.cr6.eq) goto loc_822211C4;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// beq cr6,0x822211b8
	if (ctx.cr6.eq) goto loc_822211B8;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// bne cr6,0x82221200
	if (!ctx.cr6.eq) goto loc_82221200;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9460
	ctx.r5.s64 = ctx.r11.s64 + 9460;
	// b 0x822211f0
	goto loc_822211F0;
loc_822211B8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9452
	ctx.r5.s64 = ctx.r11.s64 + 9452;
	// b 0x822211f0
	goto loc_822211F0;
loc_822211C4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9444
	ctx.r5.s64 = ctx.r11.s64 + 9444;
	// b 0x822211f0
	goto loc_822211F0;
loc_822211D0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9432
	ctx.r5.s64 = ctx.r11.s64 + 9432;
	// b 0x822211f0
	goto loc_822211F0;
loc_822211DC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9420
	ctx.r5.s64 = ctx.r11.s64 + 9420;
	// b 0x822211f0
	goto loc_822211F0;
loc_822211E8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9408
	ctx.r5.s64 = ctx.r11.s64 + 9408;
loc_822211F0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7172
	ctx.r4.s64 = ctx.r11.s64 + 7172;
	// bl 0x822261f8
	ctx.lr = 0x82221200;
	sub_822261F8(ctx, base);
loc_82221200:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82221244
	if (ctx.cr6.eq) goto loc_82221244;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82221210:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82221210
	if (!ctx.cr6.eq) goto loc_82221210;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82221244
	if (ctx.cr0.eq) goto loc_82221244;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,8296
	ctx.r4.s64 = ctx.r11.s64 + 8296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82221244;
	sub_822261F8(ctx, base);
loc_82221244:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221250"))) PPC_WEAK_FUNC(sub_82221250);
PPC_FUNC_IMPL(__imp__sub_82221250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82221258;
	__savegprlr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82226848
	ctx.lr = 0x82221280;
	sub_82226848(ctx, base);
	// lis r11,21061
	ctx.r11.s64 = 1380253696;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,21334
	ctx.r11.u64 = ctx.r11.u64 | 21334;
	// li r7,59
	ctx.r7.s64 = 59;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82229f70
	ctx.lr = 0x822212B4;
	sub_82229F70(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822212C8;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822212DC;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9468
	ctx.r4.s64 = ctx.r11.s64 + 9468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822212F0;
	sub_822261F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,9476
	ctx.r4.s64 = ctx.r11.s64 + 9476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82221304;
	sub_82225FF0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82221330
	if (ctx.cr6.lt) goto loc_82221330;
	// beq cr6,0x82221324
	if (ctx.cr6.eq) goto loc_82221324;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x82221348
	if (!ctx.cr6.lt) goto loc_82221348;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9500
	ctx.r5.s64 = ctx.r11.s64 + 9500;
	// b 0x82221338
	goto loc_82221338;
loc_82221324:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9496
	ctx.r5.s64 = ctx.r11.s64 + 9496;
	// b 0x82221338
	goto loc_82221338;
loc_82221330:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,9484
	ctx.r5.s64 = ctx.r11.s64 + 9484;
loc_82221338:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9488
	ctx.r4.s64 = ctx.r11.s64 + 9488;
	// bl 0x822261f8
	ctx.lr = 0x82221348;
	sub_822261F8(ctx, base);
loc_82221348:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221350"))) PPC_WEAK_FUNC(sub_82221350);
PPC_FUNC_IMPL(__imp__sub_82221350) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226848
	ctx.lr = 0x82221374;
	sub_82226848(ctx, base);
	// lis r11,20547
	ctx.r11.s64 = 1346568192;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,20052
	ctx.r10.u64 = ctx.r11.u64 | 20052;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x8222139C;
	sub_82225FF0(ctx, base);
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

__attribute__((alias("__imp__sub_822213B8"))) PPC_WEAK_FUNC(sub_822213B8);
PPC_FUNC_IMPL(__imp__sub_822213B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x822213C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82226848
	ctx.lr = 0x822213DC;
	sub_82226848(ctx, base);
	// lis r11,18508
	ctx.r11.s64 = 1212940288;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21332
	ctx.r10.u64 = ctx.r11.u64 | 21332;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x82221404;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82221418;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8316
	ctx.r4.s64 = ctx.r11.s64 + 8316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8222142C;
	sub_82225FF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221438"))) PPC_WEAK_FUNC(sub_82221438);
PPC_FUNC_IMPL(__imp__sub_82221438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82221440;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82226848
	ctx.lr = 0x82221458;
	sub_82226848(ctx, base);
	// lis r11,18497
	ctx.r11.s64 = 1212219392;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17227
	ctx.r10.u64 = ctx.r11.u64 | 17227;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x82221480;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82221494;
	sub_82225FF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822214A0"))) PPC_WEAK_FUNC(sub_822214A0);
PPC_FUNC_IMPL(__imp__sub_822214A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x822214A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82226848
	ctx.lr = 0x822214C8;
	sub_82226848(ctx, base);
	// lis r11,18520
	ctx.r11.s64 = 1213726720;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,18002
	ctx.r10.u64 = ctx.r11.u64 | 18002;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x822214F0;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82221504;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8304
	ctx.r4.s64 = ctx.r11.s64 + 8304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82221518;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// addi r4,r11,8308
	ctx.r4.s64 = ctx.r11.s64 + 8308;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82225ff0
	ctx.lr = 0x82221538;
	sub_82225FF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221540"))) PPC_WEAK_FUNC(sub_82221540);
PPC_FUNC_IMPL(__imp__sub_82221540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82221548;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// bl 0x82226848
	ctx.lr = 0x8222156C;
	sub_82226848(ctx, base);
	// lis r11,18516
	ctx.r11.s64 = 1213464576;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21075
	ctx.r10.u64 = ctx.r11.u64 | 21075;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x82221594;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822215A8;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,9020
	ctx.r4.s64 = ctx.r11.s64 + 9020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822215BC;
	sub_82225FF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822215d8
	if (ctx.cr6.eq) goto loc_822215D8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9272
	ctx.r4.s64 = ctx.r11.s64 + 9272;
	// bl 0x822260f0
	ctx.lr = 0x822215D8;
	sub_822260F0(ctx, base);
loc_822215D8:
	// lis r3,24932
	ctx.r3.s64 = 1633943552;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,25714
	ctx.r3.u64 = ctx.r3.u64 | 25714;
	// bl 0x83011c48
	ctx.lr = 0x822215F0;
	sub_83011C48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221640
	if (ctx.cr0.eq) goto loc_82221640;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r7,r3,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// rlwinm r6,r3,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// rlwinm r5,r3,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// addi r4,r11,9104
	ctx.r4.s64 = ctx.r11.s64 + 9104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x82221618;
	sub_82D5EA60(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,9120
	ctx.r4.s64 = ctx.r11.s64 + 9120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x8222162C;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9132
	ctx.r4.s64 = ctx.r11.s64 + 9132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82221640;
	sub_822261F8(ctx, base);
loc_82221640:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221648"))) PPC_WEAK_FUNC(sub_82221648);
PPC_FUNC_IMPL(__imp__sub_82221648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82221650;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82226848
	ctx.lr = 0x82221670;
	sub_82226848(ctx, base);
	// lis r11,20811
	ctx.r11.s64 = 1363869696;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17227
	ctx.r10.u64 = ctx.r11.u64 | 17227;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x82221698;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822216AC;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8304
	ctx.r4.s64 = ctx.r11.s64 + 8304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822216C0;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,7996
	ctx.r4.s64 = ctx.r11.s64 + 7996;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x822216D4;
	sub_82D5EA60(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8296
	ctx.r4.s64 = ctx.r11.s64 + 8296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x822216E8;
	sub_822261F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822216F0"))) PPC_WEAK_FUNC(sub_822216F0);
PPC_FUNC_IMPL(__imp__sub_822216F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x822216F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82226848
	ctx.lr = 0x82221714;
	sub_82226848(ctx, base);
	// lis r11,17489
	ctx.r11.s64 = 1146159104;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17735
	ctx.r10.u64 = ctx.r11.u64 | 17735;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x8222173C;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82221750;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,8304
	ctx.r4.s64 = ctx.r11.s64 + 8304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x82221764;
	sub_82225FF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221770"))) PPC_WEAK_FUNC(sub_82221770);
PPC_FUNC_IMPL(__imp__sub_82221770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82221778;
	__savegprlr_26(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x82226848
	ctx.lr = 0x82221798;
	sub_82226848(ctx, base);
	// lis r11,21841
	ctx.r11.s64 = 1431371776;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21829
	ctx.r10.u64 = ctx.r11.u64 | 21829;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82225ff0
	ctx.lr = 0x822217C0;
	sub_82225FF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,8324
	ctx.r4.s64 = ctx.r11.s64 + 8324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225ff0
	ctx.lr = 0x822217D4;
	sub_82225FF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// beq cr6,0x82221878
	if (ctx.cr6.eq) goto loc_82221878;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r29,r11,9504
	ctx.r29.s64 = ctx.r11.s64 + 9504;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r26,r11,7996
	ctx.r26.s64 = ctx.r11.s64 + 7996;
loc_822217F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x8222180c
	if (!ctx.cr6.eq) goto loc_8222180C;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82221818
	goto loc_82221818;
loc_8222180C:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
loc_82221818:
	// bl 0x82d5ea60
	ctx.lr = 0x8222181C;
	sub_82D5EA60(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82221824:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82221824
	if (!ctx.cr6.eq) goto loc_82221824;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82221838:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82221838
	if (!ctx.cr0.eq) goto loc_82221838;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822217f4
	if (ctx.cr6.lt) goto loc_822217F4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82221878
	if (ctx.cr6.eq) goto loc_82221878;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,9508
	ctx.r4.s64 = ctx.r11.s64 + 9508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822261f8
	ctx.lr = 0x82221878;
	sub_822261F8(ctx, base);
loc_82221878:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221880"))) PPC_WEAK_FUNC(sub_82221880);
PPC_FUNC_IMPL(__imp__sub_82221880) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822218A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822218B8"))) PPC_WEAK_FUNC(sub_822218B8);
PPC_FUNC_IMPL(__imp__sub_822218B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x822218f4
	if (ctx.cr6.eq) goto loc_822218F4;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r11,r11,-5872
	ctx.r11.s64 = ctx.r11.s64 + -5872;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822218f4
	if (ctx.cr6.eq) goto loc_822218F4;
loc_822218D8:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822218fc
	if (ctx.cr6.eq) goto loc_822218FC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822218d8
	if (!ctx.cr0.eq) goto loc_822218D8;
loc_822218F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822218FC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221908"))) PPC_WEAK_FUNC(sub_82221908);
PPC_FUNC_IMPL(__imp__sub_82221908) {
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
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x8222192c
	if (!ctx.cr6.eq) goto loc_8222192C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8222192C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,9832
	ctx.r11.s64 = ctx.r11.s64 + 9832;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82221950
	if (ctx.cr0.eq) goto loc_82221950;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822138a8
	ctx.lr = 0x82221950;
	sub_822138A8(ctx, base);
loc_82221950:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82221968"))) PPC_WEAK_FUNC(sub_82221968);
PPC_FUNC_IMPL(__imp__sub_82221968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82221970;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82221a68
	ctx.lr = 0x82221980;
	sub_82221A68(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,-1668
	ctx.r29.s64 = ctx.r11.s64 + -1668;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// stb r27,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r27.u8);
	// bl 0x82225f60
	ctx.lr = 0x822219A0;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822219b8
	if (ctx.cr0.eq) goto loc_822219B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x822219B0;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822219bc
	goto loc_822219BC;
loc_822219B8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822219BC:
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822267e0
	ctx.lr = 0x822219D4;
	sub_822267E0(ctx, base);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// li r6,37
	ctx.r6.s64 = 37;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822267e0
	ctx.lr = 0x822219E8;
	sub_822267E0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822103f8
	ctx.lr = 0x822219F8;
	sub_822103F8(ctx, base);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822267e0
	ctx.lr = 0x82221A0C;
	sub_822267E0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x82221a3c
	if (ctx.cr6.eq) goto loc_82221A3C;
	// cmpwi cr6,r11,79
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 79, ctx.xer);
	// beq cr6,0x82221a34
	if (ctx.cr6.eq) goto loc_82221A34;
	// cmpwi cr6,r11,87
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 87, ctx.xer);
	// bne cr6,0x82221a34
	if (!ctx.cr6.eq) goto loc_82221A34;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82221a40
	goto loc_82221A40;
loc_82221A34:
	// stw r27,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r27.u32);
	// b 0x82221a44
	goto loc_82221A44;
loc_82221A3C:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82221A40:
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
loc_82221A44:
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r31,212
	ctx.r5.s64 = ctx.r31.s64 + 212;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822267e0
	ctx.lr = 0x82221A58;
	sub_822267E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221A68"))) PPC_WEAK_FUNC(sub_82221A68);
PPC_FUNC_IMPL(__imp__sub_82221A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82221A70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-1656
	ctx.r29.s64 = ctx.r11.s64 + -1656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// bl 0x82225f60
	ctx.lr = 0x82221A94;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221aac
	if (ctx.cr0.eq) goto loc_82221AAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82221AA4;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82221ab0
	goto loc_82221AB0;
loc_82221AAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82221AB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82225f60
	ctx.lr = 0x82221AC0;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221ad8
	if (ctx.cr0.eq) goto loc_82221AD8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82221AD0;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82221adc
	goto loc_82221ADC;
loc_82221AD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82221ADC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221AF0"))) PPC_WEAK_FUNC(sub_82221AF0);
PPC_FUNC_IMPL(__imp__sub_82221AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82221AF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82221a68
	ctx.lr = 0x82221B08;
	sub_82221A68(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,11360
	ctx.r11.s64 = ctx.r11.s64 + 11360;
	// addi r30,r10,-1524
	ctx.r30.s64 = ctx.r10.s64 + -1524;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r6,r30,-29123
	ctx.r6.s64 = ctx.r30.s64 + -29123;
	// addi r5,r30,-128
	ctx.r5.s64 = ctx.r30.s64 + -128;
	// stb r28,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r28.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r28,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r28.u8);
	// stw r28,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r28.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x82214df8
	ctx.lr = 0x82221B48;
	sub_82214DF8(ctx, base);
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r31,46
	ctx.r5.s64 = ctx.r31.s64 + 46;
	// bl 0x822267e0
	ctx.lr = 0x82221B5C;
	sub_822267E0(ctx, base);
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r28,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r28.u32);
	// bl 0x822267e0
	ctx.lr = 0x82221B74;
	sub_822267E0(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82221bb8
	if (ctx.cr0.eq) goto loc_82221BB8;
	// addi r10,r30,-108
	ctx.r10.s64 = ctx.r30.s64 + -108;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82221B88:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82221bac
	if (ctx.cr0.eq) goto loc_82221BAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82221b88
	if (ctx.cr6.eq) goto loc_82221B88;
loc_82221BAC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82221bb8
	if (!ctx.cr0.eq) goto loc_82221BB8;
	// stw r25,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r25.u32);
loc_82221BB8:
	// addi r26,r31,440
	ctx.r26.s64 = ctx.r31.s64 + 440;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x822267e0
	ctx.lr = 0x82221BD0;
	sub_822267E0(ctx, base);
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82225f60
	ctx.lr = 0x82221BDC;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221bf4
	if (ctx.cr0.eq) goto loc_82221BF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82221BEC;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82221bf8
	goto loc_82221BF8;
loc_82221BF4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82221BF8:
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82226198
	ctx.lr = 0x82221C0C;
	sub_82226198(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r3,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r3.u8);
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82225f60
	ctx.lr = 0x82221C20;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221c34
	if (ctx.cr0.eq) goto loc_82221C34;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82221C30;
	sub_830083A8(ctx, base);
	// b 0x82221c38
	goto loc_82221C38;
loc_82221C34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82221C38:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82225f60
	ctx.lr = 0x82221C4C;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221c60
	if (ctx.cr0.eq) goto loc_82221C60;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82221C5C;
	sub_830083A8(ctx, base);
	// b 0x82221c64
	goto loc_82221C64;
loc_82221C60:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82221C64:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82225f60
	ctx.lr = 0x82221C78;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221c8c
	if (ctx.cr0.eq) goto loc_82221C8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82221C88;
	sub_830083A8(ctx, base);
	// b 0x82221c90
	goto loc_82221C90;
loc_82221C8C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82221C90:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82225f60
	ctx.lr = 0x82221CA4;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221cb8
	if (ctx.cr0.eq) goto loc_82221CB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82221CB4;
	sub_830083A8(ctx, base);
	// b 0x82221cbc
	goto loc_82221CBC;
loc_82221CB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82221CBC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82225f60
	ctx.lr = 0x82221CD0;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221ce4
	if (ctx.cr0.eq) goto loc_82221CE4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82221CE0;
	sub_830083A8(ctx, base);
	// b 0x82221ce8
	goto loc_82221CE8;
loc_82221CE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82221CE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82225f60
	ctx.lr = 0x82221CFC;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221d14
	if (ctx.cr0.eq) goto loc_82221D14;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82221D0C;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82221d18
	goto loc_82221D18;
loc_82221D14:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82221D18:
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,128
	ctx.r6.s64 = 128;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r5,r31,174
	ctx.r5.s64 = ctx.r31.s64 + 174;
	// bl 0x822267e0
	ctx.lr = 0x82221D30;
	sub_822267E0(ctx, base);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82226148
	ctx.lr = 0x82221D40;
	sub_82226148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r31,312
	ctx.r5.s64 = ctx.r31.s64 + 312;
	// std r11,304(r31)
	PPC_STORE_U64(ctx.r31.u32 + 304, ctx.r11.u64);
	// bl 0x822267e0
	ctx.lr = 0x82221D5C;
	sub_822267E0(ctx, base);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r31,376
	ctx.r5.s64 = ctx.r31.s64 + 376;
	// bl 0x822267e0
	ctx.lr = 0x82221D70;
	sub_822267E0(ctx, base);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82226198
	ctx.lr = 0x82221D80;
	sub_82226198(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r3,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r3.u8);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82225f60
	ctx.lr = 0x82221D94;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221dac
	if (ctx.cr0.eq) goto loc_82221DAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82221DA4;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82221db0
	goto loc_82221DB0;
loc_82221DAC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82221DB0:
	// addi r29,r31,504
	ctx.r29.s64 = ctx.r31.s64 + 504;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822267e0
	ctx.lr = 0x82221DCC;
	sub_822267E0(ctx, base);
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
loc_82221DD0:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq 0x82221df4
	if (ctx.cr0.eq) goto loc_82221DF4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82221dd0
	if (ctx.cr6.eq) goto loc_82221DD0;
loc_82221DF4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82221e10
	if (!ctx.cr0.eq) goto loc_82221E10;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x822103f8
	ctx.lr = 0x82221E0C;
	sub_822103F8(ctx, base);
	// b 0x82221e14
	goto loc_82221E14;
loc_82221E10:
	// stb r28,472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 472, ctx.r28.u8);
loc_82221E14:
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822267e0
	ctx.lr = 0x82221E28;
	sub_822267E0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x82221e58
	if (ctx.cr6.eq) goto loc_82221E58;
	// cmpwi cr6,r11,79
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 79, ctx.xer);
	// beq cr6,0x82221e50
	if (ctx.cr6.eq) goto loc_82221E50;
	// cmpwi cr6,r11,87
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 87, ctx.xer);
	// bne cr6,0x82221e50
	if (!ctx.cr6.eq) goto loc_82221E50;
	// stw r25,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r25.u32);
	// b 0x82221e60
	goto loc_82221E60;
loc_82221E50:
	// stw r28,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r28.u32);
	// b 0x82221e60
	goto loc_82221E60;
loc_82221E58:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
loc_82221E60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221E70"))) PPC_WEAK_FUNC(sub_82221E70);
PPC_FUNC_IMPL(__imp__sub_82221E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82221E78;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82221a68
	ctx.lr = 0x82221E88;
	sub_82221A68(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-1468
	ctx.r29.s64 = ctx.r11.s64 + -1468;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// bl 0x822267e0
	ctx.lr = 0x82221EAC;
	sub_822267E0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x82221f30
	if (ctx.cr6.eq) goto loc_82221F30;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// beq cr6,0x82221f28
	if (ctx.cr6.eq) goto loc_82221F28;
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// beq cr6,0x82221f20
	if (ctx.cr6.eq) goto loc_82221F20;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x82221f18
	if (ctx.cr6.eq) goto loc_82221F18;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x82221f10
	if (ctx.cr6.eq) goto loc_82221F10;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x82221f08
	if (ctx.cr6.eq) goto loc_82221F08;
	// cmpwi cr6,r11,119
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 119, ctx.xer);
	// beq cr6,0x82221f00
	if (ctx.cr6.eq) goto loc_82221F00;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5f708
	ctx.lr = 0x82221EFC;
	sub_82D5F708(ctx, base);
	// b 0x82221f38
	goto loc_82221F38;
loc_82221F00:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82221f34
	goto loc_82221F34;
loc_82221F08:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82221f34
	goto loc_82221F34;
loc_82221F10:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82221f34
	goto loc_82221F34;
loc_82221F18:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82221f34
	goto loc_82221F34;
loc_82221F20:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82221f34
	goto loc_82221F34;
loc_82221F28:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// b 0x82221f38
	goto loc_82221F38;
loc_82221F30:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82221F34:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82221F38:
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225f60
	ctx.lr = 0x82221F44;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221f5c
	if (ctx.cr0.eq) goto loc_82221F5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82221F54;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82221f60
	goto loc_82221F60;
loc_82221F5C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82221F60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82225f60
	ctx.lr = 0x82221F70;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221f88
	if (ctx.cr0.eq) goto loc_82221F88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82221F80;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82221f8c
	goto loc_82221F8C;
loc_82221F88:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82221F8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221FA0"))) PPC_WEAK_FUNC(sub_82221FA0);
PPC_FUNC_IMPL(__imp__sub_82221FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82221FA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82221a68
	ctx.lr = 0x82221FB8;
	sub_82221A68(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r28,r31,296
	ctx.r28.s64 = ctx.r31.s64 + 296;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,11360
	ctx.r11.s64 = ctx.r11.s64 + 11360;
	// addi r29,r10,-1352
	ctx.r29.s64 = ctx.r10.s64 + -1352;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r4,r29,-108
	ctx.r4.s64 = ctx.r29.s64 + -108;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// stb r27,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r27.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stb r27,40(r28)
	PPC_STORE_U8(ctx.r28.u32 + 40, ctx.r27.u8);
	// stw r27,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r27.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x822267e0
	ctx.lr = 0x82221FFC;
	sub_822267E0(ctx, base);
	// addi r4,r29,-100
	ctx.r4.s64 = ctx.r29.s64 + -100;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82226148
	ctx.lr = 0x8222200C;
	sub_82226148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x82225f60
	ctx.lr = 0x82222020;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222038
	if (ctx.cr0.eq) goto loc_82222038;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82222030;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8222203c
	goto loc_8222203C;
loc_82222038:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8222203C:
	// addi r4,r29,-92
	ctx.r4.s64 = ctx.r29.s64 + -92;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r31,152
	ctx.r5.s64 = ctx.r31.s64 + 152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822267e0
	ctx.lr = 0x82222054;
	sub_822267E0(ctx, base);
	// addi r4,r29,-84
	ctx.r4.s64 = ctx.r29.s64 + -84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r27.u32);
	// bl 0x82225f60
	ctx.lr = 0x82222064;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222207c
	if (ctx.cr0.eq) goto loc_8222207C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82222074;
	sub_830083A8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82222080
	goto loc_82222080;
loc_8222207C:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82222080:
	// addi r4,r29,-76
	ctx.r4.s64 = ctx.r29.s64 + -76;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82226e58
	ctx.lr = 0x82222094;
	sub_82226E58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822220b0
	if (ctx.cr0.eq) goto loc_822220B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r26,16
	ctx.r4.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82212980
	ctx.lr = 0x822220AC;
	sub_82212980(ctx, base);
	// stw r3,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
loc_822220B0:
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82226148
	ctx.lr = 0x822220C0;
	sub_82226148(ctx, base);
	// std r3,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r3.u64);
	// addi r6,r29,-29287
	ctx.r6.s64 = ctx.r29.s64 + -29287;
	// addi r5,r29,-56
	ctx.r5.s64 = ctx.r29.s64 + -56;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82214df8
	ctx.lr = 0x822220D8;
	sub_82214DF8(ctx, base);
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82226148
	ctx.lr = 0x822220E8;
	sub_82226148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 376, ctx.r11.u64);
	// bl 0x82226148
	ctx.lr = 0x82222100;
	sub_82226148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r27,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r27.u8);
	// addi r5,r31,392
	ctx.r5.s64 = ctx.r31.s64 + 392;
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// li r6,128
	ctx.r6.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r11.u64);
	// bl 0x822267e0
	ctx.lr = 0x82222120;
	sub_822267E0(ctx, base);
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225f60
	ctx.lr = 0x8222212C;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222144
	if (ctx.cr0.eq) goto loc_82222144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x8222213C;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82222148
	goto loc_82222148;
loc_82222144:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82222148:
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82226148
	ctx.lr = 0x8222215C;
	sub_82226148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,528(r31)
	PPC_STORE_U64(ctx.r31.u32 + 528, ctx.r11.u64);
	// bl 0x822267e0
	ctx.lr = 0x82222178;
	sub_822267E0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,79
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 79, ctx.xer);
	// beq cr6,0x82222194
	if (ctx.cr6.eq) goto loc_82222194;
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// stw r27,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r27.u32);
	// b 0x8222219c
	goto loc_8222219C;
loc_82222194:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
loc_8222219C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822221A8"))) PPC_WEAK_FUNC(sub_822221A8);
PPC_FUNC_IMPL(__imp__sub_822221A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x822221B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82222348
	ctx.lr = 0x822221C0;
	sub_82222348(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,12356
	ctx.r11.s64 = ctx.r11.s64 + 12356;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r10,-1296
	ctx.r29.s64 = ctx.r10.s64 + -1296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r27,r31,180
	ctx.r27.s64 = ctx.r31.s64 + 180;
	// stb r28,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r28.u8);
	// bl 0x82225f60
	ctx.lr = 0x822221EC;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222204
	if (ctx.cr0.eq) goto loc_82222204;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x822221FC;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82222208
	goto loc_82222208;
loc_82222204:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82222208:
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r31,244
	ctx.r5.s64 = ctx.r31.s64 + 244;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822267e0
	ctx.lr = 0x82222220;
	sub_822267E0(ctx, base);
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// li r6,37
	ctx.r6.s64 = 37;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822267e0
	ctx.lr = 0x82222234;
	sub_822267E0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822103f8
	ctx.lr = 0x82222244;
	sub_822103F8(ctx, base);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r31,376
	ctx.r5.s64 = ctx.r31.s64 + 376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822267e0
	ctx.lr = 0x82222258;
	sub_822267E0(ctx, base);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// li r6,256
	ctx.r6.s64 = 256;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822267e0
	ctx.lr = 0x82222270;
	sub_822267E0(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x822222e4
	if (ctx.cr6.eq) goto loc_822222E4;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// beq cr6,0x822222dc
	if (ctx.cr6.eq) goto loc_822222DC;
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// beq cr6,0x822222d4
	if (ctx.cr6.eq) goto loc_822222D4;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x822222cc
	if (ctx.cr6.eq) goto loc_822222CC;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x822222c4
	if (ctx.cr6.eq) goto loc_822222C4;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x822222bc
	if (ctx.cr6.eq) goto loc_822222BC;
	// addi r5,r31,372
	ctx.r5.s64 = ctx.r31.s64 + 372;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d5f708
	ctx.lr = 0x822222B8;
	sub_82D5F708(ctx, base);
	// b 0x822222ec
	goto loc_822222EC;
loc_822222BC:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x822222e8
	goto loc_822222E8;
loc_822222C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822222e8
	goto loc_822222E8;
loc_822222CC:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x822222e8
	goto loc_822222E8;
loc_822222D4:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x822222e8
	goto loc_822222E8;
loc_822222DC:
	// stw r28,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r28.u32);
	// b 0x822222ec
	goto loc_822222EC;
loc_822222E4:
	// li r11,2
	ctx.r11.s64 = 2;
loc_822222E8:
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
loc_822222EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822222F8"))) PPC_WEAK_FUNC(sub_822222F8);
PPC_FUNC_IMPL(__imp__sub_822222F8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82222798
	ctx.lr = 0x82222318;
	sub_82222798(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82222328
	if (ctx.cr0.eq) goto loc_82222328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8247d948
	ctx.lr = 0x82222328;
	sub_8247D948(ctx, base);
loc_82222328:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82222348"))) PPC_WEAK_FUNC(sub_82222348);
PPC_FUNC_IMPL(__imp__sub_82222348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82222350;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82221a68
	ctx.lr = 0x82222364;
	sub_82221A68(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,12356
	ctx.r11.s64 = ctx.r11.s64 + 12356;
	// addi r28,r10,-11896
	ctx.r28.s64 = ctx.r10.s64 + -11896;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,10628
	ctx.r4.s64 = ctx.r28.s64 + 10628;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82226148
	ctx.lr = 0x82222388;
	sub_82226148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r24,r31,28
	ctx.r24.s64 = ctx.r31.s64 + 28;
	// addi r4,r28,10636
	ctx.r4.s64 = ctx.r28.s64 + 10636;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// bl 0x822267e0
	ctx.lr = 0x822223A8;
	sub_822267E0(ctx, base);
	// addi r26,r31,124
	ctx.r26.s64 = ctx.r31.s64 + 124;
	// addi r4,r28,10640
	ctx.r4.s64 = ctx.r28.s64 + 10640;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x822267e0
	ctx.lr = 0x822223C0;
	sub_822267E0(ctx, base);
	// addi r4,r28,10644
	ctx.r4.s64 = ctx.r28.s64 + 10644;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82225f60
	ctx.lr = 0x822223CC;
	sub_82225F60(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822223e4
	if (ctx.cr0.eq) goto loc_822223E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x822223E0;
	sub_830083A8(ctx, base);
	// b 0x822223e8
	goto loc_822223E8;
loc_822223E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822223E8:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// addi r25,r31,92
	ctx.r25.s64 = ctx.r31.s64 + 92;
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// b 0x82222410
	goto loc_82222410;
loc_822223FC:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82d62970
	ctx.lr = 0x82222408;
	sub_82D62970(ctx, base);
	// stb r3,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r3.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82222410:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822223fc
	if (!ctx.cr6.eq) goto loc_822223FC;
	// addi r10,r28,10648
	ctx.r10.s64 = ctx.r28.s64 + 10648;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82222424:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82222448
	if (ctx.cr0.eq) goto loc_82222448;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82222424
	if (ctx.cr6.eq) goto loc_82222424;
loc_82222448:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8222246c
	if (!ctx.cr0.eq) goto loc_8222246C;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d5e188
	ctx.lr = 0x82222460;
	sub_82D5E188(ctx, base);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// b 0x822224f0
	goto loc_822224F0;
loc_8222246C:
	// addi r10,r28,10656
	ctx.r10.s64 = ctx.r28.s64 + 10656;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82222474:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82222498
	if (ctx.cr0.eq) goto loc_82222498;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82222474
	if (ctx.cr6.eq) goto loc_82222474;
loc_82222498:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne 0x822224b8
	if (!ctx.cr0.eq) goto loc_822224B8;
	// addi r4,r28,10664
	ctx.r4.s64 = ctx.r28.s64 + 10664;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82226148
	ctx.lr = 0x822224B0;
	sub_82226148(ctx, base);
	// std r3,156(r31)
	PPC_STORE_U64(ctx.r31.u32 + 156, ctx.r3.u64);
	// b 0x822224f0
	goto loc_822224F0;
loc_822224B8:
	// addi r4,r28,10668
	ctx.r4.s64 = ctx.r28.s64 + 10668;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// bl 0x822267e0
	ctx.lr = 0x822224C8;
	sub_822267E0(ctx, base);
	// addi r4,r28,10676
	ctx.r4.s64 = ctx.r28.s64 + 10676;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82225f60
	ctx.lr = 0x822224D4;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822224e8
	if (ctx.cr0.eq) goto loc_822224E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x822224E4;
	sub_830083A8(ctx, base);
	// b 0x822224ec
	goto loc_822224EC;
loc_822224E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822224EC:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_822224F0:
	// addi r10,r28,10688
	ctx.r10.s64 = ctx.r28.s64 + 10688;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822224FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82222520
	if (ctx.cr0.eq) goto loc_82222520;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822224fc
	if (ctx.cr6.eq) goto loc_822224FC;
loc_82222520:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82222540
	if (!ctx.cr0.eq) goto loc_82222540;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82212658
	ctx.lr = 0x8222253C;
	sub_82212658(ctx, base);
	// b 0x822225b0
	goto loc_822225B0;
loc_82222540:
	// addi r10,r28,10696
	ctx.r10.s64 = ctx.r28.s64 + 10696;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82222548:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8222256c
	if (ctx.cr0.eq) goto loc_8222256C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82222548
	if (ctx.cr6.eq) goto loc_82222548;
loc_8222256C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822225b8
	if (!ctx.cr0.eq) goto loc_822225B8;
	// addi r4,r28,10704
	ctx.r4.s64 = ctx.r28.s64 + 10704;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82226e58
	ctx.lr = 0x82222588;
	sub_82226E58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x822225a8
	if (ctx.cr0.eq) goto loc_822225A8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82212980
	ctx.lr = 0x822225A4;
	sub_82212980(ctx, base);
	// b 0x822225b0
	goto loc_822225B0;
loc_822225A8:
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x82212750
	ctx.lr = 0x822225B0;
	sub_82212750(ctx, base);
loc_822225B0:
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// b 0x82222788
	goto loc_82222788;
loc_822225B8:
	// addi r10,r28,10712
	ctx.r10.s64 = ctx.r28.s64 + 10712;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822225C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822225e4
	if (ctx.cr0.eq) goto loc_822225E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822225c0
	if (ctx.cr6.eq) goto loc_822225C0;
loc_822225E4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82222654
	if (!ctx.cr0.eq) goto loc_82222654;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82217ec8
	ctx.lr = 0x822225F8;
	sub_82217EC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222638
	if (ctx.cr0.eq) goto loc_82222638;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// sth r30,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r30.u16);
	// addi r11,r11,9656
	ctx.r11.s64 = ctx.r11.s64 + 9656;
	// addi r10,r10,11472
	ctx.r10.s64 = ctx.r10.s64 + 11472;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// sth r30,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r30.u16);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8222263c
	goto loc_8222263C;
loc_82222638:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8222263C:
	// addi r5,r29,20
	ctx.r5.s64 = ctx.r29.s64 + 20;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d5f708
	ctx.lr = 0x8222264C;
	sub_82D5F708(ctx, base);
	// sth r27,24(r29)
	PPC_STORE_U16(ctx.r29.u32 + 24, ctx.r27.u16);
	// b 0x82222784
	goto loc_82222784;
loc_82222654:
	// addi r10,r28,10716
	ctx.r10.s64 = ctx.r28.s64 + 10716;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8222265C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82222680
	if (ctx.cr0.eq) goto loc_82222680;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8222265c
	if (ctx.cr6.eq) goto loc_8222265C;
loc_82222680:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822226f0
	if (!ctx.cr0.eq) goto loc_822226F0;
	// li r3,88
	ctx.r3.s64 = 88;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82217ec8
	ctx.lr = 0x82222694;
	sub_82217EC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822226d4
	if (ctx.cr0.eq) goto loc_822226D4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// sth r30,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r30.u16);
	// addi r11,r11,9656
	ctx.r11.s64 = ctx.r11.s64 + 9656;
	// addi r10,r10,11492
	ctx.r10.s64 = ctx.r10.s64 + 11492;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// sth r30,84(r3)
	PPC_STORE_U16(ctx.r3.u32 + 84, ctx.r30.u16);
	// stb r30,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r30.u8);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x822226d8
	goto loc_822226D8;
loc_822226D4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_822226D8:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x822103f8
	ctx.lr = 0x822226E8;
	sub_822103F8(ctx, base);
	// sth r28,84(r29)
	PPC_STORE_U16(ctx.r29.u32 + 84, ctx.r28.u16);
	// b 0x82222784
	goto loc_82222784;
loc_822226F0:
	// li r3,44
	ctx.r3.s64 = 44;
	// lwz r26,20(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r31,60
	ctx.r28.s64 = ctx.r31.s64 + 60;
	// bl 0x82217ec8
	ctx.lr = 0x82222704;
	sub_82217EC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222750
	if (ctx.cr0.eq) goto loc_82222750;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// sth r30,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r30.u16);
	// addi r11,r11,9656
	ctx.r11.s64 = ctx.r11.s64 + 9656;
	// addi r10,r10,11452
	ctx.r10.s64 = ctx.r10.s64 + 11452;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// sth r30,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r30.u16);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// sth r30,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r30.u16);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// b 0x82222754
	goto loc_82222754;
loc_82222750:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82222754:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8222276c
	if (ctx.cr6.eq) goto loc_8222276C;
	// clrlwi r5,r27,16
	ctx.r5.u64 = ctx.r27.u32 & 0xFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x82212b08
	ctx.lr = 0x8222276C;
	sub_82212B08(ctx, base);
loc_8222276C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82222784
	if (ctx.cr6.eq) goto loc_82222784;
	// clrlwi r5,r26,16
	ctx.r5.u64 = ctx.r26.u32 & 0xFFFF;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x82212b08
	ctx.lr = 0x82222784;
	sub_82212B08(ctx, base);
loc_82222784:
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
loc_82222788:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222798"))) PPC_WEAK_FUNC(sub_82222798);
PPC_FUNC_IMPL(__imp__sub_82222798) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,12356
	ctx.r11.s64 = ctx.r11.s64 + 12356;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x822227e0
	if (ctx.cr0.eq) goto loc_822227E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822227D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_822227E0:
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

__attribute__((alias("__imp__sub_822227F8"))) PPC_WEAK_FUNC(sub_822227F8);
PPC_FUNC_IMPL(__imp__sub_822227F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82222800;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82221a68
	ctx.lr = 0x82222810;
	sub_82221A68(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r11,r11,11360
	ctx.r11.s64 = ctx.r11.s64 + 11360;
	// addi r29,r10,-1100
	ctx.r29.s64 = ctx.r10.s64 + -1100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r29,-29538
	ctx.r6.s64 = ctx.r29.s64 + -29538;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r5,r29,-52
	ctx.r5.s64 = ctx.r29.s64 + -52;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// stb r30,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r30.u8);
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// bl 0x82214df8
	ctx.lr = 0x82222858;
	sub_82214DF8(ctx, base);
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r29,-44
	ctx.r4.s64 = ctx.r29.s64 + -44;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x822267e0
	ctx.lr = 0x82222870;
	sub_822267E0(ctx, base);
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82225f60
	ctx.lr = 0x8222287C;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222890
	if (ctx.cr0.eq) goto loc_82222890;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x8222288C;
	sub_830083A8(ctx, base);
	// b 0x82222894
	goto loc_82222894;
loc_82222890:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82222894:
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lwz r28,16(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82213850
	ctx.lr = 0x822228A0;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822228B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822267e0
	ctx.lr = 0x822228D0;
	sub_822267E0(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822228D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822228d8
	if (!ctx.cr6.eq) goto loc_822228D8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82222994
	if (ctx.cr0.eq) goto loc_82222994;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82222930
	if (ctx.cr6.eq) goto loc_82222930;
loc_8222290C:
	// lbzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,44
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 44, ctx.xer);
	// bne cr6,0x82222924
	if (!ctx.cr6.eq) goto loc_82222924;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_82222924:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8222290c
	if (ctx.cr6.lt) goto loc_8222290C;
loc_82222930:
	// bl 0x82213850
	ctx.lr = 0x82222934;
	sub_82213850(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82222988
	goto loc_82222988;
loc_82222964:
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5f708
	ctx.lr = 0x82222970;
	sub_82D5F708(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stdx r10,r11,r30
	PPC_STORE_U64(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u64);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_82222988:
	// bl 0x82d648b8
	ctx.lr = 0x8222298C;
	sub_82D648B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82222964
	if (!ctx.cr0.eq) goto loc_82222964;
loc_82222994:
	// bl 0x82213850
	ctx.lr = 0x82222998;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822229B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822229C0"))) PPC_WEAK_FUNC(sub_822229C0);
PPC_FUNC_IMPL(__imp__sub_822229C0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82222bd0
	ctx.lr = 0x822229E0;
	sub_82222BD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822229f0
	if (ctx.cr0.eq) goto loc_822229F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8247d948
	ctx.lr = 0x822229F0;
	sub_8247D948(ctx, base);
loc_822229F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82222A10"))) PPC_WEAK_FUNC(sub_82222A10);
PPC_FUNC_IMPL(__imp__sub_82222A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82222A18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822103f8
	ctx.lr = 0x82222A34;
	sub_822103F8(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addic. r5,r30,141
	ctx.xer.ca = ctx.r30.u32 > 4294967154;
	ctx.r5.s64 = ctx.r30.s64 + 141;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lbz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 140);
	// stb r11,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r11.u8);
	// beq 0x82222a60
	if (ctx.cr0.eq) goto loc_82222A60;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,141
	ctx.r3.s64 = ctx.r31.s64 + 141;
	// bl 0x822103f8
	ctx.lr = 0x82222A5C;
	sub_822103F8(ctx, base);
	// b 0x82222a64
	goto loc_82222A64;
loc_82222A60:
	// stb r29,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r29.u8);
loc_82222A64:
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// lbz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 280);
	// stb r11,280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 280, ctx.r11.u8);
	// lwz r5,292(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// lwz r4,288(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r5.u32);
	// beq 0x82222a94
	if (ctx.cr0.eq) goto loc_82222A94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82222cb0
	ctx.lr = 0x82222A90;
	sub_82222CB0(ctx, base);
	// b 0x82222a98
	goto loc_82222A98;
loc_82222A94:
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
loc_82222A98:
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// addi r5,r30,300
	ctx.r5.s64 = ctx.r30.s64 + 300;
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// beq cr6,0x82222ab8
	if (ctx.cr6.eq) goto loc_82222AB8;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x822103f8
	ctx.lr = 0x82222AB8;
	sub_822103F8(ctx, base);
loc_82222AB8:
	// addic. r5,r30,364
	ctx.xer.ca = ctx.r30.u32 > 4294966931;
	ctx.r5.s64 = ctx.r30.s64 + 364;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82222ad0
	if (ctx.cr0.eq) goto loc_82222AD0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822103f8
	ctx.lr = 0x82222ACC;
	sub_822103F8(ctx, base);
	// b 0x82222ad4
	goto loc_82222AD4;
loc_82222AD0:
	// stb r29,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r29.u8);
loc_82222AD4:
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// addic. r5,r30,496
	ctx.xer.ca = ctx.r30.u32 > 4294966799;
	ctx.r5.s64 = ctx.r30.s64 + 496;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// beq 0x82222af4
	if (ctx.cr0.eq) goto loc_82222AF4;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x822103f8
	ctx.lr = 0x82222AF0;
	sub_822103F8(ctx, base);
	// b 0x82222af8
	goto loc_82222AF8;
loc_82222AF4:
	// stb r29,496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 496, ctx.r29.u8);
loc_82222AF8:
	// addic. r5,r30,532
	ctx.xer.ca = ctx.r30.u32 > 4294966763;
	ctx.r5.s64 = ctx.r30.s64 + 532;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82222b10
	if (ctx.cr0.eq) goto loc_82222B10;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x822103f8
	ctx.lr = 0x82222B0C;
	sub_822103F8(ctx, base);
	// b 0x82222b14
	goto loc_82222B14;
loc_82222B10:
	// stb r29,532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 532, ctx.r29.u8);
loc_82222B14:
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// addic. r5,r30,596
	ctx.xer.ca = ctx.r30.u32 > 4294966699;
	ctx.r5.s64 = ctx.r30.s64 + 596;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// beq 0x82222b34
	if (ctx.cr0.eq) goto loc_82222B34;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// bl 0x822103f8
	ctx.lr = 0x82222B30;
	sub_822103F8(ctx, base);
	// b 0x82222b38
	goto loc_82222B38;
loc_82222B34:
	// stb r29,596(r31)
	PPC_STORE_U8(ctx.r31.u32 + 596, ctx.r29.u8);
loc_82222B38:
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// addi r3,r31,728
	ctx.r3.s64 = ctx.r31.s64 + 728;
	// addi r4,r30,728
	ctx.r4.s64 = ctx.r30.s64 + 728;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x82d5c630
	ctx.lr = 0x82222B50;
	sub_82D5C630(ctx, base);
	// lbz r8,736(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 736);
	// addi r11,r31,744
	ctx.r11.s64 = ctx.r31.s64 + 744;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r8,736(r31)
	PPC_STORE_U8(ctx.r31.u32 + 736, ctx.r8.u8);
	// lwz r8,740(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// stw r8,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r8.u32);
	// lwz r8,136(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// lbz r8,752(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 752);
	// stb r8,752(r31)
	PPC_STORE_U8(ctx.r31.u32 + 752, ctx.r8.u8);
loc_82222B7C:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82222b7c
	if (!ctx.cr0.eq) goto loc_82222B7C;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222bb0
	if (ctx.cr0.eq) goto loc_82222BB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82222BB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// bl 0x82214278
	ctx.lr = 0x82222BBC;
	sub_82214278(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222BD0"))) PPC_WEAK_FUNC(sub_82222BD0);
PPC_FUNC_IMPL(__imp__sub_82222BD0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,9724
	ctx.r11.s64 = ctx.r11.s64 + 9724;
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82222c18
	if (ctx.cr6.eq) goto loc_82222C18;
	// bl 0x82213850
	ctx.lr = 0x82222C00;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82222C18:
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222c38
	if (ctx.cr0.eq) goto loc_82222C38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82222C38:
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

__attribute__((alias("__imp__sub_82222C50"))) PPC_WEAK_FUNC(sub_82222C50);
PPC_FUNC_IMPL(__imp__sub_82222C50) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x822103f8
	sub_822103F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222C60"))) PPC_WEAK_FUNC(sub_82222C60);
PPC_FUNC_IMPL(__imp__sub_82222C60) {
	PPC_FUNC_PROLOGUE();
	// stw r4,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222C68"))) PPC_WEAK_FUNC(sub_82222C68);
PPC_FUNC_IMPL(__imp__sub_82222C68) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82222c80
	if (ctx.cr6.eq) goto loc_82222C80;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,141
	ctx.r3.s64 = ctx.r3.s64 + 141;
	// b 0x822103f8
	sub_822103F8(ctx, base);
	return;
loc_82222C80:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,141(r3)
	PPC_STORE_U8(ctx.r3.u32 + 141, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222C90"))) PPC_WEAK_FUNC(sub_82222C90);
PPC_FUNC_IMPL(__imp__sub_82222C90) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r4,186
	ctx.r11.s64 = ctx.r4.s64 + 186;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222CA8"))) PPC_WEAK_FUNC(sub_82222CA8);
PPC_FUNC_IMPL(__imp__sub_82222CA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222CB0"))) PPC_WEAK_FUNC(sub_82222CB0);
PPC_FUNC_IMPL(__imp__sub_82222CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82222CB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82222cf0
	if (ctx.cr6.eq) goto loc_82222CF0;
	// bl 0x82213850
	ctx.lr = 0x82222CD8;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,288(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82222CF0:
	// rlwinm r31,r31,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82213850
	ctx.lr = 0x82222CF8;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r3,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r3.u32);
	// bl 0x82d5c630
	ctx.lr = 0x82222D20;
	sub_82D5C630(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222D28"))) PPC_WEAK_FUNC(sub_82222D28);
PPC_FUNC_IMPL(__imp__sub_82222D28) {
	PPC_FUNC_PROLOGUE();
	// stb r4,736(r3)
	PPC_STORE_U8(ctx.r3.u32 + 736, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222D30"))) PPC_WEAK_FUNC(sub_82222D30);
PPC_FUNC_IMPL(__imp__sub_82222D30) {
	PPC_FUNC_PROLOGUE();
	// stw r4,740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 740, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222D38"))) PPC_WEAK_FUNC(sub_82222D38);
PPC_FUNC_IMPL(__imp__sub_82222D38) {
	PPC_FUNC_PROLOGUE();
	// stw r4,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222D40"))) PPC_WEAK_FUNC(sub_82222D40);
PPC_FUNC_IMPL(__imp__sub_82222D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82222D48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r28,r31,168
	ctx.r28.s64 = ctx.r31.s64 + 168;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,11360
	ctx.r11.s64 = ctx.r11.s64 + 11360;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r10,-30621
	ctx.r30.s64 = ctx.r10.s64 + -30621;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r30,29525
	ctx.r4.s64 = ctx.r30.s64 + 29525;
	// stb r27,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r27.u8);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stb r27,40(r28)
	PPC_STORE_U8(ctx.r28.u32 + 40, ctx.r27.u8);
	// stw r27,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r27.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// bl 0x82225f60
	ctx.lr = 0x82222D8C;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222da4
	if (ctx.cr0.eq) goto loc_82222DA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82222D9C;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82222da8
	goto loc_82222DA8;
loc_82222DA4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82222DA8:
	// addi r4,r30,29529
	ctx.r4.s64 = ctx.r30.s64 + 29529;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82225f60
	ctx.lr = 0x82222DB8;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222dd0
	if (ctx.cr0.eq) goto loc_82222DD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82222DC8;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82222dd4
	goto loc_82222DD4;
loc_82222DD0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82222DD4:
	// addi r4,r30,29533
	ctx.r4.s64 = ctx.r30.s64 + 29533;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82225f60
	ctx.lr = 0x82222DE4;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222dfc
	if (ctx.cr0.eq) goto loc_82222DFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82222DF4;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82222e00
	goto loc_82222E00;
loc_82222DFC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82222E00:
	// addi r4,r30,29537
	ctx.r4.s64 = ctx.r30.s64 + 29537;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82226148
	ctx.lr = 0x82222E14;
	sub_82226148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,29541
	ctx.r4.s64 = ctx.r30.s64 + 29541;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x822267e0
	ctx.lr = 0x82222E30;
	sub_822267E0(ctx, base);
	// addi r4,r30,29549
	ctx.r4.s64 = ctx.r30.s64 + 29549;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82226148
	ctx.lr = 0x82222E40;
	sub_82226148(ctx, base);
	// std r3,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r3.u64);
	// addi r6,r30,-16
	ctx.r6.s64 = ctx.r30.s64 + -16;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// addi r5,r30,29561
	ctx.r5.s64 = ctx.r30.s64 + 29561;
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82214df8
	ctx.lr = 0x82222E60;
	sub_82214DF8(ctx, base);
	// addi r4,r30,29569
	ctx.r4.s64 = ctx.r30.s64 + 29569;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82225f60
	ctx.lr = 0x82222E6C;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222e88
	if (ctx.cr0.eq) goto loc_82222E88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83008990
	ctx.lr = 0x82222E84;
	sub_83008990(ctx, base);
	// b 0x82222e8c
	goto loc_82222E8C;
loc_82222E88:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82222E8C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82222f98
	if (!ctx.cr6.gt) goto loc_82222F98;
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// bl 0x82213850
	ctx.lr = 0x82222E9C;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r30,29577
	ctx.r4.s64 = ctx.r30.s64 + 29577;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x822267e0
	ctx.lr = 0x82222ECC;
	sub_822267E0(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82222efc
	if (ctx.cr6.eq) goto loc_82222EFC;
loc_82222ED8:
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// bne cr6,0x82222ef0
	if (!ctx.cr6.eq) goto loc_82222EF0;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_82222EF0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82222ed8
	if (ctx.cr6.lt) goto loc_82222ED8;
loc_82222EFC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82213850
	ctx.lr = 0x82222F0C;
	sub_82213850(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,29585
	ctx.r4.s64 = ctx.r30.s64 + 29585;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82d648b8
	ctx.lr = 0x82222F3C;
	sub_82D648B8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82222f7c
	if (!ctx.cr6.gt) goto loc_82222F7C;
loc_82222F4C:
	// bl 0x82d5d4f0
	ctx.lr = 0x82222F50;
	sub_82D5D4F0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addi r4,r30,29589
	ctx.r4.s64 = ctx.r30.s64 + 29589;
	// li r3,0
	ctx.r3.s64 = 0;
	// stdx r10,r27,r11
	PPC_STORE_U64(ctx.r27.u32 + ctx.r11.u32, ctx.r10.u64);
	// bl 0x82d648b8
	ctx.lr = 0x82222F68;
	sub_82D648B8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82222f4c
	if (ctx.cr6.lt) goto loc_82222F4C;
loc_82222F7C:
	// bl 0x82213850
	ctx.lr = 0x82222F80;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82222F98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222FA8"))) PPC_WEAK_FUNC(sub_82222FA8);
PPC_FUNC_IMPL(__imp__sub_82222FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82222FB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r30,r11,-30621
	ctx.r30.s64 = ctx.r11.s64 + -30621;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,29593
	ctx.r4.s64 = ctx.r30.s64 + 29593;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82225f60
	ctx.lr = 0x82222FD0;
	sub_82225F60(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222fec
	if (ctx.cr0.eq) goto loc_82222FEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82222FE4;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82222ff0
	goto loc_82222FF0;
loc_82222FEC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82222FF0:
	// addi r4,r30,29597
	ctx.r4.s64 = ctx.r30.s64 + 29597;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82225f60
	ctx.lr = 0x82223000;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82223018
	if (ctx.cr0.eq) goto loc_82223018;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82223010;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8222301c
	goto loc_8222301C;
loc_82223018:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8222301C:
	// addi r4,r30,29601
	ctx.r4.s64 = ctx.r30.s64 + 29601;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// bl 0x82225f60
	ctx.lr = 0x82223034;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82223050
	if (ctx.cr0.eq) goto loc_82223050;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83008990
	ctx.lr = 0x8222304C;
	sub_83008990(ctx, base);
	// b 0x82223054
	goto loc_82223054;
loc_82223050:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82223054:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82223164
	if (!ctx.cr6.gt) goto loc_82223164;
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// bl 0x82213850
	ctx.lr = 0x82223064;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222307C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r30,29609
	ctx.r4.s64 = ctx.r30.s64 + 29609;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x822267e0
	ctx.lr = 0x82223094;
	sub_822267E0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822230c4
	if (ctx.cr6.eq) goto loc_822230C4;
loc_822230A0:
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// bne cr6,0x822230b8
	if (!ctx.cr6.eq) goto loc_822230B8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_822230B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822230a0
	if (ctx.cr6.lt) goto loc_822230A0;
loc_822230C4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82213850
	ctx.lr = 0x822230D4;
	sub_82213850(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822230F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,29617
	ctx.r4.s64 = ctx.r30.s64 + 29617;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82d648b8
	ctx.lr = 0x82223104;
	sub_82D648B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82223148
	if (!ctx.cr6.gt) goto loc_82223148;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82223118:
	// bl 0x82d5d4f0
	ctx.lr = 0x8222311C;
	sub_82D5D4F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r30,29621
	ctx.r4.s64 = ctx.r30.s64 + 29621;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r27,r11
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x82d648b8
	ctx.lr = 0x82223134;
	sub_82D648B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82223118
	if (ctx.cr6.lt) goto loc_82223118;
loc_82223148:
	// bl 0x82213850
	ctx.lr = 0x8222314C;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82223164:
	// addi r4,r30,29625
	ctx.r4.s64 = ctx.r30.s64 + 29625;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// bl 0x82225f60
	ctx.lr = 0x82223178;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82223194
	if (ctx.cr0.eq) goto loc_82223194;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83008990
	ctx.lr = 0x82223190;
	sub_83008990(ctx, base);
	// b 0x82223198
	goto loc_82223198;
loc_82223194:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82223198:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822232a4
	if (!ctx.cr6.gt) goto loc_822232A4;
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// bl 0x82213850
	ctx.lr = 0x822231A8;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822231C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r30,29633
	ctx.r4.s64 = ctx.r30.s64 + 29633;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822267e0
	ctx.lr = 0x822231D8;
	sub_822267E0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82223208
	if (ctx.cr6.eq) goto loc_82223208;
loc_822231E4:
	// lbzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,59
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 59, ctx.xer);
	// bne cr6,0x822231fc
	if (!ctx.cr6.eq) goto loc_822231FC;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_822231FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822231e4
	if (ctx.cr6.lt) goto loc_822231E4;
loc_82223208:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82213850
	ctx.lr = 0x82223218;
	sub_82213850(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,29641
	ctx.r4.s64 = ctx.r30.s64 + 29641;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82d648b8
	ctx.lr = 0x82223248;
	sub_82D648B8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82223288
	if (!ctx.cr6.gt) goto loc_82223288;
loc_82223258:
	// bl 0x82d5d4f0
	ctx.lr = 0x8222325C;
	sub_82D5D4F0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r30,29645
	ctx.r4.s64 = ctx.r30.s64 + 29645;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x82d648b8
	ctx.lr = 0x82223274;
	sub_82D648B8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82223258
	if (ctx.cr6.lt) goto loc_82223258;
loc_82223288:
	// bl 0x82213850
	ctx.lr = 0x8222328C;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822232A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822232A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822232B8"))) PPC_WEAK_FUNC(sub_822232B8);
PPC_FUNC_IMPL(__imp__sub_822232B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x822232C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r29,r11,-30621
	ctx.r29.s64 = ctx.r11.s64 + -30621;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r29,29649
	ctx.r4.s64 = ctx.r29.s64 + 29649;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82225f60
	ctx.lr = 0x822232E0;
	sub_82225F60(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822232fc
	if (ctx.cr0.eq) goto loc_822232FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x822232F4;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82223300
	goto loc_82223300;
loc_822232FC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82223300:
	// addi r4,r29,29653
	ctx.r4.s64 = ctx.r29.s64 + 29653;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82225f60
	ctx.lr = 0x82223310;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82223328
	if (ctx.cr0.eq) goto loc_82223328;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830083a8
	ctx.lr = 0x82223320;
	sub_830083A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8222332c
	goto loc_8222332C;
loc_82223328:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8222332C:
	// addi r4,r29,29657
	ctx.r4.s64 = ctx.r29.s64 + 29657;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// bl 0x82225f60
	ctx.lr = 0x82223344;
	sub_82225F60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82223360
	if (ctx.cr0.eq) goto loc_82223360;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83008990
	ctx.lr = 0x8222335C;
	sub_83008990(ctx, base);
	// b 0x82223364
	goto loc_82223364;
loc_82223360:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82223364:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82223470
	if (!ctx.cr6.gt) goto loc_82223470;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// bl 0x82213850
	ctx.lr = 0x82223374;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222338C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,29665
	ctx.r4.s64 = ctx.r29.s64 + 29665;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822267e0
	ctx.lr = 0x822233A4;
	sub_822267E0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822233d4
	if (ctx.cr6.eq) goto loc_822233D4;
loc_822233B0:
	// lbzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,59
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 59, ctx.xer);
	// bne cr6,0x822233c8
	if (!ctx.cr6.eq) goto loc_822233C8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_822233C8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x822233b0
	if (ctx.cr6.lt) goto loc_822233B0;
loc_822233D4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82213850
	ctx.lr = 0x822233E4;
	sub_82213850(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r29,29673
	ctx.r4.s64 = ctx.r29.s64 + 29673;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82d648b8
	ctx.lr = 0x82223414;
	sub_82D648B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82223454
	if (!ctx.cr6.gt) goto loc_82223454;
loc_82223424:
	// bl 0x82d5d4f0
	ctx.lr = 0x82223428;
	sub_82D5D4F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r29,29677
	ctx.r4.s64 = ctx.r29.s64 + 29677;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x82d648b8
	ctx.lr = 0x82223440;
	sub_82D648B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82223424
	if (ctx.cr6.lt) goto loc_82223424;
loc_82223454:
	// bl 0x82213850
	ctx.lr = 0x82223458;
	sub_82213850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82223470:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223480"))) PPC_WEAK_FUNC(sub_82223480);
PPC_FUNC_IMPL(__imp__sub_82223480) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822234d0
	ctx.lr = 0x822234A0;
	sub_822234D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822234b0
	if (ctx.cr0.eq) goto loc_822234B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8247d948
	ctx.lr = 0x822234B0;
	sub_8247D948(ctx, base);
loc_822234B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_822234D0"))) PPC_WEAK_FUNC(sub_822234D0);
PPC_FUNC_IMPL(__imp__sub_822234D0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,11572
	ctx.r11.s64 = ctx.r11.s64 + 11572;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83010680
	ctx.lr = 0x822234F8;
	sub_83010680(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82223518"))) PPC_WEAK_FUNC(sub_82223518);
PPC_FUNC_IMPL(__imp__sub_82223518) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83010748
	sub_83010748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223520"))) PPC_WEAK_FUNC(sub_82223520);
PPC_FUNC_IMPL(__imp__sub_82223520) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x830106a0
	ctx.lr = 0x82223534;
	sub_830106A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt 0x82223544
	if (ctx.cr0.gt) goto loc_82223544;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82223544:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223558"))) PPC_WEAK_FUNC(sub_82223558);
PPC_FUNC_IMPL(__imp__sub_82223558) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x830107f8
	sub_830107F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223560"))) PPC_WEAK_FUNC(sub_82223560);
PPC_FUNC_IMPL(__imp__sub_82223560) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82a3ad50
	sub_82A3AD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223568"))) PPC_WEAK_FUNC(sub_82223568);
PPC_FUNC_IMPL(__imp__sub_82223568) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e99ba8
	sub_82E99BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223570"))) PPC_WEAK_FUNC(sub_82223570);
PPC_FUNC_IMPL(__imp__sub_82223570) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,12696
	ctx.r11.s64 = ctx.r11.s64 + 12696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822234d0
	ctx.lr = 0x8222359C;
	sub_822234D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822235ac
	if (ctx.cr0.eq) goto loc_822235AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8247d948
	ctx.lr = 0x822235AC;
	sub_8247D948(ctx, base);
loc_822235AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_822235C8"))) PPC_WEAK_FUNC(sub_822235C8);
PPC_FUNC_IMPL(__imp__sub_822235C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x822235D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31979
	ctx.r30.s64 = -2095775744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r31,-13928(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13928);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82223604
	if (!ctx.cr6.eq) goto loc_82223604;
	// bl 0x82223658
	ctx.lr = 0x82223600;
	sub_82223658(ctx, base);
	// lwz r31,-13928(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13928);
loc_82223604:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223910
	ctx.lr = 0x82223620;
	sub_82223910(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223658"))) PPC_WEAK_FUNC(sub_82223658);
PPC_FUNC_IMPL(__imp__sub_82223658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82223660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31979
	ctx.r29.s64 = -2095775744;
	// lwz r11,-13928(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -13928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82223720
	if (!ctx.cr6.eq) goto loc_82223720;
	// li r3,584
	ctx.r3.s64 = 584;
	// bl 0x82217ec8
	ctx.lr = 0x8222367C;
	sub_82217EC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82223718
	if (ctx.cr0.eq) goto loc_82223718;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r3,-13928(r29)
	PPC_STORE_U32(ctx.r29.u32 + -13928, ctx.r3.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r11,10888
	ctx.r11.s64 = ctx.r11.s64 + 10888;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// addi r9,r9,10440
	ctx.r9.s64 = ctx.r9.s64 + 10440;
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r8,r8,10520
	ctx.r8.s64 = ctx.r8.s64 + 10520;
	// lis r5,-32230
	ctx.r5.s64 = -2112225280;
	// addi r10,r3,388
	ctx.r10.s64 = ctx.r3.s64 + 388;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r4,r11,10672
	ctx.r4.s64 = ctx.r11.s64 + 10672;
	// addi r7,r7,10600
	ctx.r7.s64 = ctx.r7.s64 + 10600;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// addi r6,r6,9656
	ctx.r6.s64 = ctx.r6.s64 + 9656;
	// lis r31,-32230
	ctx.r31.s64 = -2112225280;
	// addi r5,r5,10884
	ctx.r5.s64 = ctx.r5.s64 + 10884;
	// lis r30,-32230
	ctx.r30.s64 = -2112225280;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r31,r31,10688
	ctx.r31.s64 = ctx.r31.s64 + 10688;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// addi r30,r30,10728
	ctx.r30.s64 = ctx.r30.s64 + 10728;
	// stw r6,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r6.u32);
	// sth r11,40(r10)
	PPC_STORE_U16(ctx.r10.u32 + 40, ctx.r11.u16);
	// stw r5,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r5.u32);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// stw r11,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r11.u32);
	// stw r11,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r11.u32);
	// stw r4,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r4.u32);
	// stw r31,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r31.u32);
	// stw r30,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r30.u32);
	// b 0x82223720
	goto loc_82223720;
loc_82223718:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-13928(r29)
	PPC_STORE_U32(ctx.r29.u32 + -13928, ctx.r11.u32);
loc_82223720:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223728"))) PPC_WEAK_FUNC(sub_82223728);
PPC_FUNC_IMPL(__imp__sub_82223728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82223730;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,10304
	ctx.r11.s64 = ctx.r11.s64 + 10304;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// bl 0x82224780
	ctx.lr = 0x82223750;
	sub_82224780(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,10256
	ctx.r11.s64 = ctx.r11.s64 + 10256;
	// addi r30,r31,440
	ctx.r30.s64 = ctx.r31.s64 + 440;
	// addi r10,r10,10884
	ctx.r10.s64 = ctx.r10.s64 + 10884;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82224ca8
	ctx.lr = 0x82223774;
	sub_82224CA8(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r10,r10,17412
	ctx.r10.s64 = ctx.r10.s64 + 17412;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// lis r5,-32230
	ctx.r5.s64 = -2112225280;
	// addi r11,r31,388
	ctx.r11.s64 = ctx.r31.s64 + 388;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r9,r9,9832
	ctx.r9.s64 = ctx.r9.s64 + 9832;
	// addi r8,r8,10184
	ctx.r8.s64 = ctx.r8.s64 + 10184;
	// addi r7,r7,10104
	ctx.r7.s64 = ctx.r7.s64 + 10104;
	// addi r6,r6,10024
	ctx.r6.s64 = ctx.r6.s64 + 10024;
	// addi r5,r5,9900
	ctx.r5.s64 = ctx.r5.s64 + 9900;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// clrlwi. r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// beq 0x822237d4
	if (ctx.cr0.eq) goto loc_822237D4;
	// li r4,584
	ctx.r4.s64 = 584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822138a8
	ctx.lr = 0x822237D4;
	sub_822138A8(ctx, base);
loc_822237D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822237E0"))) PPC_WEAK_FUNC(sub_822237E0);
PPC_FUNC_IMPL(__imp__sub_822237E0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,10024
	ctx.r11.s64 = ctx.r11.s64 + 10024;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8222380c
	if (ctx.cr0.eq) goto loc_8222380C;
	// bl 0x8247d948
	ctx.lr = 0x8222380C;
	sub_8247D948(ctx, base);
loc_8222380C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82223828"))) PPC_WEAK_FUNC(sub_82223828);
PPC_FUNC_IMPL(__imp__sub_82223828) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,9832
	ctx.r11.s64 = ctx.r11.s64 + 9832;
	// addi r10,r10,10184
	ctx.r10.s64 = ctx.r10.s64 + 10184;
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x82223860
	if (ctx.cr0.eq) goto loc_82223860;
	// bl 0x8247d948
	ctx.lr = 0x82223860;
	sub_8247D948(ctx, base);
loc_82223860:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82223878"))) PPC_WEAK_FUNC(sub_82223878);
PPC_FUNC_IMPL(__imp__sub_82223878) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82224780
	ctx.lr = 0x82223898;
	sub_82224780(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822238a8
	if (ctx.cr0.eq) goto loc_822238A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8247d948
	ctx.lr = 0x822238A8;
	sub_8247D948(ctx, base);
loc_822238A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_822238C8"))) PPC_WEAK_FUNC(sub_822238C8);
PPC_FUNC_IMPL(__imp__sub_822238C8) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,10304
	ctx.r11.s64 = ctx.r11.s64 + 10304;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x822238f4
	if (ctx.cr0.eq) goto loc_822238F4;
	// bl 0x8247d948
	ctx.lr = 0x822238F4;
	sub_8247D948(ctx, base);
loc_822238F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82223910"))) PPC_WEAK_FUNC(sub_82223910);
PPC_FUNC_IMPL(__imp__sub_82223910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82223918;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222394C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r30,r28,104
	ctx.r30.s64 = ctx.r28.s64 + 104;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stb r31,64(r29)
	PPC_STORE_U8(ctx.r29.u32 + 64, ctx.r31.u8);
	// stb r31,90(r29)
	PPC_STORE_U8(ctx.r29.u32 + 90, ctx.r31.u8);
	// stb r31,80(r29)
	PPC_STORE_U8(ctx.r29.u32 + 80, ctx.r31.u8);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stb r27,98(r29)
	PPC_STORE_U8(ctx.r29.u32 + 98, ctx.r27.u8);
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// stb r27,272(r30)
	PPC_STORE_U8(ctx.r30.u32 + 272, ctx.r27.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822239AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stb r31,48(r30)
	PPC_STORE_U8(ctx.r30.u32 + 48, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822239C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r28,388
	ctx.r29.s64 = ctx.r28.s64 + 388;
	// stb r31,80(r30)
	PPC_STORE_U8(ctx.r30.u32 + 80, ctx.r31.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,144(r30)
	PPC_STORE_U8(ctx.r30.u32 + 144, ctx.r31.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r31,208(r30)
	PPC_STORE_U8(ctx.r30.u32 + 208, ctx.r31.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,8096
	ctx.r11.s64 = 8096;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r31,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r31.u32);
	// li r26,32
	ctx.r26.s64 = 32;
	// addi r30,r28,440
	ctx.r30.s64 = ctx.r28.s64 + 440;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// stw r9,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r9.u32);
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// bl 0x82224ca8
	ctx.lr = 0x82223A34;
	sub_82224CA8(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82217ec8
	ctx.lr = 0x82223A3C;
	sub_82217EC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82223a60
	if (ctx.cr0.eq) goto loc_82223A60;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r11,r11,12720
	ctx.r11.s64 = ctx.r11.s64 + 12720;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82223a64
	goto loc_82223A64;
loc_82223A60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82223A64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224d50
	ctx.lr = 0x82223A6C;
	sub_82224D50(ctx, base);
	// addi r30,r28,496
	ctx.r30.s64 = ctx.r28.s64 + 496;
	// stw r31,464(r28)
	PPC_STORE_U32(ctx.r28.u32 + 464, ctx.r31.u32);
	// li r11,9999
	ctx.r11.s64 = 9999;
	// stw r31,468(r28)
	PPC_STORE_U32(ctx.r28.u32 + 468, ctx.r31.u32);
	// li r10,10000
	ctx.r10.s64 = 10000;
	// stw r31,480(r28)
	PPC_STORE_U32(ctx.r28.u32 + 480, ctx.r31.u32);
	// li r9,60
	ctx.r9.s64 = 60;
	// stw r31,476(r28)
	PPC_STORE_U32(ctx.r28.u32 + 476, ctx.r31.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// stw r31,488(r28)
	PPC_STORE_U32(ctx.r28.u32 + 488, ctx.r31.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r31,484(r28)
	PPC_STORE_U32(ctx.r28.u32 + 484, ctx.r31.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r27,492(r28)
	PPC_STORE_U32(ctx.r28.u32 + 492, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r11,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r11.u16);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r27,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r27.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// lwz r11,80(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223B40"))) PPC_WEAK_FUNC(sub_82223B40);
PPC_FUNC_IMPL(__imp__sub_82223B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82223B48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31979
	ctx.r29.s64 = -2095775744;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,528
	ctx.r30.s64 = ctx.r11.s64 + 528;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-13976(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -13976);
	// addi r6,r30,-15188
	ctx.r6.s64 = ctx.r30.s64 + -15188;
	// addi r5,r30,-1448
	ctx.r5.s64 = ctx.r30.s64 + -1448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-1440
	ctx.r4.s64 = ctx.r30.s64 + -1440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r28,104
	ctx.r3.s64 = ctx.r28.s64 + 104;
	// bl 0x82224028
	ctx.lr = 0x82223BA0;
	sub_82224028(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-1396
	ctx.r4.s64 = ctx.r30.s64 + -1396;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x82223d18
	ctx.lr = 0x82223BC0;
	sub_82223D18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-1392
	ctx.r4.s64 = ctx.r30.s64 + -1392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r28,388
	ctx.r3.s64 = ctx.r28.s64 + 388;
	// bl 0x82224228
	ctx.lr = 0x82223BE0;
	sub_82224228(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-1388
	ctx.r4.s64 = ctx.r30.s64 + -1388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r28,440
	ctx.r3.s64 = ctx.r28.s64 + 440;
	// bl 0x82224e18
	ctx.lr = 0x82223C00;
	sub_82224E18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-1384
	ctx.r4.s64 = ctx.r30.s64 + -1384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,-13976(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + -13976);
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// addi r27,r28,460
	ctx.r27.s64 = ctx.r28.s64 + 460;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r5,r30,-36
	ctx.r5.s64 = ctx.r30.s64 + -36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82223cb4
	if (!ctx.cr6.gt) goto loc_82223CB4;
	// li r25,0
	ctx.r25.s64 = 0;
loc_82223C6C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r8,r25,r11
	ctx.r8.u64 = ctx.r25.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r8,32
	ctx.r7.s64 = ctx.r8.s64 + 32;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,64(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,68
	ctx.r25.s64 = ctx.r25.s64 + 68;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82223c6c
	if (ctx.cr6.lt) goto loc_82223C6C;
loc_82223CB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-1380
	ctx.r4.s64 = ctx.r30.s64 + -1380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223CCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r28,472
	ctx.r3.s64 = ctx.r28.s64 + 472;
	// bl 0x82224640
	ctx.lr = 0x82223CD4;
	sub_82224640(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-1376
	ctx.r4.s64 = ctx.r30.s64 + -1376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223CEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r28,496
	ctx.r3.s64 = ctx.r28.s64 + 496;
	// bl 0x82224948
	ctx.lr = 0x82223CF4;
	sub_82224948(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-1372
	ctx.r4.s64 = ctx.r30.s64 + -1372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223D18"))) PPC_WEAK_FUNC(sub_82223D18);
PPC_FUNC_IMPL(__imp__sub_82223D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82223D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,-13976(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13976);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r11,-784
	ctx.r30.s64 = ctx.r11.s64 + -784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r6,r29,16
	ctx.r6.s64 = ctx.r29.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 + 44;
	// addi r6,r29,32
	ctx.r6.s64 = ctx.r29.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82223dc0
	if (ctx.cr6.lt) goto loc_82223DC0;
	// beq cr6,0x82223db8
	if (ctx.cr6.eq) goto loc_82223DB8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82223db0
	if (ctx.cr6.lt) goto loc_82223DB0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x82223dc4
	goto loc_82223DC4;
loc_82223DB0:
	// addi r6,r30,-12
	ctx.r6.s64 = ctx.r30.s64 + -12;
	// b 0x82223dc4
	goto loc_82223DC4;
loc_82223DB8:
	// addi r6,r30,-8
	ctx.r6.s64 = ctx.r30.s64 + -8;
	// b 0x82223dc4
	goto loc_82223DC4;
loc_82223DC0:
	// addi r6,r30,-16
	ctx.r6.s64 = ctx.r30.s64 + -16;
loc_82223DC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r30,-8
	ctx.r7.s64 = ctx.r30.s64 + -8;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r5,r30,108
	ctx.r5.s64 = ctx.r30.s64 + 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,132
	ctx.r5.s64 = ctx.r30.s64 + 132;
	// addi r6,r29,64
	ctx.r6.s64 = ctx.r29.s64 + 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,152
	ctx.r5.s64 = ctx.r30.s64 + 152;
	// addi r6,r29,80
	ctx.r6.s64 = ctx.r29.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,180
	ctx.r5.s64 = ctx.r30.s64 + 180;
	// addi r6,r29,90
	ctx.r6.s64 = ctx.r29.s64 + 90;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r5,r30,196
	ctx.r5.s64 = ctx.r30.s64 + 196;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,98(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 98);
	// addi r6,r30,224
	ctx.r6.s64 = ctx.r30.s64 + 224;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82223e9c
	if (!ctx.cr0.eq) goto loc_82223E9C;
	// addi r6,r30,228
	ctx.r6.s64 = ctx.r30.s64 + 228;
loc_82223E9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,232
	ctx.r5.s64 = ctx.r30.s64 + 232;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223EC0"))) PPC_WEAK_FUNC(sub_82223EC0);
PPC_FUNC_IMPL(__imp__sub_82223EC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x822103f8
	sub_822103F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223EE0"))) PPC_WEAK_FUNC(sub_82223EE0);
PPC_FUNC_IMPL(__imp__sub_82223EE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x822103f8
	sub_822103F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223F00"))) PPC_WEAK_FUNC(sub_82223F00);
PPC_FUNC_IMPL(__imp__sub_82223F00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x822103f8
	sub_822103F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223F20"))) PPC_WEAK_FUNC(sub_82223F20);
PPC_FUNC_IMPL(__imp__sub_82223F20) {
	PPC_FUNC_PROLOGUE();
	// stw r4,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r4.u32);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x82223f64
	if (ctx.cr6.lt) goto loc_82223F64;
	// beq cr6,0x82223f58
	if (ctx.cr6.eq) goto loc_82223F58;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x82223f4c
	if (ctx.cr6.lt) goto loc_82223F4C;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// blt cr6,0x82223f44
	if (ctx.cr6.lt) goto loc_82223F44;
	// beq cr6,0x82223f64
	if (ctx.cr6.eq) goto loc_82223F64;
loc_82223F44:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82223f6c
	goto loc_82223F6C;
loc_82223F4C:
	// lis r11,17729
	ctx.r11.s64 = 1161887744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82223f6c
	goto loc_82223F6C;
loc_82223F58:
	// lis r11,17729
	ctx.r11.s64 = 1161887744;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x82223f6c
	goto loc_82223F6C;
loc_82223F64:
	// lis r11,17729
	ctx.r11.s64 = 1161887744;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82223F6C:
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82223F78"))) PPC_WEAK_FUNC(sub_82223F78);
PPC_FUNC_IMPL(__imp__sub_82223F78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82224010
	if (ctx.cr6.lt) goto loc_82224010;
	// beq cr6,0x82224000
	if (ctx.cr6.eq) goto loc_82224000;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82223ff0
	if (ctx.cr6.lt) goto loc_82223FF0;
	// beq cr6,0x82223fe0
	if (ctx.cr6.eq) goto loc_82223FE0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82223fd0
	if (ctx.cr6.lt) goto loc_82223FD0;
	// beq cr6,0x82223fc0
	if (ctx.cr6.eq) goto loc_82223FC0;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// blt cr6,0x82223fb4
	if (ctx.cr6.lt) goto loc_82223FB4;
	// addi r3,r11,-30630
	ctx.r3.s64 = ctx.r11.s64 + -30630;
	// blr 
	return;
loc_82223FB4:
	// addi r11,r11,-30630
	ctx.r11.s64 = ctx.r11.s64 + -30630;
	// addi r3,r11,30158
	ctx.r3.s64 = ctx.r11.s64 + 30158;
	// blr 
	return;
loc_82223FC0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-30630
	ctx.r11.s64 = ctx.r11.s64 + -30630;
	// addi r3,r11,30150
	ctx.r3.s64 = ctx.r11.s64 + 30150;
	// blr 
	return;
loc_82223FD0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-30630
	ctx.r11.s64 = ctx.r11.s64 + -30630;
	// addi r3,r11,30142
	ctx.r3.s64 = ctx.r11.s64 + 30142;
	// blr 
	return;
loc_82223FE0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-30630
	ctx.r11.s64 = ctx.r11.s64 + -30630;
	// addi r3,r11,30130
	ctx.r3.s64 = ctx.r11.s64 + 30130;
	// blr 
	return;
loc_82223FF0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-30630
	ctx.r11.s64 = ctx.r11.s64 + -30630;
	// addi r3,r11,30118
	ctx.r3.s64 = ctx.r11.s64 + 30118;
	// blr 
	return;
loc_82224000:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-30630
	ctx.r11.s64 = ctx.r11.s64 + -30630;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
loc_82224010:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-30630
	ctx.r11.s64 = ctx.r11.s64 + -30630;
	// addi r3,r11,30110
	ctx.r3.s64 = ctx.r11.s64 + 30110;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224020"))) PPC_WEAK_FUNC(sub_82224020);
PPC_FUNC_IMPL(__imp__sub_82224020) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 272);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224028"))) PPC_WEAK_FUNC(sub_82224028);
PPC_FUNC_IMPL(__imp__sub_82224028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82224030;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,-13976(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13976);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r11,-132
	ctx.r30.s64 = ctx.r11.s64 + -132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-332
	ctx.r4.s64 = ctx.r30.s64 + -332;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,-316
	ctx.r5.s64 = ctx.r30.s64 + -316;
	// addi r6,r29,16
	ctx.r6.s64 = ctx.r29.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r30,-292
	ctx.r5.s64 = ctx.r30.s64 + -292;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822240A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82223f78
	ctx.lr = 0x822240AC;
	sub_82223F78(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r5,r30,-276
	ctx.r5.s64 = ctx.r30.s64 + -276;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822240C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,280(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// addi r5,r30,-256
	ctx.r5.s64 = ctx.r30.s64 + -256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822240EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,-224
	ctx.r5.s64 = ctx.r30.s64 + -224;
	// addi r6,r29,80
	ctx.r6.s64 = ctx.r29.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222410C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,-196
	ctx.r5.s64 = ctx.r30.s64 + -196;
	// addi r6,r29,144
	ctx.r6.s64 = ctx.r29.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222412C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82224158
	if (ctx.cr0.eq) goto loc_82224158;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r30,-164
	ctx.r5.s64 = ctx.r30.s64 + -164;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82224168
	goto loc_82224168;
loc_82224158:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r30,-136
	ctx.r4.s64 = ctx.r30.s64 + -136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82224168:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,-104
	ctx.r5.s64 = ctx.r30.s64 + -104;
	// addi r6,r29,208
	ctx.r6.s64 = ctx.r29.s64 + 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x822241b4
	if (ctx.cr0.eq) goto loc_822241B4;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r30,-76
	ctx.r5.s64 = ctx.r30.s64 + -76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822241B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822241c4
	goto loc_822241C4;
loc_822241B4:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822241C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822241C4:
	// lbz r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 272);
	// addi r6,r30,-20
	ctx.r6.s64 = ctx.r30.s64 + -20;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822241d8
	if (!ctx.cr0.eq) goto loc_822241D8;
	// addi r6,r30,-8
	ctx.r6.s64 = ctx.r30.s64 + -8;
loc_822241D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822241F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224200"))) PPC_WEAK_FUNC(sub_82224200);
PPC_FUNC_IMPL(__imp__sub_82224200) {
	PPC_FUNC_PROLOGUE();
	// stb r4,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r4.u8);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224210"))) PPC_WEAK_FUNC(sub_82224210);
PPC_FUNC_IMPL(__imp__sub_82224210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224228"))) PPC_WEAK_FUNC(sub_82224228);
PPC_FUNC_IMPL(__imp__sub_82224228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82224230;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,-13976(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13976);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r11,432
	ctx.r30.s64 = ctx.r11.s64 + 432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-552
	ctx.r4.s64 = ctx.r30.s64 + -552;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r30,-528
	ctx.r5.s64 = ctx.r30.s64 + -528;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r30,-504
	ctx.r6.s64 = ctx.r30.s64 + -504;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82224298
	if (!ctx.cr0.eq) goto loc_82224298;
	// addi r6,r30,-500
	ctx.r6.s64 = ctx.r30.s64 + -500;
loc_82224298:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,-496
	ctx.r5.s64 = ctx.r30.s64 + -496;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822242B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r30,-456
	ctx.r6.s64 = ctx.r30.s64 + -456;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822242c8
	if (!ctx.cr0.eq) goto loc_822242C8;
	// addi r6,r30,-452
	ctx.r6.s64 = ctx.r30.s64 + -452;
loc_822242C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,-448
	ctx.r5.s64 = ctx.r30.s64 + -448;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822242E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r30,-408
	ctx.r6.s64 = ctx.r30.s64 + -408;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822242f8
	if (!ctx.cr0.eq) goto loc_822242F8;
	// addi r6,r30,-404
	ctx.r6.s64 = ctx.r30.s64 + -404;
loc_822242F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,-400
	ctx.r5.s64 = ctx.r30.s64 + -400;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r30,-356
	ctx.r6.s64 = ctx.r30.s64 + -356;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82224328
	if (!ctx.cr0.eq) goto loc_82224328;
	// addi r6,r30,-352
	ctx.r6.s64 = ctx.r30.s64 + -352;
loc_82224328:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,-348
	ctx.r5.s64 = ctx.r30.s64 + -348;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r6,r30,-304
	ctx.r6.s64 = ctx.r30.s64 + -304;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82224358
	if (!ctx.cr0.eq) goto loc_82224358;
	// addi r6,r30,-300
	ctx.r6.s64 = ctx.r30.s64 + -300;
loc_82224358:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,-296
	ctx.r5.s64 = ctx.r30.s64 + -296;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 28);
	// addi r6,r30,-248
	ctx.r6.s64 = ctx.r30.s64 + -248;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82224388
	if (!ctx.cr0.eq) goto loc_82224388;
	// addi r6,r30,-244
	ctx.r6.s64 = ctx.r30.s64 + -244;
loc_82224388:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,-240
	ctx.r5.s64 = ctx.r30.s64 + -240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822243A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 28);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,-208
	ctx.r5.s64 = ctx.r30.s64 + -208;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bne 0x822243cc
	if (!ctx.cr0.eq) goto loc_822243CC;
	// addi r5,r30,-176
	ctx.r5.s64 = ctx.r30.s64 + -176;
loc_822243CC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822243D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r30,-132
	ctx.r5.s64 = ctx.r30.s64 + -132;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822243F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,20(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r5,r30,-64
	ctx.r5.s64 = ctx.r30.s64 + -64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,44(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,48(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224480"))) PPC_WEAK_FUNC(sub_82224480);
PPC_FUNC_IMPL(__imp__sub_82224480) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

