#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82217450"))) PPC_WEAK_FUNC(sub_82217450);
PPC_FUNC_IMPL(__imp__sub_82217450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r3,-12072(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12072);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217460"))) PPC_WEAK_FUNC(sub_82217460);
PPC_FUNC_IMPL(__imp__sub_82217460) {
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
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r11,-912(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -912);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822174f4
	if (!ctx.cr6.eq) goto loc_822174F4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822174f4
	if (ctx.cr6.eq) goto loc_822174F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e32188
	ctx.lr = 0x8221749C;
	sub_82E32188(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e32128
	ctx.lr = 0x822174A4;
	sub_82E32128(ctx, base);
	// bl 0x82e31a80
	ctx.lr = 0x822174A8;
	sub_82E31A80(ctx, base);
	// addi r4,r3,11
	ctx.r4.s64 = ctx.r3.s64 + 11;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822174B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822174b4
	if (!ctx.cr6.eq) goto loc_822174B4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
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
	// bl 0x82e2b548
	ctx.lr = 0x822174F0;
	sub_82E2B548(ctx, base);
	// b 0x82217504
	goto loc_82217504;
loc_822174F4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,21872
	ctx.r3.s64 = ctx.r11.s64 + 21872;
	// bl 0x82e2b548
	ctx.lr = 0x82217504;
	sub_82E2B548(ctx, base);
loc_82217504:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221750C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221750c
	if (!ctx.cr6.eq) goto loc_8221750C;
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
	// ble 0x82217540
	if (!ctx.cr0.gt) goto loc_82217540;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82217544
	if (ctx.cr6.eq) goto loc_82217544;
loc_82217540:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82217544:
	// stb r11,-912(r30)
	PPC_STORE_U8(ctx.r30.u32 + -912, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82217560"))) PPC_WEAK_FUNC(sub_82217560);
PPC_FUNC_IMPL(__imp__sub_82217560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82217568;
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
	// bl 0x82e29500
	ctx.lr = 0x8221758C;
	sub_82E29500(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// addi r3,r1,129
	ctx.r3.s64 = ctx.r1.s64 + 129;
	// bl 0x82e29500
	ctx.lr = 0x822175A0;
	sub_82E29500(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// addi r3,r1,177
	ctx.r3.s64 = ctx.r1.s64 + 177;
	// bl 0x82e29500
	ctx.lr = 0x822175B4;
	sub_82E29500(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r6,33
	ctx.r6.s64 = 33;
	// addi r29,r11,21936
	ctx.r29.s64 = ctx.r11.s64 + 21936;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822293e0
	ctx.lr = 0x822175D0;
	sub_822293E0(ctx, base);
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// li r6,33
	ctx.r6.s64 = 33;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822293e0
	ctx.lr = 0x822175E4;
	sub_822293E0(ctx, base);
	// li r6,33
	ctx.r6.s64 = 33;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822293e0
	ctx.lr = 0x822175F8;
	sub_822293E0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822103f8
	ctx.lr = 0x82217608;
	sub_822103F8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r3,r31,33
	ctx.r3.s64 = ctx.r31.s64 + 33;
	// bl 0x822103f8
	ctx.lr = 0x82217618;
	sub_822103F8(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r3,r31,66
	ctx.r3.s64 = ctx.r31.s64 + 66;
	// bl 0x822103f8
	ctx.lr = 0x82217628;
	sub_822103F8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217630"))) PPC_WEAK_FUNC(sub_82217630);
PPC_FUNC_IMPL(__imp__sub_82217630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82217638;
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
	// beq cr6,0x82217708
	if (ctx.cr6.eq) goto loc_82217708;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82217664
	if (ctx.cr6.eq) goto loc_82217664;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82217708
	if (!ctx.cr6.eq) goto loc_82217708;
loc_82217664:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221767c
	if (!ctx.cr6.eq) goto loc_8221767C;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// stb r11,33(r27)
	PPC_STORE_U8(ctx.r27.u32 + 33, ctx.r11.u8);
	// stb r11,66(r27)
	PPC_STORE_U8(ctx.r27.u32 + 66, ctx.r11.u8);
	// b 0x82217708
	goto loc_82217708;
loc_8221767C:
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822103f8
	ctx.lr = 0x82217688;
	sub_822103F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-1126
	ctx.r31.s64 = ctx.r11.s64 + -1126;
	// addi r4,r31,23154
	ctx.r4.s64 = ctx.r31.s64 + 23154;
	// bl 0x82e312b8
	ctx.lr = 0x8221769C;
	sub_82E312B8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x822176a8
	if (!ctx.cr0.eq) goto loc_822176A8;
	// addi r28,r31,-4
	ctx.r28.s64 = ctx.r31.s64 + -4;
loc_822176A8:
	// addi r4,r31,23158
	ctx.r4.s64 = ctx.r31.s64 + 23158;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e312b8
	ctx.lr = 0x822176B4;
	sub_82E312B8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x822176c0
	if (!ctx.cr0.eq) goto loc_822176C0;
	// addi r29,r31,-3
	ctx.r29.s64 = ctx.r31.s64 + -3;
loc_822176C0:
	// addi r4,r31,23162
	ctx.r4.s64 = ctx.r31.s64 + 23162;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e312b8
	ctx.lr = 0x822176CC;
	sub_82E312B8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822176d8
	if (!ctx.cr0.eq) goto loc_822176D8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_822176D8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822103f8
	ctx.lr = 0x822176E8;
	sub_822103F8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r3,r27,33
	ctx.r3.s64 = ctx.r27.s64 + 33;
	// bl 0x822103f8
	ctx.lr = 0x822176F8;
	sub_822103F8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r3,r27,66
	ctx.r3.s64 = ctx.r27.s64 + 66;
	// bl 0x822103f8
	ctx.lr = 0x82217708;
	sub_822103F8(ctx, base);
loc_82217708:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217710"))) PPC_WEAK_FUNC(sub_82217710);
PPC_FUNC_IMPL(__imp__sub_82217710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82217718;
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
	// beq cr6,0x82217824
	if (ctx.cr6.eq) goto loc_82217824;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r31,r11,22048
	ctx.r31.s64 = ctx.r11.s64 + 22048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82e2b400
	ctx.lr = 0x82217750;
	sub_82E2B400(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82217758:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82217758
	if (!ctx.cr6.eq) goto loc_82217758;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8221776C:
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
	// bne 0x8221776c
	if (!ctx.cr0.eq) goto loc_8221776C;
	// lbz r11,33(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 33);
	// addi r5,r29,33
	ctx.r5.s64 = ctx.r29.s64 + 33;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217824
	if (ctx.cr6.eq) goto loc_82217824;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x822177A0;
	sub_82E2B400(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_822177A8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822177a8
	if (!ctx.cr6.eq) goto loc_822177A8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_822177BC:
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
	// bne 0x822177bc
	if (!ctx.cr0.eq) goto loc_822177BC;
	// lbz r11,66(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 66);
	// addi r5,r29,66
	ctx.r5.s64 = ctx.r29.s64 + 66;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217824
	if (ctx.cr6.eq) goto loc_82217824;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x822177F0;
	sub_82E2B400(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_822177F8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822177f8
	if (!ctx.cr6.eq) goto loc_822177F8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8221780C:
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
	// bne 0x8221780c
	if (!ctx.cr0.eq) goto loc_8221780C;
loc_82217824:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217830"))) PPC_WEAK_FUNC(sub_82217830);
PPC_FUNC_IMPL(__imp__sub_82217830) {
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
	// bl 0x82e2e820
	ctx.lr = 0x82217850;
	sub_82E2E820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82217884
	if (!ctx.cr0.eq) goto loc_82217884;
	// addi r4,r30,33
	ctx.r4.s64 = ctx.r30.s64 + 33;
	// addi r3,r31,33
	ctx.r3.s64 = ctx.r31.s64 + 33;
	// bl 0x82e2e820
	ctx.lr = 0x82217864;
	sub_82E2E820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82217884
	if (!ctx.cr0.eq) goto loc_82217884;
	// addi r4,r30,66
	ctx.r4.s64 = ctx.r30.s64 + 66;
	// addi r3,r31,66
	ctx.r3.s64 = ctx.r31.s64 + 66;
	// bl 0x82e2e820
	ctx.lr = 0x82217878;
	sub_82E2E820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82217888
	if (ctx.cr0.eq) goto loc_82217888;
loc_82217884:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82217888:
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

__attribute__((alias("__imp__sub_822178A8"))) PPC_WEAK_FUNC(sub_822178A8);
PPC_FUNC_IMPL(__imp__sub_822178A8) {
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
	ctx.lr = 0x822178D0;
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

__attribute__((alias("__imp__sub_822178E8"))) PPC_WEAK_FUNC(sub_822178E8);
PPC_FUNC_IMPL(__imp__sub_822178E8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82217950
	if (ctx.cr6.eq) goto loc_82217950;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82217948
	if (ctx.cr6.eq) goto loc_82217948;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82217940
	if (ctx.cr6.eq) goto loc_82217940;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x82217938
	if (ctx.cr6.eq) goto loc_82217938;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x82217930
	if (ctx.cr6.eq) goto loc_82217930;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// beq cr6,0x82217928
	if (ctx.cr6.eq) goto loc_82217928;
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// bne cr6,0x82217950
	if (!ctx.cr6.eq) goto loc_82217950;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82217928:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82217930:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82217938:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82217940:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82217948:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82217950:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217958"))) PPC_WEAK_FUNC(sub_82217958);
PPC_FUNC_IMPL(__imp__sub_82217958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e50
	ctx.lr = 0x82217960;
	__savegprlr_22(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r11,22860
	ctx.r31.s64 = ctx.r11.s64 + 22860;
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
	// bl 0x82e2b400
	ctx.lr = 0x8221798C;
	sub_82E2B400(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221799C;
	sub_82228BF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82217b50
	if (ctx.cr6.eq) goto loc_82217B50;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
loc_822179AC:
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e2b400
	ctx.lr = 0x822179C0;
	sub_82E2B400(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,-12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// bl 0x82228bf0
	ctx.lr = 0x822179D0;
	sub_82228BF0(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e2b400
	ctx.lr = 0x822179E4;
	sub_82E2B400(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,-4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x82228df8
	ctx.lr = 0x822179F4;
	sub_82228DF8(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e2b400
	ctx.lr = 0x82217A08;
	sub_82E2B400(ctx, base);
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r31,8840
	ctx.r4.s64 = ctx.r31.s64 + 8840;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82e2b400
	ctx.lr = 0x82217A20;
	sub_82E2B400(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82228df8
	ctx.lr = 0x82217A30;
	sub_82228DF8(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e2b400
	ctx.lr = 0x82217A44;
	sub_82E2B400(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82228df8
	ctx.lr = 0x82217A54;
	sub_82228DF8(ctx, base);
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e2b400
	ctx.lr = 0x82217A68;
	sub_82E2B400(ctx, base);
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
	// bl 0x82e29500
	ctx.lr = 0x82217A84;
	sub_82E29500(ctx, base);
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82217A90:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x82217aec
	if (ctx.cr6.lt) goto loc_82217AEC;
	// beq cr6,0x82217ae4
	if (ctx.cr6.eq) goto loc_82217AE4;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// blt cr6,0x82217adc
	if (ctx.cr6.lt) goto loc_82217ADC;
	// beq cr6,0x82217ad4
	if (ctx.cr6.eq) goto loc_82217AD4;
	// cmplwi cr6,r26,5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 5, ctx.xer);
	// blt cr6,0x82217acc
	if (ctx.cr6.lt) goto loc_82217ACC;
	// beq cr6,0x82217ac4
	if (ctx.cr6.eq) goto loc_82217AC4;
	// cmplwi cr6,r26,7
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 7, ctx.xer);
	// bge cr6,0x82217aec
	if (!ctx.cr6.lt) goto loc_82217AEC;
	// li r11,64
	ctx.r11.s64 = 64;
	// b 0x82217af0
	goto loc_82217AF0;
loc_82217AC4:
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x82217af0
	goto loc_82217AF0;
loc_82217ACC:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82217af0
	goto loc_82217AF0;
loc_82217AD4:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82217af0
	goto loc_82217AF0;
loc_82217ADC:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82217af0
	goto loc_82217AF0;
loc_82217AE4:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82217af0
	goto loc_82217AF0;
loc_82217AEC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82217AF0:
	// and. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82217b24
	if (ctx.cr0.eq) goto loc_82217B24;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// beq 0x82217b14
	if (ctx.cr0.eq) goto loc_82217B14;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x82217b1c
	goto loc_82217B1C;
loc_82217B14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82217B1C:
	// bl 0x82e2b400
	ctx.lr = 0x82217B20;
	sub_82E2B400(ctx, base);
	// add r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 + ctx.r25.u64;
loc_82217B24:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,7
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 7, ctx.xer);
	// blt cr6,0x82217a90
	if (ctx.cr6.lt) goto loc_82217A90;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82228df8
	ctx.lr = 0x82217B40;
	sub_82228DF8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x822179ac
	if (ctx.cr6.lt) goto loc_822179AC;
loc_82217B50:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82e28ea0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217B58"))) PPC_WEAK_FUNC(sub_82217B58);
PPC_FUNC_IMPL(__imp__sub_82217B58) {
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
	// bl 0x82217ba8
	ctx.lr = 0x82217B78;
	sub_82217BA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82217b8c
	if (ctx.cr0.eq) goto loc_82217B8C;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217db8
	ctx.lr = 0x82217B8C;
	sub_82217DB8(ctx, base);
loc_82217B8C:
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

__attribute__((alias("__imp__sub_82217BA8"))) PPC_WEAK_FUNC(sub_82217BA8);
PPC_FUNC_IMPL(__imp__sub_82217BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82217BB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-24260
	ctx.r11.s64 = ctx.r11.s64 + -24260;
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
	// beq 0x82217c1c
	if (ctx.cr0.eq) goto loc_82217C1C;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82217BE0:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82217c0c
	if (ctx.cr0.eq) goto loc_82217C0C;
	// addi r27,r31,28
	ctx.r27.s64 = ctx.r31.s64 + 28;
loc_82217BF0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822137f0
	ctx.lr = 0x82217C04;
	sub_822137F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82217bf0
	if (!ctx.cr6.eq) goto loc_82217BF0;
loc_82217C0C:
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82217be0
	if (!ctx.cr0.eq) goto loc_82217BE0;
loc_82217C1C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82217c40
	if (!ctx.cr6.gt) goto loc_82217C40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822137f0
	ctx.lr = 0x82217C40;
	sub_822137F0(ctx, base);
loc_82217C40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217C48"))) PPC_WEAK_FUNC(sub_82217C48);
PPC_FUNC_IMPL(__imp__sub_82217C48) {
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
	// b 0x82217c80
	goto loc_82217C80;
loc_82217C70:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82217c88
	if (ctx.cr6.eq) goto loc_82217C88;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82217C80:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82217c70
	if (!ctx.cr0.eq) goto loc_82217C70;
loc_82217C88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217c9c
	if (ctx.cr6.eq) goto loc_82217C9C;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// b 0x82217cb0
	goto loc_82217CB0;
loc_82217C9C:
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
loc_82217CB0:
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

__attribute__((alias("__imp__sub_82217CE0"))) PPC_WEAK_FUNC(sub_82217CE0);
PPC_FUNC_IMPL(__imp__sub_82217CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82217CE8;
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
	// beq 0x82217d24
	if (ctx.cr0.eq) goto loc_82217D24;
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
	ctx.lr = 0x82217D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82217D24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217c48
	ctx.lr = 0x82217D30;
	sub_82217C48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// beq 0x82217d50
	if (ctx.cr0.eq) goto loc_82217D50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82217D50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217D58"))) PPC_WEAK_FUNC(sub_82217D58);
PPC_FUNC_IMPL(__imp__sub_82217D58) {
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
	// bl 0x82213798
	ctx.lr = 0x82217D70;
	sub_82213798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82217d98
	if (ctx.cr0.eq) goto loc_82217D98;
	// bl 0x82213798
	ctx.lr = 0x82217D7C;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82217D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82217da0
	goto loc_82217DA0;
loc_82217D98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2afb0
	ctx.lr = 0x82217DA0;
	sub_82E2AFB0(ctx, base);
loc_82217DA0:
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

__attribute__((alias("__imp__sub_82217DB8"))) PPC_WEAK_FUNC(sub_82217DB8);
PPC_FUNC_IMPL(__imp__sub_82217DB8) {
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
	// bl 0x82213798
	ctx.lr = 0x82217DD0;
	sub_82213798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82217df8
	if (ctx.cr0.eq) goto loc_82217DF8;
	// bl 0x82213798
	ctx.lr = 0x82217DDC;
	sub_82213798(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82217e00
	goto loc_82217E00;
loc_82217DF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2af50
	ctx.lr = 0x82217E00;
	sub_82E2AF50(ctx, base);
loc_82217E00:
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

__attribute__((alias("__imp__sub_82217E18"))) PPC_WEAK_FUNC(sub_82217E18);
PPC_FUNC_IMPL(__imp__sub_82217E18) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23276
	ctx.r11.s64 = ctx.r11.s64 + -23276;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82217e48
	if (ctx.cr0.eq) goto loc_82217E48;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x82217db8
	ctx.lr = 0x82217E48;
	sub_82217DB8(ctx, base);
loc_82217E48:
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

__attribute__((alias("__imp__sub_82217E60"))) PPC_WEAK_FUNC(sub_82217E60);
PPC_FUNC_IMPL(__imp__sub_82217E60) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217E70"))) PPC_WEAK_FUNC(sub_82217E70);
PPC_FUNC_IMPL(__imp__sub_82217E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82217E78;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-940
	ctx.r31.s64 = ctx.r11.s64 + -940;
loc_82217EAC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8221f720
	ctx.lr = 0x82217EB4;
	sub_8221F720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82217EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x822182a0
	ctx.lr = 0x82217F00;
	sub_822182A0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82217eac
	if (ctx.cr0.eq) goto loc_82217EAC;
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217F18"))) PPC_WEAK_FUNC(sub_82217F18);
PPC_FUNC_IMPL(__imp__sub_82217F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82217F20;
	__savegprlr_28(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r28,r31,28
	ctx.r28.s64 = ctx.r31.s64 + 28;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82e28fd0
	ctx.lr = 0x82217F50;
	sub_82E28FD0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r4,r11,-28548
	ctx.r4.s64 = ctx.r11.s64 + -28548;
	// bl 0x82228b60
	ctx.lr = 0x82217F64;
	sub_82228B60(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82217f7c
	if (ctx.cr0.eq) goto loc_82217F7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82217F78;
	sub_830D8578(ctx, base);
	// b 0x82217f80
	goto loc_82217F80;
loc_82217F7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82217F80:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r4,r11,-27756
	ctx.r4.s64 = ctx.r11.s64 + -27756;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822293e0
	ctx.lr = 0x82217FA4;
	sub_822293E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r31,68
	ctx.r5.s64 = ctx.r31.s64 + 68;
	// addi r4,r11,-27744
	ctx.r4.s64 = ctx.r11.s64 + -27744;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e2c0a8
	ctx.lr = 0x82217FB8;
	sub_82E2C0A8(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x830de898
	ctx.lr = 0x82217FC0;
	sub_830DE898(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-27740
	ctx.r4.s64 = ctx.r11.s64 + -27740;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x822293e0
	ctx.lr = 0x82217FE0;
	sub_822293E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-27732
	ctx.r4.s64 = ctx.r11.s64 + -27732;
	// bl 0x82228b60
	ctx.lr = 0x82217FF0;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82218004
	if (ctx.cr0.eq) goto loc_82218004;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82218000;
	sub_830D8578(ctx, base);
	// b 0x82218008
	goto loc_82218008;
loc_82218004:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82218008:
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82218024
	if (ctx.cr6.lt) goto loc_82218024;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x82218110
	if (!ctx.cr6.lt) goto loc_82218110;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82218028
	goto loc_82218028;
loc_82218024:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82218028:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x830de288
	ctx.lr = 0x82218034;
	sub_830DE288(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82218110
	if (ctx.cr6.eq) goto loc_82218110;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x830de220
	ctx.lr = 0x82218044;
	sub_830DE220(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r11,-25776
	ctx.r11.s64 = ctx.r11.s64 + -25776;
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r30.u16);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stb r30,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r30.u8);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r11,-501
	ctx.r11.s64 = -501;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stb r30,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r30.u8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822180b4
	if (!ctx.cr6.eq) goto loc_822180B4;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x822180b8
	if (ctx.cr6.eq) goto loc_822180B8;
loc_822180B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822180B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218100
	if (ctx.cr0.eq) goto loc_82218100;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822180e4
	if (ctx.cr0.eq) goto loc_822180E4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822180E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82218100
	goto loc_82218100;
loc_822180E4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218100
	if (ctx.cr0.eq) goto loc_82218100;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82218100:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x82228560
	ctx.lr = 0x8221810C;
	sub_82228560(ctx, base);
	// b 0x82218134
	goto loc_82218134;
loc_82218110:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x830de968
	ctx.lr = 0x82218118;
	sub_830DE968(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r3,r11,-940
	ctx.r3.s64 = ctx.r11.s64 + -940;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
loc_82218134:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218140"))) PPC_WEAK_FUNC(sub_82218140);
PPC_FUNC_IMPL(__imp__sub_82218140) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25776
	ctx.r10.s64 = ctx.r11.s64 + -25776;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// bl 0x82228950
	ctx.lr = 0x822181A0;
	sub_82228950(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822181b4
	if (ctx.cr0.eq) goto loc_822181B4;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x822181b8
	goto loc_822181B8;
loc_822181B4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_822181B8:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822182a0
	ctx.lr = 0x822181D4;
	sub_822182A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82228560
	ctx.lr = 0x822181DC;
	sub_82228560(ctx, base);
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

__attribute__((alias("__imp__sub_822181F8"))) PPC_WEAK_FUNC(sub_822181F8);
PPC_FUNC_IMPL(__imp__sub_822181F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82218200;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82218238
	if (!ctx.cr6.eq) goto loc_82218238;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8221823c
	if (ctx.cr6.eq) goto loc_8221823C;
loc_82218238:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8221823C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82218280
	if (ctx.cr0.eq) goto loc_82218280;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82218268
	if (ctx.cr0.eq) goto loc_82218268;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82218264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82218280
	goto loc_82218280;
loc_82218268:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218280
	if (ctx.cr0.eq) goto loc_82218280;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82218280:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218290
	if (ctx.cr0.eq) goto loc_82218290;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82218290:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822182A0"))) PPC_WEAK_FUNC(sub_822182A0);
PPC_FUNC_IMPL(__imp__sub_822182A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x822182A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82218348
	if (ctx.cr0.gt) goto loc_82218348;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x830de968
	ctx.lr = 0x822182D4;
	sub_830DE968(ctx, base);
	// lis r4,25199
	ctx.r4.s64 = 1651441664;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,25721
	ctx.r4.u64 = ctx.r4.u64 | 25721;
	// bl 0x830de428
	ctx.lr = 0x822182EC;
	sub_830DE428(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// ble 0x822182fc
	if (!ctx.cr0.gt) goto loc_822182FC;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_822182FC:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8221831c
	if (!ctx.cr6.gt) goto loc_8221831C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82218320
	if (!ctx.cr6.eq) goto loc_82218320;
loc_8221831C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82218320:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218340
	if (ctx.cr0.eq) goto loc_82218340;
	// li r5,-102
	ctx.r5.s64 = -102;
loc_8221832C:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822181f8
	ctx.lr = 0x82218340;
	sub_822181F8(ctx, base);
loc_82218340:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
loc_82218348:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82218368
	if (!ctx.cr6.gt) goto loc_82218368;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82218368
	if (!ctx.cr6.eq) goto loc_82218368;
	// li r5,-502
	ctx.r5.s64 = -502;
	// b 0x8221832c
	goto loc_8221832C;
loc_82218368:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x830de968
	ctx.lr = 0x82218370;
	sub_830DE968(ctx, base);
	// lis r4,25711
	ctx.r4.s64 = 1684996096;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,28261
	ctx.r4.u64 = ctx.r4.u64 | 28261;
	// bl 0x830de428
	ctx.lr = 0x82218388;
	sub_830DE428(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x822183ac
	if (!ctx.cr6.eq) goto loc_822183AC;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// b 0x822183c0
	goto loc_822183C0;
loc_822183AC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_822183C0:
	// bl 0x830decf8
	ctx.lr = 0x822183C4;
	sub_830DECF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822183e0
	if (!ctx.cr6.gt) goto loc_822183E0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_822183E0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822183f8
	if (ctx.cr6.lt) goto loc_822183F8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x8221840c
	if (ctx.cr6.gt) goto loc_8221840C;
loc_822183F8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x822184c8
	if (!ctx.cr6.gt) goto loc_822184C8;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822184c8
	if (!ctx.cr6.eq) goto loc_822184C8;
loc_8221840C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82218424
	if (!ctx.cr6.eq) goto loc_82218424;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218500
	ctx.lr = 0x82218424;
	sub_82218500(ctx, base);
loc_82218424:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-28548
	ctx.r4.s64 = ctx.r11.s64 + -28548;
	// bl 0x82228bf0
	ctx.lr = 0x82218438;
	sub_82228BF0(ctx, base);
	// lis r4,26725
	ctx.r4.s64 = 1751449600;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,24932
	ctx.r4.u64 = ctx.r4.u64 | 24932;
	// bl 0x830de428
	ctx.lr = 0x82218450;
	sub_830DE428(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-27724
	ctx.r4.s64 = ctx.r11.s64 + -27724;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82218464;
	sub_82228BF0(ctx, base);
	// lis r4,25455
	ctx.r4.s64 = 1668218880;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,25701
	ctx.r4.u64 = ctx.r4.u64 | 25701;
	// bl 0x830de428
	ctx.lr = 0x8221847C;
	sub_830DE428(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-27716
	ctx.r4.s64 = ctx.r11.s64 + -27716;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82218490;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r4,r11,-27744
	ctx.r4.s64 = ctx.r11.s64 + -27744;
	// bl 0x82e2b400
	ctx.lr = 0x822184A4;
	sub_82E2B400(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27756
	ctx.r4.s64 = ctx.r11.s64 + -27756;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228df8
	ctx.lr = 0x822184B8;
	sub_82228DF8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x8221832c
	goto loc_8221832C;
loc_822184C8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822184ec
	if (!ctx.cr6.gt) goto loc_822184EC;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822184ec
	if (!ctx.cr6.eq) goto loc_822184EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218500
	ctx.lr = 0x822184E8;
	sub_82218500(ctx, base);
	// b 0x822182fc
	goto loc_822182FC;
loc_822184EC:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x822182fc
	if (!ctx.cr6.eq) goto loc_822182FC;
	// li r5,-501
	ctx.r5.s64 = -501;
	// b 0x8221832c
	goto loc_8221832C;
}

__attribute__((alias("__imp__sub_82218500"))) PPC_WEAK_FUNC(sub_82218500);
PPC_FUNC_IMPL(__imp__sub_82218500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82218508;
	__savegprlr_29(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r11.u8);
	// addi r3,r1,177
	ctx.r3.s64 = ctx.r1.s64 + 177;
	// bl 0x82e29500
	ctx.lr = 0x82218530;
	sub_82E29500(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822284f8
	ctx.lr = 0x82218540;
	sub_822284F8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-29148
	ctx.r4.s64 = ctx.r11.s64 + -29148;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-2380
	ctx.r11.s64 = ctx.r11.s64 + -2380;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,26740
	ctx.r11.s64 = 1752432640;
	// ori r11,r11,29808
	ctx.r11.u64 = ctx.r11.u64 | 29808;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82228df8
	ctx.lr = 0x82218568;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28548
	ctx.r4.s64 = ctx.r11.s64 + -28548;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82218584;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-27744
	ctx.r4.s64 = ctx.r11.s64 + -27744;
	// bl 0x82e2b400
	ctx.lr = 0x82218598;
	sub_82E2B400(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-27756
	ctx.r4.s64 = ctx.r11.s64 + -27756;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228df8
	ctx.lr = 0x822185AC;
	sub_82228DF8(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r3,-12076(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12076);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822185C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822185D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822185E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82228560
	ctx.lr = 0x822185F0;
	sub_82228560(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822185F8"))) PPC_WEAK_FUNC(sub_822185F8);
PPC_FUNC_IMPL(__imp__sub_822185F8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-23256
	ctx.r11.s64 = ctx.r11.s64 + -23256;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82218630
	if (ctx.cr0.eq) goto loc_82218630;
	// bl 0x830de220
	ctx.lr = 0x82218630;
	sub_830DE220(ctx, base);
loc_82218630:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-23276
	ctx.r11.s64 = ctx.r11.s64 + -23276;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82218650
	if (ctx.cr0.eq) goto loc_82218650;
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217db8
	ctx.lr = 0x82218650;
	sub_82217DB8(ctx, base);
loc_82218650:
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

__attribute__((alias("__imp__sub_82218670"))) PPC_WEAK_FUNC(sub_82218670);
PPC_FUNC_IMPL(__imp__sub_82218670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82218678;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23236
	ctx.r11.s64 = ctx.r11.s64 + -23236;
	// addi r10,r10,-23200
	ctx.r10.s64 = ctx.r10.s64 + -23200;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// li r28,10
	ctx.r28.s64 = 10;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_822186A4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82218710
	if (ctx.cr0.eq) goto loc_82218710;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822186C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bne 0x82218710
	if (!ctx.cr0.eq) goto loc_82218710;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_822186E0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82218700
	if (ctx.cr6.eq) goto loc_82218700;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x822186e0
	if (ctx.cr6.lt) goto loc_822186E0;
	// b 0x82218710
	goto loc_82218710;
loc_82218700:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82218710:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x822186a4
	if (!ctx.cr0.eq) goto loc_822186A4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-25488
	ctx.r11.s64 = ctx.r11.s64 + -25488;
	// addi r10,r10,-14460
	ctx.r10.s64 = ctx.r10.s64 + -14460;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218740"))) PPC_WEAK_FUNC(sub_82218740);
PPC_FUNC_IMPL(__imp__sub_82218740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82218748;
	__savegprlr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82229448
	ctx.lr = 0x82218764;
	sub_82229448(ctx, base);
	// lis r10,26740
	ctx.r10.s64 = 1752432640;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// ori r10,r10,29808
	ctx.r10.u64 = ctx.r10.u64 | 29808;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82218784
	if (ctx.cr6.eq) goto loc_82218784;
	// li r11,-110
	ctx.r11.s64 = -110;
loc_8221877C:
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// b 0x822188f8
	goto loc_822188F8;
loc_82218784:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82218798
	if (ctx.cr6.eq) goto loc_82218798;
	// li r11,-103
	ctx.r11.s64 = -103;
	// b 0x8221877c
	goto loc_8221877C;
loc_82218798:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-29148
	ctx.r4.s64 = ctx.r11.s64 + -29148;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822293e0
	ctx.lr = 0x822187B0;
	sub_822293E0(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-2404
	ctx.r11.s64 = ctx.r11.s64 + -2404;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_822187C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822187e4
	if (ctx.cr0.eq) goto loc_822187E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822187c0
	if (ctx.cr6.eq) goto loc_822187C0;
loc_822187E4:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// bne 0x822188cc
	if (!ctx.cr0.eq) goto loc_822188CC;
	// bl 0x82218fe0
	ctx.lr = 0x8221880C;
	sub_82218FE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82218820
	if (!ctx.cr6.eq) goto loc_82218820;
	// li r11,-503
	ctx.r11.s64 = -503;
	// b 0x8221877c
	goto loc_8221877C;
loc_82218820:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82217d58
	ctx.lr = 0x82218828;
	sub_82217D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82218884
	if (ctx.cr0.eq) goto loc_82218884;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r8,r11,-23256
	ctx.r8.s64 = ctx.r11.s64 + -23256;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// b 0x82218888
	goto loc_82218888;
loc_82218884:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82218888:
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-27704
	ctx.r5.s64 = ctx.r11.s64 + -27704;
	// stwx r10,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x82219168
	ctx.lr = 0x822188A8;
	sub_82219168(ctx, base);
	// lwzx r3,r28,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822188C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822188e4
	goto loc_822188E4;
loc_822188CC:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r10,-27704
	ctx.r5.s64 = ctx.r10.s64 + -27704;
	// bl 0x82219168
	ctx.lr = 0x822188DC;
	sub_82219168(ctx, base);
	// li r10,-110
	ctx.r10.s64 = -110;
	// stw r10,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
loc_822188E4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-27700
	ctx.r5.s64 = ctx.r11.s64 + -27700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219168
	ctx.lr = 0x822188F8;
	sub_82219168(ctx, base);
loc_822188F8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218900"))) PPC_WEAK_FUNC(sub_82218900);
PPC_FUNC_IMPL(__imp__sub_82218900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82218908;
	__savegprlr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218940
	if (!ctx.cr6.eq) goto loc_82218940;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x82218944
	if (ctx.cr6.eq) goto loc_82218944;
loc_82218940:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82218944:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82218968
	if (!ctx.cr0.eq) goto loc_82218968;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82218b34
	goto loc_82218B34;
loc_82218968:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82218994
	if (ctx.cr6.eq) goto loc_82218994;
	// li r4,-103
	ctx.r4.s64 = -103;
loc_82218978:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// ld r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// bl 0x8222d1d8
	ctx.lr = 0x82218990;
	sub_8222D1D8(ctx, base);
	// b 0x82218b34
	goto loc_82218B34;
loc_82218994:
	// lis r10,26740
	ctx.r10.s64 = 1752432640;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// ori r10,r10,29808
	ctx.r10.u64 = ctx.r10.u64 | 29808;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822189b0
	if (ctx.cr6.eq) goto loc_822189B0;
loc_822189A8:
	// li r4,-110
	ctx.r4.s64 = -110;
	// b 0x82218978
	goto loc_82218978;
loc_822189B0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-29148
	ctx.r4.s64 = ctx.r11.s64 + -29148;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822293e0
	ctx.lr = 0x822189C8;
	sub_822293E0(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-2404
	ctx.r11.s64 = ctx.r11.s64 + -2404;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_822189D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x822189fc
	if (ctx.cr0.eq) goto loc_822189FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822189d8
	if (ctx.cr6.eq) goto loc_822189D8;
loc_822189FC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82218a68
	if (ctx.cr0.eq) goto loc_82218A68;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-2392
	ctx.r11.s64 = ctx.r11.s64 + -2392;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82218A14:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82218a38
	if (ctx.cr0.eq) goto loc_82218A38;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82218a14
	if (ctx.cr6.eq) goto loc_82218A14;
loc_82218A38:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82218a68
	if (ctx.cr0.eq) goto loc_82218A68;
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r10,-27696
	ctx.r5.s64 = ctx.r10.s64 + -27696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
	// bl 0x82219168
	ctx.lr = 0x82218A64;
	sub_82219168(ctx, base);
	// b 0x822189a8
	goto loc_822189A8;
loc_82218A68:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
	// bl 0x82218fe0
	ctx.lr = 0x82218A80;
	sub_82218FE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x82218a94
	if (!ctx.cr6.eq) goto loc_82218A94;
	// li r4,-503
	ctx.r4.s64 = -503;
	// b 0x82218978
	goto loc_82218978;
loc_82218A94:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82217d58
	ctx.lr = 0x82218A9C;
	sub_82217D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82218af0
	if (ctx.cr0.eq) goto loc_82218AF0;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// addi r10,r10,-23256
	ctx.r10.s64 = ctx.r10.s64 + -23256;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// stw r30,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r30.u32);
	// b 0x82218af4
	goto loc_82218AF4;
loc_82218AF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82218AF4:
	// addi r11,r27,2
	ctx.r11.s64 = ctx.r27.s64 + 2;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-27696
	ctx.r5.s64 = ctx.r11.s64 + -27696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219168
	ctx.lr = 0x82218B34;
	sub_82219168(ctx, base);
loc_82218B34:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218B40"))) PPC_WEAK_FUNC(sub_82218B40);
PPC_FUNC_IMPL(__imp__sub_82218B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82218B48;
	__savegprlr_29(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82218b68
	if (ctx.cr6.eq) goto loc_82218B68;
	// li r3,-103
	ctx.r3.s64 = -103;
	// b 0x82218cdc
	goto loc_82218CDC;
loc_82218B68:
	// lis r10,26740
	ctx.r10.s64 = 1752432640;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// ori r10,r10,29808
	ctx.r10.u64 = ctx.r10.u64 | 29808;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82218cd8
	if (!ctx.cr6.eq) goto loc_82218CD8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-29148
	ctx.r4.s64 = ctx.r11.s64 + -29148;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822293e0
	ctx.lr = 0x82218B94;
	sub_822293E0(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-2404
	ctx.r11.s64 = ctx.r11.s64 + -2404;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82218BA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82218bc8
	if (ctx.cr0.eq) goto loc_82218BC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82218ba4
	if (ctx.cr6.eq) goto loc_82218BA4;
loc_82218BC8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82218cb8
	if (!ctx.cr0.eq) goto loc_82218CB8;
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// bl 0x82218fe0
	ctx.lr = 0x82218BE8;
	sub_82218FE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82218bfc
	if (!ctx.cr6.eq) goto loc_82218BFC;
	// li r3,-503
	ctx.r3.s64 = -503;
	// b 0x82218cdc
	goto loc_82218CDC;
loc_82218BFC:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82217d58
	ctx.lr = 0x82218C04;
	sub_82217D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82218c5c
	if (ctx.cr0.eq) goto loc_82218C5C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r11,-23256
	ctx.r9.s64 = ctx.r11.s64 + -23256;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// b 0x82218c64
	goto loc_82218C64;
loc_82218C5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82218C64:
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27696
	ctx.r5.s64 = ctx.r11.s64 + -27696;
loc_82218CA4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219168
	ctx.lr = 0x82218CB0;
	sub_82219168(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82218cdc
	goto loc_82218CDC;
loc_82218CB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82219068
	ctx.lr = 0x82218CC0;
	sub_82219068(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82218cd8
	if (!ctx.cr6.eq) goto loc_82218CD8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27692
	ctx.r5.s64 = ctx.r11.s64 + -27692;
	// b 0x82218ca4
	goto loc_82218CA4;
loc_82218CD8:
	// li r3,-110
	ctx.r3.s64 = -110;
loc_82218CDC:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218CE8"))) PPC_WEAK_FUNC(sub_82218CE8);
PPC_FUNC_IMPL(__imp__sub_82218CE8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r11,-27688
	ctx.r5.s64 = ctx.r11.s64 + -27688;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82219168
	ctx.lr = 0x82218D10;
	sub_82219168(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82218D40"))) PPC_WEAK_FUNC(sub_82218D40);
PPC_FUNC_IMPL(__imp__sub_82218D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82218D48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// li r30,10
	ctx.r30.s64 = 10;
loc_82218D58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82218d98
	if (ctx.cr0.eq) goto loc_82218D98;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82218d78
	if (ctx.cr0.eq) goto loc_82218D78;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82218d7c
	goto loc_82218D7C;
loc_82218D78:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82218D7C:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82218d98
	if (!ctx.cr6.eq) goto loc_82218D98;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82218D98:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82218d58
	if (!ctx.cr0.eq) goto loc_82218D58;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218DB0"))) PPC_WEAK_FUNC(sub_82218DB0);
PPC_FUNC_IMPL(__imp__sub_82218DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82218DB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r30,96
	ctx.r28.s64 = ctx.r30.s64 + 96;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x8222d138
	ctx.lr = 0x82218DE8;
	sub_8222D138(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218eac
	if (ctx.cr0.eq) goto loc_82218EAC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r29,r11,-25776
	ctx.r29.s64 = ctx.r11.s64 + -25776;
loc_82218DF8:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// sth r31,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r31.u16);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stb r31,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r31.u8);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x82e28fd0
	ctx.lr = 0x82218E50;
	sub_82E28FD0(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218e74
	if (ctx.cr6.eq) goto loc_82218E74;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82218e90
	goto loc_82218E90;
loc_82218E74:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218e90
	if (ctx.cr6.eq) goto loc_82218E90;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82218E90:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82228560
	ctx.lr = 0x82218E98;
	sub_82228560(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222d138
	ctx.lr = 0x82218EA4;
	sub_8222D138(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82218df8
	if (!ctx.cr0.eq) goto loc_82218DF8;
loc_82218EAC:
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// li r28,10
	ctx.r28.s64 = 10;
loc_82218EB4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82218f5c
	if (ctx.cr0.eq) goto loc_82218F5C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82218f40
	if (!ctx.cr0.eq) goto loc_82218F40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// bne 0x82218f5c
	if (!ctx.cr0.eq) goto loc_82218F5C;
	// addic. r11,r30,-4
	ctx.xer.ca = ctx.r30.u32 > 3;
	ctx.r11.s64 = ctx.r30.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bne 0x82218f04
	if (!ctx.cr0.eq) goto loc_82218F04;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82218F04:
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_82218F10:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82218f30
	if (ctx.cr6.eq) goto loc_82218F30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x82218f10
	if (ctx.cr6.lt) goto loc_82218F10;
	// b 0x82218f5c
	goto loc_82218F5C;
loc_82218F30:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
	// b 0x82218f5c
	goto loc_82218F5C;
loc_82218F40:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82218f5c
	if (!ctx.cr6.eq) goto loc_82218F5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82218F5C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82218eb4
	if (!ctx.cr0.eq) goto loc_82218EB4;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82218F70"))) PPC_WEAK_FUNC(sub_82218F70);
PPC_FUNC_IMPL(__imp__sub_82218F70) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// bl 0x82e28fd0
	ctx.lr = 0x82218FBC;
	sub_82E28FD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82218FE0"))) PPC_WEAK_FUNC(sub_82218FE0);
PPC_FUNC_IMPL(__imp__sub_82218FE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
loc_82218FEC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82219010
	if (ctx.cr6.eq) goto loc_82219010;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// blt cr6,0x82218fec
	if (ctx.cr6.lt) goto loc_82218FEC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82219010:
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
loc_82219034:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82219054
	if (ctx.cr6.eq) goto loc_82219054;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x82219034
	if (ctx.cr6.lt) goto loc_82219034;
	// blr 
	return;
loc_82219054:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219068"))) PPC_WEAK_FUNC(sub_82219068);
PPC_FUNC_IMPL(__imp__sub_82219068) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-12076(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12076);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221909C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221914c
	if (ctx.cr0.eq) goto loc_8221914C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822190B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221914c
	if (ctx.cr0.eq) goto loc_8221914C;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r4,r11,-2380
	ctx.r4.s64 = ctx.r11.s64 + -2380;
	// bl 0x822100d0
	ctx.lr = 0x822190CC;
	sub_822100D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221914c
	if (ctx.cr0.eq) goto loc_8221914C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82e29500
	ctx.lr = 0x822190EC;
	sub_82E29500(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r11,-27684
	ctx.r4.s64 = ctx.r11.s64 + -27684;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822293e0
	ctx.lr = 0x82219104;
	sub_822293E0(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// lwz r5,88(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219128
	if (ctx.cr0.eq) goto loc_82219128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82219144
	goto loc_82219144;
loc_82219128:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219144
	if (ctx.cr0.eq) goto loc_82219144;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82219144:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82219150
	goto loc_82219150;
loc_8221914C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82219150:
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

__attribute__((alias("__imp__sub_82219168"))) PPC_WEAK_FUNC(sub_82219168);
PPC_FUNC_IMPL(__imp__sub_82219168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82219170;
	__savegprlr_27(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31966
	ctx.r30.s64 = -2094923776;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,-12072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12072);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822198c8
	if (ctx.cr0.eq) goto loc_822198C8;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// stb r27,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r27.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r1,356
	ctx.r11.s64 = ctx.r1.s64 + 356;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82219218
	if (ctx.cr6.eq) goto loc_82219218;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-27672
	ctx.r4.s64 = ctx.r11.s64 + -27672;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82e2b400
	ctx.lr = 0x822191E0;
	sub_82E2B400(ctx, base);
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822191E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822191e8
	if (!ctx.cr6.eq) goto loc_822191E8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,624
	ctx.r10.s64 = ctx.r1.s64 + 624;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82231938
	ctx.lr = 0x82219218;
	sub_82231938(ctx, base);
loc_82219218:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221924c
	if (ctx.cr0.eq) goto loc_8221924C;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x8221923c
	if (ctx.cr0.eq) goto loc_8221923C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-27668
	ctx.r4.s64 = ctx.r11.s64 + -27668;
	// b 0x82219244
	goto loc_82219244;
loc_8221923C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-27660
	ctx.r4.s64 = ctx.r11.s64 + -27660;
loc_82219244:
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// bl 0x82231938
	ctx.lr = 0x8221924C;
	sub_82231938(ctx, base);
loc_8221924C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27652
	ctx.r4.s64 = ctx.r11.s64 + -27652;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// bl 0x82231938
	ctx.lr = 0x82219260;
	sub_82231938(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27644
	ctx.r4.s64 = ctx.r11.s64 + -27644;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// bl 0x82231938
	ctx.lr = 0x82219274;
	sub_82231938(ctx, base);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r27,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r27.u8);
	// addi r3,r1,369
	ctx.r3.s64 = ctx.r1.s64 + 369;
	// bl 0x82e29500
	ctx.lr = 0x82219288;
	sub_82E29500(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-29148
	ctx.r4.s64 = ctx.r11.s64 + -29148;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822293e0
	ctx.lr = 0x822192A0;
	sub_822293E0(ctx, base);
	// lbz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 368);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82219334
	if (ctx.cr0.eq) goto loc_82219334;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27640
	ctx.r4.s64 = ctx.r11.s64 + -27640;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// bl 0x82231938
	ctx.lr = 0x822192C0;
	sub_82231938(ctx, base);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822192C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822192c8
	if (!ctx.cr6.eq) goto loc_822192C8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82231938
	ctx.lr = 0x822192F8;
	sub_82231938(ctx, base);
	// lwz r3,-12072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12072);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82219330
	if (ctx.cr6.eq) goto loc_82219330;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82219330:
	// stb r27,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r27.u8);
loc_82219334:
	// lwz r31,36(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// addi r29,r11,-27624
	ctx.r29.s64 = ctx.r11.s64 + -27624;
	// beq cr6,0x822193e0
	if (ctx.cr6.eq) goto loc_822193E0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27632
	ctx.r4.s64 = ctx.r11.s64 + -27632;
	// addi r5,r4,6
	ctx.r5.s64 = ctx.r4.s64 + 6;
	// bl 0x82231938
	ctx.lr = 0x8221935C;
	sub_82231938(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82e2b400
	ctx.lr = 0x8221936C;
	sub_82E2B400(ctx, base);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82219374:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82219374
	if (!ctx.cr6.eq) goto loc_82219374;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82231938
	ctx.lr = 0x822193A4;
	sub_82231938(ctx, base);
	// lwz r3,-12072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12072);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822193C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822193dc
	if (ctx.cr6.eq) goto loc_822193DC;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_822193DC:
	// stb r27,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r27.u8);
loc_822193E0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-27740
	ctx.r4.s64 = ctx.r11.s64 + -27740;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822293e0
	ctx.lr = 0x822193F8;
	sub_822293E0(ctx, base);
	// lbz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 368);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221948c
	if (ctx.cr0.eq) goto loc_8221948C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27620
	ctx.r4.s64 = ctx.r11.s64 + -27620;
	// addi r5,r4,7
	ctx.r5.s64 = ctx.r4.s64 + 7;
	// bl 0x82231938
	ctx.lr = 0x82219418;
	sub_82231938(ctx, base);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82219420:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82219420
	if (!ctx.cr6.eq) goto loc_82219420;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82231938
	ctx.lr = 0x82219450;
	sub_82231938(ctx, base);
	// lwz r3,-12072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12072);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221946C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82219488
	if (ctx.cr6.eq) goto loc_82219488;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82219488:
	// stb r27,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r27.u8);
loc_8221948C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-28548
	ctx.r4.s64 = ctx.r11.s64 + -28548;
	// bl 0x82228b60
	ctx.lr = 0x8221949C;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822194b4
	if (ctx.cr0.eq) goto loc_822194B4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x830d8578
	ctx.lr = 0x822194AC;
	sub_830D8578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822194b8
	goto loc_822194B8;
loc_822194B4:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_822194B8:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82219558
	if (ctx.cr6.eq) goto loc_82219558;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27612
	ctx.r4.s64 = ctx.r11.s64 + -27612;
	// addi r5,r4,7
	ctx.r5.s64 = ctx.r4.s64 + 7;
	// bl 0x82231938
	ctx.lr = 0x822194D4;
	sub_82231938(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82e2b400
	ctx.lr = 0x822194E4;
	sub_82E2B400(ctx, base);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822194EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822194ec
	if (!ctx.cr6.eq) goto loc_822194EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82231938
	ctx.lr = 0x8221951C;
	sub_82231938(ctx, base);
	// lwz r3,-12072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12072);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82219554
	if (ctx.cr6.eq) goto loc_82219554;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82219554:
	// stb r27,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r27.u8);
loc_82219558:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-27732
	ctx.r4.s64 = ctx.r11.s64 + -27732;
	// bl 0x82228b60
	ctx.lr = 0x82219568;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219580
	if (ctx.cr0.eq) goto loc_82219580;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x830d8578
	ctx.lr = 0x82219578;
	sub_830D8578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82219584
	goto loc_82219584;
loc_82219580:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82219584:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82219624
	if (ctx.cr6.eq) goto loc_82219624;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27604
	ctx.r4.s64 = ctx.r11.s64 + -27604;
	// addi r5,r4,9
	ctx.r5.s64 = ctx.r4.s64 + 9;
	// bl 0x82231938
	ctx.lr = 0x822195A0;
	sub_82231938(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82e2b400
	ctx.lr = 0x822195B0;
	sub_82E2B400(ctx, base);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822195B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822195b8
	if (!ctx.cr6.eq) goto loc_822195B8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82231938
	ctx.lr = 0x822195E8;
	sub_82231938(ctx, base);
	// lwz r3,-12072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12072);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82219620
	if (ctx.cr6.eq) goto loc_82219620;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82219620:
	// stb r27,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r27.u8);
loc_82219624:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-27756
	ctx.r4.s64 = ctx.r11.s64 + -27756;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822293e0
	ctx.lr = 0x8221963C;
	sub_822293E0(ctx, base);
	// lbz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 368);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822196d0
	if (ctx.cr0.eq) goto loc_822196D0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27592
	ctx.r4.s64 = ctx.r11.s64 + -27592;
	// addi r5,r4,12
	ctx.r5.s64 = ctx.r4.s64 + 12;
	// bl 0x82231938
	ctx.lr = 0x8221965C;
	sub_82231938(ctx, base);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82219664:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82219664
	if (!ctx.cr6.eq) goto loc_82219664;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82231938
	ctx.lr = 0x82219694;
	sub_82231938(ctx, base);
	// lwz r3,-12072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12072);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822196B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822196cc
	if (ctx.cr6.eq) goto loc_822196CC;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_822196CC:
	// stb r27,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r27.u8);
loc_822196D0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-27724
	ctx.r4.s64 = ctx.r11.s64 + -27724;
	// bl 0x82228b60
	ctx.lr = 0x822196E0;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822196f8
	if (ctx.cr0.eq) goto loc_822196F8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x830d8578
	ctx.lr = 0x822196F0;
	sub_830D8578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822196fc
	goto loc_822196FC;
loc_822196F8:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_822196FC:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8221979c
	if (ctx.cr6.eq) goto loc_8221979C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27576
	ctx.r4.s64 = ctx.r11.s64 + -27576;
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// bl 0x82231938
	ctx.lr = 0x82219718;
	sub_82231938(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82e2b400
	ctx.lr = 0x82219728;
	sub_82E2B400(ctx, base);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82219730:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82219730
	if (!ctx.cr6.eq) goto loc_82219730;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82231938
	ctx.lr = 0x82219760;
	sub_82231938(ctx, base);
	// lwz r3,-12072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12072);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221977C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82219798
	if (ctx.cr6.eq) goto loc_82219798;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82219798:
	// stb r27,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r27.u8);
loc_8221979C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-27716
	ctx.r4.s64 = ctx.r11.s64 + -27716;
	// bl 0x82228b60
	ctx.lr = 0x822197AC;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822197c4
	if (ctx.cr0.eq) goto loc_822197C4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x830d8578
	ctx.lr = 0x822197BC;
	sub_830D8578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822197c8
	goto loc_822197C8;
loc_822197C4:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_822197C8:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82219868
	if (ctx.cr6.eq) goto loc_82219868;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27564
	ctx.r4.s64 = ctx.r11.s64 + -27564;
	// addi r5,r4,13
	ctx.r5.s64 = ctx.r4.s64 + 13;
	// bl 0x82231938
	ctx.lr = 0x822197E4;
	sub_82231938(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82e2b400
	ctx.lr = 0x822197F4;
	sub_82E2B400(ctx, base);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822197FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822197fc
	if (!ctx.cr6.eq) goto loc_822197FC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82231938
	ctx.lr = 0x8221982C;
	sub_82231938(ctx, base);
	// lwz r3,-12072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12072);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82219864
	if (ctx.cr6.eq) goto loc_82219864;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82219864:
	// stb r27,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r27.u8);
loc_82219868:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27548
	ctx.r4.s64 = ctx.r11.s64 + -27548;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// bl 0x82231938
	ctx.lr = 0x8221987C;
	sub_82231938(ctx, base);
	// lwz r3,-12072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12072);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x822198c8
	if (!ctx.cr6.gt) goto loc_822198C8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822198c8
	if (ctx.cr6.eq) goto loc_822198C8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822198c8
	if (ctx.cr6.eq) goto loc_822198C8;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822137f0
	ctx.lr = 0x822198C8;
	sub_822137F0(ctx, base);
loc_822198C8:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822198D0"))) PPC_WEAK_FUNC(sub_822198D0);
PPC_FUNC_IMPL(__imp__sub_822198D0) {
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
	// bl 0x82218670
	ctx.lr = 0x822198F0;
	sub_82218670(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219904
	if (ctx.cr0.eq) goto loc_82219904;
	// li r4,428
	ctx.r4.s64 = 428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217db8
	ctx.lr = 0x82219904;
	sub_82217DB8(ctx, base);
loc_82219904:
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

__attribute__((alias("__imp__sub_82219920"))) PPC_WEAK_FUNC(sub_82219920);
PPC_FUNC_IMPL(__imp__sub_82219920) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82219928;
	__savegprlr_25(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// addi r5,r11,-24276
	ctx.r5.s64 = ctx.r11.s64 + -24276;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,-23192
	ctx.r31.s64 = ctx.r11.s64 + -23192;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r6,r9,100
	ctx.r6.s64 = ctx.r9.s64 + 100;
	// addi r30,r11,-23172
	ctx.r30.s64 = ctx.r11.s64 + -23172;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r7,r6,4
	ctx.r7.s64 = ctx.r6.s64 + 4;
	// addi r29,r11,-25488
	ctx.r29.s64 = ctx.r11.s64 + -25488;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r26,9
	ctx.r26.s64 = 9;
	// addi r28,r11,-23236
	ctx.r28.s64 = ctx.r11.s64 + -23236;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// addi r5,r7,16
	ctx.r5.s64 = ctx.r7.s64 + 16;
	// addi r27,r11,-23200
	ctx.r27.s64 = ctx.r11.s64 + -23200;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
	// addi r8,r11,23920
	ctx.r8.s64 = ctx.r11.s64 + 23920;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// addi r25,r8,-24797
	ctx.r25.s64 = ctx.r8.s64 + -24797;
	// stw r27,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r27.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,92(r9)
	PPC_STORE_U32(ctx.r9.u32 + 92, ctx.r10.u32);
	// stw r4,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r4.u32);
loc_822199D0:
	// stw r10,-8(r5)
	PPC_STORE_U32(ctx.r5.u32 + -8, ctx.r10.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r10,-4(r5)
	PPC_STORE_U32(ctx.r5.u32 + -4, ctx.r10.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// bge 0x822199d0
	if (!ctx.cr0.lt) goto loc_822199D0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stw r10,424(r9)
	PPC_STORE_U32(ctx.r9.u32 + 424, ctx.r10.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82219A08:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82219a08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82219A08;
	// lis r4,-31966
	ctx.r4.s64 = -2094923776;
	// lbz r11,-12036(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + -12036);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82219a9c
	if (!ctx.cr0.eq) goto loc_82219A9C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r9,r11,-27544
	ctx.r9.s64 = ctx.r11.s64 + -27544;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r7,r11,-27536
	ctx.r7.s64 = ctx.r11.s64 + -27536;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r11,-27520
	ctx.r6.s64 = ctx.r11.s64 + -27520;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27500
	ctx.r5.s64 = ctx.r11.s64 + -27500;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-2404
	ctx.r11.s64 = ctx.r11.s64 + -2404;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-2392
	ctx.r11.s64 = ctx.r11.s64 + -2392;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-2380
	ctx.r11.s64 = ctx.r11.s64 + -2380;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-2368
	ctx.r11.s64 = ctx.r11.s64 + -2368;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-12036(r4)
	PPC_STORE_U8(ctx.r4.u32 + -12036, ctx.r11.u8);
loc_82219A9C:
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219AA0"))) PPC_WEAK_FUNC(sub_82219AA0);
PPC_FUNC_IMPL(__imp__sub_82219AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82219AA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,-2404
	ctx.r11.s64 = ctx.r11.s64 + -2404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82229448
	ctx.lr = 0x82219AD4;
	sub_82229448(ctx, base);
	// lis r11,26740
	ctx.r11.s64 = 1752432640;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// ori r10,r11,29808
	ctx.r10.u64 = ctx.r11.u64 | 29808;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29148
	ctx.r4.s64 = ctx.r11.s64 + -29148;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x82219AF4;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27740
	ctx.r4.s64 = ctx.r11.s64 + -27740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82219B08;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-28548
	ctx.r4.s64 = ctx.r11.s64 + -28548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82219B1C;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27732
	ctx.r4.s64 = ctx.r11.s64 + -27732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82219B30;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27744
	ctx.r4.s64 = ctx.r11.s64 + -27744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x82219B44;
	sub_82E2B400(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27756
	ctx.r4.s64 = ctx.r11.s64 + -27756;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82219B58;
	sub_82228DF8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219B60"))) PPC_WEAK_FUNC(sub_82219B60);
PPC_FUNC_IMPL(__imp__sub_82219B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82219B68;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,-2392
	ctx.r11.s64 = ctx.r11.s64 + -2392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82229448
	ctx.lr = 0x82219B90;
	sub_82229448(ctx, base);
	// lis r11,26740
	ctx.r11.s64 = 1752432640;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r10,r11,29808
	ctx.r10.u64 = ctx.r11.u64 | 29808;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29148
	ctx.r4.s64 = ctx.r11.s64 + -29148;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x82219BB0;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27740
	ctx.r4.s64 = ctx.r11.s64 + -27740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82219BC4;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-28548
	ctx.r4.s64 = ctx.r11.s64 + -28548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82219BD8;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-27732
	ctx.r4.s64 = ctx.r11.s64 + -27732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82219BEC;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27744
	ctx.r4.s64 = ctx.r11.s64 + -27744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x82219C00;
	sub_82E2B400(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27756
	ctx.r4.s64 = ctx.r11.s64 + -27756;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82219C14;
	sub_82228DF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219C20"))) PPC_WEAK_FUNC(sub_82219C20);
PPC_FUNC_IMPL(__imp__sub_82219C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-29148
	ctx.r4.s64 = ctx.r11.s64 + -29148;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822293e0
	ctx.lr = 0x82219C44;
	sub_822293E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219ca8
	if (ctx.cr0.eq) goto loc_82219CA8;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-4452
	ctx.r11.s64 = ctx.r11.s64 + -4452;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82219ca8
	if (ctx.cr6.eq) goto loc_82219CA8;
loc_82219C64:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82219C6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82219c90
	if (ctx.cr0.eq) goto loc_82219C90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82219c6c
	if (ctx.cr6.eq) goto loc_82219C6C;
loc_82219C90:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82219cbc
	if (ctx.cr0.eq) goto loc_82219CBC;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82219c64
	if (!ctx.cr0.eq) goto loc_82219C64;
loc_82219CA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82219CAC:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82219CBC:
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x82219cac
	goto loc_82219CAC;
}

__attribute__((alias("__imp__sub_82219CC8"))) PPC_WEAK_FUNC(sub_82219CC8);
PPC_FUNC_IMPL(__imp__sub_82219CC8) {
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
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82218670
	ctx.lr = 0x82219CEC;
	sub_82218670(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x82219cfc
	if (!ctx.cr6.eq) goto loc_82219CFC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82219CFC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi. r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,-25788
	ctx.r11.s64 = ctx.r11.s64 + -25788;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82219d20
	if (ctx.cr0.eq) goto loc_82219D20;
	// li r4,440
	ctx.r4.s64 = 440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217db8
	ctx.lr = 0x82219D20;
	sub_82217DB8(ctx, base);
loc_82219D20:
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

__attribute__((alias("__imp__sub_82219D40"))) PPC_WEAK_FUNC(sub_82219D40);
PPC_FUNC_IMPL(__imp__sub_82219D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82219D48;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,23968
	ctx.r31.s64 = ctx.r11.s64 + 23968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228b60
	ctx.lr = 0x82219D68;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219d80
	if (ctx.cr0.eq) goto loc_82219D80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82219D78;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82219d84
	goto loc_82219D84;
loc_82219D80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82219D84:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228b60
	ctx.lr = 0x82219D94;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219dac
	if (ctx.cr0.eq) goto loc_82219DAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82219DA4;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82219db0
	goto loc_82219DB0;
loc_82219DAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82219DB0:
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228b60
	ctx.lr = 0x82219DC0;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219dd8
	if (ctx.cr0.eq) goto loc_82219DD8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82219DD0;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82219ddc
	goto loc_82219DDC;
loc_82219DD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82219DDC:
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822293e0
	ctx.lr = 0x82219DF4;
	sub_822293E0(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2c0a8
	ctx.lr = 0x82219E04;
	sub_82E2C0A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219E10"))) PPC_WEAK_FUNC(sub_82219E10);
PPC_FUNC_IMPL(__imp__sub_82219E10) {
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
	// beq cr6,0x82219f04
	if (ctx.cr6.eq) goto loc_82219F04;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r11,-12024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12024);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82219f04
	if (!ctx.cr6.eq) goto loc_82219F04;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r11,-12080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r31,r11,-12034
	ctx.r31.s64 = ctx.r11.s64 + -12034;
	// bne cr6,0x82219e6c
	if (!ctx.cr6.eq) goto loc_82219E6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82213610
	ctx.lr = 0x82219E64;
	sub_82213610(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-1(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1, ctx.r11.u8);
loc_82219E6C:
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r11,-12072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82219e88
	if (!ctx.cr6.eq) goto loc_82219E88;
	// bl 0x82216f28
	ctx.lr = 0x82219E80;
	sub_82216F28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82219E88:
	// lis r31,-31966
	ctx.r31.s64 = -2094923776;
	// lwz r11,-12076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82219ebc
	if (!ctx.cr6.eq) goto loc_82219EBC;
	// li r3,960
	ctx.r3.s64 = 960;
	// bl 0x82217d58
	ctx.lr = 0x82219EA0;
	sub_82217D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219eb4
	if (ctx.cr0.eq) goto loc_82219EB4;
	// bl 0x8221f310
	ctx.lr = 0x82219EAC;
	sub_8221F310(ctx, base);
	// stw r3,-12076(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12076, ctx.r3.u32);
	// b 0x82219ebc
	goto loc_82219EBC;
loc_82219EB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12076(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12076, ctx.r11.u32);
loc_82219EBC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,-12076(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12076);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822333c8
	ctx.lr = 0x82219EF0;
	sub_822333C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82219f08
	if (ctx.cr0.eq) goto loc_82219F08;
	// bl 0x82219f40
	ctx.lr = 0x82219EFC;
	sub_82219F40(ctx, base);
	// li r3,-115
	ctx.r3.s64 = -115;
	// b 0x82219f08
	goto loc_82219F08;
loc_82219F04:
	// li r3,-114
	ctx.r3.s64 = -114;
loc_82219F08:
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

__attribute__((alias("__imp__sub_82219F20"))) PPC_WEAK_FUNC(sub_82219F20);
PPC_FUNC_IMPL(__imp__sub_82219F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r3,-12076(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12076);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219F30"))) PPC_WEAK_FUNC(sub_82219F30);
PPC_FUNC_IMPL(__imp__sub_82219F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r3,-12016(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12016);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219F40"))) PPC_WEAK_FUNC(sub_82219F40);
PPC_FUNC_IMPL(__imp__sub_82219F40) {
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
	// bl 0x82233570
	ctx.lr = 0x82219F58;
	sub_82233570(ctx, base);
	// lis r31,-31966
	ctx.r31.s64 = -2094923776;
	// lwz r3,-12076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12076);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82219f84
	if (ctx.cr6.eq) goto loc_82219F84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12076(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12076, ctx.r11.u32);
loc_82219F84:
	// lis r31,-31966
	ctx.r31.s64 = -2094923776;
	// lwz r3,-12024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12024);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82219fb0
	if (ctx.cr6.eq) goto loc_82219FB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12024, ctx.r11.u32);
loc_82219FB0:
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r30,r11,-12035
	ctx.r30.s64 = ctx.r11.s64 + -12035;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82219ff0
	if (ctx.cr0.eq) goto loc_82219FF0;
	// lis r31,-31966
	ctx.r31.s64 = -2094923776;
	// lwz r3,-12072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12072);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82219fe8
	if (ctx.cr6.eq) goto loc_82219FE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82219FE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12072, ctx.r11.u32);
loc_82219FF0:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221a000
	if (ctx.cr0.eq) goto loc_8221A000;
	// bl 0x822136b0
	ctx.lr = 0x8221A000;
	sub_822136B0(ctx, base);
loc_8221A000:
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

__attribute__((alias("__imp__sub_8221A018"))) PPC_WEAK_FUNC(sub_8221A018);
PPC_FUNC_IMPL(__imp__sub_8221A018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x8221A020;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lis r30,-31966
	ctx.r30.s64 = -2094923776;
	// lwz r29,-12076(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12076);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-12033(r30)
	PPC_STORE_U8(ctx.r30.u32 + -12033, ctx.r11.u8);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r31,-12016(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12016);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221a09c
	if (ctx.cr6.eq) goto loc_8221A09C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221a084
	if (ctx.cr0.eq) goto loc_8221A084;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221a064
	if (!ctx.cr0.eq) goto loc_8221A064;
	// bl 0x830df768
	ctx.lr = 0x8221A064;
	sub_830DF768(ctx, base);
loc_8221A064:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221a084
	if (ctx.cr0.eq) goto loc_8221A084;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221A084:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221a0d8
	goto loc_8221A0D8;
loc_8221A09C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221a0e8
	if (ctx.cr6.eq) goto loc_8221A0E8;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r3,-12024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A0CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221a0d8
	if (!ctx.cr0.eq) goto loc_8221A0D8;
	// bl 0x830df768
	ctx.lr = 0x8221A0D8;
	sub_830DF768(ctx, base);
loc_8221A0D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221a0e8
	if (ctx.cr6.eq) goto loc_8221A0E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221f720
	ctx.lr = 0x8221A0E8;
	sub_8221F720(ctx, base);
loc_8221A0E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-12033(r30)
	PPC_STORE_U8(ctx.r30.u32 + -12033, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A0F8"))) PPC_WEAK_FUNC(sub_8221A0F8);
PPC_FUNC_IMPL(__imp__sub_8221A0F8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x8221A100;
	__savegprlr_23(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r11,r11,-871
	ctx.r11.s64 = ctx.r11.s64 + -871;
	// addi r10,r10,-2356
	ctx.r10.s64 = ctx.r10.s64 + -2356;
	// addi r9,r11,24843
	ctx.r9.s64 = ctx.r11.s64 + 24843;
	// addi r8,r11,24843
	ctx.r8.s64 = ctx.r11.s64 + 24843;
	// addi r7,r11,24843
	ctx.r7.s64 = ctx.r11.s64 + 24843;
	// addi r6,r11,24843
	ctx.r6.s64 = ctx.r11.s64 + 24843;
	// addi r5,r11,24843
	ctx.r5.s64 = ctx.r11.s64 + 24843;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lis r9,16725
	ctx.r9.s64 = 1096089600;
	// addi r4,r11,24843
	ctx.r4.s64 = ctx.r11.s64 + 24843;
	// ori r9,r9,21576
	ctx.r9.u64 = ctx.r9.u64 | 21576;
	// addi r3,r11,24843
	ctx.r3.s64 = ctx.r11.s64 + 24843;
	// addi r31,r11,24843
	ctx.r31.s64 = ctx.r11.s64 + 24843;
	// addi r30,r11,24843
	ctx.r30.s64 = ctx.r11.s64 + 24843;
	// addi r29,r11,24843
	ctx.r29.s64 = ctx.r11.s64 + 24843;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17481
	ctx.r9.s64 = 1145634816;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21315
	ctx.r9.u64 = ctx.r9.u64 | 21315;
	// addi r10,r10,-2344
	ctx.r10.s64 = ctx.r10.s64 + -2344;
	// addi r28,r11,24843
	ctx.r28.s64 = ctx.r11.s64 + 24843;
	// addi r27,r11,24843
	ctx.r27.s64 = ctx.r11.s64 + 24843;
	// addi r26,r11,24843
	ctx.r26.s64 = ctx.r11.s64 + 24843;
	// addi r25,r11,24843
	ctx.r25.s64 = ctx.r11.s64 + 24843;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r24,r11,24843
	ctx.r24.s64 = ctx.r11.s64 + 24843;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21843
	ctx.r9.s64 = 1431502848;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17224
	ctx.r9.u64 = ctx.r9.u64 | 17224;
	// addi r10,r10,-2332
	ctx.r10.s64 = ctx.r10.s64 + -2332;
	// addi r23,r11,24843
	ctx.r23.s64 = ctx.r11.s64 + 24843;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21843
	ctx.r9.s64 = 1431502848;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17746
	ctx.r9.u64 = ctx.r9.u64 | 17746;
	// addi r10,r10,-2320
	ctx.r10.s64 = ctx.r10.s64 + -2320;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20545
	ctx.r9.s64 = 1346437120;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17476
	ctx.r9.u64 = ctx.r9.u64 | 17476;
	// addi r10,r10,-2308
	ctx.r10.s64 = ctx.r10.s64 + -2308;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20548
	ctx.r9.s64 = 1346633728;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17740
	ctx.r9.u64 = ctx.r9.u64 | 17740;
	// addi r10,r10,-2296
	ctx.r10.s64 = ctx.r10.s64 + -2296;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20563
	ctx.r9.s64 = 1347616768;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17748
	ctx.r9.u64 = ctx.r9.u64 | 17748;
	// addi r10,r10,-2284
	ctx.r10.s64 = ctx.r10.s64 + -2284;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20551
	ctx.r9.s64 = 1346830336;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17748
	ctx.r9.u64 = ctx.r9.u64 | 17748;
	// addi r10,r10,-2272
	ctx.r10.s64 = ctx.r10.s64 + -2272;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21057
	ctx.r9.s64 = 1379991552;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17476
	ctx.r9.u64 = ctx.r9.u64 | 17476;
	// addi r10,r10,-2260
	ctx.r10.s64 = ctx.r10.s64 + -2260;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r9,21057
	ctx.r9.s64 = 1379991552;
	// addi r10,r10,-2248
	ctx.r10.s64 = ctx.r10.s64 + -2248;
	// ori r9,r9,17485
	ctx.r9.u64 = ctx.r9.u64 | 17485;
	// addi r8,r11,24843
	ctx.r8.s64 = ctx.r11.s64 + 24843;
	// addi r7,r11,24843
	ctx.r7.s64 = ctx.r11.s64 + 24843;
	// addi r6,r11,24843
	ctx.r6.s64 = ctx.r11.s64 + 24843;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// addi r5,r11,24843
	ctx.r5.s64 = ctx.r11.s64 + 24843;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21074
	ctx.r9.s64 = 1381105664;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21328
	ctx.r9.u64 = ctx.r9.u64 | 21328;
	// addi r10,r10,-2236
	ctx.r10.s64 = ctx.r10.s64 + -2236;
	// addi r4,r11,24843
	ctx.r4.s64 = ctx.r11.s64 + 24843;
	// addi r3,r11,24843
	ctx.r3.s64 = ctx.r11.s64 + 24843;
	// addi r31,r11,24843
	ctx.r31.s64 = ctx.r11.s64 + 24843;
	// addi r30,r11,24843
	ctx.r30.s64 = ctx.r11.s64 + 24843;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// addi r29,r11,24843
	ctx.r29.s64 = ctx.r11.s64 + 24843;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21060
	ctx.r9.s64 = 1380188160;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17740
	ctx.r9.u64 = ctx.r9.u64 | 17740;
	// addi r10,r10,-2224
	ctx.r10.s64 = ctx.r10.s64 + -2224;
	// addi r28,r11,24843
	ctx.r28.s64 = ctx.r11.s64 + 24843;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// addi r27,r11,24843
	ctx.r27.s64 = ctx.r11.s64 + 24843;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21060
	ctx.r9.s64 = 1380188160;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17741
	ctx.r9.u64 = ctx.r9.u64 | 17741;
	// addi r10,r10,-2212
	ctx.r10.s64 = ctx.r10.s64 + -2212;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// addi r26,r11,24843
	ctx.r26.s64 = ctx.r11.s64 + 24843;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21070
	ctx.r9.s64 = 1380843520;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,20308
	ctx.r9.u64 = ctx.r9.u64 | 20308;
	// addi r10,r10,-2200
	ctx.r10.s64 = ctx.r10.s64 + -2200;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21063
	ctx.r9.s64 = 1380384768;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17748
	ctx.r9.u64 = ctx.r9.u64 | 17748;
	// addi r10,r10,-2188
	ctx.r10.s64 = ctx.r10.s64 + -2188;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21071
	ctx.r9.s64 = 1380909056;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// addi r10,r10,-2176
	ctx.r10.s64 = ctx.r10.s64 + -2176;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r9,r11,24843
	ctx.r9.s64 = ctx.r11.s64 + 24843;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-2164
	ctx.r10.s64 = ctx.r10.s64 + -2164;
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
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,19276
	ctx.r9.u64 = ctx.r9.u64 | 19276;
	// addi r10,r10,-2152
	ctx.r10.s64 = ctx.r10.s64 + -2152;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18249
	ctx.r9.s64 = 1195966464;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,20054
	ctx.r9.u64 = ctx.r9.u64 | 20054;
	// addi r10,r10,-2140
	ctx.r10.s64 = ctx.r10.s64 + -2140;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18258
	ctx.r9.s64 = 1196556288;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21328
	ctx.r9.u64 = ctx.r9.u64 | 21328;
	// addi r10,r10,-2128
	ctx.r10.s64 = ctx.r10.s64 + -2128;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18258
	ctx.r9.s64 = 1196556288;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,22091
	ctx.r9.u64 = ctx.r9.u64 | 22091;
	// addi r10,r10,-2116
	ctx.r10.s64 = ctx.r10.s64 + -2116;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18254
	ctx.r9.s64 = 1196294144;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,20308
	ctx.r9.u64 = ctx.r9.u64 | 20308;
	// addi r10,r10,-2104
	ctx.r10.s64 = ctx.r10.s64 + -2104;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21317
	ctx.r9.s64 = 1397030912;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,20036
	ctx.r9.u64 = ctx.r9.u64 | 20036;
	// addi r10,r10,-2092
	ctx.r10.s64 = ctx.r10.s64 + -2092;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21061
	ctx.r9.s64 = 1380253696;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17238
	ctx.r9.u64 = ctx.r9.u64 | 17238;
	// addi r10,r10,-2080
	ctx.r10.s64 = ctx.r10.s64 + -2080;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,16978
	ctx.r9.s64 = 1112670208;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17475
	ctx.r9.u64 = ctx.r9.u64 | 17475;
	// addi r10,r10,-2068
	ctx.r10.s64 = ctx.r10.s64 + -2068;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17744
	ctx.r9.s64 = 1162870784;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// addi r10,r10,-2056
	ctx.r10.s64 = ctx.r10.s64 + -2056;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17744
	ctx.r9.s64 = 1162870784;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,18260
	ctx.r9.u64 = ctx.r9.u64 | 18260;
	// addi r10,r10,-2044
	ctx.r10.s64 = ctx.r10.s64 + -2044;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,16708
	ctx.r9.s64 = 1094975488;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,19790
	ctx.r9.u64 = ctx.r9.u64 | 19790;
	// addi r10,r10,-2032
	ctx.r10.s64 = ctx.r10.s64 + -2032;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20553
	ctx.r9.s64 = 1346961408;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,20039
	ctx.r9.u64 = ctx.r9.u64 | 20039;
	// addi r10,r10,-2020
	ctx.r10.s64 = ctx.r10.s64 + -2020;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-12032(r10)
	PPC_STORE_U8(ctx.r10.u32 + -12032, ctx.r11.u8);
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A4B8"))) PPC_WEAK_FUNC(sub_8221A4B8);
PPC_FUNC_IMPL(__imp__sub_8221A4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x8221A4C0;
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
	// bl 0x82229448
	ctx.lr = 0x8221A4E4;
	sub_82229448(ctx, base);
	// lis r11,16725
	ctx.r11.s64 = 1096089600;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21576
	ctx.r10.u64 = ctx.r11.u64 | 21576;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27476
	ctx.r4.s64 = ctx.r11.s64 + -27476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x8221A50C;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-28452
	ctx.r4.s64 = ctx.r11.s64 + -28452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221A520;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-27468
	ctx.r4.s64 = ctx.r11.s64 + -27468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221A534;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-27460
	ctx.r4.s64 = ctx.r11.s64 + -27460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221A548;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221a570
	if (ctx.cr6.eq) goto loc_8221A570;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a570
	if (ctx.cr6.eq) goto loc_8221A570;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28476
	ctx.r4.s64 = ctx.r11.s64 + -28476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221A570;
	sub_82228DF8(ctx, base);
loc_8221A570:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A578"))) PPC_WEAK_FUNC(sub_8221A578);
PPC_FUNC_IMPL(__imp__sub_8221A578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x8221A580;
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
	// bl 0x82229448
	ctx.lr = 0x8221A5A8;
	sub_82229448(ctx, base);
	// lis r11,16725
	ctx.r11.s64 = 1096089600;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21576
	ctx.r10.u64 = ctx.r11.u64 | 21576;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x8221A5D0;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27452
	ctx.r4.s64 = ctx.r11.s64 + -27452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221A5E4;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-28452
	ctx.r4.s64 = ctx.r11.s64 + -28452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221A5F8;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-27468
	ctx.r4.s64 = ctx.r11.s64 + -27468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221A60C;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,-27460
	ctx.r4.s64 = ctx.r11.s64 + -27460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221A620;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221a648
	if (ctx.cr6.eq) goto loc_8221A648;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a648
	if (ctx.cr6.eq) goto loc_8221A648;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28476
	ctx.r4.s64 = ctx.r11.s64 + -28476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221A648;
	sub_82228DF8(ctx, base);
loc_8221A648:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A650"))) PPC_WEAK_FUNC(sub_8221A650);
PPC_FUNC_IMPL(__imp__sub_8221A650) {
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
	// bl 0x82229448
	ctx.lr = 0x8221A66C;
	sub_82229448(ctx, base);
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

__attribute__((alias("__imp__sub_8221A698"))) PPC_WEAK_FUNC(sub_8221A698);
PPC_FUNC_IMPL(__imp__sub_8221A698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x8221A6A0;
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
	// bl 0x82229448
	ctx.lr = 0x8221A6C4;
	sub_82229448(ctx, base);
	// lis r11,21843
	ctx.r11.s64 = 1431502848;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17224
	ctx.r10.u64 = ctx.r11.u64 | 17224;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x8221A6EC;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221a730
	if (ctx.cr6.eq) goto loc_8221A730;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221A6FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221a6fc
	if (!ctx.cr6.eq) goto loc_8221A6FC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221a730
	if (ctx.cr0.eq) goto loc_8221A730;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28484
	ctx.r4.s64 = ctx.r11.s64 + -28484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221A730;
	sub_82228DF8(ctx, base);
loc_8221A730:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221a774
	if (ctx.cr6.eq) goto loc_8221A774;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221A740:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221a740
	if (!ctx.cr6.eq) goto loc_8221A740;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221a774
	if (ctx.cr0.eq) goto loc_8221A774;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-28476
	ctx.r4.s64 = ctx.r11.s64 + -28476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221A774;
	sub_82228DF8(ctx, base);
loc_8221A774:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8221a78c
	if (ctx.cr0.eq) goto loc_8221A78C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27444
	ctx.r5.s64 = ctx.r11.s64 + -27444;
	// b 0x8221a794
	goto loc_8221A794;
loc_8221A78C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27432
	ctx.r5.s64 = ctx.r11.s64 + -27432;
loc_8221A794:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-27440
	ctx.r4.s64 = ctx.r11.s64 + -27440;
	// bl 0x82228df8
	ctx.lr = 0x8221A7A0;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-27428
	ctx.r4.s64 = ctx.r11.s64 + -27428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221A7B4;
	sub_82228BF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A7C0"))) PPC_WEAK_FUNC(sub_8221A7C0);
PPC_FUNC_IMPL(__imp__sub_8221A7C0) {
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
	// bl 0x82229448
	ctx.lr = 0x8221A7E4;
	sub_82229448(ctx, base);
	// lis r11,20545
	ctx.r11.s64 = 1346437120;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17476
	ctx.r10.u64 = ctx.r11.u64 | 17476;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x8221A80C;
	sub_82228DF8(ctx, base);
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

__attribute__((alias("__imp__sub_8221A828"))) PPC_WEAK_FUNC(sub_8221A828);
PPC_FUNC_IMPL(__imp__sub_8221A828) {
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
	// bl 0x82229448
	ctx.lr = 0x8221A84C;
	sub_82229448(ctx, base);
	// lis r11,20548
	ctx.r11.s64 = 1346633728;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17740
	ctx.r10.u64 = ctx.r11.u64 | 17740;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x8221A874;
	sub_82228DF8(ctx, base);
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

__attribute__((alias("__imp__sub_8221A890"))) PPC_WEAK_FUNC(sub_8221A890);
PPC_FUNC_IMPL(__imp__sub_8221A890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x8221A898;
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
	// bl 0x82229448
	ctx.lr = 0x8221A8C0;
	sub_82229448(ctx, base);
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
	// beq cr6,0x8221a8f0
	if (ctx.cr6.eq) goto loc_8221A8F0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28476
	ctx.r4.s64 = ctx.r11.s64 + -28476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221A8F0;
	sub_82228DF8(ctx, base);
loc_8221A8F0:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8221a95c
	if (ctx.cr6.eq) goto loc_8221A95C;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x8221a950
	if (ctx.cr6.eq) goto loc_8221A950;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x8221a944
	if (ctx.cr6.eq) goto loc_8221A944;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// beq cr6,0x8221a938
	if (ctx.cr6.eq) goto loc_8221A938;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// beq cr6,0x8221a92c
	if (ctx.cr6.eq) goto loc_8221A92C;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bne cr6,0x8221a974
	if (!ctx.cr6.eq) goto loc_8221A974;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-28388
	ctx.r5.s64 = ctx.r11.s64 + -28388;
	// b 0x8221a964
	goto loc_8221A964;
loc_8221A92C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-28392
	ctx.r5.s64 = ctx.r11.s64 + -28392;
	// b 0x8221a964
	goto loc_8221A964;
loc_8221A938:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-28396
	ctx.r5.s64 = ctx.r11.s64 + -28396;
	// b 0x8221a964
	goto loc_8221A964;
loc_8221A944:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-28404
	ctx.r5.s64 = ctx.r11.s64 + -28404;
	// b 0x8221a964
	goto loc_8221A964;
loc_8221A950:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-28412
	ctx.r5.s64 = ctx.r11.s64 + -28412;
	// b 0x8221a964
	goto loc_8221A964;
loc_8221A95C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-28420
	ctx.r5.s64 = ctx.r11.s64 + -28420;
loc_8221A964:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28468
	ctx.r4.s64 = ctx.r11.s64 + -28468;
	// bl 0x82228df8
	ctx.lr = 0x8221A974;
	sub_82228DF8(ctx, base);
loc_8221A974:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-28460
	ctx.r4.s64 = ctx.r11.s64 + -28460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221A988;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221a9a4
	if (ctx.cr6.eq) goto loc_8221A9A4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-28452
	ctx.r4.s64 = ctx.r11.s64 + -28452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221A9A4;
	sub_82228DF8(ctx, base);
loc_8221A9A4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8221aaec
	if (ctx.cr6.eq) goto loc_8221AAEC;
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
	// bne cr6,0x8221aa0c
	if (!ctx.cr6.eq) goto loc_8221AA0C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-27420
	ctx.r10.s64 = ctx.r11.s64 + -27420;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221A9E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221a9e0
	if (!ctx.cr6.eq) goto loc_8221A9E0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8221A9F4:
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
	// bne 0x8221a9f4
	if (!ctx.cr0.eq) goto loc_8221A9F4;
loc_8221AA0C:
	// rlwinm r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8221aa50
	if (!ctx.cr6.eq) goto loc_8221AA50;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-27416
	ctx.r10.s64 = ctx.r11.s64 + -27416;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221AA24:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221aa24
	if (!ctx.cr6.eq) goto loc_8221AA24;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8221AA38:
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
	// bne 0x8221aa38
	if (!ctx.cr0.eq) goto loc_8221AA38;
loc_8221AA50:
	// rlwinm r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8221aa94
	if (!ctx.cr6.eq) goto loc_8221AA94;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-27412
	ctx.r10.s64 = ctx.r11.s64 + -27412;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221AA68:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221aa68
	if (!ctx.cr6.eq) goto loc_8221AA68;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8221AA7C:
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
	// bne 0x8221aa7c
	if (!ctx.cr0.eq) goto loc_8221AA7C;
loc_8221AA94:
	// rlwinm r11,r26,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8221aad8
	if (!ctx.cr6.eq) goto loc_8221AAD8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-27408
	ctx.r10.s64 = ctx.r11.s64 + -27408;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221AAAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221aaac
	if (!ctx.cr6.eq) goto loc_8221AAAC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8221AAC0:
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
	// bne 0x8221aac0
	if (!ctx.cr0.eq) goto loc_8221AAC0;
loc_8221AAD8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28428
	ctx.r4.s64 = ctx.r11.s64 + -28428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221AAEC;
	sub_82228DF8(ctx, base);
loc_8221AAEC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8221ab08
	if (ctx.cr6.eq) goto loc_8221AB08;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,-28444
	ctx.r4.s64 = ctx.r11.s64 + -28444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221AB08;
	sub_82228DF8(ctx, base);
loc_8221AB08:
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8221ab24
	if (ctx.cr6.eq) goto loc_8221AB24;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28500
	ctx.r4.s64 = ctx.r11.s64 + -28500;
	// bl 0x82228df8
	ctx.lr = 0x8221AB24;
	sub_82228DF8(ctx, base);
loc_8221AB24:
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8221ab40
	if (ctx.cr6.eq) goto loc_8221AB40;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28492
	ctx.r4.s64 = ctx.r11.s64 + -28492;
	// bl 0x82228bf0
	ctx.lr = 0x8221AB40;
	sub_82228BF0(ctx, base);
loc_8221AB40:
	// lwz r5,260(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8221ab5c
	if (ctx.cr6.eq) goto loc_8221AB5C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28436
	ctx.r4.s64 = ctx.r11.s64 + -28436;
	// bl 0x82228df8
	ctx.lr = 0x8221AB5C;
	sub_82228DF8(ctx, base);
loc_8221AB5C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221AB68"))) PPC_WEAK_FUNC(sub_8221AB68);
PPC_FUNC_IMPL(__imp__sub_8221AB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x8221AB70;
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
	// bl 0x82229448
	ctx.lr = 0x8221AB98;
	sub_82229448(ctx, base);
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r24,r11,-27392
	ctx.r24.s64 = ctx.r11.s64 + -27392;
	// beq cr6,0x8221abcc
	if (ctx.cr6.eq) goto loc_8221ABCC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8221abe4
	if (!ctx.cr6.eq) goto loc_8221ABE4;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x8221abd4
	goto loc_8221ABD4;
loc_8221ABCC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27404
	ctx.r5.s64 = ctx.r11.s64 + -27404;
loc_8221ABD4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27400
	ctx.r4.s64 = ctx.r11.s64 + -27400;
	// bl 0x82228df8
	ctx.lr = 0x8221ABE4;
	sub_82228DF8(ctx, base);
loc_8221ABE4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221ABF8;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221ac14
	if (ctx.cr6.eq) goto loc_8221AC14;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28376
	ctx.r4.s64 = ctx.r11.s64 + -28376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221AC14;
	sub_82228DF8(ctx, base);
loc_8221AC14:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8221ac30
	if (ctx.cr6.eq) goto loc_8221AC30;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-27388
	ctx.r4.s64 = ctx.r11.s64 + -27388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221AC30;
	sub_82228DF8(ctx, base);
loc_8221AC30:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r11,-27380
	ctx.r30.s64 = ctx.r11.s64 + -27380;
	// beq 0x8221ac48
	if (ctx.cr0.eq) goto loc_8221AC48;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x8221ac50
	goto loc_8221AC50;
loc_8221AC48:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27376
	ctx.r5.s64 = ctx.r11.s64 + -27376;
loc_8221AC50:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27460
	ctx.r4.s64 = ctx.r11.s64 + -27460;
	// bl 0x82228df8
	ctx.lr = 0x8221AC60;
	sub_82228DF8(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8221ad58
	if (ctx.cr6.eq) goto loc_8221AD58;
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
	// bne cr6,0x8221acc4
	if (!ctx.cr6.eq) goto loc_8221ACC4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-27372
	ctx.r10.s64 = ctx.r11.s64 + -27372;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221AC94:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221ac94
	if (!ctx.cr6.eq) goto loc_8221AC94;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8221ACA8:
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
	// bne 0x8221aca8
	if (!ctx.cr0.eq) goto loc_8221ACA8;
	// b 0x8221ad44
	goto loc_8221AD44;
loc_8221ACC4:
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x8221ad08
	if (!ctx.cr6.eq) goto loc_8221AD08;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-27368
	ctx.r10.s64 = ctx.r11.s64 + -27368;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221ACD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221acd8
	if (!ctx.cr6.eq) goto loc_8221ACD8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8221ACEC:
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
	// bne 0x8221acec
	if (!ctx.cr0.eq) goto loc_8221ACEC;
	// b 0x8221ad44
	goto loc_8221AD44;
loc_8221AD08:
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// bne cr6,0x8221ad44
	if (!ctx.cr6.eq) goto loc_8221AD44;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_8221AD18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221ad18
	if (!ctx.cr6.eq) goto loc_8221AD18;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8221AD2C:
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
	// bne 0x8221ad2c
	if (!ctx.cr0.eq) goto loc_8221AD2C;
loc_8221AD44:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28428
	ctx.r4.s64 = ctx.r11.s64 + -28428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221AD58;
	sub_82228DF8(ctx, base);
loc_8221AD58:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27364
	ctx.r4.s64 = ctx.r11.s64 + -27364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221AD6C;
	sub_82228DF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221AD78"))) PPC_WEAK_FUNC(sub_8221AD78);
PPC_FUNC_IMPL(__imp__sub_8221AD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x8221AD80;
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
	// bl 0x82229448
	ctx.lr = 0x8221ADA8;
	sub_82229448(ctx, base);
	// lis r11,21057
	ctx.r11.s64 = 1379991552;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17485
	ctx.r10.u64 = ctx.r11.u64 | 17485;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x8221ADD0;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221adec
	if (ctx.cr6.eq) goto loc_8221ADEC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28376
	ctx.r4.s64 = ctx.r11.s64 + -28376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221ADEC;
	sub_82228DF8(ctx, base);
loc_8221ADEC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221ae08
	if (ctx.cr6.eq) goto loc_8221AE08;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27388
	ctx.r4.s64 = ctx.r11.s64 + -27388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221AE08;
	sub_82228DF8(ctx, base);
loc_8221AE08:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221ae1c
	if (ctx.cr0.eq) goto loc_8221AE1C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27380
	ctx.r5.s64 = ctx.r11.s64 + -27380;
	// b 0x8221ae24
	goto loc_8221AE24;
loc_8221AE1C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27376
	ctx.r5.s64 = ctx.r11.s64 + -27376;
loc_8221AE24:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27460
	ctx.r4.s64 = ctx.r11.s64 + -27460;
	// bl 0x82228df8
	ctx.lr = 0x8221AE34;
	sub_82228DF8(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8221ae60
	if (!ctx.cr6.gt) goto loc_8221AE60;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8221ae60
	if (!ctx.cr6.gt) goto loc_8221AE60;
	// lwz r6,228(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221ae60
	if (ctx.cr6.eq) goto loc_8221AE60;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b9a8
	ctx.lr = 0x8221AE60;
	sub_8221B9A8(ctx, base);
loc_8221AE60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221AE68"))) PPC_WEAK_FUNC(sub_8221AE68);
PPC_FUNC_IMPL(__imp__sub_8221AE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x8221AE70;
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
	// bl 0x82229448
	ctx.lr = 0x8221AE90;
	sub_82229448(ctx, base);
	// lis r11,21074
	ctx.r11.s64 = 1381105664;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21328
	ctx.r10.u64 = ctx.r11.u64 | 21328;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x8221AEB8;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221aed4
	if (ctx.cr6.eq) goto loc_8221AED4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27388
	ctx.r4.s64 = ctx.r11.s64 + -27388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221AED4;
	sub_82228DF8(ctx, base);
loc_8221AED4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// addi r30,r11,-27380
	ctx.r30.s64 = ctx.r11.s64 + -27380;
	// blt cr6,0x8221af10
	if (ctx.cr6.lt) goto loc_8221AF10;
	// beq cr6,0x8221af04
	if (ctx.cr6.eq) goto loc_8221AF04;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bge cr6,0x8221af24
	if (!ctx.cr6.lt) goto loc_8221AF24;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27404
	ctx.r5.s64 = ctx.r11.s64 + -27404;
loc_8221AEF8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-27356
	ctx.r4.s64 = ctx.r11.s64 + -27356;
	// b 0x8221af4c
	goto loc_8221AF4C;
loc_8221AF04:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27376
	ctx.r5.s64 = ctx.r11.s64 + -27376;
	// b 0x8221aef8
	goto loc_8221AEF8;
loc_8221AF10:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27356
	ctx.r4.s64 = ctx.r11.s64 + -27356;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221AF24;
	sub_82228DF8(ctx, base);
loc_8221AF24:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8221af54
	if (!ctx.cr6.eq) goto loc_8221AF54;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221af3c
	if (ctx.cr0.eq) goto loc_8221AF3C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x8221af44
	goto loc_8221AF44;
loc_8221AF3C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27376
	ctx.r5.s64 = ctx.r11.s64 + -27376;
loc_8221AF44:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-27460
	ctx.r4.s64 = ctx.r11.s64 + -27460;
loc_8221AF4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221AF54;
	sub_82228DF8(ctx, base);
loc_8221AF54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221AF60"))) PPC_WEAK_FUNC(sub_8221AF60);
PPC_FUNC_IMPL(__imp__sub_8221AF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221AF68;
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
	// bl 0x82229448
	ctx.lr = 0x8221AF84;
	sub_82229448(ctx, base);
	// lis r11,19788
	ctx.r11.s64 = 1296826368;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21332
	ctx.r10.u64 = ctx.r11.u64 | 21332;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x8221AFAC;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221afc8
	if (ctx.cr6.eq) goto loc_8221AFC8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28376
	ctx.r4.s64 = ctx.r11.s64 + -28376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221AFC8;
	sub_82228DF8(ctx, base);
loc_8221AFC8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221afe4
	if (ctx.cr6.eq) goto loc_8221AFE4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27388
	ctx.r4.s64 = ctx.r11.s64 + -27388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221AFE4;
	sub_82228DF8(ctx, base);
loc_8221AFE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221AFF0"))) PPC_WEAK_FUNC(sub_8221AFF0);
PPC_FUNC_IMPL(__imp__sub_8221AFF0) {
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
	// bl 0x82229448
	ctx.lr = 0x8221B014;
	sub_82229448(ctx, base);
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
	// beq cr6,0x8221b044
	if (ctx.cr6.eq) goto loc_8221B044;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B044;
	sub_82228DF8(ctx, base);
loc_8221B044:
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

__attribute__((alias("__imp__sub_8221B060"))) PPC_WEAK_FUNC(sub_8221B060);
PPC_FUNC_IMPL(__imp__sub_8221B060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x8221B068;
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
	// bl 0x82229448
	ctx.lr = 0x8221B08C;
	sub_82229448(ctx, base);
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
	// beq cr6,0x8221b0bc
	if (ctx.cr6.eq) goto loc_8221B0BC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8221b0d4
	if (!ctx.cr6.eq) goto loc_8221B0D4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27392
	ctx.r5.s64 = ctx.r11.s64 + -27392;
	// b 0x8221b0c4
	goto loc_8221B0C4;
loc_8221B0BC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27404
	ctx.r5.s64 = ctx.r11.s64 + -27404;
loc_8221B0C4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27400
	ctx.r4.s64 = ctx.r11.s64 + -27400;
	// bl 0x82228df8
	ctx.lr = 0x8221B0D4;
	sub_82228DF8(ctx, base);
loc_8221B0D4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B0E8;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221b12c
	if (ctx.cr6.eq) goto loc_8221B12C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221B0F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221b0f8
	if (!ctx.cr6.eq) goto loc_8221B0F8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221b12c
	if (ctx.cr0.eq) goto loc_8221B12C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28376
	ctx.r4.s64 = ctx.r11.s64 + -28376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B12C;
	sub_82228DF8(ctx, base);
loc_8221B12C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8221b170
	if (ctx.cr6.eq) goto loc_8221B170;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221B13C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221b13c
	if (!ctx.cr6.eq) goto loc_8221B13C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221b170
	if (ctx.cr0.eq) goto loc_8221B170;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-27388
	ctx.r4.s64 = ctx.r11.s64 + -27388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B170;
	sub_82228DF8(ctx, base);
loc_8221B170:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221b184
	if (ctx.cr0.eq) goto loc_8221B184;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27380
	ctx.r5.s64 = ctx.r11.s64 + -27380;
	// b 0x8221b18c
	goto loc_8221B18C;
loc_8221B184:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27376
	ctx.r5.s64 = ctx.r11.s64 + -27376;
loc_8221B18C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27460
	ctx.r4.s64 = ctx.r11.s64 + -27460;
	// bl 0x82228df8
	ctx.lr = 0x8221B19C;
	sub_82228DF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B1A8"))) PPC_WEAK_FUNC(sub_8221B1A8);
PPC_FUNC_IMPL(__imp__sub_8221B1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221B1B0;
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
	// bl 0x82229448
	ctx.lr = 0x8221B1CC;
	sub_82229448(ctx, base);
	// lis r11,21060
	ctx.r11.s64 = 1380188160;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17741
	ctx.r10.u64 = ctx.r11.u64 | 17741;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x8221B1F4;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221b238
	if (ctx.cr6.eq) goto loc_8221B238;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221B204:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221b204
	if (!ctx.cr6.eq) goto loc_8221B204;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221b238
	if (ctx.cr0.eq) goto loc_8221B238;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28376
	ctx.r4.s64 = ctx.r11.s64 + -28376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B238;
	sub_82228DF8(ctx, base);
loc_8221B238:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221b27c
	if (ctx.cr6.eq) goto loc_8221B27C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221B248:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221b248
	if (!ctx.cr6.eq) goto loc_8221B248;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221b27c
	if (ctx.cr0.eq) goto loc_8221B27C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27388
	ctx.r4.s64 = ctx.r11.s64 + -27388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B27C;
	sub_82228DF8(ctx, base);
loc_8221B27C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B288"))) PPC_WEAK_FUNC(sub_8221B288);
PPC_FUNC_IMPL(__imp__sub_8221B288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x8221B290;
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
	// bl 0x82229448
	ctx.lr = 0x8221B2B4;
	sub_82229448(ctx, base);
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
	// beq cr6,0x8221b2e4
	if (ctx.cr6.eq) goto loc_8221B2E4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8221b2fc
	if (!ctx.cr6.eq) goto loc_8221B2FC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27392
	ctx.r5.s64 = ctx.r11.s64 + -27392;
	// b 0x8221b2ec
	goto loc_8221B2EC;
loc_8221B2E4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27404
	ctx.r5.s64 = ctx.r11.s64 + -27404;
loc_8221B2EC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27400
	ctx.r4.s64 = ctx.r11.s64 + -27400;
	// bl 0x82228df8
	ctx.lr = 0x8221B2FC;
	sub_82228DF8(ctx, base);
loc_8221B2FC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221b340
	if (ctx.cr6.eq) goto loc_8221B340;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221B30C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221b30c
	if (!ctx.cr6.eq) goto loc_8221B30C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221b340
	if (ctx.cr0.eq) goto loc_8221B340;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28376
	ctx.r4.s64 = ctx.r11.s64 + -28376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B340;
	sub_82228DF8(ctx, base);
loc_8221B340:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221b384
	if (ctx.cr6.eq) goto loc_8221B384;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221B350:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221b350
	if (!ctx.cr6.eq) goto loc_8221B350;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221b384
	if (ctx.cr0.eq) goto loc_8221B384;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27388
	ctx.r4.s64 = ctx.r11.s64 + -27388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B384;
	sub_82228DF8(ctx, base);
loc_8221B384:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r11,-27380
	ctx.r30.s64 = ctx.r11.s64 + -27380;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r29,r11,-27376
	ctx.r29.s64 = ctx.r11.s64 + -27376;
	// bne 0x8221b3a4
	if (!ctx.cr0.eq) goto loc_8221B3A4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8221B3A4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27460
	ctx.r4.s64 = ctx.r11.s64 + -27460;
	// bl 0x82228df8
	ctx.lr = 0x8221B3B4;
	sub_82228DF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221b3c4
	if (!ctx.cr0.eq) goto loc_8221B3C4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8221B3C4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27348
	ctx.r4.s64 = ctx.r11.s64 + -27348;
	// bl 0x82228df8
	ctx.lr = 0x8221B3D4;
	sub_82228DF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B3E0"))) PPC_WEAK_FUNC(sub_8221B3E0);
PPC_FUNC_IMPL(__imp__sub_8221B3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x8221B3E8;
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
	// bl 0x82229448
	ctx.lr = 0x8221B410;
	sub_82229448(ctx, base);
	// lis r11,18249
	ctx.r11.s64 = 1195966464;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,20054
	ctx.r10.u64 = ctx.r11.u64 | 20054;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x8221B438;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-28444
	ctx.r4.s64 = ctx.r11.s64 + -28444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221B44C;
	sub_82228BF0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8221b468
	if (ctx.cr6.eq) goto loc_8221B468;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28500
	ctx.r4.s64 = ctx.r11.s64 + -28500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221B468;
	sub_82228BF0(ctx, base);
loc_8221B468:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8221b484
	if (ctx.cr6.eq) goto loc_8221B484;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-28476
	ctx.r4.s64 = ctx.r11.s64 + -28476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B484;
	sub_82228DF8(ctx, base);
loc_8221B484:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8221b4c8
	if (ctx.cr6.eq) goto loc_8221B4C8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221B494:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221b494
	if (!ctx.cr6.eq) goto loc_8221B494;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221b4c8
	if (ctx.cr0.eq) goto loc_8221B4C8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-28360
	ctx.r4.s64 = ctx.r11.s64 + -28360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B4C8;
	sub_82228DF8(ctx, base);
loc_8221B4C8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8221b4f4
	if (!ctx.cr6.gt) goto loc_8221B4F4;
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8221b4f4
	if (!ctx.cr6.gt) goto loc_8221B4F4;
	// lwz r6,236(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221b4f4
	if (ctx.cr6.eq) goto loc_8221B4F4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b9a8
	ctx.lr = 0x8221B4F4;
	sub_8221B9A8(ctx, base);
loc_8221B4F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B500"))) PPC_WEAK_FUNC(sub_8221B500);
PPC_FUNC_IMPL(__imp__sub_8221B500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221B508;
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
	// bl 0x82229448
	ctx.lr = 0x8221B524;
	sub_82229448(ctx, base);
	// lis r11,18258
	ctx.r11.s64 = 1196556288;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21328
	ctx.r10.u64 = ctx.r11.u64 | 21328;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x8221B54C;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8221b578
	if (ctx.cr6.lt) goto loc_8221B578;
	// beq cr6,0x8221b56c
	if (ctx.cr6.eq) goto loc_8221B56C;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x8221b590
	if (!ctx.cr6.lt) goto loc_8221B590;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27340
	ctx.r5.s64 = ctx.r11.s64 + -27340;
	// b 0x8221b580
	goto loc_8221B580;
loc_8221B56C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27376
	ctx.r5.s64 = ctx.r11.s64 + -27376;
	// b 0x8221b580
	goto loc_8221B580;
loc_8221B578:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27380
	ctx.r5.s64 = ctx.r11.s64 + -27380;
loc_8221B580:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27356
	ctx.r4.s64 = ctx.r11.s64 + -27356;
	// bl 0x82228df8
	ctx.lr = 0x8221B590;
	sub_82228DF8(ctx, base);
loc_8221B590:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221b5ac
	if (ctx.cr6.eq) goto loc_8221B5AC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-28476
	ctx.r4.s64 = ctx.r11.s64 + -28476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B5AC;
	sub_82228DF8(ctx, base);
loc_8221B5AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B5B8"))) PPC_WEAK_FUNC(sub_8221B5B8);
PPC_FUNC_IMPL(__imp__sub_8221B5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221B5C0;
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
	// bl 0x82229448
	ctx.lr = 0x8221B5DC;
	sub_82229448(ctx, base);
	// lis r11,18258
	ctx.r11.s64 = 1196556288;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,22091
	ctx.r10.u64 = ctx.r11.u64 | 22091;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x8221B604;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-28444
	ctx.r4.s64 = ctx.r11.s64 + -28444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221B618;
	sub_82228BF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221b634
	if (ctx.cr6.eq) goto loc_8221B634;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28476
	ctx.r4.s64 = ctx.r11.s64 + -28476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B634;
	sub_82228DF8(ctx, base);
loc_8221B634:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B640"))) PPC_WEAK_FUNC(sub_8221B640);
PPC_FUNC_IMPL(__imp__sub_8221B640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x8221B648;
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
	// bl 0x82229448
	ctx.lr = 0x8221B66C;
	sub_82229448(ctx, base);
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
	// beq cr6,0x8221b69c
	if (ctx.cr6.eq) goto loc_8221B69C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8221b6b4
	if (!ctx.cr6.eq) goto loc_8221B6B4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27372
	ctx.r5.s64 = ctx.r11.s64 + -27372;
	// b 0x8221b6a4
	goto loc_8221B6A4;
loc_8221B69C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
loc_8221B6A4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82228df8
	ctx.lr = 0x8221B6B4;
	sub_82228DF8(ctx, base);
loc_8221B6B4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B6C8;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-28352
	ctx.r4.s64 = ctx.r11.s64 + -28352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B6DC;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-28344
	ctx.r4.s64 = ctx.r11.s64 + -28344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B6F0;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-28320
	ctx.r4.s64 = ctx.r11.s64 + -28320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221B704;
	sub_82228BF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B710"))) PPC_WEAK_FUNC(sub_8221B710);
PPC_FUNC_IMPL(__imp__sub_8221B710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x8221B718;
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
	// bl 0x82229448
	ctx.lr = 0x8221B73C;
	sub_82229448(ctx, base);
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
	// beq cr6,0x8221b76c
	if (ctx.cr6.eq) goto loc_8221B76C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8221b784
	if (!ctx.cr6.eq) goto loc_8221B784;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27372
	ctx.r5.s64 = ctx.r11.s64 + -27372;
	// b 0x8221b774
	goto loc_8221B774;
loc_8221B76C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
loc_8221B774:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82228df8
	ctx.lr = 0x8221B784;
	sub_82228DF8(ctx, base);
loc_8221B784:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B798;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-28352
	ctx.r4.s64 = ctx.r11.s64 + -28352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B7AC;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-28344
	ctx.r4.s64 = ctx.r11.s64 + -28344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221B7C0;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-28320
	ctx.r4.s64 = ctx.r11.s64 + -28320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221B7D4;
	sub_82228BF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B7E0"))) PPC_WEAK_FUNC(sub_8221B7E0);
PPC_FUNC_IMPL(__imp__sub_8221B7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221B7E8;
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
	// bl 0x82229448
	ctx.lr = 0x8221B804;
	sub_82229448(ctx, base);
	// lis r11,17744
	ctx.r11.s64 = 1162870784;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21332
	ctx.r10.u64 = ctx.r11.u64 | 21332;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28336
	ctx.r4.s64 = ctx.r11.s64 + -28336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x8221B82C;
	sub_82228DF8(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r11,-27444
	ctx.r30.s64 = ctx.r11.s64 + -27444;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r29,r11,-27432
	ctx.r29.s64 = ctx.r11.s64 + -27432;
	// bne 0x8221b84c
	if (!ctx.cr0.eq) goto loc_8221B84C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8221B84C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28328
	ctx.r4.s64 = ctx.r11.s64 + -28328;
	// bl 0x82228df8
	ctx.lr = 0x8221B85C;
	sub_82228DF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221b86c
	if (!ctx.cr0.eq) goto loc_8221B86C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8221B86C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27332
	ctx.r4.s64 = ctx.r11.s64 + -27332;
	// bl 0x82228df8
	ctx.lr = 0x8221B87C;
	sub_82228DF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B888"))) PPC_WEAK_FUNC(sub_8221B888);
PPC_FUNC_IMPL(__imp__sub_8221B888) {
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
	// bl 0x82229448
	ctx.lr = 0x8221B8A4;
	sub_82229448(ctx, base);
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

__attribute__((alias("__imp__sub_8221B8D0"))) PPC_WEAK_FUNC(sub_8221B8D0);
PPC_FUNC_IMPL(__imp__sub_8221B8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x8221B8D8;
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
	// bl 0x82229448
	ctx.lr = 0x8221B8F0;
	sub_82229448(ctx, base);
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
	// bl 0x82210048
	ctx.lr = 0x8221B910;
	sub_82210048(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B920"))) PPC_WEAK_FUNC(sub_8221B920);
PPC_FUNC_IMPL(__imp__sub_8221B920) {
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
	ctx.lr = 0x8221B944;
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

__attribute__((alias("__imp__sub_8221B958"))) PPC_WEAK_FUNC(sub_8221B958);
PPC_FUNC_IMPL(__imp__sub_8221B958) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8221b994
	if (ctx.cr6.eq) goto loc_8221B994;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-4424
	ctx.r11.s64 = ctx.r11.s64 + -4424;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221b994
	if (ctx.cr6.eq) goto loc_8221B994;
loc_8221B978:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8221b99c
	if (ctx.cr6.eq) goto loc_8221B99C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8221b978
	if (!ctx.cr0.eq) goto loc_8221B978;
loc_8221B994:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8221B99C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B9A8"))) PPC_WEAK_FUNC(sub_8221B9A8);
PPC_FUNC_IMPL(__imp__sub_8221B9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x8221B9B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,-27324
	ctx.r4.s64 = ctx.r11.s64 + -27324;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221B9D0;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-27316
	ctx.r4.s64 = ctx.r11.s64 + -27316;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221B9E4;
	sub_82228BF0(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82213798
	ctx.lr = 0x8221B9F8;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x8221BA14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8221ba3c
	if (!ctx.cr0.eq) goto loc_8221BA3C;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-12072(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12072);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27308
	ctx.r5.s64 = ctx.r11.s64 + -27308;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8221ba78
	goto loc_8221BA78;
loc_8221BA3C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7850
	ctx.lr = 0x8221BA4C;
	sub_830D7850(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,-27288
	ctx.r4.s64 = ctx.r11.s64 + -27288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229100
	ctx.lr = 0x8221BA64;
	sub_82229100(ctx, base);
	// bl 0x82213798
	ctx.lr = 0x8221BA68;
	sub_82213798(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_8221BA78:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BA80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221BA88"))) PPC_WEAK_FUNC(sub_8221BA88);
PPC_FUNC_IMPL(__imp__sub_8221BA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r9,136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-23032
	ctx.r11.s64 = ctx.r11.s64 + -23032;
	// addi r10,r10,-22988
	ctx.r10.s64 = ctx.r10.s64 + -22988;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// ble cr6,0x8221baec
	if (!ctx.cr6.gt) goto loc_8221BAEC;
	// lwz r9,140(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_8221BABC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8221badc
	if (ctx.cr6.eq) goto loc_8221BADC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8221babc
	if (ctx.cr6.lt) goto loc_8221BABC;
	// b 0x8221baec
	goto loc_8221BAEC;
loc_8221BADC:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_8221BAEC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-25488
	ctx.r11.s64 = ctx.r11.s64 + -25488;
	// addi r10,r10,-19264
	ctx.r10.s64 = ctx.r10.s64 + -19264;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BB08"))) PPC_WEAK_FUNC(sub_8221BB08);
PPC_FUNC_IMPL(__imp__sub_8221BB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221BB10;
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
	// bge cr6,0x8221bbf4
	if (!ctx.cr6.lt) goto loc_8221BBF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
loc_8221BB34:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221bb50
	if (!ctx.cr6.eq) goto loc_8221BB50;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x8221bb54
	if (ctx.cr6.eq) goto loc_8221BB54;
loc_8221BB50:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8221BB54:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8221bb70
	if (ctx.cr0.eq) goto loc_8221BB70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8221bb34
	if (ctx.cr6.lt) goto loc_8221BB34;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8221BB70:
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
	// bl 0x82e28fd0
	ctx.lr = 0x8221BB88;
	sub_82E28FD0(ctx, base);
	// li r4,10000
	ctx.r4.s64 = 10000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// bl 0x830dd7d0
	ctx.lr = 0x8221BB98;
	sub_830DD7D0(ctx, base);
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
	// bne cr6,0x8221bbec
	if (!ctx.cr6.eq) goto loc_8221BBEC;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
loc_8221BBC0:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8221bbe0
	if (ctx.cr6.eq) goto loc_8221BBE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8221bbc0
	if (ctx.cr6.lt) goto loc_8221BBC0;
	// b 0x8221bbec
	goto loc_8221BBEC;
loc_8221BBE0:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8221BBEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221bbf8
	goto loc_8221BBF8;
loc_8221BBF4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8221BBF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221BC00"))) PPC_WEAK_FUNC(sub_8221BC00);
PPC_FUNC_IMPL(__imp__sub_8221BC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x8221BC08;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r26,r29,32
	ctx.r26.s64 = ctx.r29.s64 + 32;
	// li r25,4
	ctx.r25.s64 = 4;
	// lis r27,-31966
	ctx.r27.s64 = -2094923776;
	// addi r28,r11,-27280
	ctx.r28.s64 = ctx.r11.s64 + -27280;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221BC28:
	// lwz r11,-28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -28);
	// addi r31,r26,-28
	ctx.r31.s64 = ctx.r26.s64 + -28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bc48
	if (!ctx.cr6.eq) goto loc_8221BC48;
	// lwz r11,-20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x8221bc4c
	if (ctx.cr6.eq) goto loc_8221BC4C;
loc_8221BC48:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8221BC4C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221bd64
	if (ctx.cr0.eq) goto loc_8221BD64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221bd64
	if (ctx.cr0.eq) goto loc_8221BD64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221bd64
	if (ctx.cr0.eq) goto loc_8221BD64;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r11,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
	// bge cr6,0x8221bcd0
	if (!ctx.cr6.lt) goto loc_8221BCD0;
	// addic. r11,r29,-4
	ctx.xer.ca = ctx.r29.u32 > 3;
	ctx.r11.s64 = ctx.r29.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bne 0x8221bc98
	if (!ctx.cr0.eq) goto loc_8221BC98;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_8221BC98:
	// lwz r9,136(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_8221BCA4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8221bcc4
	if (ctx.cr6.eq) goto loc_8221BCC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8221bca4
	if (ctx.cr6.lt) goto loc_8221BCA4;
	// b 0x8221bcd0
	goto loc_8221BCD0;
loc_8221BCC4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u32);
loc_8221BCD0:
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
	// beq 0x8221bcfc
	if (ctx.cr0.eq) goto loc_8221BCFC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BCF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221bd14
	goto loc_8221BD14;
loc_8221BCFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221bd14
	if (ctx.cr0.eq) goto loc_8221BD14;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BD14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221BD14:
	// lwz r3,-12072(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -12072);
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
	ctx.lr = 0x8221BD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221BD50;
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
loc_8221BD64:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// bne 0x8221bc28
	if (!ctx.cr0.eq) goto loc_8221BC28;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221BD78"))) PPC_WEAK_FUNC(sub_8221BD78);
PPC_FUNC_IMPL(__imp__sub_8221BD78) {
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
loc_8221BD94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221bd94
	if (!ctx.cr6.eq) goto loc_8221BD94;
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
loc_8221BDB8:
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8221bdb8
	if (!ctx.cr6.eq) goto loc_8221BDB8;
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
	// bge cr6,0x8221bf28
	if (!ctx.cr6.lt) goto loc_8221BF28;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221BDEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221bdec
	if (!ctx.cr6.eq) goto loc_8221BDEC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8221BE00:
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
	// bne 0x8221be00
	if (!ctx.cr0.eq) goto loc_8221BE00;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-27248
	ctx.r10.s64 = ctx.r11.s64 + -27248;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221BE24:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221be24
	if (!ctx.cr6.eq) goto loc_8221BE24;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8221BE38:
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
	// bne 0x8221be38
	if (!ctx.cr0.eq) goto loc_8221BE38;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221bed0
	if (ctx.cr6.eq) goto loc_8221BED0;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bed0
	if (ctx.cr6.eq) goto loc_8221BED0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-27240
	ctx.r10.s64 = ctx.r11.s64 + -27240;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221BE70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221be70
	if (!ctx.cr6.eq) goto loc_8221BE70;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8221BE84:
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
	// bne 0x8221be84
	if (!ctx.cr0.eq) goto loc_8221BE84;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221BEA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221bea4
	if (!ctx.cr6.eq) goto loc_8221BEA4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8221BEB8:
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
	// bne 0x8221beb8
	if (!ctx.cr0.eq) goto loc_8221BEB8;
loc_8221BED0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-27236
	ctx.r10.s64 = ctx.r11.s64 + -27236;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221BEDC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221bedc
	if (!ctx.cr6.eq) goto loc_8221BEDC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8221BEF0:
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
	// bne 0x8221bef0
	if (!ctx.cr0.eq) goto loc_8221BEF0;
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
	ctx.lr = 0x8221BF24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221bf2c
	goto loc_8221BF2C;
loc_8221BF28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221BF2C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BF40"))) PPC_WEAK_FUNC(sub_8221BF40);
PPC_FUNC_IMPL(__imp__sub_8221BF40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8221bf50
	if (ctx.cr6.gt) goto loc_8221BF50;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
loc_8221BF50:
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

__attribute__((alias("__imp__sub_8221BF70"))) PPC_WEAK_FUNC(sub_8221BF70);
PPC_FUNC_IMPL(__imp__sub_8221BF70) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8221bf80
	if (ctx.cr6.gt) goto loc_8221BF80;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
loc_8221BF80:
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

__attribute__((alias("__imp__sub_8221BFA0"))) PPC_WEAK_FUNC(sub_8221BFA0);
PPC_FUNC_IMPL(__imp__sub_8221BFA0) {
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
	// bl 0x82e2ab28
	ctx.lr = 0x8221BFC8;
	sub_82E2AB28(ctx, base);
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

__attribute__((alias("__imp__sub_8221BFE8"))) PPC_WEAK_FUNC(sub_8221BFE8);
PPC_FUNC_IMPL(__imp__sub_8221BFE8) {
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
	// bl 0x82e2ab28
	ctx.lr = 0x8221C010;
	sub_82E2AB28(ctx, base);
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

__attribute__((alias("__imp__sub_8221C030"))) PPC_WEAK_FUNC(sub_8221C030);
PPC_FUNC_IMPL(__imp__sub_8221C030) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,280
	ctx.r3.s64 = ctx.r3.s64 + 280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C038"))) PPC_WEAK_FUNC(sub_8221C038);
PPC_FUNC_IMPL(__imp__sub_8221C038) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,280
	ctx.r3.s64 = ctx.r3.s64 + 280;
	// li r5,99
	ctx.r5.s64 = 99;
	// b 0x82e28fd0
	sub_82E28FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C048"))) PPC_WEAK_FUNC(sub_8221C048);
PPC_FUNC_IMPL(__imp__sub_8221C048) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C050"))) PPC_WEAK_FUNC(sub_8221C050);
PPC_FUNC_IMPL(__imp__sub_8221C050) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C058"))) PPC_WEAK_FUNC(sub_8221C058);
PPC_FUNC_IMPL(__imp__sub_8221C058) {
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
	// bl 0x8221ba88
	ctx.lr = 0x8221C078;
	sub_8221BA88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221c08c
	if (ctx.cr0.eq) goto loc_8221C08C;
	// li r4,380
	ctx.r4.s64 = 380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217db8
	ctx.lr = 0x8221C08C;
	sub_82217DB8(ctx, base);
loc_8221C08C:
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

__attribute__((alias("__imp__sub_8221C0A8"))) PPC_WEAK_FUNC(sub_8221C0A8);
PPC_FUNC_IMPL(__imp__sub_8221C0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x8221C0B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x82217d58
	ctx.lr = 0x8221C0C0;
	sub_82217D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8221c148
	if (ctx.cr0.eq) goto loc_8221C148;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-25488
	ctx.r10.s64 = ctx.r11.s64 + -25488;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r9,r11,-23032
	ctx.r9.s64 = ctx.r11.s64 + -23032;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r8,r11,-22988
	ctx.r8.s64 = ctx.r11.s64 + -22988;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8221C0F8:
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
	// bge 0x8221c0f8
	if (!ctx.cr0.lt) goto loc_8221C0F8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// addi r4,r11,-29761
	ctx.r4.s64 = ctx.r11.s64 + -29761;
	// bl 0x82217630
	ctx.lr = 0x8221C128;
	sub_82217630(ctx, base);
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
	// b 0x8221c14c
	goto loc_8221C14C;
loc_8221C148:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221C14C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C158"))) PPC_WEAK_FUNC(sub_8221C158);
PPC_FUNC_IMPL(__imp__sub_8221C158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221C160;
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
	// blt 0x8221c190
	if (ctx.cr0.lt) goto loc_8221C190;
loc_8221C178:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8221C184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bge 0x8221c178
	if (!ctx.cr0.lt) goto loc_8221C178;
loc_8221C190:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C198"))) PPC_WEAK_FUNC(sub_8221C198);
PPC_FUNC_IMPL(__imp__sub_8221C198) {
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
	// bne cr6,0x8221c1c8
	if (!ctx.cr6.eq) goto loc_8221C1C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x8221c1e0
	goto loc_8221C1E0;
loc_8221C1C8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C1DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
loc_8221C1E0:
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

__attribute__((alias("__imp__sub_8221C1F8"))) PPC_WEAK_FUNC(sub_8221C1F8);
PPC_FUNC_IMPL(__imp__sub_8221C1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221C200;
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
	// bl 0x8221ddb8
	ctx.lr = 0x8221C218;
	sub_8221DDB8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
loc_8221C220:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82217830
	ctx.lr = 0x8221C22C;
	sub_82217830(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221c248
	if (!ctx.cr0.eq) goto loc_8221C248;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,148
	ctx.r29.s64 = ctx.r29.s64 + 148;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x8221c220
	if (ctx.cr6.lt) goto loc_8221C220;
	// b 0x8221c290
	goto loc_8221C290;
loc_8221C248:
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
	// beq 0x8221c274
	if (ctx.cr0.eq) goto loc_8221C274;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221c290
	goto loc_8221C290;
loc_8221C274:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221c290
	if (ctx.cr0.eq) goto loc_8221C290;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221C290:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C298"))) PPC_WEAK_FUNC(sub_8221C298);
PPC_FUNC_IMPL(__imp__sub_8221C298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221C2A0;
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
	// bl 0x8221dfd8
	ctx.lr = 0x8221C2B8;
	sub_8221DFD8(ctx, base);
	// lbz r11,315(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 315);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221c33c
	if (ctx.cr0.eq) goto loc_8221C33C;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
loc_8221C2CC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82217830
	ctx.lr = 0x8221C2D8;
	sub_82217830(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221c2f4
	if (!ctx.cr0.eq) goto loc_8221C2F4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,148
	ctx.r30.s64 = ctx.r30.s64 + 148;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x8221c2cc
	if (ctx.cr6.lt) goto loc_8221C2CC;
	// b 0x8221c33c
	goto loc_8221C33C;
loc_8221C2F4:
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
	// beq 0x8221c320
	if (ctx.cr0.eq) goto loc_8221C320;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221c33c
	goto loc_8221C33C;
loc_8221C320:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221c33c
	if (ctx.cr0.eq) goto loc_8221C33C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C33C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221C33C:
	// bl 0x82213798
	ctx.lr = 0x8221C340;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x8221C358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C360"))) PPC_WEAK_FUNC(sub_8221C360);
PPC_FUNC_IMPL(__imp__sub_8221C360) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-22956
	ctx.r10.s64 = ctx.r11.s64 + -22956;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r8,-31966
	ctx.r8.s64 = -2094923776;
	// addi r11,r11,-25788
	ctx.r11.s64 = ctx.r11.s64 + -25788;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// clrlwi. r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r9,-12031(r8)
	PPC_STORE_U8(ctx.r8.u32 + -12031, ctx.r9.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8221c3ac
	if (ctx.cr0.eq) goto loc_8221C3AC;
	// li r4,308
	ctx.r4.s64 = 308;
	// bl 0x82217db8
	ctx.lr = 0x8221C3AC;
	sub_82217DB8(ctx, base);
loc_8221C3AC:
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

__attribute__((alias("__imp__sub_8221C3C8"))) PPC_WEAK_FUNC(sub_8221C3C8);
PPC_FUNC_IMPL(__imp__sub_8221C3C8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-29761
	ctx.r4.s64 = ctx.r11.s64 + -29761;
	// bl 0x82217630
	ctx.lr = 0x8221C3E8;
	sub_82217630(ctx, base);
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

__attribute__((alias("__imp__sub_8221C420"))) PPC_WEAK_FUNC(sub_8221C420);
PPC_FUNC_IMPL(__imp__sub_8221C420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221C428;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31966
	ctx.r28.s64 = -2094923776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,-12031(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -12031);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8221c538
	if (!ctx.cr0.eq) goto loc_8221C538;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r11,r11,23980
	ctx.r11.s64 = ctx.r11.s64 + 23980;
	// addi r10,r10,-2008
	ctx.r10.s64 = ctx.r10.s64 + -2008;
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
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-1996
	ctx.r10.s64 = ctx.r10.s64 + -1996;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r30,r10,-1984
	ctx.r30.s64 = ctx.r10.s64 + -1984;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-1972
	ctx.r10.s64 = ctx.r10.s64 + -1972;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r29,r10,-1960
	ctx.r29.s64 = ctx.r10.s64 + -1960;
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
	ctx.lr = 0x8221C4DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-15720
	ctx.r5.s64 = ctx.r11.s64 + -15720;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C4FC;
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
	ctx.lr = 0x8221C510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-15880
	ctx.r5.s64 = ctx.r11.s64 + -15880;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-12031(r28)
	PPC_STORE_U8(ctx.r28.u32 + -12031, ctx.r11.u8);
loc_8221C538:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C540"))) PPC_WEAK_FUNC(sub_8221C540);
PPC_FUNC_IMPL(__imp__sub_8221C540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e40
	ctx.lr = 0x8221C548;
	__savegprlr_18(ctx, base);
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r11,r11,-12020
	ctx.r11.s64 = ctx.r11.s64 + -12020;
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
	// bl 0x82231328
	ctx.lr = 0x8221C588;
	sub_82231328(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229448
	ctx.lr = 0x8221C590;
	sub_82229448(ctx, base);
	// lis r11,28782
	ctx.r11.s64 = 1886257152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,28535
	ctx.r10.u64 = ctx.r11.u64 | 28535;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r31,r11,-1032
	ctx.r31.s64 = ctx.r11.s64 + -1032;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r4,r31,25064
	ctx.r4.s64 = ctx.r31.s64 + 25064;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// addi r11,r11,-2008
	ctx.r11.s64 = ctx.r11.s64 + -2008;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82228df8
	ctx.lr = 0x8221C5BC;
	sub_82228DF8(ctx, base);
	// addi r5,r31,25068
	ctx.r5.s64 = ctx.r31.s64 + 25068;
	// addi r4,r31,25456
	ctx.r4.s64 = ctx.r31.s64 + 25456;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82e2b400
	ctx.lr = 0x8221C5CC;
	sub_82E2B400(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82217710
	ctx.lr = 0x8221C5D8;
	sub_82217710(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221C5E8;
	sub_82228DF8(ctx, base);
	// lis r22,-31966
	ctx.r22.s64 = -2094923776;
	// lwz r3,-12076(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -12076);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r31,-2
	ctx.r29.s64 = ctx.r31.s64 + -2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C62C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8221c65c
	if (ctx.cr6.lt) goto loc_8221C65C;
	// beq cr6,0x8221c654
	if (ctx.cr6.eq) goto loc_8221C654;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8221c64c
	if (ctx.cr6.lt) goto loc_8221C64C;
	// bne cr6,0x8221c660
	if (!ctx.cr6.eq) goto loc_8221C660;
	// addi r29,r31,26064
	ctx.r29.s64 = ctx.r31.s64 + 26064;
	// b 0x8221c660
	goto loc_8221C660;
loc_8221C64C:
	// addi r29,r31,26060
	ctx.r29.s64 = ctx.r31.s64 + 26060;
	// b 0x8221c660
	goto loc_8221C660;
loc_8221C654:
	// addi r29,r31,26052
	ctx.r29.s64 = ctx.r31.s64 + 26052;
	// b 0x8221c660
	goto loc_8221C660;
loc_8221C65C:
	// addi r29,r31,26048
	ctx.r29.s64 = ctx.r31.s64 + 26048;
loc_8221C660:
	// addi r4,r31,26068
	ctx.r4.s64 = ctx.r31.s64 + 26068;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221C670;
	sub_82228DF8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,25080
	ctx.r4.s64 = ctx.r31.s64 + 25080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221C694;
	sub_82228BF0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C6A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// beq cr6,0x8221c6d4
	if (ctx.cr6.eq) goto loc_8221C6D4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,25088
	ctx.r4.s64 = ctx.r31.s64 + 25088;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cf0
	ctx.lr = 0x8221C6D4;
	sub_82228CF0(ctx, base);
loc_8221C6D4:
	// lwz r3,-12076(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -12076);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221c72c
	if (ctx.cr6.eq) goto loc_8221C72C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x8221c72c
	if (ctx.cr0.eq) goto loc_8221C72C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x8221c730
	goto loc_8221C730;
loc_8221C72C:
	// li r23,1
	ctx.r23.s64 = 1;
loc_8221C730:
	// addi r4,r31,25128
	ctx.r4.s64 = ctx.r31.s64 + 25128;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221C740;
	sub_82228BF0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r31,25140
	ctx.r5.s64 = ctx.r31.s64 + 25140;
	// addi r4,r31,25432
	ctx.r4.s64 = ctx.r31.s64 + 25432;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82e2b400
	ctx.lr = 0x8221C768;
	sub_82E2B400(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cf0
	ctx.lr = 0x8221C778;
	sub_82228CF0(ctx, base);
	// addi r5,r31,25140
	ctx.r5.s64 = ctx.r31.s64 + 25140;
	// addi r4,r31,25444
	ctx.r4.s64 = ctx.r31.s64 + 25444;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82e2b400
	ctx.lr = 0x8221C788;
	sub_82E2B400(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221C798;
	sub_82228BF0(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8221c8d8
	if (ctx.cr6.eq) goto loc_8221C8D8;
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
	ctx.lr = 0x8221C7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221c8d8
	if (ctx.cr0.eq) goto loc_8221C8D8;
loc_8221C7C4:
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
	ctx.lr = 0x8221C7DC;
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
	ctx.lr = 0x8221C7F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221c8b8
	if (!ctx.cr0.eq) goto loc_8221C8B8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C81C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r31,25152
	ctx.r4.s64 = ctx.r31.s64 + 25152;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82e2b400
	ctx.lr = 0x8221C830;
	sub_82E2B400(ctx, base);
	// addi r4,r31,25432
	ctx.r4.s64 = ctx.r31.s64 + 25432;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82e2b400
	ctx.lr = 0x8221C840;
	sub_82E2B400(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cf0
	ctx.lr = 0x8221C850;
	sub_82228CF0(ctx, base);
	// addi r4,r31,25444
	ctx.r4.s64 = ctx.r31.s64 + 25444;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82e2b400
	ctx.lr = 0x8221C860;
	sub_82E2B400(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221C870;
	sub_82228BF0(ctx, base);
	// addi r4,r31,25164
	ctx.r4.s64 = ctx.r31.s64 + 25164;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82e2b400
	ctx.lr = 0x8221C880;
	sub_82E2B400(ctx, base);
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
	ctx.lr = 0x8221C898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221C8B8;
	sub_82228DF8(ctx, base);
loc_8221C8B8:
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
	ctx.lr = 0x8221C8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8221c7c4
	if (ctx.cr6.lt) goto loc_8221C7C4;
loc_8221C8D8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C8EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r31,-9
	ctx.r29.s64 = ctx.r31.s64 + -9;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x8221c924
	if (ctx.cr6.lt) goto loc_8221C924;
	// beq cr6,0x8221c91c
	if (ctx.cr6.eq) goto loc_8221C91C;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// blt cr6,0x8221c914
	if (ctx.cr6.lt) goto loc_8221C914;
	// bne cr6,0x8221c928
	if (!ctx.cr6.eq) goto loc_8221C928;
	// addi r29,r31,26020
	ctx.r29.s64 = ctx.r31.s64 + 26020;
	// b 0x8221c928
	goto loc_8221C928;
loc_8221C914:
	// addi r29,r31,25996
	ctx.r29.s64 = ctx.r31.s64 + 25996;
	// b 0x8221c928
	goto loc_8221C928;
loc_8221C91C:
	// addi r29,r31,26008
	ctx.r29.s64 = ctx.r31.s64 + 26008;
	// b 0x8221c928
	goto loc_8221C928;
loc_8221C924:
	// addi r29,r31,25984
	ctx.r29.s64 = ctx.r31.s64 + 25984;
loc_8221C928:
	// addi r5,r31,25188
	ctx.r5.s64 = ctx.r31.s64 + 25188;
	// addi r4,r31,26032
	ctx.r4.s64 = ctx.r31.s64 + 26032;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82e2b400
	ctx.lr = 0x8221C938;
	sub_82E2B400(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221C948;
	sub_82228DF8(ctx, base);
	// addi r5,r31,25188
	ctx.r5.s64 = ctx.r31.s64 + 25188;
	// addi r4,r31,25208
	ctx.r4.s64 = ctx.r31.s64 + 25208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e2b400
	ctx.lr = 0x8221C958;
	sub_82E2B400(ctx, base);
	// lwz r3,-12076(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -12076);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C96C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C97C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C98C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221C99C;
	sub_82228DF8(ctx, base);
	// lwz r3,-12076(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -12076);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C9B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221C9C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8221c9f8
	if (ctx.cr6.lt) goto loc_8221C9F8;
	// beq cr6,0x8221c9f0
	if (ctx.cr6.eq) goto loc_8221C9F0;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8221c9e8
	if (ctx.cr6.lt) goto loc_8221C9E8;
	// beq cr6,0x8221c9e0
	if (ctx.cr6.eq) goto loc_8221C9E0;
	// addi r29,r31,13
	ctx.r29.s64 = ctx.r31.s64 + 13;
	// b 0x8221c9fc
	goto loc_8221C9FC;
loc_8221C9E0:
	// addi r29,r31,26300
	ctx.r29.s64 = ctx.r31.s64 + 26300;
	// b 0x8221c9fc
	goto loc_8221C9FC;
loc_8221C9E8:
	// addi r29,r31,26292
	ctx.r29.s64 = ctx.r31.s64 + 26292;
	// b 0x8221c9fc
	goto loc_8221C9FC;
loc_8221C9F0:
	// addi r29,r31,26284
	ctx.r29.s64 = ctx.r31.s64 + 26284;
	// b 0x8221c9fc
	goto loc_8221C9FC;
loc_8221C9F8:
	// addi r29,r31,26276
	ctx.r29.s64 = ctx.r31.s64 + 26276;
loc_8221C9FC:
	// addi r5,r31,25188
	ctx.r5.s64 = ctx.r31.s64 + 25188;
	// addi r4,r31,26308
	ctx.r4.s64 = ctx.r31.s64 + 26308;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82e2b400
	ctx.lr = 0x8221CA0C;
	sub_82E2B400(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221CA1C;
	sub_82228DF8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8221ca40
	if (ctx.cr6.eq) goto loc_8221CA40;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CA3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8221CA40:
	// addi r5,r31,25188
	ctx.r5.s64 = ctx.r31.s64 + 25188;
	// addi r4,r31,25220
	ctx.r4.s64 = ctx.r31.s64 + 25220;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e2b400
	ctx.lr = 0x8221CA50;
	sub_82E2B400(ctx, base);
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x8221caa4
	if (ctx.cr6.eq) goto loc_8221CAA4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8221caa4
	if (ctx.cr6.eq) goto loc_8221CAA4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CA74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8221ca98
	if (ctx.cr6.lt) goto loc_8221CA98;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8221caa8
	goto loc_8221CAA8;
loc_8221CA98:
	// li r11,-103
	ctx.r11.s64 = -103;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// b 0x8221cab4
	goto loc_8221CAB4;
loc_8221CAA4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8221CAA8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221CAB4;
	sub_82228BF0(ctx, base);
loc_8221CAB4:
	// addi r5,r31,25188
	ctx.r5.s64 = ctx.r31.s64 + 25188;
	// addi r4,r31,25240
	ctx.r4.s64 = ctx.r31.s64 + 25240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e2b400
	ctx.lr = 0x8221CAC4;
	sub_82E2B400(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CAD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221CAE8;
	sub_82228BF0(ctx, base);
	// addi r5,r31,25188
	ctx.r5.s64 = ctx.r31.s64 + 25188;
	// addi r4,r31,25256
	ctx.r4.s64 = ctx.r31.s64 + 25256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e2b400
	ctx.lr = 0x8221CAF8;
	sub_82E2B400(ctx, base);
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x8221cb2c
	if (ctx.cr6.eq) goto loc_8221CB2C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8221cb2c
	if (ctx.cr6.eq) goto loc_8221CB2C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822691d0
	ctx.lr = 0x8221CB24;
	sub_822691D0(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8221cb40
	goto loc_8221CB40;
loc_8221CB2C:
	// addi r4,r31,25280
	ctx.r4.s64 = ctx.r31.s64 + 25280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82e2b400
	ctx.lr = 0x8221CB3C;
	sub_82E2B400(ctx, base);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
loc_8221CB40:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221CB4C;
	sub_82228DF8(ctx, base);
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
	ctx.lr = 0x8221CB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8221cbbc
	if (!ctx.cr0.eq) goto loc_8221CBBC;
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
	ctx.lr = 0x8221CB84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822691d0
	ctx.lr = 0x8221CB8C;
	sub_822691D0(ctx, base);
	// addi r5,r31,25188
	ctx.r5.s64 = ctx.r31.s64 + 25188;
	// addi r4,r31,25288
	ctx.r4.s64 = ctx.r31.s64 + 25288;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e2b400
	ctx.lr = 0x8221CB9C;
	sub_82E2B400(ctx, base);
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
	// bne cr6,0x8221cbb8
	if (!ctx.cr6.eq) goto loc_8221CBB8;
	// addi r5,r31,25308
	ctx.r5.s64 = ctx.r31.s64 + 25308;
loc_8221CBB8:
	// bl 0x82228df8
	ctx.lr = 0x8221CBBC;
	sub_82228DF8(ctx, base);
loc_8221CBBC:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x8221cc30
	if (ctx.cr6.eq) goto loc_8221CC30;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x8221cc30
	if (ctx.cr6.eq) goto loc_8221CC30;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bne cr6,0x8221cc68
	if (!ctx.cr6.eq) goto loc_8221CC68;
	// addi r5,r31,25188
	ctx.r5.s64 = ctx.r31.s64 + 25188;
	// addi r4,r31,25336
	ctx.r4.s64 = ctx.r31.s64 + 25336;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e2b400
	ctx.lr = 0x8221CBE4;
	sub_82E2B400(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221CBF4;
	sub_82228BF0(ctx, base);
	// addi r5,r31,25188
	ctx.r5.s64 = ctx.r31.s64 + 25188;
	// addi r4,r31,25364
	ctx.r4.s64 = ctx.r31.s64 + 25364;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e2b400
	ctx.lr = 0x8221CC04;
	sub_82E2B400(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CC18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221CC28;
	sub_82228BF0(ctx, base);
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// b 0x8221cc68
	goto loc_8221CC68;
loc_8221CC30:
	// addi r5,r31,25188
	ctx.r5.s64 = ctx.r31.s64 + 25188;
	// addi r4,r31,25312
	ctx.r4.s64 = ctx.r31.s64 + 25312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e2b400
	ctx.lr = 0x8221CC40;
	sub_82E2B400(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CC54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221CC64;
	sub_82228BF0(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_8221CC68:
	// lwz r3,-12076(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -12076);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CC7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,160(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 160);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221cd60
	if (ctx.cr0.eq) goto loc_8221CD60;
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
	// beq 0x8221cd60
	if (ctx.cr0.eq) goto loc_8221CD60;
	// addi r5,r31,25188
	ctx.r5.s64 = ctx.r31.s64 + 25188;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82e2b400
	ctx.lr = 0x8221CCB4;
	sub_82E2B400(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8221cd4c
	if (ctx.cr6.eq) goto loc_8221CD4C;
loc_8221CCC4:
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
	ctx.lr = 0x8221CCDC;
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
	ctx.lr = 0x8221CCF0;
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
	ctx.lr = 0x8221CD08;
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
	// bl 0x82e2b400
	ctx.lr = 0x8221CD20;
	sub_82E2B400(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8221cd4c
	if (!ctx.cr6.lt) goto loc_8221CD4C;
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82e2b400
	ctx.lr = 0x8221CD40;
	sub_82E2B400(ctx, base);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8221ccc4
	if (ctx.cr6.lt) goto loc_8221CCC4;
loc_8221CD4C:
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221CD5C;
	sub_82228DF8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8221CD60:
	// addi r5,r31,25188
	ctx.r5.s64 = ctx.r31.s64 + 25188;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8221daf0
	ctx.lr = 0x8221CD74;
	sub_8221DAF0(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r5,r31,25188
	ctx.r5.s64 = ctx.r31.s64 + 25188;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x8221d180
	ctx.lr = 0x8221CD90;
	sub_8221D180(ctx, base);
	// add r5,r3,r29
	ctx.r5.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r4,r31,25392
	ctx.r4.s64 = ctx.r31.s64 + 25392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221CDA0;
	sub_82228BF0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r21,112
	ctx.r30.s64 = ctx.r21.s64 + 112;
loc_8221CDA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221cdc4
	if (!ctx.cr6.eq) goto loc_8221CDC4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8221cdc8
	if (ctx.cr6.eq) goto loc_8221CDC8;
loc_8221CDC4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8221CDC8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// beq 0x8221cdf8
	if (ctx.cr0.eq) goto loc_8221CDF8;
	// addi r3,r30,-100
	ctx.r3.s64 = ctx.r30.s64 + -100;
	// bl 0x82217830
	ctx.lr = 0x8221CDDC;
	sub_82217830(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221ce10
	if (!ctx.cr0.eq) goto loc_8221CE10;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,148
	ctx.r30.s64 = ctx.r30.s64 + 148;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x8221cda8
	if (ctx.cr6.lt) goto loc_8221CDA8;
	// b 0x8221ce38
	goto loc_8221CE38;
loc_8221CDF8:
	// mulli r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 * 148;
	// add r31,r11,r21
	ctx.r31.u64 = ctx.r11.u64 + ctx.r21.u64;
	// li r5,99
	ctx.r5.s64 = 99;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82e28fd0
	ctx.lr = 0x8221CE0C;
	sub_82E28FD0(ctx, base);
	// b 0x8221ce18
	goto loc_8221CE18;
loc_8221CE10:
	// mulli r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 * 148;
	// add r31,r11,r21
	ctx.r31.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_8221CE18:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82e28fd0
	ctx.lr = 0x8221CE28;
	sub_82E28FD0(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82e28fd0
	ctx.lr = 0x8221CE38;
	sub_82E28FD0(ctx, base);
loc_8221CE38:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x8221ce5c
	if (!ctx.cr6.gt) goto loc_8221CE5C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221ce5c
	if (ctx.cr6.eq) goto loc_8221CE5C;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822137f0
	ctx.lr = 0x8221CE5C;
	sub_822137F0(ctx, base);
loc_8221CE5C:
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// b 0x82e28e90
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CE68"))) PPC_WEAK_FUNC(sub_8221CE68);
PPC_FUNC_IMPL(__imp__sub_8221CE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x8221CE70;
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
	// bl 0x82229448
	ctx.lr = 0x8221CE8C;
	sub_82229448(ctx, base);
	// lis r11,28782
	ctx.r11.s64 = 1886257152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,28535
	ctx.r10.u64 = ctx.r11.u64 | 28535;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r31,r11,24424
	ctx.r31.s64 = ctx.r11.s64 + 24424;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// addi r11,r11,-1996
	ctx.r11.s64 = ctx.r11.s64 + -1996;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82228df8
	ctx.lr = 0x8221CEB8;
	sub_82228DF8(ctx, base);
	// addi r5,r31,-25467
	ctx.r5.s64 = ctx.r31.s64 + -25467;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221CEC8;
	sub_82E2B400(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cf0
	ctx.lr = 0x8221CED8;
	sub_82228CF0(ctx, base);
	// addi r5,r31,-25467
	ctx.r5.s64 = ctx.r31.s64 + -25467;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221CEE8;
	sub_82E2B400(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82e2b400
	ctx.lr = 0x8221CEF8;
	sub_82E2B400(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82217710
	ctx.lr = 0x8221CF04;
	sub_82217710(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221CF14;
	sub_82228DF8(ctx, base);
	// addi r31,r29,120
	ctx.r31.s64 = ctx.r29.s64 + 120;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8221CF20:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,-108
	ctx.r3.s64 = ctx.r31.s64 + -108;
	// bl 0x82217830
	ctx.lr = 0x8221CF2C;
	sub_82217830(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221cf4c
	if (ctx.cr0.eq) goto loc_8221CF4C;
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
loc_8221CF4C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,148
	ctx.r31.s64 = ctx.r31.s64 + 148;
	// bne 0x8221cf20
	if (!ctx.cr0.eq) goto loc_8221CF20;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CF60"))) PPC_WEAK_FUNC(sub_8221CF60);
PPC_FUNC_IMPL(__imp__sub_8221CF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221CF68;
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
	// bl 0x82229448
	ctx.lr = 0x8221CF80;
	sub_82229448(ctx, base);
	// lis r11,28782
	ctx.r11.s64 = 1886257152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,28535
	ctx.r10.u64 = ctx.r11.u64 | 28535;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r31,r11,24424
	ctx.r31.s64 = ctx.r11.s64 + 24424;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// addi r11,r11,-1972
	ctx.r11.s64 = ctx.r11.s64 + -1972;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82228df8
	ctx.lr = 0x8221CFAC;
	sub_82228DF8(ctx, base);
	// addi r5,r31,-25466
	ctx.r5.s64 = ctx.r31.s64 + -25466;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221CFBC;
	sub_82E2B400(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cf0
	ctx.lr = 0x8221CFCC;
	sub_82228CF0(ctx, base);
	// addi r5,r31,-25466
	ctx.r5.s64 = ctx.r31.s64 + -25466;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221CFDC;
	sub_82E2B400(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82e2b400
	ctx.lr = 0x8221CFEC;
	sub_82E2B400(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82217710
	ctx.lr = 0x8221CFF8;
	sub_82217710(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221D008;
	sub_82228DF8(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D010"))) PPC_WEAK_FUNC(sub_8221D010);
PPC_FUNC_IMPL(__imp__sub_8221D010) {
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
	// addi r4,r11,24380
	ctx.r4.s64 = ctx.r11.s64 + 24380;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822293e0
	ctx.lr = 0x8221D034;
	sub_822293E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d098
	if (ctx.cr0.eq) goto loc_8221D098;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-4304
	ctx.r11.s64 = ctx.r11.s64 + -4304;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221d098
	if (ctx.cr6.eq) goto loc_8221D098;
loc_8221D054:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8221D05C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221d080
	if (ctx.cr0.eq) goto loc_8221D080;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221d05c
	if (ctx.cr6.eq) goto loc_8221D05C;
loc_8221D080:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8221d0ac
	if (ctx.cr0.eq) goto loc_8221D0AC;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8221d054
	if (!ctx.cr0.eq) goto loc_8221D054;
loc_8221D098:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221D09C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221D0AC:
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x8221d09c
	goto loc_8221D09C;
}

__attribute__((alias("__imp__sub_8221D0B8"))) PPC_WEAK_FUNC(sub_8221D0B8);
PPC_FUNC_IMPL(__imp__sub_8221D0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x8221D0C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r11,-12020
	ctx.r11.s64 = ctx.r11.s64 + -12020;
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
	// addi r31,r11,24156
	ctx.r31.s64 = ctx.r11.s64 + 24156;
	// bne 0x8221d11c
	if (!ctx.cr0.eq) goto loc_8221D11C;
	// addi r11,r31,280
	ctx.r11.s64 = ctx.r31.s64 + 280;
	// addi r4,r31,280
	ctx.r4.s64 = ctx.r31.s64 + 280;
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82231490
	ctx.lr = 0x8221D118;
	sub_82231490(ctx, base);
	// b 0x8221d128
	goto loc_8221D128;
loc_8221D11C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x822691d0
	ctx.lr = 0x8221D128;
	sub_822691D0(ctx, base);
loc_8221D128:
	// addi r4,r31,284
	ctx.r4.s64 = ctx.r31.s64 + 284;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e2b400
	ctx.lr = 0x8221D13C;
	sub_82E2B400(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221D150;
	sub_82228DF8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r5,r31,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x8221d174
	if (!ctx.cr6.gt) goto loc_8221D174;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221d174
	if (ctx.cr6.eq) goto loc_8221D174;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822137f0
	ctx.lr = 0x8221D174;
	sub_822137F0(ctx, base);
loc_8221D174:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D180"))) PPC_WEAK_FUNC(sub_8221D180);
PPC_FUNC_IMPL(__imp__sub_8221D180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e44
	ctx.lr = 0x8221D188;
	__savegprlr_19(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r23,r11,-12020
	ctx.r23.s64 = ctx.r11.s64 + -12020;
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
	ctx.lr = 0x8221D1C8;
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
	ctx.lr = 0x8221D1DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-148
	ctx.r31.s64 = ctx.r3.s64 + -148;
	// bne 0x8221d1ec
	if (!ctx.cr0.eq) goto loc_8221D1EC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221D1EC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,2740
	ctx.r30.s64 = ctx.r11.s64 + 2740;
	// beq cr6,0x8221d698
	if (ctx.cr6.eq) goto loc_8221D698;
	// li r22,52
	ctx.r22.s64 = 52;
loc_8221D200:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21724
	ctx.r4.s64 = ctx.r30.s64 + 21724;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x8221D228;
	sub_82E2B400(ctx, base);
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
	// bl 0x82231328
	ctx.lr = 0x8221D244;
	sub_82231328(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221d264
	if (ctx.cr6.eq) goto loc_8221D264;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
loc_8221D264:
	// lwz r29,188(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r28,192(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8221d2d0
	if (ctx.cr6.eq) goto loc_8221D2D0;
loc_8221D274:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221D280:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221d280
	if (!ctx.cr6.eq) goto loc_8221D280;
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
	// bl 0x822320a8
	ctx.lr = 0x8221D2A8;
	sub_822320A8(ctx, base);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8221d2cc
	if (ctx.cr6.eq) goto loc_8221D2CC;
	// addi r11,r30,-528
	ctx.r11.s64 = ctx.r30.s64 + -528;
	// addi r4,r30,-528
	ctx.r4.s64 = ctx.r30.s64 + -528;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822320a8
	ctx.lr = 0x8221D2C8;
	sub_822320A8(ctx, base);
	// b 0x8221d274
	goto loc_8221D274;
loc_8221D2CC:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8221D2D0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221d2ec
	if (!ctx.cr6.eq) goto loc_8221D2EC;
	// addi r4,r30,252
	ctx.r4.s64 = ctx.r30.s64 + 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82269080
	ctx.lr = 0x8221D2E8;
	sub_82269080(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8221D2EC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221D2F8;
	sub_82228DF8(ctx, base);
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
	ctx.lr = 0x8221D310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8221d32c
	if (ctx.cr6.lt) goto loc_8221D32C;
	// beq cr6,0x8221d324
	if (ctx.cr6.eq) goto loc_8221D324;
	// addi r29,r30,21756
	ctx.r29.s64 = ctx.r30.s64 + 21756;
	// b 0x8221d330
	goto loc_8221D330;
loc_8221D324:
	// addi r29,r30,21736
	ctx.r29.s64 = ctx.r30.s64 + 21736;
	// b 0x8221d330
	goto loc_8221D330;
loc_8221D32C:
	// addi r29,r30,21744
	ctx.r29.s64 = ctx.r30.s64 + 21744;
loc_8221D330:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21768
	ctx.r4.s64 = ctx.r30.s64 + 21768;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x8221D358;
	sub_82E2B400(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221D368;
	sub_82228DF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D37C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21792
	ctx.r4.s64 = ctx.r30.s64 + 21792;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x8221D390;
	sub_82E2B400(ctx, base);
	// addi r5,r30,-4234
	ctx.r5.s64 = ctx.r30.s64 + -4234;
	// addi r4,r30,-4234
	ctx.r4.s64 = ctx.r30.s64 + -4234;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82231490
	ctx.lr = 0x8221D3A0;
	sub_82231490(ctx, base);
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
	// beq 0x8221d430
	if (ctx.cr0.eq) goto loc_8221D430;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8221D3C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221D3D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221d3d0
	if (!ctx.cr6.eq) goto loc_8221D3D0;
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
	// bl 0x822320a8
	ctx.lr = 0x8221D3F8;
	sub_822320A8(ctx, base);
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
	// bge cr6,0x8221d424
	if (!ctx.cr6.lt) goto loc_8221D424;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822320a8
	ctx.lr = 0x8221D424;
	sub_822320A8(ctx, base);
loc_8221D424:
	// addi r27,r27,52
	ctx.r27.s64 = ctx.r27.s64 + 52;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8221d3c0
	if (ctx.cr6.lt) goto loc_8221D3C0;
loc_8221D430:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221D440;
	sub_82228DF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21812
	ctx.r4.s64 = ctx.r30.s64 + 21812;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x8221D468;
	sub_82E2B400(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82268e80
	ctx.lr = 0x8221D474;
	sub_82268E80(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82228df8
	ctx.lr = 0x8221D484;
	sub_82228DF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21828
	ctx.r4.s64 = ctx.r30.s64 + 21828;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x8221D4AC;
	sub_82E2B400(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221D4D0;
	sub_82228BF0(ctx, base);
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
	ctx.lr = 0x8221D4E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d538
	if (ctx.cr0.eq) goto loc_8221D538;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D504;
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
	ctx.lr = 0x8221D51C;
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
	// bl 0x8221d0b8
	ctx.lr = 0x8221D534;
	sub_8221D0B8(ctx, base);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_8221D538:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8221D550:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221d550
	if (!ctx.cr6.eq) goto loc_8221D550;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d648
	if (ctx.cr0.eq) goto loc_8221D648;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21848
	ctx.r4.s64 = ctx.r30.s64 + 21848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x8221D598;
	sub_82E2B400(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,21868
	ctx.r4.s64 = ctx.r30.s64 + 21868;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e2b400
	ctx.lr = 0x8221D5BC;
	sub_82E2B400(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221D5CC;
	sub_82228DF8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221d644
	if (ctx.cr0.eq) goto loc_8221D644;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D5FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r29,r30,21896
	ctx.r29.s64 = ctx.r30.s64 + 21896;
	// bne cr6,0x8221d60c
	if (!ctx.cr6.eq) goto loc_8221D60C;
	// addi r29,r30,21876
	ctx.r29.s64 = ctx.r30.s64 + 21876;
loc_8221D60C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21908
	ctx.r4.s64 = ctx.r30.s64 + 21908;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x8221D634;
	sub_82E2B400(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221D644;
	sub_82228DF8(ctx, base);
loc_8221D644:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_8221D648:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-148
	ctx.r31.s64 = ctx.r3.s64 + -148;
	// bne 0x8221d66c
	if (!ctx.cr0.eq) goto loc_8221D66C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221D66C:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x8221d690
	if (!ctx.cr6.gt) goto loc_8221D690;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221d690
	if (ctx.cr6.eq) goto loc_8221D690;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822137f0
	ctx.lr = 0x8221D690;
	sub_822137F0(ctx, base);
loc_8221D690:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8221d200
	if (!ctx.cr6.eq) goto loc_8221D200;
loc_8221D698:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D6AC;
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
	ctx.lr = 0x8221D6C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-148
	ctx.r31.s64 = ctx.r3.s64 + -148;
	// bne 0x8221d6d0
	if (!ctx.cr0.eq) goto loc_8221D6D0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221D6D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221dabc
	if (ctx.cr6.eq) goto loc_8221DABC;
	// lis r23,-31966
	ctx.r23.s64 = -2094923776;
loc_8221D6DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D6F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21932
	ctx.r4.s64 = ctx.r30.s64 + 21932;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x8221D704;
	sub_82E2B400(ctx, base);
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
	ctx.lr = 0x8221D71C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221D72C;
	sub_82228BF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21944
	ctx.r4.s64 = ctx.r30.s64 + 21944;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x8221D754;
	sub_82E2B400(ctx, base);
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
	// bl 0x82228bf0
	ctx.lr = 0x8221D77C;
	sub_82228BF0(ctx, base);
	// lwz r3,-12076(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12076);
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221d880
	if (ctx.cr6.eq) goto loc_8221D880;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8221d880
	if (ctx.cr0.eq) goto loc_8221D880;
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
	ctx.lr = 0x8221D7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d880
	if (ctx.cr0.eq) goto loc_8221D880;
loc_8221D7D8:
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
	ctx.lr = 0x8221D7F0;
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
	ctx.lr = 0x8221D804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221d860
	if (!ctx.cr0.eq) goto loc_8221D860;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r30,21960
	ctx.r4.s64 = ctx.r30.s64 + 21960;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x8221D834;
	sub_82E2B400(ctx, base);
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
	ctx.lr = 0x8221D850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221D860;
	sub_82228BF0(ctx, base);
loc_8221D860:
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
	ctx.lr = 0x8221D878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8221d7d8
	if (ctx.cr6.lt) goto loc_8221D7D8;
loc_8221D880:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,21988
	ctx.r4.s64 = ctx.r30.s64 + 21988;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x8221D8A8;
	sub_82E2B400(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221D8CC;
	sub_82228BF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D8E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,22004
	ctx.r4.s64 = ctx.r30.s64 + 22004;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x8221D8F4;
	sub_82E2B400(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221D918;
	sub_82228BF0(ctx, base);
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
	ctx.lr = 0x8221D930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d980
	if (ctx.cr0.eq) goto loc_8221D980;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D94C;
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
	ctx.lr = 0x8221D964;
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
	// bl 0x8221d0b8
	ctx.lr = 0x8221D97C;
	sub_8221D0B8(ctx, base);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_8221D980:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8221D998:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221d998
	if (!ctx.cr6.eq) goto loc_8221D998;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221da90
	if (ctx.cr0.eq) goto loc_8221DA90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D9CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,22024
	ctx.r4.s64 = ctx.r30.s64 + 22024;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x8221D9E0;
	sub_82E2B400(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221D9F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,22044
	ctx.r4.s64 = ctx.r30.s64 + 22044;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e2b400
	ctx.lr = 0x8221DA04;
	sub_82E2B400(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221DA14;
	sub_82228DF8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221da8c
	if (ctx.cr0.eq) goto loc_8221DA8C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r29,r30,22072
	ctx.r29.s64 = ctx.r30.s64 + 22072;
	// bne cr6,0x8221da54
	if (!ctx.cr6.eq) goto loc_8221DA54;
	// addi r29,r30,22052
	ctx.r29.s64 = ctx.r30.s64 + 22052;
loc_8221DA54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DA68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r30,21416
	ctx.r5.s64 = ctx.r30.s64 + 21416;
	// addi r4,r30,22084
	ctx.r4.s64 = ctx.r30.s64 + 22084;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x8221DA7C;
	sub_82E2B400(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221DA8C;
	sub_82228DF8(ctx, base);
loc_8221DA8C:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_8221DA90:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DAA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-148
	ctx.r31.s64 = ctx.r3.s64 + -148;
	// bne 0x8221dab4
	if (!ctx.cr0.eq) goto loc_8221DAB4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221DAB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8221d6dc
	if (!ctx.cr6.eq) goto loc_8221D6DC;
loc_8221DABC:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x8221dae0
	if (!ctx.cr6.gt) goto loc_8221DAE0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221dae0
	if (ctx.cr6.eq) goto loc_8221DAE0;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x822137f0
	ctx.lr = 0x8221DAE0;
	sub_822137F0(ctx, base);
loc_8221DAE0:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82e28e94
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221DAF0"))) PPC_WEAK_FUNC(sub_8221DAF0);
PPC_FUNC_IMPL(__imp__sub_8221DAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x8221DAF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r29,r11,24156
	ctx.r29.s64 = ctx.r11.s64 + 24156;
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
	// bl 0x82e2b400
	ctx.lr = 0x8221DB20;
	sub_82E2B400(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DB34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221DB44;
	sub_82228DF8(ctx, base);
	// addi r4,r29,712
	ctx.r4.s64 = ctx.r29.s64 + 712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82e2b400
	ctx.lr = 0x8221DB54;
	sub_82E2B400(ctx, base);
	// addi r5,r29,740
	ctx.r5.s64 = ctx.r29.s64 + 740;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221DB64;
	sub_82228DF8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DB78;
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
	ctx.lr = 0x8221DB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-148
	ctx.r31.s64 = ctx.r3.s64 + -148;
	// bne 0x8221dba0
	if (!ctx.cr0.eq) goto loc_8221DBA0;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8221DBA0:
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
	// b 0x8221dd78
	goto loc_8221DD78;
loc_8221DBC8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221dbe0
	if (ctx.cr6.eq) goto loc_8221DBE0;
	// stb r24,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r24.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8221DBE0:
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
	ctx.lr = 0x8221DBF8;
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
	ctx.lr = 0x8221DC0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8221dc7c
	if (ctx.cr0.eq) goto loc_8221DC7C;
loc_8221DC14:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8221DC1C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221dc1c
	if (!ctx.cr6.eq) goto loc_8221DC1C;
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
	// bl 0x82231938
	ctx.lr = 0x8221DC48;
	sub_82231938(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DC5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8221dc7c
	if (ctx.cr0.eq) goto loc_8221DC7C;
	// addi r11,r29,748
	ctx.r11.s64 = ctx.r29.s64 + 748;
	// addi r4,r29,748
	ctx.r4.s64 = ctx.r29.s64 + 748;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82231938
	ctx.lr = 0x8221DC78;
	sub_82231938(ctx, base);
	// b 0x8221dc14
	goto loc_8221DC14;
loc_8221DC7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DC90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r29,752
	ctx.r4.s64 = ctx.r29.s64 + 752;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82e2b400
	ctx.lr = 0x8221DCA4;
	sub_82E2B400(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82228df8
	ctx.lr = 0x8221DCB4;
	sub_82228DF8(ctx, base);
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
	ctx.lr = 0x8221DCCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8221DCD0:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221dcd0
	if (!ctx.cr6.eq) goto loc_8221DCD0;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221dd50
	if (ctx.cr0.eq) goto loc_8221DD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r29,768
	ctx.r4.s64 = ctx.r29.s64 + 768;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82e2b400
	ctx.lr = 0x8221DD18;
	sub_82E2B400(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DD2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r29,788
	ctx.r4.s64 = ctx.r29.s64 + 788;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82e2b400
	ctx.lr = 0x8221DD3C;
	sub_82E2B400(ctx, base);
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221DD4C;
	sub_82228DF8(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8221DD50:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221DD64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-148
	ctx.r31.s64 = ctx.r3.s64 + -148;
	// bne 0x8221dd74
	if (!ctx.cr0.eq) goto loc_8221DD74;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8221DD74:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8221DD78:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8221dbc8
	if (!ctx.cr6.eq) goto loc_8221DBC8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x8221ddac
	if (!ctx.cr6.gt) goto loc_8221DDAC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221ddac
	if (ctx.cr6.eq) goto loc_8221DDAC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221ddac
	if (ctx.cr6.eq) goto loc_8221DDAC;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822137f0
	ctx.lr = 0x8221DDAC;
	sub_822137F0(ctx, base);
loc_8221DDAC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221DDB8"))) PPC_WEAK_FUNC(sub_8221DDB8);
PPC_FUNC_IMPL(__imp__sub_8221DDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221DDC0;
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
	// addi r30,r11,25168
	ctx.r30.s64 = ctx.r11.s64 + 25168;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r30,-26198
	ctx.r4.s64 = ctx.r30.s64 + -26198;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82217630
	ctx.lr = 0x8221DDE4;
	sub_82217630(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// stw r31,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r31.u32);
	// addi r11,r11,-24056
	ctx.r11.s64 = ctx.r11.s64 + -24056;
	// addi r6,r30,-96
	ctx.r6.s64 = ctx.r30.s64 + -96;
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82214cc0
	ctx.lr = 0x8221DE08;
	sub_82214CC0(ctx, base);
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228d48
	ctx.lr = 0x8221DE18;
	sub_82228D48(ctx, base);
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
	// bl 0x822293e0
	ctx.lr = 0x8221DE34;
	sub_822293E0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82217630
	ctx.lr = 0x8221DE40;
	sub_82217630(ctx, base);
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
	// bl 0x822293e0
	ctx.lr = 0x8221DE5C;
	sub_822293E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221dfc8
	if (ctx.cr0.eq) goto loc_8221DFC8;
	// addi r10,r30,-44
	ctx.r10.s64 = ctx.r30.s64 + -44;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221DE6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221de90
	if (ctx.cr0.eq) goto loc_8221DE90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221de6c
	if (ctx.cr6.eq) goto loc_8221DE6C;
loc_8221DE90:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8221dea0
	if (!ctx.cr0.eq) goto loc_8221DEA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8221dfc4
	goto loc_8221DFC4;
loc_8221DEA0:
	// addi r10,r30,-40
	ctx.r10.s64 = ctx.r30.s64 + -40;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221DEA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221decc
	if (ctx.cr0.eq) goto loc_8221DECC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221dea8
	if (ctx.cr6.eq) goto loc_8221DEA8;
loc_8221DECC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8221dedc
	if (!ctx.cr0.eq) goto loc_8221DEDC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8221dfc4
	goto loc_8221DFC4;
loc_8221DEDC:
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221DEE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221df08
	if (ctx.cr0.eq) goto loc_8221DF08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221dee4
	if (ctx.cr6.eq) goto loc_8221DEE4;
loc_8221DF08:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8221df18
	if (!ctx.cr0.eq) goto loc_8221DF18;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8221dfc4
	goto loc_8221DFC4;
loc_8221DF18:
	// addi r10,r30,-20
	ctx.r10.s64 = ctx.r30.s64 + -20;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221DF20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221df44
	if (ctx.cr0.eq) goto loc_8221DF44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221df20
	if (ctx.cr6.eq) goto loc_8221DF20;
loc_8221DF44:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8221df54
	if (!ctx.cr0.eq) goto loc_8221DF54;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8221dfc4
	goto loc_8221DFC4;
loc_8221DF54:
	// addi r10,r30,-12
	ctx.r10.s64 = ctx.r30.s64 + -12;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221DF5C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221df80
	if (ctx.cr0.eq) goto loc_8221DF80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221df5c
	if (ctx.cr6.eq) goto loc_8221DF5C;
loc_8221DF80:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8221df90
	if (!ctx.cr0.eq) goto loc_8221DF90;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8221dfc4
	goto loc_8221DFC4;
loc_8221DF90:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8221DF94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq 0x8221dfb8
	if (ctx.cr0.eq) goto loc_8221DFB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8221df94
	if (ctx.cr6.eq) goto loc_8221DF94;
loc_8221DFB8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8221dfc8
	if (!ctx.cr0.eq) goto loc_8221DFC8;
	// li r11,5
	ctx.r11.s64 = 5;
loc_8221DFC4:
	// stw r11,108(r28)
	PPC_STORE_U32(ctx.r28.u32 + 108, ctx.r11.u32);
loc_8221DFC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221DFD8"))) PPC_WEAK_FUNC(sub_8221DFD8);
PPC_FUNC_IMPL(__imp__sub_8221DFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x8221DFE0;
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
	// addi r31,r11,-878
	ctx.r31.s64 = ctx.r11.s64 + -878;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r31,-151
	ctx.r4.s64 = ctx.r31.s64 + -151;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82217630
	ctx.lr = 0x8221E004;
	sub_82217630(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r4,r31,26054
	ctx.r4.s64 = ctx.r31.s64 + 26054;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r27.u32);
	// bl 0x82228d48
	ctx.lr = 0x8221E01C;
	sub_82228D48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,26062
	ctx.r4.s64 = ctx.r31.s64 + 26062;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// bl 0x822293e0
	ctx.lr = 0x8221E038;
	sub_822293E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221e04c
	if (ctx.cr0.eq) goto loc_8221E04C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82217630
	ctx.lr = 0x8221E04C;
	sub_82217630(ctx, base);
loc_8221E04C:
	// addi r28,r30,107
	ctx.r28.s64 = ctx.r30.s64 + 107;
	// stb r27,107(r30)
	PPC_STORE_U8(ctx.r30.u32 + 107, ctx.r27.u8);
	// addi r4,r31,26078
	ctx.r4.s64 = ctx.r31.s64 + 26078;
	// li r6,128
	ctx.r6.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822293e0
	ctx.lr = 0x8221E068;
	sub_822293E0(ctx, base);
	// addi r11,r31,26090
	ctx.r11.s64 = ctx.r31.s64 + 26090;
loc_8221E06C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq 0x8221e090
	if (ctx.cr0.eq) goto loc_8221E090;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8221e06c
	if (ctx.cr6.eq) goto loc_8221E06C;
loc_8221E090:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r4,r31,26098
	ctx.r4.s64 = ctx.r31.s64 + 26098;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,235(r30)
	PPC_STORE_U8(ctx.r30.u32 + 235, ctx.r11.u8);
	// bl 0x82228b60
	ctx.lr = 0x8221E0A8;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221e0c4
	if (ctx.cr0.eq) goto loc_8221E0C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8b60
	ctx.lr = 0x8221E0C0;
	sub_830D8B60(ctx, base);
	// b 0x8221e0c8
	goto loc_8221E0C8;
loc_8221E0C4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8221E0C8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8221e0e0
	if (!ctx.cr6.eq) goto loc_8221E0E0;
	// addi r3,r31,-147
	ctx.r3.s64 = ctx.r31.s64 + -147;
	// bl 0x822104c0
	ctx.lr = 0x8221E0D8;
	sub_822104C0(ctx, base);
	// stw r3,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r3.u32);
	// b 0x8221e118
	goto loc_8221E118;
loc_8221E0E0:
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// bl 0x82213798
	ctx.lr = 0x8221E0E8;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x8221E100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,26110
	ctx.r4.s64 = ctx.r31.s64 + 26110;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r5,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r5.u32);
	// bl 0x822293e0
	ctx.lr = 0x8221E118;
	sub_822293E0(ctx, base);
loc_8221E118:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E128"))) PPC_WEAK_FUNC(sub_8221E128);
PPC_FUNC_IMPL(__imp__sub_8221E128) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x8221E130;
	__savegprlr_29(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r9,r10,-27136
	ctx.r9.s64 = ctx.r10.s64 + -27136;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,25704
	ctx.r11.s64 = ctx.r11.s64 + 25704;
	// addi r8,r10,-27124
	ctx.r8.s64 = ctx.r10.s64 + -27124;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r7,r10,-27112
	ctx.r7.s64 = ctx.r10.s64 + -27112;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r6,r10,-27092
	ctx.r6.s64 = ctx.r10.s64 + -27092;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r5,r10,-27076
	ctx.r5.s64 = ctx.r10.s64 + -27076;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r4,r10,-27052
	ctx.r4.s64 = ctx.r10.s64 + -27052;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r3,r10,-27044
	ctx.r3.s64 = ctx.r10.s64 + -27044;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r31,r10,-27028
	ctx.r31.s64 = ctx.r10.s64 + -27028;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r30,r10,-27012
	ctx.r30.s64 = ctx.r10.s64 + -27012;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r29,r10,-29288
	ctx.r29.s64 = ctx.r10.s64 + -29288;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-1876
	ctx.r10.s64 = ctx.r10.s64 + -1876;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-1864
	ctx.r10.s64 = ctx.r10.s64 + -1864;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-1840
	ctx.r10.s64 = ctx.r10.s64 + -1840;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-1852
	ctx.r10.s64 = ctx.r10.s64 + -1852;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-1828
	ctx.r10.s64 = ctx.r10.s64 + -1828;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-1816
	ctx.r10.s64 = ctx.r10.s64 + -1816;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-1804
	ctx.r10.s64 = ctx.r10.s64 + -1804;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-1792
	ctx.r10.s64 = ctx.r10.s64 + -1792;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-1780
	ctx.r10.s64 = ctx.r10.s64 + -1780;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-1768
	ctx.r10.s64 = ctx.r10.s64 + -1768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-12028(r10)
	PPC_STORE_U8(ctx.r10.u32 + -12028, ctx.r11.u8);
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E268"))) PPC_WEAK_FUNC(sub_8221E268);
PPC_FUNC_IMPL(__imp__sub_8221E268) {
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
	// bl 0x82229448
	ctx.lr = 0x8221E28C;
	sub_82229448(ctx, base);
	// lis r11,29281
	ctx.r11.s64 = 1918959616;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r10,r11,28267
	ctx.r10.u64 = ctx.r11.u64 | 28267;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29148
	ctx.r4.s64 = ctx.r11.s64 + -29148;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x8221E2AC;
	sub_82228DF8(ctx, base);
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

__attribute__((alias("__imp__sub_8221E2C8"))) PPC_WEAK_FUNC(sub_8221E2C8);
PPC_FUNC_IMPL(__imp__sub_8221E2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x8221E2D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-1876
	ctx.r11.s64 = ctx.r11.s64 + -1876;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221e268
	ctx.lr = 0x8221E2F0;
	sub_8221E268(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8221e3b0
	if (ctx.cr6.eq) goto loc_8221E3B0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// addi r26,r11,-26980
	ctx.r26.s64 = ctx.r11.s64 + -26980;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r25,r11,-26988
	ctx.r25.s64 = ctx.r11.s64 + -26988;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r24,r11,-26996
	ctx.r24.s64 = ctx.r11.s64 + -26996;
loc_8221E318:
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
	// beq cr6,0x8221e37c
	if (ctx.cr6.eq) goto loc_8221E37C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e2b400
	ctx.lr = 0x8221E34C;
	sub_82E2B400(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cf0
	ctx.lr = 0x8221E35C;
	sub_82228CF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e2b400
	ctx.lr = 0x8221E36C;
	sub_82E2B400(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82228bf0
	ctx.lr = 0x8221E37C;
	sub_82228BF0(ctx, base);
loc_8221E37C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e2b400
	ctx.lr = 0x8221E38C;
	sub_82E2B400(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,-4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82217958
	ctx.lr = 0x8221E3A0;
	sub_82217958(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8221e318
	if (ctx.cr6.lt) goto loc_8221E318;
loc_8221E3B0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-26972
	ctx.r4.s64 = ctx.r11.s64 + -26972;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E3C4;
	sub_82228BF0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E3D0"))) PPC_WEAK_FUNC(sub_8221E3D0);
PPC_FUNC_IMPL(__imp__sub_8221E3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x8221E3D8;
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
	// beq cr6,0x8221e42c
	if (ctx.cr6.eq) goto loc_8221E42C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r27,r11,-27780
	ctx.r27.s64 = ctx.r11.s64 + -27780;
loc_8221E3FC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221E40C;
	sub_82E2B400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82228df8
	ctx.lr = 0x8221E41C;
	sub_82228DF8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8221e3fc
	if (ctx.cr6.lt) goto loc_8221E3FC;
loc_8221E42C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27788
	ctx.r4.s64 = ctx.r11.s64 + -27788;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E440;
	sub_82228BF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E448"))) PPC_WEAK_FUNC(sub_8221E448);
PPC_FUNC_IMPL(__imp__sub_8221E448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x8221E450;
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
	// beq cr6,0x8221e4cc
	if (ctx.cr6.eq) goto loc_8221E4CC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r27,r11,-26912
	ctx.r27.s64 = ctx.r11.s64 + -26912;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r26,r11,-27780
	ctx.r26.s64 = ctx.r11.s64 + -27780;
loc_8221E47C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221E48C;
	sub_82E2B400(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221E49C;
	sub_82228DF8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221E4AC;
	sub_82E2B400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,64(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82228bf0
	ctx.lr = 0x8221E4BC;
	sub_82228BF0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8221e47c
	if (ctx.cr6.lt) goto loc_8221E47C;
loc_8221E4CC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27788
	ctx.r4.s64 = ctx.r11.s64 + -27788;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E4E0;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-26896
	ctx.r4.s64 = ctx.r11.s64 + -26896;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E4F4;
	sub_82228BF0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E500"))) PPC_WEAK_FUNC(sub_8221E500);
PPC_FUNC_IMPL(__imp__sub_8221E500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x8221E508;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-1864
	ctx.r11.s64 = ctx.r11.s64 + -1864;
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
	// bl 0x8221e268
	ctx.lr = 0x8221E538;
	sub_8221E268(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221e568
	if (ctx.cr6.eq) goto loc_8221E568;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28300
	ctx.r4.s64 = ctx.r11.s64 + -28300;
	// bl 0x82228cf0
	ctx.lr = 0x8221E554;
	sub_82228CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x82228bf0
	ctx.lr = 0x8221E568;
	sub_82228BF0(ctx, base);
loc_8221E568:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822178e8
	ctx.lr = 0x8221E570;
	sub_822178E8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-26880
	ctx.r4.s64 = ctx.r11.s64 + -26880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E584;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,-26868
	ctx.r4.s64 = ctx.r11.s64 + -26868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E598;
	sub_82228BF0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221e3d0
	ctx.lr = 0x8221E5AC;
	sub_8221E3D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E5B8"))) PPC_WEAK_FUNC(sub_8221E5B8);
PPC_FUNC_IMPL(__imp__sub_8221E5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e50
	ctx.lr = 0x8221E5C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r11,r11,-1840
	ctx.r11.s64 = ctx.r11.s64 + -1840;
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
	// bl 0x8221e268
	ctx.lr = 0x8221E5F0;
	sub_8221E268(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-26964
	ctx.r4.s64 = ctx.r11.s64 + -26964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E604;
	sub_82228BF0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221e678
	if (ctx.cr6.eq) goto loc_8221E678;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221e678
	if (ctx.cr6.eq) goto loc_8221E678;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r26,r11,-26932
	ctx.r26.s64 = ctx.r11.s64 + -26932;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r25,r11,-26952
	ctx.r25.s64 = ctx.r11.s64 + -26952;
loc_8221E628:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221E638;
	sub_82E2B400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x82228cf0
	ctx.lr = 0x8221E648;
	sub_82228CF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221E658;
	sub_82E2B400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82228bf0
	ctx.lr = 0x8221E668;
	sub_82228BF0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8221e628
	if (ctx.cr6.lt) goto loc_8221E628;
loc_8221E678:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822178e8
	ctx.lr = 0x8221E680;
	sub_822178E8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-26880
	ctx.r4.s64 = ctx.r11.s64 + -26880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E694;
	sub_82228BF0(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221e3d0
	ctx.lr = 0x8221E6A8;
	sub_8221E3D0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82e28ea0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E6B0"))) PPC_WEAK_FUNC(sub_8221E6B0);
PPC_FUNC_IMPL(__imp__sub_8221E6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x8221E6B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-1852
	ctx.r11.s64 = ctx.r11.s64 + -1852;
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
	// bl 0x8221e268
	ctx.lr = 0x8221E6E8;
	sub_8221E268(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221e718
	if (ctx.cr6.eq) goto loc_8221E718;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28300
	ctx.r4.s64 = ctx.r11.s64 + -28300;
	// bl 0x82228cf0
	ctx.lr = 0x8221E704;
	sub_82228CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x82228bf0
	ctx.lr = 0x8221E718;
	sub_82228BF0(ctx, base);
loc_8221E718:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822178e8
	ctx.lr = 0x8221E720;
	sub_822178E8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-26880
	ctx.r4.s64 = ctx.r11.s64 + -26880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E734;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,-26868
	ctx.r4.s64 = ctx.r11.s64 + -26868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E748;
	sub_82228BF0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221e448
	ctx.lr = 0x8221E75C;
	sub_8221E448(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E768"))) PPC_WEAK_FUNC(sub_8221E768);
PPC_FUNC_IMPL(__imp__sub_8221E768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x8221E770;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-1852
	ctx.r11.s64 = ctx.r11.s64 + -1852;
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
	// bl 0x8221e268
	ctx.lr = 0x8221E7A0;
	sub_8221E268(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221e7d0
	if (ctx.cr6.eq) goto loc_8221E7D0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28300
	ctx.r4.s64 = ctx.r11.s64 + -28300;
	// bl 0x82228cf0
	ctx.lr = 0x8221E7BC;
	sub_82228CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// bl 0x82228bf0
	ctx.lr = 0x8221E7D0;
	sub_82228BF0(ctx, base);
loc_8221E7D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822178e8
	ctx.lr = 0x8221E7D8;
	sub_822178E8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-26880
	ctx.r4.s64 = ctx.r11.s64 + -26880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E7EC;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,-26868
	ctx.r4.s64 = ctx.r11.s64 + -26868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E800;
	sub_82228BF0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221e3d0
	ctx.lr = 0x8221E814;
	sub_8221E3D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E820"))) PPC_WEAK_FUNC(sub_8221E820);
PPC_FUNC_IMPL(__imp__sub_8221E820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e50
	ctx.lr = 0x8221E828;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r11,r11,-1828
	ctx.r11.s64 = ctx.r11.s64 + -1828;
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
	// bl 0x8221e268
	ctx.lr = 0x8221E858;
	sub_8221E268(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-26964
	ctx.r4.s64 = ctx.r11.s64 + -26964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E86C;
	sub_82228BF0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221e8e0
	if (ctx.cr6.eq) goto loc_8221E8E0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221e8e0
	if (ctx.cr6.eq) goto loc_8221E8E0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r26,r11,-26932
	ctx.r26.s64 = ctx.r11.s64 + -26932;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r25,r11,-26952
	ctx.r25.s64 = ctx.r11.s64 + -26952;
loc_8221E890:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221E8A0;
	sub_82E2B400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x82228cf0
	ctx.lr = 0x8221E8B0;
	sub_82228CF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221E8C0;
	sub_82E2B400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82228bf0
	ctx.lr = 0x8221E8D0;
	sub_82228BF0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8221e890
	if (ctx.cr6.lt) goto loc_8221E890;
loc_8221E8E0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822178e8
	ctx.lr = 0x8221E8E8;
	sub_822178E8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-26880
	ctx.r4.s64 = ctx.r11.s64 + -26880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E8FC;
	sub_82228BF0(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221e448
	ctx.lr = 0x8221E910;
	sub_8221E448(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82e28ea0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E918"))) PPC_WEAK_FUNC(sub_8221E918);
PPC_FUNC_IMPL(__imp__sub_8221E918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e50
	ctx.lr = 0x8221E920;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r11,r11,-1828
	ctx.r11.s64 = ctx.r11.s64 + -1828;
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
	// bl 0x8221e268
	ctx.lr = 0x8221E950;
	sub_8221E268(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-26964
	ctx.r4.s64 = ctx.r11.s64 + -26964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E964;
	sub_82228BF0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221e9d8
	if (ctx.cr6.eq) goto loc_8221E9D8;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221e9d8
	if (ctx.cr6.eq) goto loc_8221E9D8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r26,r11,-26932
	ctx.r26.s64 = ctx.r11.s64 + -26932;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r25,r11,-26952
	ctx.r25.s64 = ctx.r11.s64 + -26952;
loc_8221E988:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221E998;
	sub_82E2B400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x82228cf0
	ctx.lr = 0x8221E9A8;
	sub_82228CF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221E9B8;
	sub_82E2B400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82228bf0
	ctx.lr = 0x8221E9C8;
	sub_82228BF0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8221e988
	if (ctx.cr6.lt) goto loc_8221E988;
loc_8221E9D8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822178e8
	ctx.lr = 0x8221E9E0;
	sub_822178E8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-26880
	ctx.r4.s64 = ctx.r11.s64 + -26880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221E9F4;
	sub_82228BF0(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221e3d0
	ctx.lr = 0x8221EA08;
	sub_8221E3D0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82e28ea0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EA10"))) PPC_WEAK_FUNC(sub_8221EA10);
PPC_FUNC_IMPL(__imp__sub_8221EA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x8221EA18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27760
	ctx.r4.s64 = ctx.r11.s64 + -27760;
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
	// bl 0x82228df8
	ctx.lr = 0x8221EA44;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28596
	ctx.r4.s64 = ctx.r11.s64 + -28596;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221EA58;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221EA6C;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-26848
	ctx.r4.s64 = ctx.r11.s64 + -26848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221EA80;
	sub_82228BF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822178e8
	ctx.lr = 0x8221EA88;
	sub_822178E8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-26880
	ctx.r4.s64 = ctx.r11.s64 + -26880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221EA9C;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-26868
	ctx.r4.s64 = ctx.r11.s64 + -26868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221EAB0;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r4,r11,-26840
	ctx.r4.s64 = ctx.r11.s64 + -26840;
	// bl 0x82228bf0
	ctx.lr = 0x8221EAC4;
	sub_82228BF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EAD0"))) PPC_WEAK_FUNC(sub_8221EAD0);
PPC_FUNC_IMPL(__imp__sub_8221EAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x8221EAD8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-1816
	ctx.r11.s64 = ctx.r11.s64 + -1816;
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
	// bl 0x8221e268
	ctx.lr = 0x8221EB0C;
	sub_8221E268(ctx, base);
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
	// bl 0x8221ea10
	ctx.lr = 0x8221EB38;
	sub_8221EA10(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EB40"))) PPC_WEAK_FUNC(sub_8221EB40);
PPC_FUNC_IMPL(__imp__sub_8221EB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x8221EB48;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-1804
	ctx.r11.s64 = ctx.r11.s64 + -1804;
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
	// bl 0x8221e268
	ctx.lr = 0x8221EB7C;
	sub_8221E268(ctx, base);
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
	// bl 0x8221ea10
	ctx.lr = 0x8221EBA4;
	sub_8221EA10(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-26828
	ctx.r4.s64 = ctx.r11.s64 + -26828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221EBB8;
	sub_82228BF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EBC0"))) PPC_WEAK_FUNC(sub_8221EBC0);
PPC_FUNC_IMPL(__imp__sub_8221EBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x8221EBC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-1792
	ctx.r11.s64 = ctx.r11.s64 + -1792;
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
	// bl 0x8221e268
	ctx.lr = 0x8221EBFC;
	sub_8221E268(ctx, base);
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
	// bl 0x8221ea10
	ctx.lr = 0x8221EC28;
	sub_8221EA10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,252(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x8221e3d0
	ctx.lr = 0x8221EC3C;
	sub_8221E3D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EC48"))) PPC_WEAK_FUNC(sub_8221EC48);
PPC_FUNC_IMPL(__imp__sub_8221EC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x8221EC50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-1780
	ctx.r11.s64 = ctx.r11.s64 + -1780;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221e268
	ctx.lr = 0x8221EC70;
	sub_8221E268(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27760
	ctx.r4.s64 = ctx.r11.s64 + -27760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8221EC84;
	sub_82228DF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822178e8
	ctx.lr = 0x8221EC8C;
	sub_822178E8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-26880
	ctx.r4.s64 = ctx.r11.s64 + -26880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8221ECA0;
	sub_82228BF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221ECA8"))) PPC_WEAK_FUNC(sub_8221ECA8);
PPC_FUNC_IMPL(__imp__sub_8221ECA8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-29148
	ctx.r4.s64 = ctx.r11.s64 + -29148;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822293e0
	ctx.lr = 0x8221ECCC;
	sub_822293E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221ed30
	if (ctx.cr0.eq) goto loc_8221ED30;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-4236
	ctx.r11.s64 = ctx.r11.s64 + -4236;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221ed30
	if (ctx.cr6.eq) goto loc_8221ED30;
loc_8221ECEC:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8221ECF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8221ed18
	if (ctx.cr0.eq) goto loc_8221ED18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221ecf4
	if (ctx.cr6.eq) goto loc_8221ECF4;
loc_8221ED18:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8221ed44
	if (ctx.cr0.eq) goto loc_8221ED44;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8221ecec
	if (!ctx.cr0.eq) goto loc_8221ECEC;
loc_8221ED30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221ED34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221ED44:
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x8221ed34
	goto loc_8221ED34;
}

__attribute__((alias("__imp__sub_8221ED50"))) PPC_WEAK_FUNC(sub_8221ED50);
PPC_FUNC_IMPL(__imp__sub_8221ED50) {
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
	// bne cr6,0x8221ed74
	if (!ctx.cr6.eq) goto loc_8221ED74;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8221ED74:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,-25788
	ctx.r11.s64 = ctx.r11.s64 + -25788;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8221ed98
	if (ctx.cr0.eq) goto loc_8221ED98;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217db8
	ctx.lr = 0x8221ED98;
	sub_82217DB8(ctx, base);
loc_8221ED98:
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

__attribute__((alias("__imp__sub_8221EDB0"))) PPC_WEAK_FUNC(sub_8221EDB0);
PPC_FUNC_IMPL(__imp__sub_8221EDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221EDB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,25728
	ctx.r29.s64 = ctx.r11.s64 + 25728;
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
	// bl 0x82e2b400
	ctx.lr = 0x8221EDE0;
	sub_82E2B400(ctx, base);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822293e0
	ctx.lr = 0x8221EDF4;
	sub_822293E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221ee04
	if (!ctx.cr0.eq) goto loc_8221EE04;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221ee88
	goto loc_8221EE88;
loc_8221EE04:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822103f8
	ctx.lr = 0x8221EE14;
	sub_822103F8(ctx, base);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221EE24;
	sub_82E2B400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b60
	ctx.lr = 0x8221EE30;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221ee44
	if (ctx.cr0.eq) goto loc_8221EE44;
	// bl 0x82e29fa0
	ctx.lr = 0x8221EE3C;
	sub_82E29FA0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x8221ee4c
	goto loc_8221EE4C;
loc_8221EE44:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
loc_8221EE4C:
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
	// bl 0x82e2b400
	ctx.lr = 0x8221EE60;
	sub_82E2B400(ctx, base);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822293e0
	ctx.lr = 0x8221EE74;
	sub_822293E0(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r28,68
	ctx.r3.s64 = ctx.r28.s64 + 68;
	// bl 0x822103f8
	ctx.lr = 0x8221EE84;
	sub_822103F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8221EE88:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EE90"))) PPC_WEAK_FUNC(sub_8221EE90);
PPC_FUNC_IMPL(__imp__sub_8221EE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x8221EE98;
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
	// bl 0x8221edb0
	ctx.lr = 0x8221EEAC;
	sub_8221EDB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221eebc
	if (!ctx.cr0.eq) goto loc_8221EEBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221ef00
	goto loc_8221EF00;
loc_8221EEBC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,25736
	ctx.r4.s64 = ctx.r11.s64 + 25736;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221EED0;
	sub_82E2B400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b60
	ctx.lr = 0x8221EEDC;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221eef4
	if (ctx.cr0.eq) goto loc_8221EEF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x8221EEEC;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221eef8
	goto loc_8221EEF8;
loc_8221EEF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221EEF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,324(r29)
	PPC_STORE_U32(ctx.r29.u32 + 324, ctx.r11.u32);
loc_8221EF00:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EF08"))) PPC_WEAK_FUNC(sub_8221EF08);
PPC_FUNC_IMPL(__imp__sub_8221EF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221EF10;
	__savegprlr_28(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,25776
	ctx.r29.s64 = ctx.r11.s64 + 25776;
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
	// bl 0x82e2b400
	ctx.lr = 0x8221EF38;
	sub_82E2B400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b60
	ctx.lr = 0x8221EF44;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221ef58
	if (ctx.cr0.eq) goto loc_8221EF58;
	// bl 0x82e29fa0
	ctx.lr = 0x8221EF50;
	sub_82E29FA0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x8221ef60
	goto loc_8221EF60;
loc_8221EF58:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
loc_8221EF60:
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
	// bl 0x82e2b400
	ctx.lr = 0x8221EF74;
	sub_82E2B400(ctx, base);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822293e0
	ctx.lr = 0x8221EF88;
	sub_822293E0(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// bl 0x822103f8
	ctx.lr = 0x8221EF98;
	sub_822103F8(ctx, base);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221EFA8;
	sub_82E2B400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b60
	ctx.lr = 0x8221EFB4;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221efcc
	if (ctx.cr0.eq) goto loc_8221EFCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x8221EFC4;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221efd0
	goto loc_8221EFD0;
loc_8221EFCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221EFD0:
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221EFE4;
	sub_82E2B400(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228d48
	ctx.lr = 0x8221EFF4;
	sub_82228D48(ctx, base);
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
	// bl 0x82e2b400
	ctx.lr = 0x8221F00C;
	sub_82E2B400(ctx, base);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822293e0
	ctx.lr = 0x8221F020;
	sub_822293E0(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x822103f8
	ctx.lr = 0x8221F030;
	sub_822103F8(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F038"))) PPC_WEAK_FUNC(sub_8221F038);
PPC_FUNC_IMPL(__imp__sub_8221F038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221F040;
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
	// addi r28,r11,26028
	ctx.r28.s64 = ctx.r11.s64 + 26028;
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
	// bl 0x82228b60
	ctx.lr = 0x8221F078;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221f090
	if (ctx.cr0.eq) goto loc_8221F090;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x8221F088;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221f094
	goto loc_8221F094;
loc_8221F090:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8221F094:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82228b60
	ctx.lr = 0x8221F0A4;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221f0b8
	if (ctx.cr0.eq) goto loc_8221F0B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x8221F0B4;
	sub_830D8578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8221F0B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F0C8"))) PPC_WEAK_FUNC(sub_8221F0C8);
PPC_FUNC_IMPL(__imp__sub_8221F0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8221F0D0;
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
	// blt cr6,0x8221f0f4
	if (ctx.cr6.lt) goto loc_8221F0F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221f164
	goto loc_8221F164;
loc_8221F0F4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r31,r11,26088
	ctx.r31.s64 = ctx.r11.s64 + 26088;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// bl 0x82e2b400
	ctx.lr = 0x8221F10C;
	sub_82E2B400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82228b60
	ctx.lr = 0x8221F118;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221f130
	if (ctx.cr0.eq) goto loc_8221F130;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x8221F128;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221f134
	goto loc_8221F134;
loc_8221F130:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221F134:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221F148;
	sub_82E2B400(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82228d48
	ctx.lr = 0x8221F158;
	sub_82228D48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_8221F164:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F170"))) PPC_WEAK_FUNC(sub_8221F170);
PPC_FUNC_IMPL(__imp__sub_8221F170) {
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
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lfs f0,-13892(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13892);
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
	// bge cr6,0x8221f1f0
	if (!ctx.cr6.lt) goto loc_8221F1F0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8221f1f0
	if (!ctx.cr6.lt) goto loc_8221F1F0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r11,26112
	ctx.r4.s64 = ctx.r11.s64 + 26112;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221F1DC;
	sub_82E2B400(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8221ee90
	ctx.lr = 0x8221F1EC;
	sub_8221EE90(ctx, base);
	// b 0x8221f1f4
	goto loc_8221F1F4;
loc_8221F1F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221F1F4:
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

__attribute__((alias("__imp__sub_8221F210"))) PPC_WEAK_FUNC(sub_8221F210);
PPC_FUNC_IMPL(__imp__sub_8221F210) {
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
	// addi r4,r11,26204
	ctx.r4.s64 = ctx.r11.s64 + 26204;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82228b60
	ctx.lr = 0x8221F240;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221f258
	if (ctx.cr0.eq) goto loc_8221F258;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x8221F250;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221f25c
	goto loc_8221F25C;
loc_8221F258:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221F25C:
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

__attribute__((alias("__imp__sub_8221F278"))) PPC_WEAK_FUNC(sub_8221F278);
PPC_FUNC_IMPL(__imp__sub_8221F278) {
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
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lfs f0,-13892(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13892);
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
	// blt cr6,0x8221f2cc
	if (ctx.cr6.lt) goto loc_8221F2CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221f2f4
	goto loc_8221F2F4;
loc_8221F2CC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r4,r11,26216
	ctx.r4.s64 = ctx.r11.s64 + 26216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x8221F2E0;
	sub_82E2B400(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8221ef08
	ctx.lr = 0x8221F2F0;
	sub_8221EF08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8221F2F4:
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

__attribute__((alias("__imp__sub_8221F310"))) PPC_WEAK_FUNC(sub_8221F310);
PPC_FUNC_IMPL(__imp__sub_8221F310) {
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
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-24408
	ctx.r10.s64 = ctx.r10.s64 + -24408;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r9,-25776
	ctx.r9.s64 = ctx.r9.s64 + -25776;
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
	// bl 0x82e29500
	ctx.lr = 0x8221F390;
	sub_82E29500(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82e29500
	ctx.lr = 0x8221F3A0;
	sub_82E29500(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x82e29500
	ctx.lr = 0x8221F3B0;
	sub_82E29500(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// bl 0x82217d58
	ctx.lr = 0x8221F3BC;
	sub_82217D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221f3e4
	if (ctx.cr0.eq) goto loc_8221F3E4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r11,-24520
	ctx.r10.s64 = ctx.r11.s64 + -24520;
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
	// b 0x8221f3e8
	goto loc_8221F3E8;
loc_8221F3E4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8221F3E8:
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

__attribute__((alias("__imp__sub_8221F430"))) PPC_WEAK_FUNC(sub_8221F430);
PPC_FUNC_IMPL(__imp__sub_8221F430) {
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
	// bl 0x8221f480
	ctx.lr = 0x8221F450;
	sub_8221F480(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221f464
	if (ctx.cr0.eq) goto loc_8221F464;
	// li r4,960
	ctx.r4.s64 = 960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217db8
	ctx.lr = 0x8221F464;
	sub_82217DB8(ctx, base);
loc_8221F464:
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

__attribute__((alias("__imp__sub_8221F480"))) PPC_WEAK_FUNC(sub_8221F480);
PPC_FUNC_IMPL(__imp__sub_8221F480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x8221F488;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24408
	ctx.r11.s64 = ctx.r11.s64 + -24408;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,108
	ctx.r29.s64 = ctx.r31.s64 + 108;
	// lis r27,-31966
	ctx.r27.s64 = -2094923776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r28,r11,26596
	ctx.r28.s64 = ctx.r11.s64 + 26596;
loc_8221F4B0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f4dc
	if (ctx.cr6.eq) goto loc_8221F4DC;
	// lwz r3,-12072(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -12072);
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
	ctx.lr = 0x8221F4DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221F4DC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,21
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 21, ctx.xer);
	// blt cr6,0x8221f4b0
	if (ctx.cr6.lt) goto loc_8221F4B0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,192
	ctx.r29.s64 = ctx.r31.s64 + 192;
loc_8221F4F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f520
	if (ctx.cr6.eq) goto loc_8221F520;
	// lwz r3,-12072(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -12072);
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
	ctx.lr = 0x8221F520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221F520:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// blt cr6,0x8221f4f4
	if (ctx.cr6.lt) goto loc_8221F4F4;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221f550
	if (ctx.cr0.eq) goto loc_8221F550;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221F550:
	// addi r11,r31,300
	ctx.r11.s64 = ctx.r31.s64 + 300;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8221f588
	if (ctx.cr0.eq) goto loc_8221F588;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221f588
	if (ctx.cr6.eq) goto loc_8221F588;
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
	// bl 0x822137f0
	ctx.lr = 0x8221F588;
	sub_822137F0(ctx, base);
loc_8221F588:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-25788
	ctx.r11.s64 = ctx.r11.s64 + -25788;
	// addi r10,r10,-25704
	ctx.r10.s64 = ctx.r10.s64 + -25704;
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
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F5B0"))) PPC_WEAK_FUNC(sub_8221F5B0);
PPC_FUNC_IMPL(__imp__sub_8221F5B0) {
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
	// beq 0x8221f5f0
	if (ctx.cr0.eq) goto loc_8221F5F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F5F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221F5F0:
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

__attribute__((alias("__imp__sub_8221F610"))) PPC_WEAK_FUNC(sub_8221F610);
PPC_FUNC_IMPL(__imp__sub_8221F610) {
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
	// beq 0x8221f650
	if (ctx.cr0.eq) goto loc_8221F650;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221F650:
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

__attribute__((alias("__imp__sub_8221F670"))) PPC_WEAK_FUNC(sub_8221F670);
PPC_FUNC_IMPL(__imp__sub_8221F670) {
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
	ctx.lr = 0x8221F68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8221f6dc
	if (ctx.cr6.lt) goto loc_8221F6DC;
	// beq cr6,0x8221f6cc
	if (ctx.cr6.eq) goto loc_8221F6CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// blt cr6,0x8221f6c0
	if (ctx.cr6.lt) goto loc_8221F6C0;
	// addi r3,r11,29020
	ctx.r3.s64 = ctx.r11.s64 + 29020;
	// b 0x8221f6e8
	goto loc_8221F6E8;
loc_8221F6C0:
	// addi r11,r11,29020
	ctx.r11.s64 = ctx.r11.s64 + 29020;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// b 0x8221f6e8
	goto loc_8221F6E8;
loc_8221F6CC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,29020
	ctx.r11.s64 = ctx.r11.s64 + 29020;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x8221f6e8
	goto loc_8221F6E8;
loc_8221F6DC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,29020
	ctx.r11.s64 = ctx.r11.s64 + 29020;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
loc_8221F6E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F6F8"))) PPC_WEAK_FUNC(sub_8221F6F8);
PPC_FUNC_IMPL(__imp__sub_8221F6F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f718
	if (ctx.cr6.eq) goto loc_8221F718;
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
loc_8221F718:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F720"))) PPC_WEAK_FUNC(sub_8221F720);
PPC_FUNC_IMPL(__imp__sub_8221F720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x8221F728;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-940
	ctx.r29.s64 = ctx.r11.s64 + -940;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F74C;
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
	ctx.lr = 0x8221F760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r6,r11,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cmplwi cr6,r6,10000
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10000, ctx.xer);
	// ble cr6,0x8221f7a0
	if (!ctx.cr6.gt) goto loc_8221F7A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f7a0
	if (ctx.cr6.eq) goto loc_8221F7A0;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-12072(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12072);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,26644
	ctx.r5.s64 = ctx.r11.s64 + 26644;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221F7A0:
	// lwz r26,304(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r27,r30,300
	ctx.r27.s64 = ctx.r30.s64 + 300;
	// lwz r31,300(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// stw r28,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r28.u32);
	// b 0x8221f7dc
	goto loc_8221F7DC;
loc_8221F7B4:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221f7d8
	if (ctx.cr0.eq) goto loc_8221F7D8;
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
	ctx.lr = 0x8221F7D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221F7D8:
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
loc_8221F7DC:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8221f7b4
	if (!ctx.cr6.eq) goto loc_8221F7B4;
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
	// beq cr6,0x8221f81c
	if (ctx.cr6.eq) goto loc_8221F81C;
loc_8221F7FC:
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x8221F80C;
	sub_82E28FD0(ctx, base);
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
	// addi r26,r26,80
	ctx.r26.s64 = ctx.r26.s64 + 80;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8221f7fc
	if (!ctx.cr6.eq) goto loc_8221F7FC;
loc_8221F81C:
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
loc_8221F840:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f87c
	if (ctx.cr6.eq) goto loc_8221F87C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F860;
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
	ctx.lr = 0x8221F87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221F87C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8221f840
	if (!ctx.cr0.eq) goto loc_8221F840;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F89C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F8A8"))) PPC_WEAK_FUNC(sub_8221F8A8);
PPC_FUNC_IMPL(__imp__sub_8221F8A8) {
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
	// bne cr6,0x8221f9c4
	if (!ctx.cr6.eq) goto loc_8221F9C4;
	// bl 0x8221c0a8
	ctx.lr = 0x8221F8CC;
	sub_8221C0A8(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,-12024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12024);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F8EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F8FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82213c50
	ctx.lr = 0x8221F900;
	sub_82213C50(ctx, base);
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
	ctx.lr = 0x8221F918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,3480
	ctx.r3.s64 = 3480;
	// bl 0x82217d58
	ctx.lr = 0x8221F920;
	sub_82217D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221f934
	if (ctx.cr0.eq) goto loc_8221F934;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222a028
	ctx.lr = 0x8221F930;
	sub_8222A028(ctx, base);
	// b 0x8221f938
	goto loc_8221F938;
loc_8221F934:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221F938:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r3.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8221f94c
	if (!ctx.cr6.eq) goto loc_8221F94C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8221F94C:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-932
	ctx.r11.s64 = ctx.r11.s64 + -932;
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
	// bne 0x8221f990
	if (!ctx.cr0.eq) goto loc_8221F990;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8221F990:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
loc_8221F998:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221f9b8
	if (ctx.cr6.eq) goto loc_8221F9B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8221f998
	if (ctx.cr6.lt) goto loc_8221F998;
	// b 0x8221f9c4
	goto loc_8221F9C4;
loc_8221F9B8:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
loc_8221F9C4:
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

__attribute__((alias("__imp__sub_8221F9D8"))) PPC_WEAK_FUNC(sub_8221F9D8);
PPC_FUNC_IMPL(__imp__sub_8221F9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x8221F9E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830df580
	ctx.lr = 0x8221F9EC;
	sub_830DF580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x82e2ab28
	ctx.lr = 0x8221F9FC;
	sub_82E2AB28(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221FA10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221FA20;
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
	ctx.lr = 0x8221FA40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r3,-12024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221FA58;
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
	ctx.lr = 0x8221FA6C;
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
	ctx.lr = 0x8221FA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r10,r10,-31856
	ctx.r10.s64 = ctx.r10.s64 + -31856;
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
	// addi r10,r10,-1104
	ctx.r10.s64 = ctx.r10.s64 + -1104;
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
	// beq cr6,0x8221fb24
	if (ctx.cr6.eq) goto loc_8221FB24;
	// bl 0x82e28fd0
	ctx.lr = 0x8221FAF0;
	sub_82E28FD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82e28fd0
	ctx.lr = 0x8221FB00;
	sub_82E28FD0(ctx, base);
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
	ctx.lr = 0x8221FB20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221fba8
	goto loc_8221FBA8;
loc_8221FB24:
	// bl 0x82e28fd0
	ctx.lr = 0x8221FB28;
	sub_82E28FD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82e28fd0
	ctx.lr = 0x8221FB38;
	sub_82E28FD0(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r11,-12016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12016);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221fb54
	if (ctx.cr0.eq) goto loc_8221FB54;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_8221FB54:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822268e8
	ctx.lr = 0x8221FB68;
	sub_822268E8(ctx, base);
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
	ctx.lr = 0x8221FB84;
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
	ctx.lr = 0x8221FBA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221FBA8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FBB0"))) PPC_WEAK_FUNC(sub_8221FBB0);
PPC_FUNC_IMPL(__imp__sub_8221FBB0) {
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
	// beq cr6,0x8221fc2c
	if (ctx.cr6.eq) goto loc_8221FC2C;
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
	ctx.lr = 0x8221FBFC;
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
	ctx.lr = 0x8221FC18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221fc54
	if (ctx.cr0.eq) goto loc_8221FC54;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// b 0x8221fc38
	goto loc_8221FC38;
loc_8221FC2C:
	// li r10,-203
	ctx.r10.s64 = -203;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8221FC38:
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
	ctx.lr = 0x8221FC54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221FC54:
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

__attribute__((alias("__imp__sub_8221FC68"))) PPC_WEAK_FUNC(sub_8221FC68);
PPC_FUNC_IMPL(__imp__sub_8221FC68) {
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
	// bne cr6,0x8221fdc4
	if (!ctx.cr6.eq) goto loc_8221FDC4;
	// li r3,8096
	ctx.r3.s64 = 8096;
	// bl 0x82213c50
	ctx.lr = 0x8221FC94;
	sub_82213C50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,3480
	ctx.r3.s64 = 3480;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// bl 0x82217d58
	ctx.lr = 0x8221FCA4;
	sub_82217D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221fcb8
	if (ctx.cr0.eq) goto loc_8221FCB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222a028
	ctx.lr = 0x8221FCB4;
	sub_8222A028(ctx, base);
	// b 0x8221fcbc
	goto loc_8221FCBC;
loc_8221FCB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221FCBC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x8221fcd0
	if (!ctx.cr6.eq) goto loc_8221FCD0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8221FCD0:
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221FCE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-928
	ctx.r11.s64 = ctx.r11.s64 + -928;
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
	// bne 0x8221fd14
	if (!ctx.cr0.eq) goto loc_8221FD14;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8221FD14:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
loc_8221FD1C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221fd3c
	if (ctx.cr6.eq) goto loc_8221FD3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8221fd1c
	if (ctx.cr6.lt) goto loc_8221FD1C;
	// b 0x8221fd48
	goto loc_8221FD48;
loc_8221FD3C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
loc_8221FD48:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82217d58
	ctx.lr = 0x8221FD50;
	sub_82217D58(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8221fd98
	if (ctx.cr0.eq) goto loc_8221FD98;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-31966
	ctx.r8.s64 = -2094923776;
	// addi r11,r11,-24276
	ctx.r11.s64 = ctx.r11.s64 + -24276;
	// addi r10,r10,-23152
	ctx.r10.s64 = ctx.r10.s64 + -23152;
	// addi r9,r9,-23048
	ctx.r9.s64 = ctx.r9.s64 + -23048;
	// lbz r8,-12032(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + -12032);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// bne 0x8221fd9c
	if (!ctx.cr0.eq) goto loc_8221FD9C;
	// bl 0x8221a0f8
	ctx.lr = 0x8221FD94;
	sub_8221A0F8(ctx, base);
	// b 0x8221fd9c
	goto loc_8221FD9C;
loc_8221FD98:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221FD9C:
	// li r3,23680
	ctx.r3.s64 = 23680;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// bl 0x82217d58
	ctx.lr = 0x8221FDA8;
	sub_82217D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221fdbc
	if (ctx.cr0.eq) goto loc_8221FDBC;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x8222d2d8
	ctx.lr = 0x8221FDB8;
	sub_8222D2D8(ctx, base);
	// b 0x8221fdc0
	goto loc_8221FDC0;
loc_8221FDBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221FDC0:
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
loc_8221FDC4:
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

__attribute__((alias("__imp__sub_8221FDE0"))) PPC_WEAK_FUNC(sub_8221FDE0);
PPC_FUNC_IMPL(__imp__sub_8221FDE0) {
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
	// beq cr6,0x8221fec8
	if (ctx.cr6.eq) goto loc_8221FEC8;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221fe24
	if (ctx.cr0.eq) goto loc_8221FE24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221FE24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221FE24:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// bl 0x8221f5b0
	ctx.lr = 0x8221FE38;
	sub_8221F5B0(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// bne 0x8221fe4c
	if (!ctx.cr0.eq) goto loc_8221FE4C;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8221FE4C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
loc_8221FE54:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221fe74
	if (ctx.cr6.eq) goto loc_8221FE74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8221fe54
	if (ctx.cr6.lt) goto loc_8221FE54;
	// b 0x8221fe80
	goto loc_8221FE80;
loc_8221FE74:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
loc_8221FE80:
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221fea0
	if (ctx.cr0.eq) goto loc_8221FEA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221FEA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221FEA0:
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221fec4
	if (ctx.cr0.eq) goto loc_8221FEC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221FEC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221FEC4:
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
loc_8221FEC8:
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

__attribute__((alias("__imp__sub_8221FEE0"))) PPC_WEAK_FUNC(sub_8221FEE0);
PPC_FUNC_IMPL(__imp__sub_8221FEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x8221FEE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8221fc68
	ctx.lr = 0x8221FEF4;
	sub_8221FC68(ctx, base);
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
	ctx.lr = 0x8221FF14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r3,-12024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221FF2C;
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
	ctx.lr = 0x8221FF40;
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
	ctx.lr = 0x8221FF58;
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
	// beq cr6,0x82220004
	if (ctx.cr6.eq) goto loc_82220004;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bgt cr6,0x8221ff84
	if (ctx.cr6.gt) goto loc_8221FF84;
	// li r27,13505
	ctx.r27.s64 = 13505;
loc_8221FF84:
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r10,r10,-31856
	ctx.r10.s64 = ctx.r10.s64 + -31856;
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
	// addi r10,r10,352
	ctx.r10.s64 = ctx.r10.s64 + 352;
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
	// bl 0x82e28fd0
	ctx.lr = 0x8221FFD0;
	sub_82E28FD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82e28fd0
	ctx.lr = 0x8221FFE0;
	sub_82E28FD0(ctx, base);
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
	ctx.lr = 0x82220000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822200c8
	goto loc_822200C8;
loc_82220004:
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r10,r10,-31856
	ctx.r10.s64 = ctx.r10.s64 + -31856;
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
	// addi r10,r10,352
	ctx.r10.s64 = ctx.r10.s64 + 352;
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
	// bl 0x82e28fd0
	ctx.lr = 0x82220050;
	sub_82E28FD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82e28fd0
	ctx.lr = 0x82220060;
	sub_82E28FD0(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r11,-12016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12016);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82220080
	if (ctx.cr0.eq) goto loc_82220080;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x82220084
	goto loc_82220084;
loc_82220080:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82220084:
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
	ctx.lr = 0x822200A8;
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
	ctx.lr = 0x822200C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822200C8:
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
	ctx.lr = 0x822200FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r30,76
	ctx.r29.s64 = ctx.r30.s64 + 76;
	// li r5,19600
	ctx.r5.s64 = 19600;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e29500
	ctx.lr = 0x82220110;
	sub_82E29500(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e420
	ctx.lr = 0x82220120;
	sub_8222E420(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,100
	ctx.r3.s64 = 100;
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// bl 0x82c41940
	ctx.lr = 0x82220130;
	sub_82C41940(ctx, base);
	// li r5,800
	ctx.r5.s64 = 800;
	// stw r31,19676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 19676, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,22880
	ctx.r3.s64 = ctx.r30.s64 + 22880;
	// bl 0x82e29500
	ctx.lr = 0x82220144;
	sub_82E29500(ctx, base);
	// li r5,3200
	ctx.r5.s64 = 3200;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,19680
	ctx.r3.s64 = ctx.r30.s64 + 19680;
	// bl 0x82e29500
	ctx.lr = 0x82220154;
	sub_82E29500(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220160"))) PPC_WEAK_FUNC(sub_82220160);
PPC_FUNC_IMPL(__imp__sub_82220160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82220168;
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
	// beq cr6,0x822201c8
	if (ctx.cr6.eq) goto loc_822201C8;
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
	ctx.lr = 0x822201A0;
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
	ctx.lr = 0x822201C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822201ec
	goto loc_822201EC;
loc_822201C8:
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
	ctx.lr = 0x822201EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822201EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822201F8"))) PPC_WEAK_FUNC(sub_822201F8);
PPC_FUNC_IMPL(__imp__sub_822201F8) {
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
	// bne cr6,0x82220340
	if (!ctx.cr6.eq) goto loc_82220340;
	// li r3,8096
	ctx.r3.s64 = 8096;
	// bl 0x82213c50
	ctx.lr = 0x82220224;
	sub_82213C50(ctx, base);
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
	ctx.lr = 0x8222023C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,3480
	ctx.r3.s64 = 3480;
	// bl 0x82217d58
	ctx.lr = 0x82220244;
	sub_82217D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82220258
	if (ctx.cr0.eq) goto loc_82220258;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222a028
	ctx.lr = 0x82220254;
	sub_8222A028(ctx, base);
	// b 0x8222025c
	goto loc_8222025C;
loc_82220258:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222025C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r3.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82220270
	if (!ctx.cr6.eq) goto loc_82220270;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82220270:
	// lwz r3,280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,284(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// lwz r9,280(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-924
	ctx.r11.s64 = ctx.r11.s64 + -924;
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
	// bne 0x822202b4
	if (!ctx.cr0.eq) goto loc_822202B4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822202B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
loc_822202BC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822202dc
	if (ctx.cr6.eq) goto loc_822202DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x822202bc
	if (ctx.cr6.lt) goto loc_822202BC;
	// b 0x822202e8
	goto loc_822202E8;
loc_822202DC:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
loc_822202E8:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82217d58
	ctx.lr = 0x822202F0;
	sub_82217D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82220338
	if (ctx.cr0.eq) goto loc_82220338;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-31966
	ctx.r8.s64 = -2094923776;
	// addi r11,r11,-24276
	ctx.r11.s64 = ctx.r11.s64 + -24276;
	// addi r10,r10,-22696
	ctx.r10.s64 = ctx.r10.s64 + -22696;
	// addi r9,r9,-22536
	ctx.r9.s64 = ctx.r9.s64 + -22536;
	// lbz r8,-12026(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + -12026);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bne 0x8222033c
	if (!ctx.cr0.eq) goto loc_8222033C;
	// bl 0x82221c88
	ctx.lr = 0x82220334;
	sub_82221C88(ctx, base);
	// b 0x8222033c
	goto loc_8222033C;
loc_82220338:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8222033C:
	// stw r31,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r31.u32);
loc_82220340:
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

__attribute__((alias("__imp__sub_82220358"))) PPC_WEAK_FUNC(sub_82220358);
PPC_FUNC_IMPL(__imp__sub_82220358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82220360;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822201f8
	ctx.lr = 0x8222036C;
	sub_822201F8(ctx, base);
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
	ctx.lr = 0x8222038C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r3,-12024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822203A4;
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
	ctx.lr = 0x822203B8;
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
	ctx.lr = 0x822203D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,-31856
	ctx.r10.s64 = ctx.r10.s64 + -31856;
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
	// addi r10,r10,1264
	ctx.r10.s64 = ctx.r10.s64 + 1264;
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
	// beq cr6,0x82220470
	if (ctx.cr6.eq) goto loc_82220470;
	// bl 0x82e28fd0
	ctx.lr = 0x82220430;
	sub_82E28FD0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82e28fd0
	ctx.lr = 0x82220440;
	sub_82E28FD0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bgt cr6,0x8222044c
	if (ctx.cr6.gt) goto loc_8222044C;
	// li r27,14300
	ctx.r27.s64 = 14300;
loc_8222044C:
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
	ctx.lr = 0x8222046C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822204e4
	goto loc_822204E4;
loc_82220470:
	// bl 0x82e28fd0
	ctx.lr = 0x82220474;
	sub_82E28FD0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82e28fd0
	ctx.lr = 0x82220484;
	sub_82E28FD0(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r11,-12016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12016);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822204a0
	if (ctx.cr0.eq) goto loc_822204A0;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_822204A0:
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
	ctx.lr = 0x822204C4;
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
	ctx.lr = 0x822204E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822204E4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822204F0"))) PPC_WEAK_FUNC(sub_822204F0);
PPC_FUNC_IMPL(__imp__sub_822204F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x822204F8;
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
	// beq cr6,0x82220558
	if (ctx.cr6.eq) goto loc_82220558;
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
	ctx.lr = 0x82220530;
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
	ctx.lr = 0x82220554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8222057c
	goto loc_8222057C;
loc_82220558:
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
	ctx.lr = 0x8222057C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222057C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220588"))) PPC_WEAK_FUNC(sub_82220588);
PPC_FUNC_IMPL(__imp__sub_82220588) {
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
	// beq 0x822205e0
	if (ctx.cr0.eq) goto loc_822205E0;
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
	ctx.lr = 0x822205CC;
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
	ctx.lr = 0x822205E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822205E0:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222061c
	if (ctx.cr0.eq) goto loc_8222061C;
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
	ctx.lr = 0x82220608;
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
	ctx.lr = 0x8222061C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222061C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82220658
	if (ctx.cr0.eq) goto loc_82220658;
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
	ctx.lr = 0x82220644;
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
	ctx.lr = 0x82220658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82220658:
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

__attribute__((alias("__imp__sub_82220670"))) PPC_WEAK_FUNC(sub_82220670);
PPC_FUNC_IMPL(__imp__sub_82220670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82220678;
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
	// beq cr6,0x822206d4
	if (ctx.cr6.eq) goto loc_822206D4;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r29,r3,72
	ctx.r29.s64 = ctx.r3.s64 + 72;
	// b 0x822206cc
	goto loc_822206CC;
loc_822206A0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822206c8
	if (ctx.cr0.eq) goto loc_822206C8;
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
	ctx.lr = 0x822206C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822206C8:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_822206CC:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822206a0
	if (ctx.cr6.lt) goto loc_822206A0;
loc_822206D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822206E0"))) PPC_WEAK_FUNC(sub_822206E0);
PPC_FUNC_IMPL(__imp__sub_822206E0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// b 0x822206fc
	goto loc_822206FC;
loc_822206EC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82220708
	if (ctx.cr6.eq) goto loc_82220708;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_822206FC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822206ec
	if (ctx.cr6.lt) goto loc_822206EC;
	// blr 
	return;
loc_82220708:
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220718"))) PPC_WEAK_FUNC(sub_82220718);
PPC_FUNC_IMPL(__imp__sub_82220718) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// b 0x82220734
	goto loc_82220734;
loc_82220724:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82220740
	if (ctx.cr6.eq) goto loc_82220740;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82220734:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82220724
	if (ctx.cr6.lt) goto loc_82220724;
	// blr 
	return;
loc_82220740:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220750"))) PPC_WEAK_FUNC(sub_82220750);
PPC_FUNC_IMPL(__imp__sub_82220750) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19492
	ctx.r11.s64 = ctx.r11.s64 + -19492;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82220780
	if (ctx.cr0.eq) goto loc_82220780;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x82217db8
	ctx.lr = 0x82220780;
	sub_82217DB8(ctx, base);
loc_82220780:
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

__attribute__((alias("__imp__sub_82220798"))) PPC_WEAK_FUNC(sub_82220798);
PPC_FUNC_IMPL(__imp__sub_82220798) {
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
	// bl 0x82229448
	ctx.lr = 0x822207BC;
	sub_82229448(ctx, base);
	// lis r11,29557
	ctx.r11.s64 = 1937047552;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r10,r11,25203
	ctx.r10.u64 = ctx.r11.u64 | 25203;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29148
	ctx.r4.s64 = ctx.r11.s64 + -29148;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x822207DC;
	sub_82228DF8(ctx, base);
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

__attribute__((alias("__imp__sub_822207F8"))) PPC_WEAK_FUNC(sub_822207F8);
PPC_FUNC_IMPL(__imp__sub_822207F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82220800;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-1672
	ctx.r11.s64 = ctx.r11.s64 + -1672;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82220798
	ctx.lr = 0x82220820;
	sub_82220798(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-29032
	ctx.r4.s64 = ctx.r11.s64 + -29032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82220834;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82220850
	if (ctx.cr6.eq) goto loc_82220850;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28908
	ctx.r4.s64 = ctx.r11.s64 + -28908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82220850;
	sub_82228DF8(ctx, base);
loc_82220850:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220858"))) PPC_WEAK_FUNC(sub_82220858);
PPC_FUNC_IMPL(__imp__sub_82220858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82220860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-1660
	ctx.r11.s64 = ctx.r11.s64 + -1660;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82220798
	ctx.lr = 0x82220880;
	sub_82220798(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-26816
	ctx.r4.s64 = ctx.r11.s64 + -26816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82220894;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822208b0
	if (ctx.cr6.eq) goto loc_822208B0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28908
	ctx.r4.s64 = ctx.r11.s64 + -28908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x822208B0;
	sub_82228DF8(ctx, base);
loc_822208B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822208B8"))) PPC_WEAK_FUNC(sub_822208B8);
PPC_FUNC_IMPL(__imp__sub_822208B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x822208C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-1648
	ctx.r11.s64 = ctx.r11.s64 + -1648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82220798
	ctx.lr = 0x822208E0;
	sub_82220798(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-26804
	ctx.r4.s64 = ctx.r11.s64 + -26804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x822208F4;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82220910
	if (ctx.cr6.eq) goto loc_82220910;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28908
	ctx.r4.s64 = ctx.r11.s64 + -28908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82220910;
	sub_82228DF8(ctx, base);
loc_82220910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220918"))) PPC_WEAK_FUNC(sub_82220918);
PPC_FUNC_IMPL(__imp__sub_82220918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82220920;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-1636
	ctx.r11.s64 = ctx.r11.s64 + -1636;
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
	// bl 0x82220798
	ctx.lr = 0x8222094C;
	sub_82220798(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-26804
	ctx.r4.s64 = ctx.r11.s64 + -26804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82220960;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-26784
	ctx.r4.s64 = ctx.r11.s64 + -26784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82220974;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-26768
	ctx.r4.s64 = ctx.r11.s64 + -26768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82220988;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-26752
	ctx.r4.s64 = ctx.r11.s64 + -26752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8222099C;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-26724
	ctx.r4.s64 = ctx.r11.s64 + -26724;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x822209B0;
	sub_82228BF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822209B8"))) PPC_WEAK_FUNC(sub_822209B8);
PPC_FUNC_IMPL(__imp__sub_822209B8) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-1624
	ctx.r11.s64 = ctx.r11.s64 + -1624;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82220798
	ctx.lr = 0x822209E4;
	sub_82220798(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-26816
	ctx.r4.s64 = ctx.r11.s64 + -26816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x822209F8;
	sub_82228DF8(ctx, base);
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

__attribute__((alias("__imp__sub_82220A10"))) PPC_WEAK_FUNC(sub_82220A10);
PPC_FUNC_IMPL(__imp__sub_82220A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82220A18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-1612
	ctx.r11.s64 = ctx.r11.s64 + -1612;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82220798
	ctx.lr = 0x82220A38;
	sub_82220798(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-26816
	ctx.r4.s64 = ctx.r11.s64 + -26816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82220A4C;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82220a68
	if (ctx.cr6.eq) goto loc_82220A68;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28908
	ctx.r4.s64 = ctx.r11.s64 + -28908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82220A68;
	sub_82228DF8(ctx, base);
loc_82220A68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220A70"))) PPC_WEAK_FUNC(sub_82220A70);
PPC_FUNC_IMPL(__imp__sub_82220A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82220A78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-1600
	ctx.r11.s64 = ctx.r11.s64 + -1600;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82220798
	ctx.lr = 0x82220A98;
	sub_82220798(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-26712
	ctx.r4.s64 = ctx.r11.s64 + -26712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82220AAC;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82220ac8
	if (ctx.cr6.eq) goto loc_82220AC8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28908
	ctx.r4.s64 = ctx.r11.s64 + -28908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82220AC8;
	sub_82228DF8(ctx, base);
loc_82220AC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220AD0"))) PPC_WEAK_FUNC(sub_82220AD0);
PPC_FUNC_IMPL(__imp__sub_82220AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82220AD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-1588
	ctx.r11.s64 = ctx.r11.s64 + -1588;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82220798
	ctx.lr = 0x82220AF8;
	sub_82220798(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-26816
	ctx.r4.s64 = ctx.r11.s64 + -26816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82220B0C;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// addi r4,r11,-26696
	ctx.r4.s64 = ctx.r11.s64 + -26696;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82228bf0
	ctx.lr = 0x82220B2C;
	sub_82228BF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220B38"))) PPC_WEAK_FUNC(sub_82220B38);
PPC_FUNC_IMPL(__imp__sub_82220B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-1564
	ctx.r11.s64 = ctx.r11.s64 + -1564;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82220798
	sub_82220798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220B48"))) PPC_WEAK_FUNC(sub_82220B48);
PPC_FUNC_IMPL(__imp__sub_82220B48) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r11,-1576
	ctx.r11.s64 = ctx.r11.s64 + -1576;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82220798
	ctx.lr = 0x82220B74;
	sub_82220798(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-26816
	ctx.r4.s64 = ctx.r11.s64 + -26816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82220B88;
	sub_82228DF8(ctx, base);
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

__attribute__((alias("__imp__sub_82220BA0"))) PPC_WEAK_FUNC(sub_82220BA0);
PPC_FUNC_IMPL(__imp__sub_82220BA0) {
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
	ctx.lr = 0x82220BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,244(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220BD8"))) PPC_WEAK_FUNC(sub_82220BD8);
PPC_FUNC_IMPL(__imp__sub_82220BD8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-29148
	ctx.r4.s64 = ctx.r11.s64 + -29148;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822293e0
	ctx.lr = 0x82220BFC;
	sub_822293E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82220c60
	if (ctx.cr0.eq) goto loc_82220C60;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-4152
	ctx.r11.s64 = ctx.r11.s64 + -4152;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82220c60
	if (ctx.cr6.eq) goto loc_82220C60;
loc_82220C1C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82220C24:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82220c48
	if (ctx.cr0.eq) goto loc_82220C48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82220c24
	if (ctx.cr6.eq) goto loc_82220C24;
loc_82220C48:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82220c74
	if (ctx.cr0.eq) goto loc_82220C74;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82220c1c
	if (!ctx.cr0.eq) goto loc_82220C1C;
loc_82220C60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82220C64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82220C74:
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x82220c64
	goto loc_82220C64;
}

__attribute__((alias("__imp__sub_82220C80"))) PPC_WEAK_FUNC(sub_82220C80);
PPC_FUNC_IMPL(__imp__sub_82220C80) {
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
	// addi r30,r11,27016
	ctx.r30.s64 = ctx.r11.s64 + 27016;
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82228b60
	ctx.lr = 0x82220CB0;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82220cc8
	if (ctx.cr0.eq) goto loc_82220CC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82220CC0;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82220ccc
	goto loc_82220CCC;
loc_82220CC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82220CCC:
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
	// bl 0x822293e0
	ctx.lr = 0x82220CE4;
	sub_822293E0(ctx, base);
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// li r6,128
	ctx.r6.s64 = 128;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r31,136
	ctx.r5.s64 = ctx.r31.s64 + 136;
	// bl 0x822293e0
	ctx.lr = 0x82220CF8;
	sub_822293E0(ctx, base);
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82228b60
	ctx.lr = 0x82220D04;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82220d1c
	if (ctx.cr0.eq) goto loc_82220D1C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82220D14;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82220d20
	goto loc_82220D20;
loc_82220D1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82220D20:
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
	// bl 0x822293e0
	ctx.lr = 0x82220D38;
	sub_822293E0(ctx, base);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r31,284
	ctx.r5.s64 = ctx.r31.s64 + 284;
	// bl 0x822293e0
	ctx.lr = 0x82220D4C;
	sub_822293E0(ctx, base);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r31,300
	ctx.r5.s64 = ctx.r31.s64 + 300;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822293e0
	ctx.lr = 0x82220D60;
	sub_822293E0(ctx, base);
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

__attribute__((alias("__imp__sub_82220D80"))) PPC_WEAK_FUNC(sub_82220D80);
PPC_FUNC_IMPL(__imp__sub_82220D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82220D88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r3,-12024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12024);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// addi r11,r11,-25488
	ctx.r11.s64 = ctx.r11.s64 + -25488;
	// addi r10,r10,-24252
	ctx.r10.s64 = ctx.r10.s64 + -24252;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r9,-22776
	ctx.r9.s64 = ctx.r9.s64 + -22776;
	// addi r8,r8,-22760
	ctx.r8.s64 = ctx.r8.s64 + -22760;
	// addi r7,r7,-22752
	ctx.r7.s64 = ctx.r7.s64 + -22752;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82220E14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830d5298
	ctx.lr = 0x82220E1C;
	sub_830D5298(ctx, base);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_82220E24:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82220e44
	if (ctx.cr6.eq) goto loc_82220E44;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x82220e24
	if (ctx.cr6.lt) goto loc_82220E24;
	// b 0x82220e50
	goto loc_82220E50;
loc_82220E44:
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
loc_82220E50:
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq 0x82220e6c
	if (ctx.cr0.eq) goto loc_82220E6C;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,-12016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12016);
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// bl 0x82238090
	ctx.lr = 0x82220E6C;
	sub_82238090(ctx, base);
loc_82220E6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220E78"))) PPC_WEAK_FUNC(sub_82220E78);
PPC_FUNC_IMPL(__imp__sub_82220E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82220E80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22776
	ctx.r11.s64 = ctx.r11.s64 + -22776;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r10,r10,-22760
	ctx.r10.s64 = ctx.r10.s64 + -22760;
	// addi r9,r9,-22752
	ctx.r9.s64 = ctx.r9.s64 + -22752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r11,-12076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12076);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_82220ECC:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82220eec
	if (ctx.cr6.eq) goto loc_82220EEC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// blt cr6,0x82220ecc
	if (ctx.cr6.lt) goto loc_82220ECC;
	// b 0x82220ef8
	goto loc_82220EF8;
loc_82220EEC:
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
loc_82220EF8:
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82220f34
	if (ctx.cr0.eq) goto loc_82220F34;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r10,-12016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12016);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// b 0x82220f24
	goto loc_82220F24;
loc_82220F14:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82220f30
	if (ctx.cr6.eq) goto loc_82220F30;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82220F24:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82220f14
	if (!ctx.cr6.eq) goto loc_82220F14;
	// b 0x82220f34
	goto loc_82220F34;
loc_82220F30:
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
loc_82220F34:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x830d6998
	ctx.lr = 0x82220F3C;
	sub_830D6998(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-24252
	ctx.r11.s64 = ctx.r11.s64 + -24252;
	// addi r10,r10,-25488
	ctx.r10.s64 = ctx.r10.s64 + -25488;
	// addi r9,r9,-17804
	ctx.r9.s64 = ctx.r9.s64 + -17804;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// clrlwi. r8,r28,31
	ctx.r8.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82220f74
	if (ctx.cr0.eq) goto loc_82220F74;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217db8
	ctx.lr = 0x82220F74;
	sub_82217DB8(ctx, base);
loc_82220F74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220F80"))) PPC_WEAK_FUNC(sub_82220F80);
PPC_FUNC_IMPL(__imp__sub_82220F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x830d64b0
	sub_830D64B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220F88"))) PPC_WEAK_FUNC(sub_82220F88);
PPC_FUNC_IMPL(__imp__sub_82220F88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r4,26721
	ctx.r4.s64 = 1751187456;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,27764
	ctx.r4.u64 = ctx.r4.u64 | 27764;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x830d56b0
	sub_830D56B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220FB4"))) PPC_WEAK_FUNC(sub_82220FB4);
PPC_FUNC_IMPL(__imp__sub_82220FB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220FB8"))) PPC_WEAK_FUNC(sub_82220FB8);
PPC_FUNC_IMPL(__imp__sub_82220FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82220FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,26721
	ctx.r4.s64 = 1751187456;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r4,r4,27764
	ctx.r4.u64 = ctx.r4.u64 | 27764;
	// bl 0x830d54d8
	ctx.lr = 0x82220FEC;
	sub_830D54D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82221010
	if (!ctx.cr0.eq) goto loc_82221010;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830d6668
	ctx.lr = 0x82221008;
	sub_830D6668(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82221014
	goto loc_82221014;
loc_82221010:
	// li r3,-1101
	ctx.r3.s64 = -1101;
loc_82221014:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221020"))) PPC_WEAK_FUNC(sub_82221020);
PPC_FUNC_IMPL(__imp__sub_82221020) {
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
	// lis r4,26721
	ctx.r4.s64 = 1751187456;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,27764
	ctx.r4.u64 = ctx.r4.u64 | 27764;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830d56b0
	ctx.lr = 0x8222104C;
	sub_830D56B0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82221068"))) PPC_WEAK_FUNC(sub_82221068);
PPC_FUNC_IMPL(__imp__sub_82221068) {
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
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822284f8
	ctx.lr = 0x82221090;
	sub_822284F8(ctx, base);
	// lis r31,-31966
	ctx.r31.s64 = -2094923776;
	// lwz r3,-12076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12076);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822210A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822210BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r3,-12076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12076);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,4480
	ctx.r11.s64 = ctx.r11.s64 + 4480;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822210E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822210FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// addi r10,r10,-31856
	ctx.r10.s64 = ctx.r10.s64 + -31856;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// bl 0x82e28fd0
	ctx.lr = 0x82221138;
	sub_82E28FD0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,10000
	ctx.r7.s64 = 10000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222115C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82228560
	ctx.lr = 0x82221164;
	sub_82228560(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
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

__attribute__((alias("__imp__sub_82221180"))) PPC_WEAK_FUNC(sub_82221180);
PPC_FUNC_IMPL(__imp__sub_82221180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82221188;
	__savegprlr_29(ctx, base);
	// stwu r1,-2432(r1)
	ea = -2432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82221300
	if (!ctx.cr0.eq) goto loc_82221300;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e29500
	ctx.lr = 0x822211B0;
	sub_82E29500(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r29,r11,16396
	ctx.r29.s64 = ctx.r11.s64 + 16396;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229a58
	ctx.lr = 0x822211CC;
	sub_82229A58(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82e29500
	ctx.lr = 0x822211DC;
	sub_82E29500(ctx, base);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822293e0
	ctx.lr = 0x822211F0;
	sub_822293E0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x82e29500
	ctx.lr = 0x82221200;
	sub_82E29500(ctx, base);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,1376
	ctx.r5.s64 = ctx.r1.s64 + 1376;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822293e0
	ctx.lr = 0x82221214;
	sub_822293E0(ctx, base);
	// lis r4,25444
	ctx.r4.s64 = 1667497984;
	// addi r6,r1,1376
	ctx.r6.s64 = ctx.r1.s64 + 1376;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,25196
	ctx.r4.u64 = ctx.r4.u64 | 25196;
	// bl 0x830d56b0
	ctx.lr = 0x8222122C;
	sub_830D56B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x830d5350
	ctx.lr = 0x82221238;
	sub_830D5350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822212fc
	if (!ctx.cr0.eq) goto loc_822212FC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x830d5478
	ctx.lr = 0x82221248;
	sub_830D5478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822212fc
	if (!ctx.cr0.gt) goto loc_822212FC;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r4,27759
	ctx.r4.s64 = 1819213824;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,25452
	ctx.r4.u64 = ctx.r4.u64 | 25452;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x830d54d8
	ctx.lr = 0x82221270;
	sub_830D54D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x82e2c390
	ctx.lr = 0x8222127C;
	sub_82E2C390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221290
	if (ctx.cr0.eq) goto loc_82221290;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x822212b0
	goto loc_822212B0;
loc_82221290:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82e2c390
	ctx.lr = 0x8222129C;
	sub_82E2C390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x822212b0
	if (!ctx.cr0.eq) goto loc_822212B0;
	// li r11,2
	ctx.r11.s64 = 2;
loc_822212B0:
	// lis r4,26721
	ctx.r4.s64 = 1751187456;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// ori r4,r4,27764
	ctx.r4.u64 = ctx.r4.u64 | 27764;
	// bl 0x830d56b0
	ctx.lr = 0x822212C8;
	sub_830D56B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,17230
	ctx.r5.s64 = 1129185280;
	// lis r4,18500
	ctx.r4.s64 = 1212416000;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,21586
	ctx.r5.u64 = ctx.r5.u64 | 21586;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r4,r4,22354
	ctx.r4.u64 = ctx.r4.u64 | 22354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822212F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82221388
	ctx.lr = 0x822212F8;
	sub_82221388(ctx, base);
	// b 0x8222130c
	goto loc_8222130C;
loc_822212FC:
	// li r11,99
	ctx.r11.s64 = 99;
loc_82221300:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_8222130C:
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221318"))) PPC_WEAK_FUNC(sub_82221318);
PPC_FUNC_IMPL(__imp__sub_82221318) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830d6938
	ctx.lr = 0x82221338;
	sub_830D6938(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r11,-12076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12076);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82221368
	if (ctx.cr0.eq) goto loc_82221368;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222bda8
	ctx.lr = 0x82221368;
	sub_8222BDA8(ctx, base);
loc_82221368:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82221388"))) PPC_WEAK_FUNC(sub_82221388);
PPC_FUNC_IMPL(__imp__sub_82221388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82221390;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31966
	ctx.r30.s64 = -2094923776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,-12016(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12016);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822213b8
	if (ctx.cr0.eq) goto loc_822213B8;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x822213bc
	goto loc_822213BC;
loc_822213B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822213BC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822213d4
	if (ctx.cr0.eq) goto loc_822213D4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822213d8
	if (!ctx.cr6.eq) goto loc_822213D8;
loc_822213D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822213D8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222140c
	if (ctx.cr0.eq) goto loc_8222140C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,17750
	ctx.r5.s64 = 1163264000;
	// lis r4,17231
	ctx.r4.s64 = 1129250816;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,20051
	ctx.r5.u64 = ctx.r5.u64 | 20051;
	// ori r4,r4,20046
	ctx.r4.u64 = ctx.r4.u64 | 20046;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,-12016(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12016);
loc_8222140C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82221424
	if (ctx.cr0.eq) goto loc_82221424;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x82221428
	goto loc_82221428;
loc_82221424:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82221428:
	// addi r6,r11,1068
	ctx.r6.s64 = ctx.r11.s64 + 1068;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,18500
	ctx.r11.s64 = 1212416000;
	// lis r5,19535
	ctx.r5.s64 = 1280245760;
	// ori r28,r11,22354
	ctx.r28.u64 = ctx.r11.u64 | 22354;
	// ori r5,r5,17228
	ctx.r5.u64 = ctx.r5.u64 | 17228;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82221898
	ctx.lr = 0x8222145C;
	sub_82221898(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82c1a068
	ctx.lr = 0x82221464;
	sub_82C1A068(ctx, base);
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r29,r11,27656
	ctx.r29.s64 = ctx.r11.s64 + 27656;
	// beq 0x8222147c
	if (ctx.cr0.eq) goto loc_8222147C;
	// addi r30,r29,-8
	ctx.r30.s64 = ctx.r29.s64 + -8;
	// b 0x82221488
	goto loc_82221488;
loc_8222147C:
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82221488
	if (ctx.cr0.eq) goto loc_82221488;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82221488:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,21328
	ctx.r5.s64 = 1397751808;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
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
	ctx.lr = 0x822214AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82c1a068
	ctx.lr = 0x822214B4;
	sub_82C1A068(ctx, base);
	// rlwinm. r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822214c4
	if (ctx.cr0.eq) goto loc_822214C4;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x822214d0
	goto loc_822214D0;
loc_822214C4:
	// rlwinm. r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822214d0
	if (ctx.cr0.eq) goto loc_822214D0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822214D0:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r6,r29,-68
	ctx.r6.s64 = ctx.r29.s64 + -68;
	// bne 0x822214e0
	if (!ctx.cr0.eq) goto loc_822214E0;
	// addi r6,r29,-60
	ctx.r6.s64 = ctx.r29.s64 + -60;
loc_822214E0:
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
	ctx.lr = 0x82221500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82c1a068
	ctx.lr = 0x82221504;
	sub_82C1A068(ctx, base);
	// addi r6,r29,-52
	ctx.r6.s64 = ctx.r29.s64 + -52;
	// rlwinm. r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82221514
	if (!ctx.cr0.eq) goto loc_82221514;
	// addi r6,r29,-48
	ctx.r6.s64 = ctx.r29.s64 + -48;
loc_82221514:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,22345
	ctx.r5.s64 = 1464401920;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r5,r5,21061
	ctx.r5.u64 = ctx.r5.u64 | 21061;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c1a058
	ctx.lr = 0x8222153C;
	sub_82C1A058(ctx, base);
	// addi r6,r29,-44
	ctx.r6.s64 = ctx.r29.s64 + -44;
	// rlwinm. r11,r3,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222154c
	if (!ctx.cr0.eq) goto loc_8222154C;
	// addi r6,r29,-40
	ctx.r6.s64 = ctx.r29.s64 + -40;
loc_8222154C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,21332
	ctx.r5.s64 = 1398013952;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r5,r5,18768
	ctx.r5.u64 = ctx.r5.u64 | 18768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222156C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c1a058
	ctx.lr = 0x82221574;
	sub_82C1A058(ctx, base);
	// addi r6,r29,-36
	ctx.r6.s64 = ctx.r29.s64 + -36;
	// rlwinm. r11,r3,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82221584
	if (!ctx.cr0.eq) goto loc_82221584;
	// addi r6,r29,-32
	ctx.r6.s64 = ctx.r29.s64 + -32;
loc_82221584:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,20560
	ctx.r5.s64 = 1347420160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r5,r5,20293
	ctx.r5.u64 = ctx.r5.u64 | 20293;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822215A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822215B0"))) PPC_WEAK_FUNC(sub_822215B0);
PPC_FUNC_IMPL(__imp__sub_822215B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x822215B8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f31,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82b068b0
	ctx.lr = 0x822215D8;
	sub_82B068B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822215f8
	if (!ctx.cr0.eq) goto loc_822215F8;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-13888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13888);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_822215F8:
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
	// bl 0x82e29500
	ctx.lr = 0x82221610;
	sub_82E29500(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// addi r30,r11,27700
	ctx.r30.s64 = ctx.r11.s64 + 27700;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// bl 0x82e2b400
	ctx.lr = 0x82221630;
	sub_82E2B400(ctx, base);
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
	ctx.lr = 0x8222165C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83157a44
	ctx.lr = 0x82221664;
	__imp__XGetVideoMode(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r6,r30,-72
	ctx.r6.s64 = ctx.r30.s64 + -72;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82221678
	if (!ctx.cr6.eq) goto loc_82221678;
	// addi r6,r30,-64
	ctx.r6.s64 = ctx.r30.s64 + -64;
loc_82221678:
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
	ctx.lr = 0x82221698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83157a44
	ctx.lr = 0x822216A0;
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r29,r11,-908
	ctx.r29.s64 = ctx.r11.s64 + -908;
	// rlwinm r11,r10,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r11,112
	ctx.r6.s64 = ctx.r11.s64 + 112;
	// bl 0x82e2b400
	ctx.lr = 0x822216CC;
	sub_82E2B400(ctx, base);
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
	ctx.lr = 0x822216F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r30,-24
	ctx.r29.s64 = ctx.r30.s64 + -24;
	// bl 0x831588d4
	ctx.lr = 0x822216FC;
	__imp__XAudioGetSpeakerConfig(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8222171c
	if (!ctx.cr0.eq) goto loc_8222171C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r29,r30,-12
	ctx.r29.s64 = ctx.r30.s64 + -12;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222171c
	if (ctx.cr6.eq) goto loc_8222171C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8222171C:
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
	ctx.lr = 0x82221740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82221778
	ctx.lr = 0x8222174C;
	sub_82221778(ctx, base);
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
	ctx.lr = 0x8222176C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221778"))) PPC_WEAK_FUNC(sub_82221778);
PPC_FUNC_IMPL(__imp__sub_82221778) {
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
	// bl 0x82b06730
	ctx.lr = 0x82221788;
	sub_82B06730(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8222187c
	if (ctx.cr6.gt) goto loc_8222187C;
	// lis r12,-32229
	ctx.r12.s64 = -2112159744;
	// addi r12,r12,-30272
	ctx.r12.s64 = ctx.r12.s64 + -30272;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,6076
	ctx.r12.s64 = ctx.r12.s64 + 6076;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_822217BC;
	case 1:
		goto loc_822217CC;
	case 2:
		goto loc_822217DC;
	case 3:
		goto loc_822217EC;
	case 4:
		goto loc_822217FC;
	case 5:
		goto loc_8222180C;
	case 6:
		goto loc_8222181C;
	case 7:
		goto loc_8222182C;
	case 8:
		goto loc_8222184C;
	case 9:
		goto loc_8222183C;
	case 10:
		goto loc_8222185C;
	case 11:
		goto loc_8222186C;
	default:
		__builtin_unreachable();
	}
loc_822217BC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// b 0x82221884
	goto loc_82221884;
loc_822217CC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// addi r3,r11,-104
	ctx.r3.s64 = ctx.r11.s64 + -104;
	// b 0x82221884
	goto loc_82221884;
loc_822217DC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// b 0x82221884
	goto loc_82221884;
loc_822217EC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// addi r3,r11,-84
	ctx.r3.s64 = ctx.r11.s64 + -84;
	// b 0x82221884
	goto loc_82221884;
loc_822217FC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// addi r3,r11,-76
	ctx.r3.s64 = ctx.r11.s64 + -76;
	// b 0x82221884
	goto loc_82221884;
loc_8222180C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// addi r3,r11,-68
	ctx.r3.s64 = ctx.r11.s64 + -68;
	// b 0x82221884
	goto loc_82221884;
loc_8222181C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// b 0x82221884
	goto loc_82221884;
loc_8222182C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// addi r3,r11,-52
	ctx.r3.s64 = ctx.r11.s64 + -52;
	// b 0x82221884
	goto loc_82221884;
loc_8222183C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// b 0x82221884
	goto loc_82221884;
loc_8222184C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// b 0x82221884
	goto loc_82221884;
loc_8222185C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// b 0x82221884
	goto loc_82221884;
loc_8222186C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,27832
	ctx.r11.s64 = ctx.r11.s64 + 27832;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x82221884
	goto loc_82221884;
loc_8222187C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,27832
	ctx.r3.s64 = ctx.r11.s64 + 27832;
loc_82221884:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221898"))) PPC_WEAK_FUNC(sub_82221898);
PPC_FUNC_IMPL(__imp__sub_82221898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x822218A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-12016(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12016);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822218C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,252
	ctx.r4.s64 = 252;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82b06da0
	ctx.lr = 0x822218D0;
	sub_82B06DA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822218f4
	if (!ctx.cr0.eq) goto loc_822218F4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822218f4
	if (ctx.cr6.eq) goto loc_822218F4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r11,28076
	ctx.r30.s64 = ctx.r11.s64 + 28076;
	// addi r6,r30,-236
	ctx.r6.s64 = ctx.r30.s64 + -236;
	// b 0x82221934
	goto loc_82221934;
loc_822218F4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,251
	ctx.r4.s64 = 251;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b06da0
	ctx.lr = 0x82221904;
	sub_82B06DA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82221928
	if (!ctx.cr0.eq) goto loc_82221928;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82221928
	if (ctx.cr6.eq) goto loc_82221928;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r11,28076
	ctx.r30.s64 = ctx.r11.s64 + 28076;
	// addi r6,r30,-220
	ctx.r6.s64 = ctx.r30.s64 + -220;
	// b 0x82221934
	goto loc_82221934;
loc_82221928:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r11,28076
	ctx.r30.s64 = ctx.r11.s64 + 28076;
	// addi r6,r30,-204
	ctx.r6.s64 = ctx.r30.s64 + -204;
loc_82221934:
	// lis r11,21317
	ctx.r11.s64 = 1397030912;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r28,r11,21588
	ctx.r28.u64 = ctx.r11.u64 | 21588;
	// lis r11,18500
	ctx.r11.s64 = 1212416000;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r29,r11,22354
	ctx.r29.u64 = ctx.r11.u64 | 22354;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b06da0
	ctx.lr = 0x82221970;
	sub_82B06DA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8222198c
	if (!ctx.cr0.eq) goto loc_8222198C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222198c
	if (ctx.cr6.eq) goto loc_8222198C;
	// addi r6,r30,-188
	ctx.r6.s64 = ctx.r30.s64 + -188;
	// b 0x822219b8
	goto loc_822219B8;
loc_8222198C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,248
	ctx.r4.s64 = 248;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b06da0
	ctx.lr = 0x8222199C;
	sub_82B06DA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822219b4
	if (!ctx.cr0.eq) goto loc_822219B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r30,-172
	ctx.r6.s64 = ctx.r30.s64 + -172;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822219b8
	if (!ctx.cr6.eq) goto loc_822219B8;
loc_822219B4:
	// addi r6,r30,-156
	ctx.r6.s64 = ctx.r30.s64 + -156;
loc_822219B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822219D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,244
	ctx.r4.s64 = 244;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b06da0
	ctx.lr = 0x822219E4;
	sub_82B06DA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82221a00
	if (!ctx.cr0.eq) goto loc_82221A00;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82221a00
	if (ctx.cr6.eq) goto loc_82221A00;
	// addi r6,r30,-140
	ctx.r6.s64 = ctx.r30.s64 + -140;
	// b 0x82221a2c
	goto loc_82221A2C;
loc_82221A00:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,243
	ctx.r4.s64 = 243;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b06da0
	ctx.lr = 0x82221A10;
	sub_82B06DA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82221a28
	if (!ctx.cr0.eq) goto loc_82221A28;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r30,-124
	ctx.r6.s64 = ctx.r30.s64 + -124;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82221a2c
	if (!ctx.cr6.eq) goto loc_82221A2C;
loc_82221A28:
	// addi r6,r30,-108
	ctx.r6.s64 = ctx.r30.s64 + -108;
loc_82221A2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b06da0
	ctx.lr = 0x82221A58;
	sub_82B06DA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82221a74
	if (!ctx.cr0.eq) goto loc_82221A74;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82221a74
	if (ctx.cr6.eq) goto loc_82221A74;
	// addi r6,r30,-92
	ctx.r6.s64 = ctx.r30.s64 + -92;
	// b 0x82221aa0
	goto loc_82221AA0;
loc_82221A74:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,246
	ctx.r4.s64 = 246;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b06da0
	ctx.lr = 0x82221A84;
	sub_82B06DA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82221a9c
	if (!ctx.cr0.eq) goto loc_82221A9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r30,-76
	ctx.r6.s64 = ctx.r30.s64 + -76;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82221aa0
	if (!ctx.cr6.eq) goto loc_82221AA0;
loc_82221A9C:
	// addi r6,r30,-60
	ctx.r6.s64 = ctx.r30.s64 + -60;
loc_82221AA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,254
	ctx.r4.s64 = 254;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b06da0
	ctx.lr = 0x82221ACC;
	sub_82B06DA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82221b04
	if (!ctx.cr0.eq) goto loc_82221B04;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r30,-44
	ctx.r6.s64 = ctx.r30.s64 + -44;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82221ae8
	if (!ctx.cr6.eq) goto loc_82221AE8;
	// addi r6,r30,-28
	ctx.r6.s64 = ctx.r30.s64 + -28;
loc_82221AE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82221B04:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,245
	ctx.r4.s64 = 245;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b06da0
	ctx.lr = 0x82221B14;
	sub_82B06DA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82221b4c
	if (!ctx.cr0.eq) goto loc_82221B4C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r30,-12
	ctx.r6.s64 = ctx.r30.s64 + -12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82221b30
	if (!ctx.cr6.eq) goto loc_82221B30;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82221B30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82221B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82221B4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221B58"))) PPC_WEAK_FUNC(sub_82221B58);
PPC_FUNC_IMPL(__imp__sub_82221B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82221B60;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-12076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12076);
	// lwz r31,224(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82221bd4
	if (ctx.cr0.eq) goto loc_82221BD4;
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
	// bl 0x82e29500
	ctx.lr = 0x82221B9C;
	sub_82E29500(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,27580
	ctx.r4.s64 = ctx.r11.s64 + 27580;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x82221BB0;
	sub_82E2B400(ctx, base);
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
	ctx.lr = 0x82221BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82221bd8
	goto loc_82221BD8;
loc_82221BD4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82221BD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221BE0"))) PPC_WEAK_FUNC(sub_82221BE0);
PPC_FUNC_IMPL(__imp__sub_82221BE0) {
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,-12076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12076);
	// lwz r31,224(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82221c6c
	if (ctx.cr0.eq) goto loc_82221C6C;
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
	// bl 0x82e29500
	ctx.lr = 0x82221C24;
	sub_82E29500(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// addi r4,r11,27584
	ctx.r4.s64 = ctx.r11.s64 + 27584;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82e2b400
	ctx.lr = 0x82221C40;
	sub_82E2B400(ctx, base);
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
	ctx.lr = 0x82221C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82221c70
	goto loc_82221C70;
loc_82221C6C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82221C70:
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

__attribute__((alias("__imp__sub_82221C88"))) PPC_WEAK_FUNC(sub_82221C88);
PPC_FUNC_IMPL(__imp__sub_82221C88) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e50
	ctx.lr = 0x82221C90;
	__savegprlr_22(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r11,r11,-871
	ctx.r11.s64 = ctx.r11.s64 + -871;
	// addi r10,r10,-1552
	ctx.r10.s64 = ctx.r10.s64 + -1552;
	// addi r9,r11,28959
	ctx.r9.s64 = ctx.r11.s64 + 28959;
	// addi r8,r11,28959
	ctx.r8.s64 = ctx.r11.s64 + 28959;
	// addi r7,r11,28959
	ctx.r7.s64 = ctx.r11.s64 + 28959;
	// addi r6,r11,28959
	ctx.r6.s64 = ctx.r11.s64 + 28959;
	// addi r5,r11,28959
	ctx.r5.s64 = ctx.r11.s64 + 28959;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lis r9,17231
	ctx.r9.s64 = 1129250816;
	// addi r4,r11,28959
	ctx.r4.s64 = ctx.r11.s64 + 28959;
	// ori r9,r9,20046
	ctx.r9.u64 = ctx.r9.u64 | 20046;
	// addi r3,r11,28959
	ctx.r3.s64 = ctx.r11.s64 + 28959;
	// addi r31,r11,28959
	ctx.r31.s64 = ctx.r11.s64 + 28959;
	// addi r30,r11,28959
	ctx.r30.s64 = ctx.r11.s64 + 28959;
	// addi r29,r11,28959
	ctx.r29.s64 = ctx.r11.s64 + 28959;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21843
	ctx.r9.s64 = 1431502848;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17746
	ctx.r9.u64 = ctx.r9.u64 | 17746;
	// addi r10,r10,-1540
	ctx.r10.s64 = ctx.r10.s64 + -1540;
	// addi r28,r11,28959
	ctx.r28.s64 = ctx.r11.s64 + 28959;
	// addi r27,r11,28959
	ctx.r27.s64 = ctx.r11.s64 + 28959;
	// addi r26,r11,28959
	ctx.r26.s64 = ctx.r11.s64 + 28959;
	// addi r25,r11,28959
	ctx.r25.s64 = ctx.r11.s64 + 28959;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r24,r11,28959
	ctx.r24.s64 = ctx.r11.s64 + 28959;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21068
	ctx.r9.s64 = 1380712448;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// addi r10,r10,-1528
	ctx.r10.s64 = ctx.r10.s64 + -1528;
	// addi r23,r11,28959
	ctx.r23.s64 = ctx.r11.s64 + 28959;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21060
	ctx.r9.s64 = 1380188160;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,16724
	ctx.r9.u64 = ctx.r9.u64 | 16724;
	// addi r10,r10,-1516
	ctx.r10.s64 = ctx.r10.s64 + -1516;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,19532
	ctx.r9.s64 = 1280049152;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// addi r10,r10,-1504
	ctx.r10.s64 = ctx.r10.s64 + -1504;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,19524
	ctx.r9.s64 = 1279524864;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,16724
	ctx.r9.u64 = ctx.r9.u64 | 16724;
	// addi r10,r10,-1492
	ctx.r10.s64 = ctx.r10.s64 + -1492;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18252
	ctx.r9.s64 = 1196163072;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// addi r10,r10,-1480
	ctx.r10.s64 = ctx.r10.s64 + -1480;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18244
	ctx.r9.s64 = 1195638784;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,16724
	ctx.r9.u64 = ctx.r9.u64 | 16724;
	// addi r10,r10,-1468
	ctx.r10.s64 = ctx.r10.s64 + -1468;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18244
	ctx.r9.s64 = 1195638784;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17748
	ctx.r9.u64 = ctx.r9.u64 | 17748;
	// addi r10,r10,-1456
	ctx.r10.s64 = ctx.r10.s64 + -1456;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r9,20548
	ctx.r9.s64 = 1346633728;
	// addi r10,r10,-1444
	ctx.r10.s64 = ctx.r10.s64 + -1444;
	// ori r9,r9,16724
	ctx.r9.u64 = ctx.r9.u64 | 16724;
	// addi r8,r11,28959
	ctx.r8.s64 = ctx.r11.s64 + 28959;
	// addi r7,r11,28959
	ctx.r7.s64 = ctx.r11.s64 + 28959;
	// addi r6,r11,28959
	ctx.r6.s64 = ctx.r11.s64 + 28959;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// addi r5,r11,28959
	ctx.r5.s64 = ctx.r11.s64 + 28959;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17223
	ctx.r9.s64 = 1128726528;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,16717
	ctx.r9.u64 = ctx.r9.u64 | 16717;
	// addi r10,r10,-1432
	ctx.r10.s64 = ctx.r10.s64 + -1432;
	// addi r4,r11,28959
	ctx.r4.s64 = ctx.r11.s64 + 28959;
	// addi r3,r11,28959
	ctx.r3.s64 = ctx.r11.s64 + 28959;
	// addi r31,r11,28959
	ctx.r31.s64 = ctx.r11.s64 + 28959;
	// addi r30,r11,28959
	ctx.r30.s64 = ctx.r11.s64 + 28959;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// addi r29,r11,28959
	ctx.r29.s64 = ctx.r11.s64 + 28959;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21831
	ctx.r9.s64 = 1430716416;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,16717
	ctx.r9.u64 = ctx.r9.u64 | 16717;
	// addi r10,r10,-1420
	ctx.r10.s64 = ctx.r10.s64 + -1420;
	// addi r28,r11,28959
	ctx.r28.s64 = ctx.r11.s64 + 28959;
	// addi r22,r11,28959
	ctx.r22.s64 = ctx.r11.s64 + 28959;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// addi r27,r11,28959
	ctx.r27.s64 = ctx.r11.s64 + 28959;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21831
	ctx.r9.s64 = 1430716416;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17477
	ctx.r9.u64 = ctx.r9.u64 | 17477;
	// addi r10,r10,-1408
	ctx.r10.s64 = ctx.r10.s64 + -1408;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// addi r26,r11,28959
	ctx.r26.s64 = ctx.r11.s64 + 28959;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21840
	ctx.r9.s64 = 1431306240;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,19521
	ctx.r9.u64 = ctx.r9.u64 | 19521;
	// addi r10,r10,-1396
	ctx.r10.s64 = ctx.r10.s64 + -1396;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// addi r25,r11,28959
	ctx.r25.s64 = ctx.r11.s64 + 28959;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21826
	ctx.r9.s64 = 1430388736;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21057
	ctx.r9.u64 = ctx.r9.u64 | 21057;
	// addi r10,r10,-1384
	ctx.r10.s64 = ctx.r10.s64 + -1384;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// addi r24,r11,28959
	ctx.r24.s64 = ctx.r11.s64 + 28959;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17735
	ctx.r9.s64 = 1162280960;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,16717
	ctx.r9.u64 = ctx.r9.u64 | 16717;
	// addi r10,r10,-1372
	ctx.r10.s64 = ctx.r10.s64 + -1372;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// addi r23,r11,28959
	ctx.r23.s64 = ctx.r11.s64 + 28959;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r9,r11,28959
	ctx.r9.s64 = ctx.r11.s64 + 28959;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-1360
	ctx.r10.s64 = ctx.r10.s64 + -1360;
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
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,20044
	ctx.r9.u64 = ctx.r9.u64 | 20044;
	// addi r10,r10,-1348
	ctx.r10.s64 = ctx.r10.s64 + -1348;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r9,17735
	ctx.r9.s64 = 1162280960;
	// addi r10,r10,-1336
	ctx.r10.s64 = ctx.r10.s64 + -1336;
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
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21075
	ctx.r9.u64 = ctx.r9.u64 | 21075;
	// addi r10,r10,-1324
	ctx.r10.s64 = ctx.r10.s64 + -1324;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20812
	ctx.r9.s64 = 1363935232;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17742
	ctx.r9.u64 = ctx.r9.u64 | 17742;
	// addi r10,r10,-1312
	ctx.r10.s64 = ctx.r10.s64 + -1312;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20549
	ctx.r9.s64 = 1346699264;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,20052
	ctx.r9.u64 = ctx.r9.u64 | 20052;
	// addi r10,r10,-1300
	ctx.r10.s64 = ctx.r10.s64 + -1300;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20556
	ctx.r9.s64 = 1347158016;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,22100
	ctx.r9.u64 = ctx.r9.u64 | 22100;
	// addi r10,r10,-1288
	ctx.r10.s64 = ctx.r10.s64 + -1288;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21063
	ctx.r9.s64 = 1380384768;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,16717
	ctx.r9.u64 = ctx.r9.u64 | 16717;
	// addi r10,r10,-1276
	ctx.r10.s64 = ctx.r10.s64 + -1276;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20553
	ctx.r9.s64 = 1346961408;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,20039
	ctx.r9.u64 = ctx.r9.u64 | 20039;
	// addi r10,r10,-1264
	ctx.r10.s64 = ctx.r10.s64 + -1264;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18511
	ctx.r9.s64 = 1213136896;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,19783
	ctx.r9.u64 = ctx.r9.u64 | 19783;
	// addi r10,r10,-1252
	ctx.r10.s64 = ctx.r10.s64 + -1252;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18509
	ctx.r9.s64 = 1213005824;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21073
	ctx.r9.u64 = ctx.r9.u64 | 21073;
	// addi r10,r10,-1240
	ctx.r10.s64 = ctx.r10.s64 + -1240;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,19273
	ctx.r9.s64 = 1263075328;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17227
	ctx.r9.u64 = ctx.r9.u64 | 17227;
	// addi r10,r10,-1228
	ctx.r10.s64 = ctx.r10.s64 + -1228;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18258
	ctx.r9.s64 = 1196556288;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17741
	ctx.r9.u64 = ctx.r9.u64 | 17741;
	// addi r10,r10,-1216
	ctx.r10.s64 = ctx.r10.s64 + -1216;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,19271
	ctx.r9.s64 = 1262944256;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,16717
	ctx.r9.u64 = ctx.r9.u64 | 16717;
	// addi r10,r10,-1204
	ctx.r10.s64 = ctx.r10.s64 + -1204;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,16706
	ctx.r9.s64 = 1094844416;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21843
	ctx.r9.u64 = ctx.r9.u64 | 21843;
	// addi r10,r10,-1192
	ctx.r10.s64 = ctx.r10.s64 + -1192;
	// addi r8,r11,28959
	ctx.r8.s64 = ctx.r11.s64 + 28959;
	// addi r7,r11,28959
	ctx.r7.s64 = ctx.r11.s64 + 28959;
	// addi r6,r11,28959
	ctx.r6.s64 = ctx.r11.s64 + 28959;
	// addi r5,r11,28959
	ctx.r5.s64 = ctx.r11.s64 + 28959;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// addi r4,r11,28959
	ctx.r4.s64 = ctx.r11.s64 + 28959;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17481
	ctx.r9.s64 = 1145634816;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21315
	ctx.r9.u64 = ctx.r9.u64 | 21315;
	// addi r10,r10,-1180
	ctx.r10.s64 = ctx.r10.s64 + -1180;
	// addi r3,r11,28959
	ctx.r3.s64 = ctx.r11.s64 + 28959;
	// addi r31,r11,28959
	ctx.r31.s64 = ctx.r11.s64 + 28959;
	// addi r30,r11,28959
	ctx.r30.s64 = ctx.r11.s64 + 28959;
	// addi r29,r11,28959
	ctx.r29.s64 = ctx.r11.s64 + 28959;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// addi r28,r11,28959
	ctx.r28.s64 = ctx.r11.s64 + 28959;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21061
	ctx.r9.s64 = 1380253696;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21334
	ctx.r9.u64 = ctx.r9.u64 | 21334;
	// addi r10,r10,-1168
	ctx.r10.s64 = ctx.r10.s64 + -1168;
	// addi r27,r11,28959
	ctx.r27.s64 = ctx.r11.s64 + 28959;
	// addi r26,r11,28959
	ctx.r26.s64 = ctx.r11.s64 + 28959;
	// addi r25,r11,28959
	ctx.r25.s64 = ctx.r11.s64 + 28959;
	// addi r24,r11,28959
	ctx.r24.s64 = ctx.r11.s64 + 28959;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// addi r23,r11,28959
	ctx.r23.s64 = ctx.r11.s64 + 28959;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,19269
	ctx.r9.s64 = 1262813184;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17744
	ctx.r9.u64 = ctx.r9.u64 | 17744;
	// addi r10,r10,-1156
	ctx.r10.s64 = ctx.r10.s64 + -1156;
	// addi r22,r11,28959
	ctx.r22.s64 = ctx.r11.s64 + 28959;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18503
	ctx.r9.s64 = 1212612608;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,16717
	ctx.r9.u64 = ctx.r9.u64 | 16717;
	// addi r10,r10,-1144
	ctx.r10.s64 = ctx.r10.s64 + -1144;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18258
	ctx.r9.s64 = 1196556288;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// addi r10,r10,-1132
	ctx.r10.s64 = ctx.r10.s64 + -1132;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21059
	ctx.r9.s64 = 1380122624;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,19533
	ctx.r9.u64 = ctx.r9.u64 | 19533;
	// addi r10,r10,-1120
	ctx.r10.s64 = ctx.r10.s64 + -1120;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20547
	ctx.r9.s64 = 1346568192;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,20052
	ctx.r9.u64 = ctx.r9.u64 | 20052;
	// addi r10,r10,-1108
	ctx.r10.s64 = ctx.r10.s64 + -1108;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18508
	ctx.r9.s64 = 1212940288;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21332
	ctx.r9.u64 = ctx.r9.u64 | 21332;
	// addi r10,r10,-1096
	ctx.r10.s64 = ctx.r10.s64 + -1096;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r9,18497
	ctx.r9.s64 = 1212219392;
	// addi r10,r10,-1084
	ctx.r10.s64 = ctx.r10.s64 + -1084;
	// ori r9,r9,17227
	ctx.r9.u64 = ctx.r9.u64 | 17227;
	// addi r8,r11,28959
	ctx.r8.s64 = ctx.r11.s64 + 28959;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18520
	ctx.r9.s64 = 1213726720;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,18002
	ctx.r9.u64 = ctx.r9.u64 | 18002;
	// addi r10,r10,-1072
	ctx.r10.s64 = ctx.r10.s64 + -1072;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18516
	ctx.r9.s64 = 1213464576;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21326
	ctx.r9.u64 = ctx.r9.u64 | 21326;
	// addi r10,r10,-1060
	ctx.r10.s64 = ctx.r10.s64 + -1060;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18516
	ctx.r9.s64 = 1213464576;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21075
	ctx.r9.u64 = ctx.r9.u64 | 21075;
	// addi r10,r10,-1048
	ctx.r10.s64 = ctx.r10.s64 + -1048;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,18516
	ctx.r9.s64 = 1213464576;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17998
	ctx.r9.u64 = ctx.r9.u64 | 17998;
	// addi r10,r10,-1036
	ctx.r10.s64 = ctx.r10.s64 + -1036;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21075
	ctx.r9.s64 = 1381171200;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,21073
	ctx.r9.u64 = ctx.r9.u64 | 21073;
	// addi r10,r10,-1024
	ctx.r10.s64 = ctx.r10.s64 + -1024;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,21075
	ctx.r9.s64 = 1381171200;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17228
	ctx.r9.u64 = ctx.r9.u64 | 17228;
	// addi r10,r10,-1012
	ctx.r10.s64 = ctx.r10.s64 + -1012;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20805
	ctx.r9.s64 = 1363476480;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,20052
	ctx.r9.u64 = ctx.r9.u64 | 20052;
	// addi r10,r10,-1000
	ctx.r10.s64 = ctx.r10.s64 + -1000;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,20812
	ctx.r9.s64 = 1363935232;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,22100
	ctx.r9.u64 = ctx.r9.u64 | 22100;
	// addi r10,r10,-988
	ctx.r10.s64 = ctx.r10.s64 + -988;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lis r9,17489
	ctx.r9.s64 = 1146159104;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// ori r9,r9,17735
	ctx.r9.u64 = ctx.r9.u64 | 17735;
	// addi r10,r10,-976
	ctx.r10.s64 = ctx.r10.s64 + -976;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r9,r11,28959
	ctx.r9.s64 = ctx.r11.s64 + 28959;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-964
	ctx.r10.s64 = ctx.r10.s64 + -964;
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
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r10,r10,-952
	ctx.r10.s64 = ctx.r10.s64 + -952;
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-12026(r10)
	PPC_STORE_U8(ctx.r10.u32 + -12026, ctx.r11.u8);
	// b 0x82e28ea0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222308"))) PPC_WEAK_FUNC(sub_82222308);
PPC_FUNC_IMPL(__imp__sub_82222308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82222310;
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
	// bl 0x82229448
	ctx.lr = 0x82222334;
	sub_82229448(ctx, base);
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
	// addi r5,r11,28096
	ctx.r5.s64 = ctx.r11.s64 + 28096;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r4,r11,-27216
	ctx.r4.s64 = ctx.r11.s64 + -27216;
	// bl 0x82228df8
	ctx.lr = 0x82222360;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28452
	ctx.r4.s64 = ctx.r11.s64 + -28452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82222374;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27468
	ctx.r4.s64 = ctx.r11.s64 + -27468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82222388;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822223cc
	if (ctx.cr6.eq) goto loc_822223CC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82222398:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82222398
	if (!ctx.cr6.eq) goto loc_82222398;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822223cc
	if (ctx.cr0.eq) goto loc_822223CC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-26684
	ctx.r4.s64 = ctx.r11.s64 + -26684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x822223CC;
	sub_82228DF8(ctx, base);
loc_822223CC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-27200
	ctx.r4.s64 = ctx.r11.s64 + -27200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x822223E0;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-26676
	ctx.r4.s64 = ctx.r11.s64 + -26676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x822223F4;
	sub_82228DF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222400"))) PPC_WEAK_FUNC(sub_82222400);
PPC_FUNC_IMPL(__imp__sub_82222400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82222408;
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
	// bl 0x82229448
	ctx.lr = 0x8222242C;
	sub_82229448(ctx, base);
	// lis r11,21843
	ctx.r11.s64 = 1431502848;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17746
	ctx.r10.u64 = ctx.r11.u64 | 17746;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-26664
	ctx.r4.s64 = ctx.r11.s64 + -26664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x82222454;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-26660
	ctx.r4.s64 = ctx.r11.s64 + -26660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82222468;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-26656
	ctx.r4.s64 = ctx.r11.s64 + -26656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x8222247C;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-27476
	ctx.r4.s64 = ctx.r11.s64 + -27476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82222490;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-27208
	ctx.r4.s64 = ctx.r11.s64 + -27208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x822224A4;
	sub_82228DF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822224B0"))) PPC_WEAK_FUNC(sub_822224B0);
PPC_FUNC_IMPL(__imp__sub_822224B0) {
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
	// bl 0x82229448
	ctx.lr = 0x822224CC;
	sub_82229448(ctx, base);
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

__attribute__((alias("__imp__sub_822224F8"))) PPC_WEAK_FUNC(sub_822224F8);
PPC_FUNC_IMPL(__imp__sub_822224F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82222500;
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
	// bl 0x82229448
	ctx.lr = 0x82222528;
	sub_82229448(ctx, base);
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// xori r5,r8,1
	ctx.r5.u64 = ctx.r8.u64 ^ 1;
	// addi r4,r11,-26652
	ctx.r4.s64 = ctx.r11.s64 + -26652;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// bl 0x82228bf0
	ctx.lr = 0x8222255C;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r4,r11,-26636
	ctx.r4.s64 = ctx.r11.s64 + -26636;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82228bf0
	ctx.lr = 0x8222257C;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// addi r4,r11,-26620
	ctx.r4.s64 = ctx.r11.s64 + -26620;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82228bf0
	ctx.lr = 0x8222259C;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// addi r4,r11,-26600
	ctx.r4.s64 = ctx.r11.s64 + -26600;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82228bf0
	ctx.lr = 0x822225BC;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,-26580
	ctx.r4.s64 = ctx.r11.s64 + -26580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x822225D0;
	sub_82228BF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82222600
	if (ctx.cr6.eq) goto loc_82222600;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-29761
	ctx.r6.s64 = ctx.r11.s64 + -29761;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-26564
	ctx.r5.s64 = ctx.r11.s64 + -26564;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82222600:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26548
	ctx.r4.s64 = ctx.r11.s64 + -26548;
	// bl 0x82228df8
	ctx.lr = 0x82222614;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// addi r4,r11,-26536
	ctx.r4.s64 = ctx.r11.s64 + -26536;
	// bl 0x82228df8
	ctx.lr = 0x82222628;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r4,r11,-26524
	ctx.r4.s64 = ctx.r11.s64 + -26524;
	// bl 0x82228df8
	ctx.lr = 0x8222263C;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r4,r11,-26508
	ctx.r4.s64 = ctx.r11.s64 + -26508;
	// bl 0x82228df8
	ctx.lr = 0x82222650;
	sub_82228DF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222658"))) PPC_WEAK_FUNC(sub_82222658);
PPC_FUNC_IMPL(__imp__sub_82222658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82222660;
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
	// bl 0x82229448
	ctx.lr = 0x82222688;
	sub_82229448(ctx, base);
	// lis r11,18252
	ctx.r11.s64 = 1196163072;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21332
	ctx.r10.u64 = ctx.r11.u64 | 21332;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x822226B0;
	sub_82228BF0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x822226c8
	if (ctx.cr6.lt) goto loc_822226C8;
	// bne cr6,0x822226e0
	if (!ctx.cr6.eq) goto loc_822226E0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27412
	ctx.r5.s64 = ctx.r11.s64 + -27412;
	// b 0x822226d0
	goto loc_822226D0;
loc_822226C8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-25964
	ctx.r5.s64 = ctx.r11.s64 + -25964;
loc_822226D0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82228df8
	ctx.lr = 0x822226E0;
	sub_82228DF8(ctx, base);
loc_822226E0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r4,r11,-26652
	ctx.r4.s64 = ctx.r11.s64 + -26652;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82228bf0
	ctx.lr = 0x82222700;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// addi r4,r11,-26636
	ctx.r4.s64 = ctx.r11.s64 + -26636;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82228bf0
	ctx.lr = 0x82222720;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// addi r4,r11,-26620
	ctx.r4.s64 = ctx.r11.s64 + -26620;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82228bf0
	ctx.lr = 0x82222740;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// addi r4,r11,-26600
	ctx.r4.s64 = ctx.r11.s64 + -26600;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82228bf0
	ctx.lr = 0x82222760;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r4,r11,-26580
	ctx.r4.s64 = ctx.r11.s64 + -26580;
	// bl 0x82228bf0
	ctx.lr = 0x82222774;
	sub_82228BF0(ctx, base);
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822227a4
	if (ctx.cr6.eq) goto loc_822227A4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-29761
	ctx.r6.s64 = ctx.r11.s64 + -29761;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26564
	ctx.r5.s64 = ctx.r11.s64 + -26564;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822227A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822227A4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26548
	ctx.r4.s64 = ctx.r11.s64 + -26548;
	// bl 0x82228df8
	ctx.lr = 0x822227B8;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r4,r11,-26536
	ctx.r4.s64 = ctx.r11.s64 + -26536;
	// bl 0x82228df8
	ctx.lr = 0x822227CC;
	sub_82228DF8(ctx, base);
	// lwz r5,260(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822227e8
	if (!ctx.cr6.gt) goto loc_822227E8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// bl 0x82228bf0
	ctx.lr = 0x822227E8;
	sub_82228BF0(ctx, base);
loc_822227E8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r5,268(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27228
	ctx.r4.s64 = ctx.r11.s64 + -27228;
	// bl 0x82228bf0
	ctx.lr = 0x822227FC;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r4,r11,-26524
	ctx.r4.s64 = ctx.r11.s64 + -26524;
	// bl 0x82228df8
	ctx.lr = 0x82222810;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// addi r4,r11,-26508
	ctx.r4.s64 = ctx.r11.s64 + -26508;
	// bl 0x82228df8
	ctx.lr = 0x82222824;
	sub_82228DF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222830"))) PPC_WEAK_FUNC(sub_82222830);
PPC_FUNC_IMPL(__imp__sub_82222830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82222838;
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
	// bl 0x82229448
	ctx.lr = 0x82222850;
	sub_82229448(ctx, base);
	// lis r11,18244
	ctx.r11.s64 = 1195638784;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16724
	ctx.r10.u64 = ctx.r11.u64 | 16724;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82222878;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8222288C;
	sub_82228BF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222898"))) PPC_WEAK_FUNC(sub_82222898);
PPC_FUNC_IMPL(__imp__sub_82222898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x822228A0;
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
	// bl 0x82229448
	ctx.lr = 0x822228B8;
	sub_82229448(ctx, base);
	// lis r11,18244
	ctx.r11.s64 = 1195638784;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16724
	ctx.r10.u64 = ctx.r11.u64 | 16724;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228df8
	ctx.lr = 0x822228E0;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x822228f8
	if (ctx.cr6.lt) goto loc_822228F8;
	// bne cr6,0x82222910
	if (!ctx.cr6.eq) goto loc_82222910;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27412
	ctx.r5.s64 = ctx.r11.s64 + -27412;
	// b 0x82222900
	goto loc_82222900;
loc_822228F8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-25964
	ctx.r5.s64 = ctx.r11.s64 + -25964;
loc_82222900:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82228df8
	ctx.lr = 0x82222910;
	sub_82228DF8(ctx, base);
loc_82222910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222918"))) PPC_WEAK_FUNC(sub_82222918);
PPC_FUNC_IMPL(__imp__sub_82222918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82222920;
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
	// bl 0x82229448
	ctx.lr = 0x82222938;
	sub_82229448(ctx, base);
	// lis r11,18244
	ctx.r11.s64 = 1195638784;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16724
	ctx.r10.u64 = ctx.r11.u64 | 16724;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-28380
	ctx.r4.s64 = ctx.r11.s64 + -28380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228cf0
	ctx.lr = 0x82222960;
	sub_82228CF0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82222978
	if (ctx.cr6.lt) goto loc_82222978;
	// bne cr6,0x82222990
	if (!ctx.cr6.eq) goto loc_82222990;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27412
	ctx.r5.s64 = ctx.r11.s64 + -27412;
	// b 0x82222980
	goto loc_82222980;
loc_82222978:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-25964
	ctx.r5.s64 = ctx.r11.s64 + -25964;
loc_82222980:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82228df8
	ctx.lr = 0x82222990;
	sub_82228DF8(ctx, base);
loc_82222990:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222998"))) PPC_WEAK_FUNC(sub_82222998);
PPC_FUNC_IMPL(__imp__sub_82222998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x822229A0;
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
	// bl 0x82229448
	ctx.lr = 0x822229B8;
	sub_82229448(ctx, base);
	// lis r11,18244
	ctx.r11.s64 = 1195638784;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16724
	ctx.r10.u64 = ctx.r11.u64 | 16724;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28368
	ctx.r4.s64 = ctx.r11.s64 + -28368;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x82228cf0
	ctx.lr = 0x822229E0;
	sub_82228CF0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x822229f8
	if (ctx.cr6.lt) goto loc_822229F8;
	// bne cr6,0x82222a10
	if (!ctx.cr6.eq) goto loc_82222A10;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27412
	ctx.r5.s64 = ctx.r11.s64 + -27412;
	// b 0x82222a00
	goto loc_82222A00;
loc_822229F8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-25964
	ctx.r5.s64 = ctx.r11.s64 + -25964;
loc_82222A00:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82228df8
	ctx.lr = 0x82222A10;
	sub_82228DF8(ctx, base);
loc_82222A10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222A18"))) PPC_WEAK_FUNC(sub_82222A18);
PPC_FUNC_IMPL(__imp__sub_82222A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e48
	ctx.lr = 0x82222A20;
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
	// bl 0x82229448
	ctx.lr = 0x82222A38;
	sub_82229448(ctx, base);
	// lis r11,17223
	ctx.r11.s64 = 1128726528;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16717
	ctx.r10.u64 = ctx.r11.u64 | 16717;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r5,132(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x82228bf0
	ctx.lr = 0x82222A60;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lbz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26476
	ctx.r4.s64 = ctx.r11.s64 + -26476;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82228bf0
	ctx.lr = 0x82222A80;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r30,141
	ctx.r5.s64 = ctx.r30.s64 + 141;
	// addi r4,r11,-27208
	ctx.r4.s64 = ctx.r11.s64 + -27208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82222A94;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-26460
	ctx.r4.s64 = ctx.r11.s64 + -26460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82222AA8;
	sub_82228BF0(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r3,-12024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222AC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82222b04
	if (ctx.cr6.eq) goto loc_82222B04;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82222b2c
	if (!ctx.cr6.eq) goto loc_82222B2C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r5,528(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26440
	ctx.r4.s64 = ctx.r11.s64 + -26440;
	// bl 0x82228bf0
	ctx.lr = 0x82222AF4;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r30,532
	ctx.r5.s64 = ctx.r30.s64 + 532;
	// addi r4,r11,-26428
	ctx.r4.s64 = ctx.r11.s64 + -26428;
	// b 0x82222b24
	goto loc_82222B24;
loc_82222B04:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r5,492(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26452
	ctx.r4.s64 = ctx.r11.s64 + -26452;
	// bl 0x82228bf0
	ctx.lr = 0x82222B18;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r30,496
	ctx.r5.s64 = ctx.r30.s64 + 496;
	// addi r4,r11,-26444
	ctx.r4.s64 = ctx.r11.s64 + -26444;
loc_82222B24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82222B2C;
	sub_82228DF8(ctx, base);
loc_82222B2C:
	// lwz r11,740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82222b44
	if (!ctx.cr6.eq) goto loc_82222B44;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27372
	ctx.r5.s64 = ctx.r11.s64 + -27372;
	// b 0x82222b4c
	goto loc_82222B4C;
loc_82222B44:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27408
	ctx.r5.s64 = ctx.r11.s64 + -27408;
loc_82222B4C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26416
	ctx.r4.s64 = ctx.r11.s64 + -26416;
	// bl 0x82228df8
	ctx.lr = 0x82222B5C;
	sub_82228DF8(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82222b78
	if (ctx.cr6.lt) goto loc_82222B78;
	// bne cr6,0x82222b90
	if (!ctx.cr6.eq) goto loc_82222B90;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27412
	ctx.r5.s64 = ctx.r11.s64 + -27412;
	// b 0x82222b80
	goto loc_82222B80;
loc_82222B78:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-25964
	ctx.r5.s64 = ctx.r11.s64 + -25964;
loc_82222B80:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82228df8
	ctx.lr = 0x82222B90;
	sub_82228DF8(ctx, base);
loc_82222B90:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r5,136(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27192
	ctx.r4.s64 = ctx.r11.s64 + -27192;
	// bl 0x82228bf0
	ctx.lr = 0x82222BA4;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lbz r10,752(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 752);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26408
	ctx.r4.s64 = ctx.r11.s64 + -26408;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82228bf0
	ctx.lr = 0x82222BC4;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lbz r10,736(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 736);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26384
	ctx.r4.s64 = ctx.r11.s64 + -26384;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82228bf0
	ctx.lr = 0x82222BE4;
	sub_82228BF0(ctx, base);
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
	// bl 0x830dcee0
	ctx.lr = 0x82222BFC;
	sub_830DCEE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82222c4c
	if (ctx.cr0.eq) goto loc_82222C4C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r7,r3,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// rlwinm r6,r3,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// rlwinm r5,r3,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// addi r4,r11,-26376
	ctx.r4.s64 = ctx.r11.s64 + -26376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x82222C24;
	sub_82E2B400(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,276(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// addi r4,r11,-26360
	ctx.r4.s64 = ctx.r11.s64 + -26360;
	// bl 0x82228bf0
	ctx.lr = 0x82222C38;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26348
	ctx.r4.s64 = ctx.r11.s64 + -26348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82222C4C;
	sub_82228DF8(ctx, base);
loc_82222C4C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r5,744(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26340
	ctx.r4.s64 = ctx.r11.s64 + -26340;
	// bl 0x82228bf0
	ctx.lr = 0x82222C60;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,748(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	// addi r4,r11,-26328
	ctx.r4.s64 = ctx.r11.s64 + -26328;
	// bl 0x82228bf0
	ctx.lr = 0x82222C74;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-26312
	ctx.r4.s64 = ctx.r11.s64 + -26312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82222C88;
	sub_82228BF0(ctx, base);
	// lbz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 280);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82222ca8
	if (ctx.cr0.eq) goto loc_82222CA8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-26296
	ctx.r4.s64 = ctx.r11.s64 + -26296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82222CA8;
	sub_82228BF0(ctx, base);
loc_82222CA8:
	// addic. r5,r30,300
	ctx.xer.ca = ctx.r30.u32 > 4294966995;
	ctx.r5.s64 = ctx.r30.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82222cd4
	if (ctx.cr0.eq) goto loc_82222CD4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26284
	ctx.r4.s64 = ctx.r11.s64 + -26284;
	// bl 0x82228df8
	ctx.lr = 0x82222CC0;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r30,364
	ctx.r5.s64 = ctx.r30.s64 + 364;
	// addi r4,r11,-26276
	ctx.r4.s64 = ctx.r11.s64 + -26276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82222CD4;
	sub_82228DF8(ctx, base);
loc_82222CD4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-29761
	ctx.r6.s64 = ctx.r11.s64 + -29761;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26268
	ctx.r5.s64 = ctx.r11.s64 + -26268;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// addi r4,r11,-26260
	ctx.r4.s64 = ctx.r11.s64 + -26260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82222D10;
	sub_82228DF8(ctx, base);
	// lwz r29,288(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// lwz r25,292(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x82222ecc
	if (ctx.cr0.eq) goto loc_82222ECC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82222ecc
	if (ctx.cr6.eq) goto loc_82222ECC;
	// bl 0x82213798
	ctx.lr = 0x82222D2C;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82222D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stb r26,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r26.u8);
	// beq cr6,0x82222e88
	if (ctx.cr6.eq) goto loc_82222E88;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r20,r25,-1
	ctx.r20.s64 = ctx.r25.s64 + -1;
	// addi r22,r11,-26244
	ctx.r22.s64 = ctx.r11.s64 + -26244;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r24,r11,-27624
	ctx.r24.s64 = ctx.r11.s64 + -27624;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r21,r11,-26248
	ctx.r21.s64 = ctx.r11.s64 + -26248;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r23,r11,-28220
	ctx.r23.s64 = ctx.r11.s64 + -28220;
loc_82222D7C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82e2b400
	ctx.lr = 0x82222D8C;
	sub_82E2B400(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82222D94:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82222d94
	if (!ctx.cr6.eq) goto loc_82222D94;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82222DA8:
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
	// bne 0x82222da8
	if (!ctx.cr0.eq) goto loc_82222DA8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_82222DC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82222dc8
	if (!ctx.cr6.eq) goto loc_82222DC8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82222DDC:
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
	// bne 0x82222ddc
	if (!ctx.cr0.eq) goto loc_82222DDC;
	// addi r27,r26,1
	ctx.r27.s64 = ctx.r26.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82e2b400
	ctx.lr = 0x82222E08;
	sub_82E2B400(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82222E10:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82222e10
	if (!ctx.cr6.eq) goto loc_82222E10;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82222E24:
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
	// bne 0x82222e24
	if (!ctx.cr0.eq) goto loc_82222E24;
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x82222e78
	if (!ctx.cr6.lt) goto loc_82222E78;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82222E4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82222e4c
	if (!ctx.cr6.eq) goto loc_82222E4C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82222E60:
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
	// bne 0x82222e60
	if (!ctx.cr0.eq) goto loc_82222E60;
loc_82222E78:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82222d7c
	if (ctx.cr6.lt) goto loc_82222D7C;
loc_82222E88:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-26240
	ctx.r4.s64 = ctx.r11.s64 + -26240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82222E9C;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,296(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// addi r4,r11,-26228
	ctx.r4.s64 = ctx.r11.s64 + -26228;
	// bl 0x82228bf0
	ctx.lr = 0x82222EB0;
	sub_82228BF0(ctx, base);
	// bl 0x82213798
	ctx.lr = 0x82222EB4;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82222ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82222ECC:
	// lwz r11,724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82222efc
	if (ctx.cr6.lt) goto loc_82222EFC;
	// beq cr6,0x82222ef0
	if (ctx.cr6.eq) goto loc_82222EF0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82222f14
	if (!ctx.cr6.lt) goto loc_82222F14;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
	// b 0x82222f04
	goto loc_82222F04;
loc_82222EF0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26480
	ctx.r5.s64 = ctx.r11.s64 + -26480;
	// b 0x82222f04
	goto loc_82222F04;
loc_82222EFC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26492
	ctx.r5.s64 = ctx.r11.s64 + -26492;
loc_82222F04:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26488
	ctx.r4.s64 = ctx.r11.s64 + -26488;
	// bl 0x82228df8
	ctx.lr = 0x82222F14;
	sub_82228DF8(ctx, base);
loc_82222F14:
	// addic. r5,r30,596
	ctx.xer.ca = ctx.r30.u32 > 4294966699;
	ctx.r5.s64 = ctx.r30.s64 + 596;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82222f2c
	if (ctx.cr0.eq) goto loc_82222F2C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26212
	ctx.r4.s64 = ctx.r11.s64 + -26212;
	// bl 0x82228df8
	ctx.lr = 0x82222F2C;
	sub_82228DF8(ctx, base);
loc_82222F2C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// ld r5,728(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 728);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26208
	ctx.r4.s64 = ctx.r11.s64 + -26208;
	// bl 0x82228cf0
	ctx.lr = 0x82222F40;
	sub_82228CF0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82e28e98
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82222F48"))) PPC_WEAK_FUNC(sub_82222F48);
PPC_FUNC_IMPL(__imp__sub_82222F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82222F50;
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
	// bl 0x82229448
	ctx.lr = 0x82222F74;
	sub_82229448(ctx, base);
	// lis r11,21831
	ctx.r11.s64 = 1430716416;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16717
	ctx.r10.u64 = ctx.r11.u64 | 16717;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82222F9C;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82222FB0;
	sub_82228BF0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82222fdc
	if (ctx.cr6.lt) goto loc_82222FDC;
	// beq cr6,0x82222fd0
	if (ctx.cr6.eq) goto loc_82222FD0;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x82222ff4
	if (!ctx.cr6.lt) goto loc_82222FF4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
	// b 0x82222fe4
	goto loc_82222FE4;
loc_82222FD0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26480
	ctx.r5.s64 = ctx.r11.s64 + -26480;
	// b 0x82222fe4
	goto loc_82222FE4;
loc_82222FDC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26492
	ctx.r5.s64 = ctx.r11.s64 + -26492;
loc_82222FE4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26488
	ctx.r4.s64 = ctx.r11.s64 + -26488;
	// bl 0x82228df8
	ctx.lr = 0x82222FF4;
	sub_82228DF8(ctx, base);
loc_82222FF4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26340
	ctx.r4.s64 = ctx.r11.s64 + -26340;
	// bl 0x82228bf0
	ctx.lr = 0x82223008;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r11,-26328
	ctx.r4.s64 = ctx.r11.s64 + -26328;
	// bl 0x82228bf0
	ctx.lr = 0x8222301C;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r4,r11,-26312
	ctx.r4.s64 = ctx.r11.s64 + -26312;
	// bl 0x82228bf0
	ctx.lr = 0x82223030;
	sub_82228BF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223038"))) PPC_WEAK_FUNC(sub_82223038);
PPC_FUNC_IMPL(__imp__sub_82223038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82223040;
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
	// bl 0x82229448
	ctx.lr = 0x82223068;
	sub_82229448(ctx, base);
	// lis r11,21831
	ctx.r11.s64 = 1430716416;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16717
	ctx.r10.u64 = ctx.r11.u64 | 16717;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82223090;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x822230A4;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-27208
	ctx.r4.s64 = ctx.r11.s64 + -27208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x822230B8;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822230e8
	if (ctx.cr6.eq) goto loc_822230E8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-29761
	ctx.r6.s64 = ctx.r11.s64 + -29761;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-26268
	ctx.r5.s64 = ctx.r11.s64 + -26268;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822230E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822230E8:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x82223114
	if (ctx.cr6.lt) goto loc_82223114;
	// beq cr6,0x82223108
	if (ctx.cr6.eq) goto loc_82223108;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bge cr6,0x8222312c
	if (!ctx.cr6.lt) goto loc_8222312C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
	// b 0x8222311c
	goto loc_8222311C;
loc_82223108:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26480
	ctx.r5.s64 = ctx.r11.s64 + -26480;
	// b 0x8222311c
	goto loc_8222311C;
loc_82223114:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26492
	ctx.r5.s64 = ctx.r11.s64 + -26492;
loc_8222311C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26488
	ctx.r4.s64 = ctx.r11.s64 + -26488;
	// bl 0x82228df8
	ctx.lr = 0x8222312C;
	sub_82228DF8(ctx, base);
loc_8222312C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82223148
	if (ctx.cr6.eq) goto loc_82223148;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,-26212
	ctx.r4.s64 = ctx.r11.s64 + -26212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82223148;
	sub_82228DF8(ctx, base);
loc_82223148:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223150"))) PPC_WEAK_FUNC(sub_82223150);
PPC_FUNC_IMPL(__imp__sub_82223150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82223158;
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
	// bl 0x82229448
	ctx.lr = 0x82223174;
	sub_82229448(ctx, base);
	// lis r11,21831
	ctx.r11.s64 = 1430716416;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17477
	ctx.r10.u64 = ctx.r11.u64 | 17477;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x8222319C;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x822231B0;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-29761
	ctx.r6.s64 = ctx.r11.s64 + -29761;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-26196
	ctx.r5.s64 = ctx.r11.s64 + -26196;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822231D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822231E0"))) PPC_WEAK_FUNC(sub_822231E0);
PPC_FUNC_IMPL(__imp__sub_822231E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x822231E8;
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
	// bl 0x82229448
	ctx.lr = 0x8222320C;
	sub_82229448(ctx, base);
	// lis r11,21840
	ctx.r11.s64 = 1431306240;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,19521
	ctx.r10.u64 = ctx.r11.u64 | 19521;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82223234;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223248;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-27176
	ctx.r4.s64 = ctx.r11.s64 + -27176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8222325C;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-26192
	ctx.r4.s64 = ctx.r11.s64 + -26192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223270;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-29761
	ctx.r6.s64 = ctx.r11.s64 + -29761;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-26188
	ctx.r5.s64 = ctx.r11.s64 + -26188;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822232A0"))) PPC_WEAK_FUNC(sub_822232A0);
PPC_FUNC_IMPL(__imp__sub_822232A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x822232A8;
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
	// bl 0x82229448
	ctx.lr = 0x822232C4;
	sub_82229448(ctx, base);
	// lis r11,21826
	ctx.r11.s64 = 1430388736;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21057
	ctx.r10.u64 = ctx.r11.u64 | 21057;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x822232EC;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223300;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r4,r11,-26184
	ctx.r4.s64 = ctx.r11.s64 + -26184;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82228bf0
	ctx.lr = 0x82223320;
	sub_82228BF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223328"))) PPC_WEAK_FUNC(sub_82223328);
PPC_FUNC_IMPL(__imp__sub_82223328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82223330;
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
	// bl 0x82229448
	ctx.lr = 0x82223354;
	sub_82229448(ctx, base);
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
	// beq cr6,0x82223398
	if (ctx.cr6.eq) goto loc_82223398;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-29761
	ctx.r6.s64 = ctx.r11.s64 + -29761;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-26176
	ctx.r5.s64 = ctx.r11.s64 + -26176;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82223398:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-26460
	ctx.r4.s64 = ctx.r11.s64 + -26460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x822233AC;
	sub_82228BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c1a058
	ctx.lr = 0x822233B4;
	sub_82C1A058(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r4,r11,-26168
	ctx.r4.s64 = ctx.r11.s64 + -26168;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229998
	ctx.lr = 0x822233CC;
	sub_82229998(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82223434
	if (ctx.cr6.eq) goto loc_82223434;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82223434
	if (ctx.cr6.eq) goto loc_82223434;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-26156
	ctx.r4.s64 = ctx.r11.s64 + -26156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x822233F0;
	sub_82228BF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82223434
	if (ctx.cr6.eq) goto loc_82223434;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r28,r11,-26144
	ctx.r28.s64 = ctx.r11.s64 + -26144;
loc_82223404:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e2b400
	ctx.lr = 0x82223414;
	sub_82E2B400(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x82228cf0
	ctx.lr = 0x82223424;
	sub_82228CF0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82223404
	if (ctx.cr6.lt) goto loc_82223404;
loc_82223434:
	// ld r5,528(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 528);
	// cmpdi cr6,r5,0
	ctx.cr6.compare<int64_t>(ctx.r5.s64, 0, ctx.xer);
	// beq cr6,0x82223450
	if (ctx.cr6.eq) goto loc_82223450;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26132
	ctx.r4.s64 = ctx.r11.s64 + -26132;
	// bl 0x82228cf0
	ctx.lr = 0x82223450;
	sub_82228CF0(ctx, base);
loc_82223450:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82223464
	if (!ctx.cr6.eq) goto loc_82223464;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27412
	ctx.r5.s64 = ctx.r11.s64 + -27412;
	// b 0x82223474
	goto loc_82223474;
loc_82223464:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x82223484
	if (!ctx.cr6.eq) goto loc_82223484;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26492
	ctx.r5.s64 = ctx.r11.s64 + -26492;
loc_82223474:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26120
	ctx.r4.s64 = ctx.r11.s64 + -26120;
	// bl 0x82228df8
	ctx.lr = 0x82223484;
	sub_82228DF8(ctx, base);
loc_82223484:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223490"))) PPC_WEAK_FUNC(sub_82223490);
PPC_FUNC_IMPL(__imp__sub_82223490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82223498;
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
	ctx.lr = 0x822234D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x822234EC;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223500;
	sub_82228BF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223508"))) PPC_WEAK_FUNC(sub_82223508);
PPC_FUNC_IMPL(__imp__sub_82223508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82223510;
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
	ctx.lr = 0x82223550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28508
	ctx.r4.s64 = ctx.r11.s64 + -28508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82223564;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-26112
	ctx.r4.s64 = ctx.r11.s64 + -26112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82223578;
	sub_82228DF8(ctx, base);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82223590
	if (ctx.cr6.lt) goto loc_82223590;
	// bne cr6,0x822235a8
	if (!ctx.cr6.eq) goto loc_822235A8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27412
	ctx.r5.s64 = ctx.r11.s64 + -27412;
	// b 0x82223598
	goto loc_82223598;
loc_82223590:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-25964
	ctx.r5.s64 = ctx.r11.s64 + -25964;
loc_82223598:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82228df8
	ctx.lr = 0x822235A8;
	sub_82228DF8(ctx, base);
loc_822235A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822235B0"))) PPC_WEAK_FUNC(sub_822235B0);
PPC_FUNC_IMPL(__imp__sub_822235B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x822235B8;
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
	ctx.lr = 0x822235F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28380
	ctx.r4.s64 = ctx.r11.s64 + -28380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228cf0
	ctx.lr = 0x8222360C;
	sub_82228CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-26104
	ctx.r4.s64 = ctx.r11.s64 + -26104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228cf0
	ctx.lr = 0x82223620;
	sub_82228CF0(ctx, base);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82223638
	if (ctx.cr6.lt) goto loc_82223638;
	// bne cr6,0x82223650
	if (!ctx.cr6.eq) goto loc_82223650;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27412
	ctx.r5.s64 = ctx.r11.s64 + -27412;
	// b 0x82223640
	goto loc_82223640;
loc_82223638:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-25964
	ctx.r5.s64 = ctx.r11.s64 + -25964;
loc_82223640:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82228df8
	ctx.lr = 0x82223650;
	sub_82228DF8(ctx, base);
loc_82223650:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223658"))) PPC_WEAK_FUNC(sub_82223658);
PPC_FUNC_IMPL(__imp__sub_82223658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82223660;
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
	ctx.lr = 0x822236A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r4,r11,-28368
	ctx.r4.s64 = ctx.r11.s64 + -28368;
	// bl 0x82228cf0
	ctx.lr = 0x822236B4;
	sub_82228CF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r4,r11,-26096
	ctx.r4.s64 = ctx.r11.s64 + -26096;
	// bl 0x82228cf0
	ctx.lr = 0x822236C8;
	sub_82228CF0(ctx, base);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x822236e0
	if (ctx.cr6.lt) goto loc_822236E0;
	// bne cr6,0x822236f8
	if (!ctx.cr6.eq) goto loc_822236F8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27412
	ctx.r5.s64 = ctx.r11.s64 + -27412;
	// b 0x822236e8
	goto loc_822236E8;
loc_822236E0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-25964
	ctx.r5.s64 = ctx.r11.s64 + -25964;
loc_822236E8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82228df8
	ctx.lr = 0x822236F8;
	sub_82228DF8(ctx, base);
loc_822236F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223700"))) PPC_WEAK_FUNC(sub_82223700);
PPC_FUNC_IMPL(__imp__sub_82223700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82223708;
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
	// bl 0x82229448
	ctx.lr = 0x82223720;
	sub_82229448(ctx, base);
	// lis r11,17731
	ctx.r11.s64 = 1162018816;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,20044
	ctx.r10.u64 = ctx.r11.u64 | 20044;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82223748;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8222375C;
	sub_82228BF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223768"))) PPC_WEAK_FUNC(sub_82223768);
PPC_FUNC_IMPL(__imp__sub_82223768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82223770;
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
	// bl 0x82229448
	ctx.lr = 0x82223794;
	sub_82229448(ctx, base);
	// lis r11,17735
	ctx.r11.s64 = 1162280960;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21075
	ctx.r10.u64 = ctx.r11.u64 | 21075;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x822237BC;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x822237D0;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r30,r28,24
	ctx.r30.u64 = ctx.r28.u32 & 0xFF;
	// addi r4,r11,-26088
	ctx.r4.s64 = ctx.r11.s64 + -26088;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82228bf0
	ctx.lr = 0x822237F0;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-27176
	ctx.r4.s64 = ctx.r11.s64 + -27176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223804;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-27624
	ctx.r4.s64 = ctx.r11.s64 + -27624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x82223818;
	sub_82E2B400(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82223834
	if (!ctx.cr6.eq) goto loc_82223834;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27184
	ctx.r4.s64 = ctx.r11.s64 + -27184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82223834;
	sub_82228DF8(ctx, base);
loc_82223834:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223840"))) PPC_WEAK_FUNC(sub_82223840);
PPC_FUNC_IMPL(__imp__sub_82223840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82223848;
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
	// bl 0x82229448
	ctx.lr = 0x8222386C;
	sub_82229448(ctx, base);
	// lis r11,20549
	ctx.r11.s64 = 1346699264;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,20052
	ctx.r10.u64 = ctx.r11.u64 | 20052;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82223894;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x822238A8;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-27176
	ctx.r4.s64 = ctx.r11.s64 + -27176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x822238BC;
	sub_82228BF0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82223914
	if (!ctx.cr6.gt) goto loc_82223914;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r28,r11,-26080
	ctx.r28.s64 = ctx.r11.s64 + -26080;
loc_822238D0:
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
	// bl 0x82e29500
	ctx.lr = 0x822238E8;
	sub_82E29500(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82e2b400
	ctx.lr = 0x822238F8;
	sub_82E2B400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82228df8
	ctx.lr = 0x82223908;
	sub_82228DF8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x822238d0
	if (!ctx.cr0.eq) goto loc_822238D0;
loc_82223914:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223920"))) PPC_WEAK_FUNC(sub_82223920);
PPC_FUNC_IMPL(__imp__sub_82223920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82223928;
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
	// bl 0x82229448
	ctx.lr = 0x82223944;
	sub_82229448(ctx, base);
	// lis r11,20556
	ctx.r11.s64 = 1347158016;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,22100
	ctx.r10.u64 = ctx.r11.u64 | 22100;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x8222396C;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223980;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27176
	ctx.r4.s64 = ctx.r11.s64 + -27176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223994;
	sub_82228BF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822239A0"))) PPC_WEAK_FUNC(sub_822239A0);
PPC_FUNC_IMPL(__imp__sub_822239A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x822239A8;
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
	// bl 0x82229448
	ctx.lr = 0x822239C0;
	sub_82229448(ctx, base);
	// lis r11,21063
	ctx.r11.s64 = 1380384768;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,16717
	ctx.r10.u64 = ctx.r11.u64 | 16717;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x822239E8;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x822239FC;
	sub_82228BF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223A08"))) PPC_WEAK_FUNC(sub_82223A08);
PPC_FUNC_IMPL(__imp__sub_82223A08) {
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
	// bl 0x82229448
	ctx.lr = 0x82223A2C;
	sub_82229448(ctx, base);
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
	// blt cr6,0x82223a58
	if (ctx.cr6.lt) goto loc_82223A58;
	// bne cr6,0x82223a70
	if (!ctx.cr6.eq) goto loc_82223A70;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27412
	ctx.r5.s64 = ctx.r11.s64 + -27412;
	// b 0x82223a60
	goto loc_82223A60;
loc_82223A58:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-25964
	ctx.r5.s64 = ctx.r11.s64 + -25964;
loc_82223A60:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82228df8
	ctx.lr = 0x82223A70;
	sub_82228DF8(ctx, base);
loc_82223A70:
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

__attribute__((alias("__imp__sub_82223A88"))) PPC_WEAK_FUNC(sub_82223A88);
PPC_FUNC_IMPL(__imp__sub_82223A88) {
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
	// bl 0x82229448
	ctx.lr = 0x82223AA4;
	sub_82229448(ctx, base);
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

__attribute__((alias("__imp__sub_82223AD0"))) PPC_WEAK_FUNC(sub_82223AD0);
PPC_FUNC_IMPL(__imp__sub_82223AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82223AD8;
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
	// bl 0x82229448
	ctx.lr = 0x82223AFC;
	sub_82229448(ctx, base);
	// lis r11,16706
	ctx.r11.s64 = 1094844416;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21843
	ctx.r10.u64 = ctx.r11.u64 | 21843;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82223B24;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223B38;
	sub_82228BF0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82223b54
	if (ctx.cr6.eq) goto loc_82223B54;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27176
	ctx.r4.s64 = ctx.r11.s64 + -27176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223B54;
	sub_82228BF0(ctx, base);
loc_82223B54:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82223bc0
	if (ctx.cr6.eq) goto loc_82223BC0;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x82223bb4
	if (ctx.cr6.eq) goto loc_82223BB4;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x82223ba8
	if (ctx.cr6.eq) goto loc_82223BA8;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// beq cr6,0x82223b9c
	if (ctx.cr6.eq) goto loc_82223B9C;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// beq cr6,0x82223b90
	if (ctx.cr6.eq) goto loc_82223B90;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// bne cr6,0x82223bd8
	if (!ctx.cr6.eq) goto loc_82223BD8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26020
	ctx.r5.s64 = ctx.r11.s64 + -26020;
	// b 0x82223bc8
	goto loc_82223BC8;
loc_82223B90:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26028
	ctx.r5.s64 = ctx.r11.s64 + -26028;
	// b 0x82223bc8
	goto loc_82223BC8;
loc_82223B9C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26036
	ctx.r5.s64 = ctx.r11.s64 + -26036;
	// b 0x82223bc8
	goto loc_82223BC8;
loc_82223BA8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26048
	ctx.r5.s64 = ctx.r11.s64 + -26048;
	// b 0x82223bc8
	goto loc_82223BC8;
loc_82223BB4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26060
	ctx.r5.s64 = ctx.r11.s64 + -26060;
	// b 0x82223bc8
	goto loc_82223BC8;
loc_82223BC0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-26072
	ctx.r5.s64 = ctx.r11.s64 + -26072;
loc_82223BC8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82228df8
	ctx.lr = 0x82223BD8;
	sub_82228DF8(ctx, base);
loc_82223BD8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82223c1c
	if (ctx.cr6.eq) goto loc_82223C1C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82223BE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82223be8
	if (!ctx.cr6.eq) goto loc_82223BE8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82223c1c
	if (ctx.cr0.eq) goto loc_82223C1C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-27184
	ctx.r4.s64 = ctx.r11.s64 + -27184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82223C1C;
	sub_82228DF8(ctx, base);
loc_82223C1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223C28"))) PPC_WEAK_FUNC(sub_82223C28);
PPC_FUNC_IMPL(__imp__sub_82223C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82223C30;
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
	// bl 0x82229448
	ctx.lr = 0x82223C58;
	sub_82229448(ctx, base);
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
	// bl 0x8222cb70
	ctx.lr = 0x82223C8C;
	sub_8222CB70(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223CA0;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223CB4;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26012
	ctx.r4.s64 = ctx.r11.s64 + -26012;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82223CC8;
	sub_82228DF8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,-26004
	ctx.r4.s64 = ctx.r11.s64 + -26004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223CDC;
	sub_82228BF0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82223d08
	if (ctx.cr6.lt) goto loc_82223D08;
	// beq cr6,0x82223cfc
	if (ctx.cr6.eq) goto loc_82223CFC;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x82223d20
	if (!ctx.cr6.lt) goto loc_82223D20;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-25980
	ctx.r5.s64 = ctx.r11.s64 + -25980;
	// b 0x82223d10
	goto loc_82223D10;
loc_82223CFC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-25984
	ctx.r5.s64 = ctx.r11.s64 + -25984;
	// b 0x82223d10
	goto loc_82223D10;
loc_82223D08:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-25996
	ctx.r5.s64 = ctx.r11.s64 + -25996;
loc_82223D10:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25992
	ctx.r4.s64 = ctx.r11.s64 + -25992;
	// bl 0x82228df8
	ctx.lr = 0x82223D20;
	sub_82228DF8(ctx, base);
loc_82223D20:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223D28"))) PPC_WEAK_FUNC(sub_82223D28);
PPC_FUNC_IMPL(__imp__sub_82223D28) {
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
	// bl 0x82229448
	ctx.lr = 0x82223D4C;
	sub_82229448(ctx, base);
	// lis r11,20547
	ctx.r11.s64 = 1346568192;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,20052
	ctx.r10.u64 = ctx.r11.u64 | 20052;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82223D74;
	sub_82228BF0(ctx, base);
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

__attribute__((alias("__imp__sub_82223D90"))) PPC_WEAK_FUNC(sub_82223D90);
PPC_FUNC_IMPL(__imp__sub_82223D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82223D98;
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
	// bl 0x82229448
	ctx.lr = 0x82223DB4;
	sub_82229448(ctx, base);
	// lis r11,18508
	ctx.r11.s64 = 1212940288;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21332
	ctx.r10.u64 = ctx.r11.u64 | 21332;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82223DDC;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223DF0;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27164
	ctx.r4.s64 = ctx.r11.s64 + -27164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223E04;
	sub_82228BF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223E10"))) PPC_WEAK_FUNC(sub_82223E10);
PPC_FUNC_IMPL(__imp__sub_82223E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82223E18;
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
	// bl 0x82229448
	ctx.lr = 0x82223E30;
	sub_82229448(ctx, base);
	// lis r11,18497
	ctx.r11.s64 = 1212219392;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17227
	ctx.r10.u64 = ctx.r11.u64 | 17227;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82223E58;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223E6C;
	sub_82228BF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223E78"))) PPC_WEAK_FUNC(sub_82223E78);
PPC_FUNC_IMPL(__imp__sub_82223E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82223E80;
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
	// bl 0x82229448
	ctx.lr = 0x82223EA0;
	sub_82229448(ctx, base);
	// lis r11,18520
	ctx.r11.s64 = 1213726720;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,18002
	ctx.r10.u64 = ctx.r11.u64 | 18002;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82223EC8;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223EDC;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27176
	ctx.r4.s64 = ctx.r11.s64 + -27176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223EF0;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// addi r4,r11,-27172
	ctx.r4.s64 = ctx.r11.s64 + -27172;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82228bf0
	ctx.lr = 0x82223F10;
	sub_82228BF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82223F18"))) PPC_WEAK_FUNC(sub_82223F18);
PPC_FUNC_IMPL(__imp__sub_82223F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82223F20;
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
	// bl 0x82229448
	ctx.lr = 0x82223F44;
	sub_82229448(ctx, base);
	// lis r11,18516
	ctx.r11.s64 = 1213464576;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21075
	ctx.r10.u64 = ctx.r11.u64 | 21075;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82223F6C;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223F80;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-26460
	ctx.r4.s64 = ctx.r11.s64 + -26460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82223F94;
	sub_82228BF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82223fb0
	if (ctx.cr6.eq) goto loc_82223FB0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26208
	ctx.r4.s64 = ctx.r11.s64 + -26208;
	// bl 0x82228cf0
	ctx.lr = 0x82223FB0;
	sub_82228CF0(ctx, base);
loc_82223FB0:
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
	// bl 0x830dcee0
	ctx.lr = 0x82223FC8;
	sub_830DCEE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82224018
	if (ctx.cr0.eq) goto loc_82224018;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r7,r3,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// rlwinm r6,r3,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// rlwinm r5,r3,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// addi r4,r11,-26376
	ctx.r4.s64 = ctx.r11.s64 + -26376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x82223FF0;
	sub_82E2B400(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-26360
	ctx.r4.s64 = ctx.r11.s64 + -26360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82224004;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26348
	ctx.r4.s64 = ctx.r11.s64 + -26348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82224018;
	sub_82228DF8(ctx, base);
loc_82224018:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224020"))) PPC_WEAK_FUNC(sub_82224020);
PPC_FUNC_IMPL(__imp__sub_82224020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82224028;
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
	// bl 0x82229448
	ctx.lr = 0x82224048;
	sub_82229448(ctx, base);
	// lis r11,20811
	ctx.r11.s64 = 1363869696;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17227
	ctx.r10.u64 = ctx.r11.u64 | 17227;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82224070;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82224084;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27176
	ctx.r4.s64 = ctx.r11.s64 + -27176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82224098;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-27624
	ctx.r4.s64 = ctx.r11.s64 + -27624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x822240AC;
	sub_82E2B400(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27184
	ctx.r4.s64 = ctx.r11.s64 + -27184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x822240C0;
	sub_82228DF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822240C8"))) PPC_WEAK_FUNC(sub_822240C8);
PPC_FUNC_IMPL(__imp__sub_822240C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x822240D0;
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
	// bl 0x82229448
	ctx.lr = 0x822240EC;
	sub_82229448(ctx, base);
	// lis r11,17489
	ctx.r11.s64 = 1146159104;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,17735
	ctx.r10.u64 = ctx.r11.u64 | 17735;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82224114;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x82224128;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-27176
	ctx.r4.s64 = ctx.r11.s64 + -27176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x8222413C;
	sub_82228BF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224148"))) PPC_WEAK_FUNC(sub_82224148);
PPC_FUNC_IMPL(__imp__sub_82224148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82224150;
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
	// bl 0x82229448
	ctx.lr = 0x82224170;
	sub_82229448(ctx, base);
	// lis r11,21841
	ctx.r11.s64 = 1431371776;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r11,21829
	ctx.r10.u64 = ctx.r11.u64 | 21829;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82228bf0
	ctx.lr = 0x82224198;
	sub_82228BF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bf0
	ctx.lr = 0x822241AC;
	sub_82228BF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// beq cr6,0x82224250
	if (ctx.cr6.eq) goto loc_82224250;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r29,r11,-25976
	ctx.r29.s64 = ctx.r11.s64 + -25976;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r26,r11,-27624
	ctx.r26.s64 = ctx.r11.s64 + -27624;
loc_822241CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x822241e4
	if (!ctx.cr6.eq) goto loc_822241E4;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x822241f0
	goto loc_822241F0;
loc_822241E4:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
loc_822241F0:
	// bl 0x82e2b400
	ctx.lr = 0x822241F4;
	sub_82E2B400(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_822241FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822241fc
	if (!ctx.cr6.eq) goto loc_822241FC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82224210:
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
	// bne 0x82224210
	if (!ctx.cr0.eq) goto loc_82224210;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822241cc
	if (ctx.cr6.lt) goto loc_822241CC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82224250
	if (ctx.cr6.eq) goto loc_82224250;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-25972
	ctx.r4.s64 = ctx.r11.s64 + -25972;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228df8
	ctx.lr = 0x82224250;
	sub_82228DF8(ctx, base);
loc_82224250:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224258"))) PPC_WEAK_FUNC(sub_82224258);
PPC_FUNC_IMPL(__imp__sub_82224258) {
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
	ctx.lr = 0x8222427C;
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

__attribute__((alias("__imp__sub_82224290"))) PPC_WEAK_FUNC(sub_82224290);
PPC_FUNC_IMPL(__imp__sub_82224290) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x822242cc
	if (ctx.cr6.eq) goto loc_822242CC;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822242cc
	if (ctx.cr6.eq) goto loc_822242CC;
loc_822242B0:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822242d4
	if (ctx.cr6.eq) goto loc_822242D4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822242b0
	if (!ctx.cr0.eq) goto loc_822242B0;
loc_822242CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822242D4:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822242E0"))) PPC_WEAK_FUNC(sub_822242E0);
PPC_FUNC_IMPL(__imp__sub_822242E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x822242E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822243e0
	ctx.lr = 0x822242F8;
	sub_822243E0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,28136
	ctx.r29.s64 = ctx.r11.s64 + 28136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// stb r27,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r27.u8);
	// bl 0x82228b60
	ctx.lr = 0x82224318;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82224330
	if (ctx.cr0.eq) goto loc_82224330;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82224328;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82224334
	goto loc_82224334;
loc_82224330:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82224334:
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
	// bl 0x822293e0
	ctx.lr = 0x8222434C;
	sub_822293E0(ctx, base);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// li r6,37
	ctx.r6.s64 = 37;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822293e0
	ctx.lr = 0x82224360;
	sub_822293E0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822103f8
	ctx.lr = 0x82224370;
	sub_822103F8(ctx, base);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822293e0
	ctx.lr = 0x82224384;
	sub_822293E0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x822243b4
	if (ctx.cr6.eq) goto loc_822243B4;
	// cmpwi cr6,r11,79
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 79, ctx.xer);
	// beq cr6,0x822243ac
	if (ctx.cr6.eq) goto loc_822243AC;
	// cmpwi cr6,r11,87
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 87, ctx.xer);
	// bne cr6,0x822243ac
	if (!ctx.cr6.eq) goto loc_822243AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822243b8
	goto loc_822243B8;
loc_822243AC:
	// stw r27,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r27.u32);
	// b 0x822243bc
	goto loc_822243BC;
loc_822243B4:
	// li r11,2
	ctx.r11.s64 = 2;
loc_822243B8:
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
loc_822243BC:
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r31,212
	ctx.r5.s64 = ctx.r31.s64 + 212;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822293e0
	ctx.lr = 0x822243D0;
	sub_822293E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822243E0"))) PPC_WEAK_FUNC(sub_822243E0);
PPC_FUNC_IMPL(__imp__sub_822243E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x822243E8;
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
	// addi r29,r11,28148
	ctx.r29.s64 = ctx.r11.s64 + 28148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// bl 0x82228b60
	ctx.lr = 0x8222440C;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82224424
	if (ctx.cr0.eq) goto loc_82224424;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x8222441C;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82224428
	goto loc_82224428;
loc_82224424:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82224428:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82228b60
	ctx.lr = 0x82224438;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82224450
	if (ctx.cr0.eq) goto loc_82224450;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82224448;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82224454
	goto loc_82224454;
loc_82224450:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82224454:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224468"))) PPC_WEAK_FUNC(sub_82224468);
PPC_FUNC_IMPL(__imp__sub_82224468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82224470;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x822243e0
	ctx.lr = 0x82224480;
	sub_822243E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-24056
	ctx.r11.s64 = ctx.r11.s64 + -24056;
	// addi r30,r10,28280
	ctx.r30.s64 = ctx.r10.s64 + 28280;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r6,r30,-29233
	ctx.r6.s64 = ctx.r30.s64 + -29233;
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
	// bl 0x82214cc0
	ctx.lr = 0x822244C0;
	sub_82214CC0(ctx, base);
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r31,46
	ctx.r5.s64 = ctx.r31.s64 + 46;
	// bl 0x822293e0
	ctx.lr = 0x822244D4;
	sub_822293E0(ctx, base);
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
	// bl 0x822293e0
	ctx.lr = 0x822244EC;
	sub_822293E0(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82224530
	if (ctx.cr0.eq) goto loc_82224530;
	// addi r10,r30,-108
	ctx.r10.s64 = ctx.r30.s64 + -108;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82224500:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82224524
	if (ctx.cr0.eq) goto loc_82224524;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82224500
	if (ctx.cr6.eq) goto loc_82224500;
loc_82224524:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82224530
	if (!ctx.cr0.eq) goto loc_82224530;
	// stw r25,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r25.u32);
loc_82224530:
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
	// bl 0x822293e0
	ctx.lr = 0x82224548;
	sub_822293E0(ctx, base);
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82228b60
	ctx.lr = 0x82224554;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222456c
	if (ctx.cr0.eq) goto loc_8222456C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82224564;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82224570
	goto loc_82224570;
loc_8222456C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82224570:
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82228d98
	ctx.lr = 0x82224584;
	sub_82228D98(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r3,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r3.u8);
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82228b60
	ctx.lr = 0x82224598;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822245ac
	if (ctx.cr0.eq) goto loc_822245AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x822245A8;
	sub_830D8578(ctx, base);
	// b 0x822245b0
	goto loc_822245B0;
loc_822245AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822245B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82228b60
	ctx.lr = 0x822245C4;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822245d8
	if (ctx.cr0.eq) goto loc_822245D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x822245D4;
	sub_830D8578(ctx, base);
	// b 0x822245dc
	goto loc_822245DC;
loc_822245D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822245DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82228b60
	ctx.lr = 0x822245F0;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82224604
	if (ctx.cr0.eq) goto loc_82224604;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82224600;
	sub_830D8578(ctx, base);
	// b 0x82224608
	goto loc_82224608;
loc_82224604:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82224608:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82228b60
	ctx.lr = 0x8222461C;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82224630
	if (ctx.cr0.eq) goto loc_82224630;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x8222462C;
	sub_830D8578(ctx, base);
	// b 0x82224634
	goto loc_82224634;
loc_82224630:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82224634:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82228b60
	ctx.lr = 0x82224648;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222465c
	if (ctx.cr0.eq) goto loc_8222465C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82224658;
	sub_830D8578(ctx, base);
	// b 0x82224660
	goto loc_82224660;
loc_8222465C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82224660:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82228b60
	ctx.lr = 0x82224674;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222468c
	if (ctx.cr0.eq) goto loc_8222468C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82224684;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82224690
	goto loc_82224690;
loc_8222468C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82224690:
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
	// bl 0x822293e0
	ctx.lr = 0x822246A8;
	sub_822293E0(ctx, base);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82228d48
	ctx.lr = 0x822246B8;
	sub_82228D48(ctx, base);
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
	// bl 0x822293e0
	ctx.lr = 0x822246D4;
	sub_822293E0(ctx, base);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r31,376
	ctx.r5.s64 = ctx.r31.s64 + 376;
	// bl 0x822293e0
	ctx.lr = 0x822246E8;
	sub_822293E0(ctx, base);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82228d98
	ctx.lr = 0x822246F8;
	sub_82228D98(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r3,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r3.u8);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82228b60
	ctx.lr = 0x8222470C;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82224724
	if (ctx.cr0.eq) goto loc_82224724;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x8222471C;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82224728
	goto loc_82224728;
loc_82224724:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82224728:
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
	// bl 0x822293e0
	ctx.lr = 0x82224744;
	sub_822293E0(ctx, base);
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
loc_82224748:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq 0x8222476c
	if (ctx.cr0.eq) goto loc_8222476C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82224748
	if (ctx.cr6.eq) goto loc_82224748;
loc_8222476C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82224788
	if (!ctx.cr0.eq) goto loc_82224788;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x822103f8
	ctx.lr = 0x82224784;
	sub_822103F8(ctx, base);
	// b 0x8222478c
	goto loc_8222478C;
loc_82224788:
	// stb r28,472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 472, ctx.r28.u8);
loc_8222478C:
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822293e0
	ctx.lr = 0x822247A0;
	sub_822293E0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x822247d0
	if (ctx.cr6.eq) goto loc_822247D0;
	// cmpwi cr6,r11,79
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 79, ctx.xer);
	// beq cr6,0x822247c8
	if (ctx.cr6.eq) goto loc_822247C8;
	// cmpwi cr6,r11,87
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 87, ctx.xer);
	// bne cr6,0x822247c8
	if (!ctx.cr6.eq) goto loc_822247C8;
	// stw r25,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r25.u32);
	// b 0x822247d8
	goto loc_822247D8;
loc_822247C8:
	// stw r28,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r28.u32);
	// b 0x822247d8
	goto loc_822247D8;
loc_822247D0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
loc_822247D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822247E8"))) PPC_WEAK_FUNC(sub_822247E8);
PPC_FUNC_IMPL(__imp__sub_822247E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x822247F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822243e0
	ctx.lr = 0x82224800;
	sub_822243E0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,28336
	ctx.r29.s64 = ctx.r11.s64 + 28336;
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
	// bl 0x822293e0
	ctx.lr = 0x82224824;
	sub_822293E0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x822248a8
	if (ctx.cr6.eq) goto loc_822248A8;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// beq cr6,0x822248a0
	if (ctx.cr6.eq) goto loc_822248A0;
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// beq cr6,0x82224898
	if (ctx.cr6.eq) goto loc_82224898;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x82224890
	if (ctx.cr6.eq) goto loc_82224890;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x82224888
	if (ctx.cr6.eq) goto loc_82224888;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x82224880
	if (ctx.cr6.eq) goto loc_82224880;
	// cmpwi cr6,r11,119
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 119, ctx.xer);
	// beq cr6,0x82224878
	if (ctx.cr6.eq) goto loc_82224878;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2c0a8
	ctx.lr = 0x82224874;
	sub_82E2C0A8(ctx, base);
	// b 0x822248b0
	goto loc_822248B0;
loc_82224878:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x822248ac
	goto loc_822248AC;
loc_82224880:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x822248ac
	goto loc_822248AC;
loc_82224888:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822248ac
	goto loc_822248AC;
loc_82224890:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x822248ac
	goto loc_822248AC;
loc_82224898:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x822248ac
	goto loc_822248AC;
loc_822248A0:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// b 0x822248b0
	goto loc_822248B0;
loc_822248A8:
	// li r11,2
	ctx.r11.s64 = 2;
loc_822248AC:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_822248B0:
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228b60
	ctx.lr = 0x822248BC;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822248d4
	if (ctx.cr0.eq) goto loc_822248D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x822248CC;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822248d8
	goto loc_822248D8;
loc_822248D4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822248D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82228b60
	ctx.lr = 0x822248E8;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82224900
	if (ctx.cr0.eq) goto loc_82224900;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x822248F8;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82224904
	goto loc_82224904;
loc_82224900:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82224904:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224918"))) PPC_WEAK_FUNC(sub_82224918);
PPC_FUNC_IMPL(__imp__sub_82224918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82224920;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822243e0
	ctx.lr = 0x82224930;
	sub_822243E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r28,r31,296
	ctx.r28.s64 = ctx.r31.s64 + 296;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,-24056
	ctx.r11.s64 = ctx.r11.s64 + -24056;
	// addi r29,r10,28452
	ctx.r29.s64 = ctx.r10.s64 + 28452;
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
	// bl 0x822293e0
	ctx.lr = 0x82224974;
	sub_822293E0(ctx, base);
	// addi r4,r29,-100
	ctx.r4.s64 = ctx.r29.s64 + -100;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228d48
	ctx.lr = 0x82224984;
	sub_82228D48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x82228b60
	ctx.lr = 0x82224998;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822249b0
	if (ctx.cr0.eq) goto loc_822249B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x822249A8;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822249b4
	goto loc_822249B4;
loc_822249B0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822249B4:
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
	// bl 0x822293e0
	ctx.lr = 0x822249CC;
	sub_822293E0(ctx, base);
	// addi r4,r29,-84
	ctx.r4.s64 = ctx.r29.s64 + -84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r27.u32);
	// bl 0x82228b60
	ctx.lr = 0x822249DC;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822249f4
	if (ctx.cr0.eq) goto loc_822249F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x822249EC;
	sub_830D8578(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x822249f8
	goto loc_822249F8;
loc_822249F4:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_822249F8:
	// addi r4,r29,-76
	ctx.r4.s64 = ctx.r29.s64 + -76;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229a58
	ctx.lr = 0x82224A0C;
	sub_82229A58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82224a28
	if (ctx.cr0.eq) goto loc_82224A28;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r26,16
	ctx.r4.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82212910
	ctx.lr = 0x82224A24;
	sub_82212910(ctx, base);
	// stw r3,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
loc_82224A28:
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228d48
	ctx.lr = 0x82224A38;
	sub_82228D48(ctx, base);
	// std r3,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r3.u64);
	// addi r6,r29,-29369
	ctx.r6.s64 = ctx.r29.s64 + -29369;
	// addi r5,r29,-56
	ctx.r5.s64 = ctx.r29.s64 + -56;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82214cc0
	ctx.lr = 0x82224A50;
	sub_82214CC0(ctx, base);
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228d48
	ctx.lr = 0x82224A60;
	sub_82228D48(ctx, base);
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
	// bl 0x82228d48
	ctx.lr = 0x82224A78;
	sub_82228D48(ctx, base);
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
	// bl 0x822293e0
	ctx.lr = 0x82224A98;
	sub_822293E0(ctx, base);
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228b60
	ctx.lr = 0x82224AA4;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82224abc
	if (ctx.cr0.eq) goto loc_82224ABC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82224AB4;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82224ac0
	goto loc_82224AC0;
loc_82224ABC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82224AC0:
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228d48
	ctx.lr = 0x82224AD4;
	sub_82228D48(ctx, base);
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
	// bl 0x822293e0
	ctx.lr = 0x82224AF0;
	sub_822293E0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,79
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 79, ctx.xer);
	// beq cr6,0x82224b0c
	if (ctx.cr6.eq) goto loc_82224B0C;
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// stw r27,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r27.u32);
	// b 0x82224b14
	goto loc_82224B14;
loc_82224B0C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
loc_82224B14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224B20"))) PPC_WEAK_FUNC(sub_82224B20);
PPC_FUNC_IMPL(__imp__sub_82224B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82224B28;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82224c70
	ctx.lr = 0x82224B38;
	sub_82224C70(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-19468
	ctx.r11.s64 = ctx.r11.s64 + -19468;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r10,28508
	ctx.r29.s64 = ctx.r10.s64 + 28508;
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
	// bl 0x82228b60
	ctx.lr = 0x82224B64;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82224b7c
	if (ctx.cr0.eq) goto loc_82224B7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82224B74;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82224b80
	goto loc_82224B80;
loc_82224B7C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82224B80:
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
	// bl 0x822293e0
	ctx.lr = 0x82224B98;
	sub_822293E0(ctx, base);
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// li r6,37
	ctx.r6.s64 = 37;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822293e0
	ctx.lr = 0x82224BAC;
	sub_822293E0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822103f8
	ctx.lr = 0x82224BBC;
	sub_822103F8(ctx, base);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r31,376
	ctx.r5.s64 = ctx.r31.s64 + 376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822293e0
	ctx.lr = 0x82224BD0;
	sub_822293E0(ctx, base);
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
	// bl 0x822293e0
	ctx.lr = 0x82224BE8;
	sub_822293E0(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x82224c5c
	if (ctx.cr6.eq) goto loc_82224C5C;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// beq cr6,0x82224c54
	if (ctx.cr6.eq) goto loc_82224C54;
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// beq cr6,0x82224c4c
	if (ctx.cr6.eq) goto loc_82224C4C;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x82224c44
	if (ctx.cr6.eq) goto loc_82224C44;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x82224c3c
	if (ctx.cr6.eq) goto loc_82224C3C;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x82224c34
	if (ctx.cr6.eq) goto loc_82224C34;
	// addi r5,r31,372
	ctx.r5.s64 = ctx.r31.s64 + 372;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e2c0a8
	ctx.lr = 0x82224C30;
	sub_82E2C0A8(ctx, base);
	// b 0x82224c64
	goto loc_82224C64;
loc_82224C34:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82224c60
	goto loc_82224C60;
loc_82224C3C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82224c60
	goto loc_82224C60;
loc_82224C44:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82224c60
	goto loc_82224C60;
loc_82224C4C:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82224c60
	goto loc_82224C60;
loc_82224C54:
	// stw r28,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r28.u32);
	// b 0x82224c64
	goto loc_82224C64;
loc_82224C5C:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82224C60:
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
loc_82224C64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82224C70"))) PPC_WEAK_FUNC(sub_82224C70);
PPC_FUNC_IMPL(__imp__sub_82224C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82224C78;
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
	// bl 0x822243e0
	ctx.lr = 0x82224C8C;
	sub_822243E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-19468
	ctx.r11.s64 = ctx.r11.s64 + -19468;
	// addi r28,r10,17888
	ctx.r28.s64 = ctx.r10.s64 + 17888;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,10648
	ctx.r4.s64 = ctx.r28.s64 + 10648;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82228d48
	ctx.lr = 0x82224CB0;
	sub_82228D48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r24,r31,28
	ctx.r24.s64 = ctx.r31.s64 + 28;
	// addi r4,r28,10656
	ctx.r4.s64 = ctx.r28.s64 + 10656;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// bl 0x822293e0
	ctx.lr = 0x82224CD0;
	sub_822293E0(ctx, base);
	// addi r26,r31,124
	ctx.r26.s64 = ctx.r31.s64 + 124;
	// addi r4,r28,10660
	ctx.r4.s64 = ctx.r28.s64 + 10660;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x822293e0
	ctx.lr = 0x82224CE8;
	sub_822293E0(ctx, base);
	// addi r4,r28,10664
	ctx.r4.s64 = ctx.r28.s64 + 10664;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82228b60
	ctx.lr = 0x82224CF4;
	sub_82228B60(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82224d0c
	if (ctx.cr0.eq) goto loc_82224D0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82224D08;
	sub_830D8578(ctx, base);
	// b 0x82224d10
	goto loc_82224D10;
loc_82224D0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82224D10:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// addi r25,r31,92
	ctx.r25.s64 = ctx.r31.s64 + 92;
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// b 0x82224d38
	goto loc_82224D38;
loc_82224D24:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82e2f370
	ctx.lr = 0x82224D30;
	sub_82E2F370(ctx, base);
	// stb r3,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r3.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82224D38:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82224d24
	if (!ctx.cr6.eq) goto loc_82224D24;
	// addi r10,r28,10668
	ctx.r10.s64 = ctx.r28.s64 + 10668;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82224D4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82224d70
	if (ctx.cr0.eq) goto loc_82224D70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82224d4c
	if (ctx.cr6.eq) goto loc_82224D4C;
loc_82224D70:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82224d94
	if (!ctx.cr0.eq) goto loc_82224D94;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e2ab28
	ctx.lr = 0x82224D88;
	sub_82E2AB28(ctx, base);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// b 0x82224e18
	goto loc_82224E18;
loc_82224D94:
	// addi r10,r28,10676
	ctx.r10.s64 = ctx.r28.s64 + 10676;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82224D9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82224dc0
	if (ctx.cr0.eq) goto loc_82224DC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82224d9c
	if (ctx.cr6.eq) goto loc_82224D9C;
loc_82224DC0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne 0x82224de0
	if (!ctx.cr0.eq) goto loc_82224DE0;
	// addi r4,r28,10684
	ctx.r4.s64 = ctx.r28.s64 + 10684;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82228d48
	ctx.lr = 0x82224DD8;
	sub_82228D48(ctx, base);
	// std r3,156(r31)
	PPC_STORE_U64(ctx.r31.u32 + 156, ctx.r3.u64);
	// b 0x82224e18
	goto loc_82224E18;
loc_82224DE0:
	// addi r4,r28,10688
	ctx.r4.s64 = ctx.r28.s64 + 10688;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// bl 0x822293e0
	ctx.lr = 0x82224DF0;
	sub_822293E0(ctx, base);
	// addi r4,r28,10696
	ctx.r4.s64 = ctx.r28.s64 + 10696;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82228b60
	ctx.lr = 0x82224DFC;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82224e10
	if (ctx.cr0.eq) goto loc_82224E10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82224E0C;
	sub_830D8578(ctx, base);
	// b 0x82224e14
	goto loc_82224E14;
loc_82224E10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82224E14:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_82224E18:
	// addi r10,r28,10708
	ctx.r10.s64 = ctx.r28.s64 + 10708;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82224E24:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82224e48
	if (ctx.cr0.eq) goto loc_82224E48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82224e24
	if (ctx.cr6.eq) goto loc_82224E24;
loc_82224E48:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82224e68
	if (!ctx.cr0.eq) goto loc_82224E68;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822125e8
	ctx.lr = 0x82224E64;
	sub_822125E8(ctx, base);
	// b 0x82224ed8
	goto loc_82224ED8;
loc_82224E68:
	// addi r10,r28,10716
	ctx.r10.s64 = ctx.r28.s64 + 10716;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82224E70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82224e94
	if (ctx.cr0.eq) goto loc_82224E94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82224e70
	if (ctx.cr6.eq) goto loc_82224E70;
loc_82224E94:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82224ee0
	if (!ctx.cr0.eq) goto loc_82224EE0;
	// addi r4,r28,10724
	ctx.r4.s64 = ctx.r28.s64 + 10724;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229a58
	ctx.lr = 0x82224EB0;
	sub_82229A58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x82224ed0
	if (ctx.cr0.eq) goto loc_82224ED0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82212910
	ctx.lr = 0x82224ECC;
	sub_82212910(ctx, base);
	// b 0x82224ed8
	goto loc_82224ED8;
loc_82224ED0:
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x822126e0
	ctx.lr = 0x82224ED8;
	sub_822126E0(ctx, base);
loc_82224ED8:
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// b 0x822250b0
	goto loc_822250B0;
loc_82224EE0:
	// addi r10,r28,10732
	ctx.r10.s64 = ctx.r28.s64 + 10732;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82224EE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82224f0c
	if (ctx.cr0.eq) goto loc_82224F0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82224ee8
	if (ctx.cr6.eq) goto loc_82224EE8;
loc_82224F0C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82224f7c
	if (!ctx.cr0.eq) goto loc_82224F7C;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82217d58
	ctx.lr = 0x82224F20;
	sub_82217D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82224f60
	if (ctx.cr0.eq) goto loc_82224F60;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// sth r30,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r30.u16);
	// addi r11,r11,-25776
	ctx.r11.s64 = ctx.r11.s64 + -25776;
	// addi r10,r10,-23944
	ctx.r10.s64 = ctx.r10.s64 + -23944;
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
	// b 0x82224f64
	goto loc_82224F64;
loc_82224F60:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82224F64:
	// addi r5,r29,20
	ctx.r5.s64 = ctx.r29.s64 + 20;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e2c0a8
	ctx.lr = 0x82224F74;
	sub_82E2C0A8(ctx, base);
	// sth r27,24(r29)
	PPC_STORE_U16(ctx.r29.u32 + 24, ctx.r27.u16);
	// b 0x822250ac
	goto loc_822250AC;
loc_82224F7C:
	// addi r10,r28,10736
	ctx.r10.s64 = ctx.r28.s64 + 10736;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82224F84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82224fa8
	if (ctx.cr0.eq) goto loc_82224FA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82224f84
	if (ctx.cr6.eq) goto loc_82224F84;
loc_82224FA8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82225018
	if (!ctx.cr0.eq) goto loc_82225018;
	// li r3,88
	ctx.r3.s64 = 88;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82217d58
	ctx.lr = 0x82224FBC;
	sub_82217D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82224ffc
	if (ctx.cr0.eq) goto loc_82224FFC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// sth r30,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r30.u16);
	// addi r11,r11,-25776
	ctx.r11.s64 = ctx.r11.s64 + -25776;
	// addi r10,r10,-23924
	ctx.r10.s64 = ctx.r10.s64 + -23924;
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
	// b 0x82225000
	goto loc_82225000;
loc_82224FFC:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82225000:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x822103f8
	ctx.lr = 0x82225010;
	sub_822103F8(ctx, base);
	// sth r28,84(r29)
	PPC_STORE_U16(ctx.r29.u32 + 84, ctx.r28.u16);
	// b 0x822250ac
	goto loc_822250AC;
loc_82225018:
	// li r3,44
	ctx.r3.s64 = 44;
	// lwz r26,20(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r31,60
	ctx.r28.s64 = ctx.r31.s64 + 60;
	// bl 0x82217d58
	ctx.lr = 0x8222502C;
	sub_82217D58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225078
	if (ctx.cr0.eq) goto loc_82225078;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// sth r30,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r30.u16);
	// addi r11,r11,-25776
	ctx.r11.s64 = ctx.r11.s64 + -25776;
	// addi r10,r10,-23964
	ctx.r10.s64 = ctx.r10.s64 + -23964;
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
	// b 0x8222507c
	goto loc_8222507C;
loc_82225078:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8222507C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82225094
	if (ctx.cr6.eq) goto loc_82225094;
	// clrlwi r5,r27,16
	ctx.r5.u64 = ctx.r27.u32 & 0xFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x82212a50
	ctx.lr = 0x82225094;
	sub_82212A50(ctx, base);
loc_82225094:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822250ac
	if (ctx.cr6.eq) goto loc_822250AC;
	// clrlwi r5,r26,16
	ctx.r5.u64 = ctx.r26.u32 & 0xFFFF;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x82212a50
	ctx.lr = 0x822250AC;
	sub_82212A50(ctx, base);
loc_822250AC:
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
loc_822250B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822250C0"))) PPC_WEAK_FUNC(sub_822250C0);
PPC_FUNC_IMPL(__imp__sub_822250C0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-19468
	ctx.r11.s64 = ctx.r11.s64 + -19468;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82225108
	if (ctx.cr0.eq) goto loc_82225108;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_82225108:
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

__attribute__((alias("__imp__sub_82225120"))) PPC_WEAK_FUNC(sub_82225120);
PPC_FUNC_IMPL(__imp__sub_82225120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82225128;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x822243e0
	ctx.lr = 0x82225138;
	sub_822243E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r11,r11,-24056
	ctx.r11.s64 = ctx.r11.s64 + -24056;
	// addi r29,r10,28704
	ctx.r29.s64 = ctx.r10.s64 + 28704;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r29,-29609
	ctx.r6.s64 = ctx.r29.s64 + -29609;
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
	// bl 0x82214cc0
	ctx.lr = 0x82225180;
	sub_82214CC0(ctx, base);
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
	// bl 0x822293e0
	ctx.lr = 0x82225198;
	sub_822293E0(ctx, base);
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82228b60
	ctx.lr = 0x822251A4;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822251b8
	if (ctx.cr0.eq) goto loc_822251B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x822251B4;
	sub_830D8578(ctx, base);
	// b 0x822251bc
	goto loc_822251BC;
loc_822251B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822251BC:
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lwz r28,16(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82213798
	ctx.lr = 0x822251C8;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x822251E0;
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
	// bl 0x822293e0
	ctx.lr = 0x822251F8;
	sub_822293E0(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82225200:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82225200
	if (!ctx.cr6.eq) goto loc_82225200;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822252bc
	if (ctx.cr0.eq) goto loc_822252BC;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82225258
	if (ctx.cr6.eq) goto loc_82225258;
loc_82225234:
	// lbzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,44
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 44, ctx.xer);
	// bne cr6,0x8222524c
	if (!ctx.cr6.eq) goto loc_8222524C;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_8222524C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82225234
	if (ctx.cr6.lt) goto loc_82225234;
loc_82225258:
	// bl 0x82213798
	ctx.lr = 0x8222525C;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82225278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x822252b0
	goto loc_822252B0;
loc_8222528C:
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2c0a8
	ctx.lr = 0x82225298;
	sub_82E2C0A8(ctx, base);
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
loc_822252B0:
	// bl 0x82e312b8
	ctx.lr = 0x822252B4;
	sub_82E312B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8222528c
	if (!ctx.cr0.eq) goto loc_8222528C;
loc_822252BC:
	// bl 0x82213798
	ctx.lr = 0x822252C0;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x822252D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822252E8"))) PPC_WEAK_FUNC(sub_822252E8);
PPC_FUNC_IMPL(__imp__sub_822252E8) {
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
	// bl 0x822254f8
	ctx.lr = 0x82225308;
	sub_822254F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225318
	if (ctx.cr0.eq) goto loc_82225318;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82545ee8
	ctx.lr = 0x82225318;
	sub_82545EE8(ctx, base);
loc_82225318:
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

__attribute__((alias("__imp__sub_82225338"))) PPC_WEAK_FUNC(sub_82225338);
PPC_FUNC_IMPL(__imp__sub_82225338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82225340;
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
	ctx.lr = 0x8222535C;
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
	// beq 0x82225388
	if (ctx.cr0.eq) goto loc_82225388;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,141
	ctx.r3.s64 = ctx.r31.s64 + 141;
	// bl 0x822103f8
	ctx.lr = 0x82225384;
	sub_822103F8(ctx, base);
	// b 0x8222538c
	goto loc_8222538C;
loc_82225388:
	// stb r29,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r29.u8);
loc_8222538C:
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
	// beq 0x822253bc
	if (ctx.cr0.eq) goto loc_822253BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822255d8
	ctx.lr = 0x822253B8;
	sub_822255D8(ctx, base);
	// b 0x822253c0
	goto loc_822253C0;
loc_822253BC:
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
loc_822253C0:
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
	// beq cr6,0x822253e0
	if (ctx.cr6.eq) goto loc_822253E0;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x822103f8
	ctx.lr = 0x822253E0;
	sub_822103F8(ctx, base);
loc_822253E0:
	// addic. r5,r30,364
	ctx.xer.ca = ctx.r30.u32 > 4294966931;
	ctx.r5.s64 = ctx.r30.s64 + 364;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x822253f8
	if (ctx.cr0.eq) goto loc_822253F8;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x822103f8
	ctx.lr = 0x822253F4;
	sub_822103F8(ctx, base);
	// b 0x822253fc
	goto loc_822253FC;
loc_822253F8:
	// stb r29,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r29.u8);
loc_822253FC:
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// addic. r5,r30,496
	ctx.xer.ca = ctx.r30.u32 > 4294966799;
	ctx.r5.s64 = ctx.r30.s64 + 496;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// beq 0x8222541c
	if (ctx.cr0.eq) goto loc_8222541C;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x822103f8
	ctx.lr = 0x82225418;
	sub_822103F8(ctx, base);
	// b 0x82225420
	goto loc_82225420;
loc_8222541C:
	// stb r29,496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 496, ctx.r29.u8);
loc_82225420:
	// addic. r5,r30,532
	ctx.xer.ca = ctx.r30.u32 > 4294966763;
	ctx.r5.s64 = ctx.r30.s64 + 532;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82225438
	if (ctx.cr0.eq) goto loc_82225438;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x822103f8
	ctx.lr = 0x82225434;
	sub_822103F8(ctx, base);
	// b 0x8222543c
	goto loc_8222543C;
loc_82225438:
	// stb r29,532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 532, ctx.r29.u8);
loc_8222543C:
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// addic. r5,r30,596
	ctx.xer.ca = ctx.r30.u32 > 4294966699;
	ctx.r5.s64 = ctx.r30.s64 + 596;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// beq 0x8222545c
	if (ctx.cr0.eq) goto loc_8222545C;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// bl 0x822103f8
	ctx.lr = 0x82225458;
	sub_822103F8(ctx, base);
	// b 0x82225460
	goto loc_82225460;
loc_8222545C:
	// stb r29,596(r31)
	PPC_STORE_U8(ctx.r31.u32 + 596, ctx.r29.u8);
loc_82225460:
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
	// bl 0x82e28fd0
	ctx.lr = 0x82225478;
	sub_82E28FD0(ctx, base);
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
loc_822254A4:
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
	// bne 0x822254a4
	if (!ctx.cr0.eq) goto loc_822254A4;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822254d8
	if (ctx.cr0.eq) goto loc_822254D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822254D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822254D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// bl 0x82214140
	ctx.lr = 0x822254E4;
	sub_82214140(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822254F8"))) PPC_WEAK_FUNC(sub_822254F8);
PPC_FUNC_IMPL(__imp__sub_822254F8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-25708
	ctx.r11.s64 = ctx.r11.s64 + -25708;
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82225540
	if (ctx.cr6.eq) goto loc_82225540;
	// bl 0x82213798
	ctx.lr = 0x82225528;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82225540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82225540:
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225560
	if (ctx.cr0.eq) goto loc_82225560;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82225560:
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

__attribute__((alias("__imp__sub_82225578"))) PPC_WEAK_FUNC(sub_82225578);
PPC_FUNC_IMPL(__imp__sub_82225578) {
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

__attribute__((alias("__imp__sub_82225588"))) PPC_WEAK_FUNC(sub_82225588);
PPC_FUNC_IMPL(__imp__sub_82225588) {
	PPC_FUNC_PROLOGUE();
	// stw r4,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82225590"))) PPC_WEAK_FUNC(sub_82225590);
PPC_FUNC_IMPL(__imp__sub_82225590) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822255a8
	if (ctx.cr6.eq) goto loc_822255A8;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,141
	ctx.r3.s64 = ctx.r3.s64 + 141;
	// b 0x822103f8
	sub_822103F8(ctx, base);
	return;
loc_822255A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,141(r3)
	PPC_STORE_U8(ctx.r3.u32 + 141, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822255B8"))) PPC_WEAK_FUNC(sub_822255B8);
PPC_FUNC_IMPL(__imp__sub_822255B8) {
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

__attribute__((alias("__imp__sub_822255D0"))) PPC_WEAK_FUNC(sub_822255D0);
PPC_FUNC_IMPL(__imp__sub_822255D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822255D8"))) PPC_WEAK_FUNC(sub_822255D8);
PPC_FUNC_IMPL(__imp__sub_822255D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x822255E0;
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
	// beq cr6,0x82225618
	if (ctx.cr6.eq) goto loc_82225618;
	// bl 0x82213798
	ctx.lr = 0x82225600;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82225618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82225618:
	// rlwinm r31,r31,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82213798
	ctx.lr = 0x82225620;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82225638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r3,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r3.u32);
	// bl 0x82e28fd0
	ctx.lr = 0x82225648;
	sub_82E28FD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225650"))) PPC_WEAK_FUNC(sub_82225650);
PPC_FUNC_IMPL(__imp__sub_82225650) {
	PPC_FUNC_PROLOGUE();
	// stb r4,736(r3)
	PPC_STORE_U8(ctx.r3.u32 + 736, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82225658"))) PPC_WEAK_FUNC(sub_82225658);
PPC_FUNC_IMPL(__imp__sub_82225658) {
	PPC_FUNC_PROLOGUE();
	// stw r4,740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 740, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82225660"))) PPC_WEAK_FUNC(sub_82225660);
PPC_FUNC_IMPL(__imp__sub_82225660) {
	PPC_FUNC_PROLOGUE();
	// stw r4,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82225668"))) PPC_WEAK_FUNC(sub_82225668);
PPC_FUNC_IMPL(__imp__sub_82225668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82225670;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r28,r31,168
	ctx.r28.s64 = ctx.r31.s64 + 168;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,-24056
	ctx.r11.s64 = ctx.r11.s64 + -24056;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r10,-878
	ctx.r30.s64 = ctx.r10.s64 + -878;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r30,29586
	ctx.r4.s64 = ctx.r30.s64 + 29586;
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
	// bl 0x82228b60
	ctx.lr = 0x822256B4;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822256cc
	if (ctx.cr0.eq) goto loc_822256CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x822256C4;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822256d0
	goto loc_822256D0;
loc_822256CC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822256D0:
	// addi r4,r30,29590
	ctx.r4.s64 = ctx.r30.s64 + 29590;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228b60
	ctx.lr = 0x822256E0;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822256f8
	if (ctx.cr0.eq) goto loc_822256F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x822256F0;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822256fc
	goto loc_822256FC;
loc_822256F8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822256FC:
	// addi r4,r30,29594
	ctx.r4.s64 = ctx.r30.s64 + 29594;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228b60
	ctx.lr = 0x8222570C;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225724
	if (ctx.cr0.eq) goto loc_82225724;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x8222571C;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82225728
	goto loc_82225728;
loc_82225724:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82225728:
	// addi r4,r30,29598
	ctx.r4.s64 = ctx.r30.s64 + 29598;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228d48
	ctx.lr = 0x8222573C;
	sub_82228D48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,29602
	ctx.r4.s64 = ctx.r30.s64 + 29602;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x822293e0
	ctx.lr = 0x82225758;
	sub_822293E0(ctx, base);
	// addi r4,r30,29610
	ctx.r4.s64 = ctx.r30.s64 + 29610;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228d48
	ctx.lr = 0x82225768;
	sub_82228D48(ctx, base);
	// std r3,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r3.u64);
	// addi r6,r30,-9
	ctx.r6.s64 = ctx.r30.s64 + -9;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// addi r5,r30,29622
	ctx.r5.s64 = ctx.r30.s64 + 29622;
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82214cc0
	ctx.lr = 0x82225788;
	sub_82214CC0(ctx, base);
	// addi r4,r30,29630
	ctx.r4.s64 = ctx.r30.s64 + 29630;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228b60
	ctx.lr = 0x82225794;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822257b0
	if (ctx.cr0.eq) goto loc_822257B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8b60
	ctx.lr = 0x822257AC;
	sub_830D8B60(ctx, base);
	// b 0x822257b4
	goto loc_822257B4;
loc_822257B0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822257B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822258c0
	if (!ctx.cr6.gt) goto loc_822258C0;
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// bl 0x82213798
	ctx.lr = 0x822257C4;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x822257DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r30,29638
	ctx.r4.s64 = ctx.r30.s64 + 29638;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x822293e0
	ctx.lr = 0x822257F4;
	sub_822293E0(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82225824
	if (ctx.cr6.eq) goto loc_82225824;
loc_82225800:
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// bne cr6,0x82225818
	if (!ctx.cr6.eq) goto loc_82225818;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_82225818:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82225800
	if (ctx.cr6.lt) goto loc_82225800;
loc_82225824:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82213798
	ctx.lr = 0x82225834;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82225850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,29646
	ctx.r4.s64 = ctx.r30.s64 + 29646;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82e312b8
	ctx.lr = 0x82225864;
	sub_82E312B8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822258a4
	if (!ctx.cr6.gt) goto loc_822258A4;
loc_82225874:
	// bl 0x82e29e90
	ctx.lr = 0x82225878;
	sub_82E29E90(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addi r4,r30,29650
	ctx.r4.s64 = ctx.r30.s64 + 29650;
	// li r3,0
	ctx.r3.s64 = 0;
	// stdx r10,r27,r11
	PPC_STORE_U64(ctx.r27.u32 + ctx.r11.u32, ctx.r10.u64);
	// bl 0x82e312b8
	ctx.lr = 0x82225890;
	sub_82E312B8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82225874
	if (ctx.cr6.lt) goto loc_82225874;
loc_822258A4:
	// bl 0x82213798
	ctx.lr = 0x822258A8;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x822258C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822258C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822258D0"))) PPC_WEAK_FUNC(sub_822258D0);
PPC_FUNC_IMPL(__imp__sub_822258D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x822258D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r30,r11,-878
	ctx.r30.s64 = ctx.r11.s64 + -878;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,29654
	ctx.r4.s64 = ctx.r30.s64 + 29654;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82228b60
	ctx.lr = 0x822258F8;
	sub_82228B60(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225914
	if (ctx.cr0.eq) goto loc_82225914;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x8222590C;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82225918
	goto loc_82225918;
loc_82225914:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82225918:
	// addi r4,r30,29658
	ctx.r4.s64 = ctx.r30.s64 + 29658;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82228b60
	ctx.lr = 0x82225928;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225940
	if (ctx.cr0.eq) goto loc_82225940;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82225938;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82225944
	goto loc_82225944;
loc_82225940:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82225944:
	// addi r4,r30,29662
	ctx.r4.s64 = ctx.r30.s64 + 29662;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// bl 0x82228b60
	ctx.lr = 0x8222595C;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225978
	if (ctx.cr0.eq) goto loc_82225978;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8b60
	ctx.lr = 0x82225974;
	sub_830D8B60(ctx, base);
	// b 0x8222597c
	goto loc_8222597C;
loc_82225978:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8222597C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82225a8c
	if (!ctx.cr6.gt) goto loc_82225A8C;
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// bl 0x82213798
	ctx.lr = 0x8222598C;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x822259A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r30,29670
	ctx.r4.s64 = ctx.r30.s64 + 29670;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x822293e0
	ctx.lr = 0x822259BC;
	sub_822293E0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822259ec
	if (ctx.cr6.eq) goto loc_822259EC;
loc_822259C8:
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// bne cr6,0x822259e0
	if (!ctx.cr6.eq) goto loc_822259E0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_822259E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822259c8
	if (ctx.cr6.lt) goto loc_822259C8;
loc_822259EC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82213798
	ctx.lr = 0x822259FC;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82225A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,29678
	ctx.r4.s64 = ctx.r30.s64 + 29678;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82e312b8
	ctx.lr = 0x82225A2C;
	sub_82E312B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82225a70
	if (!ctx.cr6.gt) goto loc_82225A70;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82225A40:
	// bl 0x82e29e90
	ctx.lr = 0x82225A44;
	sub_82E29E90(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r30,29682
	ctx.r4.s64 = ctx.r30.s64 + 29682;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r27,r11
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x82e312b8
	ctx.lr = 0x82225A5C;
	sub_82E312B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82225a40
	if (ctx.cr6.lt) goto loc_82225A40;
loc_82225A70:
	// bl 0x82213798
	ctx.lr = 0x82225A74;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82225A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82225A8C:
	// addi r4,r30,29686
	ctx.r4.s64 = ctx.r30.s64 + 29686;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// bl 0x82228b60
	ctx.lr = 0x82225AA0;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225abc
	if (ctx.cr0.eq) goto loc_82225ABC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8b60
	ctx.lr = 0x82225AB8;
	sub_830D8B60(ctx, base);
	// b 0x82225ac0
	goto loc_82225AC0;
loc_82225ABC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82225AC0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82225bcc
	if (!ctx.cr6.gt) goto loc_82225BCC;
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// bl 0x82213798
	ctx.lr = 0x82225AD0;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82225AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r30,29694
	ctx.r4.s64 = ctx.r30.s64 + 29694;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822293e0
	ctx.lr = 0x82225B00;
	sub_822293E0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82225b30
	if (ctx.cr6.eq) goto loc_82225B30;
loc_82225B0C:
	// lbzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,59
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 59, ctx.xer);
	// bne cr6,0x82225b24
	if (!ctx.cr6.eq) goto loc_82225B24;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82225B24:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82225b0c
	if (ctx.cr6.lt) goto loc_82225B0C;
loc_82225B30:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82213798
	ctx.lr = 0x82225B40;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82225B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,29702
	ctx.r4.s64 = ctx.r30.s64 + 29702;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82e312b8
	ctx.lr = 0x82225B70;
	sub_82E312B8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82225bb0
	if (!ctx.cr6.gt) goto loc_82225BB0;
loc_82225B80:
	// bl 0x82e29e90
	ctx.lr = 0x82225B84;
	sub_82E29E90(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r30,29706
	ctx.r4.s64 = ctx.r30.s64 + 29706;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x82e312b8
	ctx.lr = 0x82225B9C;
	sub_82E312B8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82225b80
	if (ctx.cr6.lt) goto loc_82225B80;
loc_82225BB0:
	// bl 0x82213798
	ctx.lr = 0x82225BB4;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82225BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82225BCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225BE0"))) PPC_WEAK_FUNC(sub_82225BE0);
PPC_FUNC_IMPL(__imp__sub_82225BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82225BE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r29,r11,-878
	ctx.r29.s64 = ctx.r11.s64 + -878;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r29,29710
	ctx.r4.s64 = ctx.r29.s64 + 29710;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82228b60
	ctx.lr = 0x82225C08;
	sub_82228B60(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225c24
	if (ctx.cr0.eq) goto loc_82225C24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82225C1C;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82225c28
	goto loc_82225C28;
loc_82225C24:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82225C28:
	// addi r4,r29,29714
	ctx.r4.s64 = ctx.r29.s64 + 29714;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82228b60
	ctx.lr = 0x82225C38;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225c50
	if (ctx.cr0.eq) goto loc_82225C50;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8578
	ctx.lr = 0x82225C48;
	sub_830D8578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82225c54
	goto loc_82225C54;
loc_82225C50:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82225C54:
	// addi r4,r29,29718
	ctx.r4.s64 = ctx.r29.s64 + 29718;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// bl 0x82228b60
	ctx.lr = 0x82225C6C;
	sub_82228B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225c88
	if (ctx.cr0.eq) goto loc_82225C88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830d8b60
	ctx.lr = 0x82225C84;
	sub_830D8B60(ctx, base);
	// b 0x82225c8c
	goto loc_82225C8C;
loc_82225C88:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82225C8C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82225d98
	if (!ctx.cr6.gt) goto loc_82225D98;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// bl 0x82213798
	ctx.lr = 0x82225C9C;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82225CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r29,29726
	ctx.r4.s64 = ctx.r29.s64 + 29726;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822293e0
	ctx.lr = 0x82225CCC;
	sub_822293E0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82225cfc
	if (ctx.cr6.eq) goto loc_82225CFC;
loc_82225CD8:
	// lbzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,59
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 59, ctx.xer);
	// bne cr6,0x82225cf0
	if (!ctx.cr6.eq) goto loc_82225CF0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82225CF0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82225cd8
	if (ctx.cr6.lt) goto loc_82225CD8;
loc_82225CFC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82213798
	ctx.lr = 0x82225D0C;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82225D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r29,29734
	ctx.r4.s64 = ctx.r29.s64 + 29734;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82e312b8
	ctx.lr = 0x82225D3C;
	sub_82E312B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82225d7c
	if (!ctx.cr6.gt) goto loc_82225D7C;
loc_82225D4C:
	// bl 0x82e29e90
	ctx.lr = 0x82225D50;
	sub_82E29E90(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r29,29738
	ctx.r4.s64 = ctx.r29.s64 + 29738;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x82e312b8
	ctx.lr = 0x82225D68;
	sub_82E312B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82225d4c
	if (ctx.cr6.lt) goto loc_82225D4C;
loc_82225D7C:
	// bl 0x82213798
	ctx.lr = 0x82225D80;
	sub_82213798(ctx, base);
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
	ctx.lr = 0x82225D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82225D98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225DA8"))) PPC_WEAK_FUNC(sub_82225DA8);
PPC_FUNC_IMPL(__imp__sub_82225DA8) {
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
	// bl 0x82225df8
	ctx.lr = 0x82225DC8;
	sub_82225DF8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225dd8
	if (ctx.cr0.eq) goto loc_82225DD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82545ee8
	ctx.lr = 0x82225DD8;
	sub_82545EE8(ctx, base);
loc_82225DD8:
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

__attribute__((alias("__imp__sub_82225DF8"))) PPC_WEAK_FUNC(sub_82225DF8);
PPC_FUNC_IMPL(__imp__sub_82225DF8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23844
	ctx.r11.s64 = ctx.r11.s64 + -23844;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x830df1f8
	ctx.lr = 0x82225E20;
	sub_830DF1F8(ctx, base);
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

__attribute__((alias("__imp__sub_82225E40"))) PPC_WEAK_FUNC(sub_82225E40);
PPC_FUNC_IMPL(__imp__sub_82225E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x830df2c0
	sub_830DF2C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225E48"))) PPC_WEAK_FUNC(sub_82225E48);
PPC_FUNC_IMPL(__imp__sub_82225E48) {
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
	// bl 0x830df218
	ctx.lr = 0x82225E5C;
	sub_830DF218(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt 0x82225e6c
	if (ctx.cr0.gt) goto loc_82225E6C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82225E6C:
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

__attribute__((alias("__imp__sub_82225E80"))) PPC_WEAK_FUNC(sub_82225E80);
PPC_FUNC_IMPL(__imp__sub_82225E80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x830df370
	sub_830DF370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225E88"))) PPC_WEAK_FUNC(sub_82225E88);
PPC_FUNC_IMPL(__imp__sub_82225E88) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82b07ad0
	sub_82B07AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225E90"))) PPC_WEAK_FUNC(sub_82225E90);
PPC_FUNC_IMPL(__imp__sub_82225E90) {
	PPC_FUNC_PROLOGUE();
	// b 0x82f66580
	sub_82F66580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225E98"))) PPC_WEAK_FUNC(sub_82225E98);
PPC_FUNC_IMPL(__imp__sub_82225E98) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22520
	ctx.r11.s64 = ctx.r11.s64 + -22520;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82225df8
	ctx.lr = 0x82225EC4;
	sub_82225DF8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225ed4
	if (ctx.cr0.eq) goto loc_82225ED4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82545ee8
	ctx.lr = 0x82225ED4;
	sub_82545EE8(ctx, base);
loc_82225ED4:
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

__attribute__((alias("__imp__sub_82225EF0"))) PPC_WEAK_FUNC(sub_82225EF0);
PPC_FUNC_IMPL(__imp__sub_82225EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82225EF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31966
	ctx.r30.s64 = -2094923776;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r31,-12024(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12024);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82225f2c
	if (!ctx.cr6.eq) goto loc_82225F2C;
	// bl 0x82225f80
	ctx.lr = 0x82225F28;
	sub_82225F80(ctx, base);
	// lwz r31,-12024(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12024);
loc_82225F2C:
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
	// bl 0x82226280
	ctx.lr = 0x82225F48;
	sub_82226280(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225F5C;
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
	ctx.lr = 0x82225F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

