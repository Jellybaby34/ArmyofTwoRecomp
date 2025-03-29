#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82CBCB28"))) PPC_WEAK_FUNC(sub_82CBCB28);
PPC_FUNC_IMPL(__imp__sub_82CBCB28) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bgt cr6,0x82cbcc30
	if (ctx.cr6.gt) goto loc_82CBCC30;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-13492
	ctx.r12.s64 = ctx.r12.s64 + -13492;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82CBCB74;
	case 1:
		goto loc_82CBCB88;
	case 2:
		goto loc_82CBCB9C;
	case 3:
		goto loc_82CBCBB0;
	case 4:
		goto loc_82CBCBC4;
	case 5:
		goto loc_82CBCBD8;
	case 6:
		goto loc_82CBCBEC;
	case 7:
		goto loc_82CBCC00;
	case 8:
		goto loc_82CBCC14;
	case 9:
		goto loc_82CBCC28;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-13452(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13452);
	// lwz r22,-13432(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13432);
	// lwz r22,-13412(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13412);
	// lwz r22,-13392(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13392);
	// lwz r22,-13372(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13372);
	// lwz r22,-13352(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13352);
	// lwz r22,-13332(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13332);
	// lwz r22,-13312(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13312);
	// lwz r22,-13292(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13292);
	// lwz r22,-13272(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13272);
loc_82CBCB74:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12432
	ctx.r11.s64 = ctx.r11.s64 + 12432;
	// addi r11,r11,-184
	ctx.r11.s64 = ctx.r11.s64 + -184;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBCB88:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12432
	ctx.r11.s64 = ctx.r11.s64 + 12432;
	// addi r11,r11,-164
	ctx.r11.s64 = ctx.r11.s64 + -164;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBCB9C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12432
	ctx.r11.s64 = ctx.r11.s64 + 12432;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBCBB0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12432
	ctx.r11.s64 = ctx.r11.s64 + 12432;
	// addi r11,r11,-120
	ctx.r11.s64 = ctx.r11.s64 + -120;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBCBC4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12432
	ctx.r11.s64 = ctx.r11.s64 + 12432;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBCBD8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12432
	ctx.r11.s64 = ctx.r11.s64 + 12432;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBCBEC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12432
	ctx.r11.s64 = ctx.r11.s64 + 12432;
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBCC00:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12432
	ctx.r11.s64 = ctx.r11.s64 + 12432;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBCC14:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12432
	ctx.r11.s64 = ctx.r11.s64 + 12432;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBCC28:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12432
	ctx.r11.s64 = ctx.r11.s64 + 12432;
loc_82CBCC30:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBCC38"))) PPC_WEAK_FUNC(sub_82CBCC38);
PPC_FUNC_IMPL(__imp__sub_82CBCC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBCC40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cbce04
	if (ctx.cr6.eq) goto loc_82CBCE04;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,12628
	ctx.r30.s64 = ctx.r11.s64 + 12628;
	// addi r4,r30,-184
	ctx.r4.s64 = ctx.r30.s64 + -184;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCC68;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbcc88
	if (!ctx.cr6.eq) goto loc_82CBCC88;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCC88:
	// addi r4,r30,-164
	ctx.r4.s64 = ctx.r30.s64 + -164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCC94;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbccb0
	if (!ctx.cr6.eq) goto loc_82CBCCB0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCCB0:
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCCBC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbccdc
	if (!ctx.cr6.eq) goto loc_82CBCCDC;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCCDC:
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCCE8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbcd08
	if (!ctx.cr6.eq) goto loc_82CBCD08;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCD08:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCD14;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbcd34
	if (!ctx.cr6.eq) goto loc_82CBCD34;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCD34:
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCD40;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbcd60
	if (!ctx.cr6.eq) goto loc_82CBCD60;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCD60:
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCD6C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbcd8c
	if (!ctx.cr6.eq) goto loc_82CBCD8C;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCD8C:
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCD98;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbcdb8
	if (!ctx.cr6.eq) goto loc_82CBCDB8;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCDB8:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCDC4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbcde4
	if (!ctx.cr6.eq) goto loc_82CBCDE4;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCDE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCDF0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbce04
	if (!ctx.cr6.eq) goto loc_82CBCE04;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82CBCE04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBCE10"))) PPC_WEAK_FUNC(sub_82CBCE10);
PPC_FUNC_IMPL(__imp__sub_82CBCE10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cbce34
	if (ctx.cr6.eq) goto loc_82CBCE34;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,12664
	ctx.r3.s64 = ctx.r11.s64 + 12664;
	// blr 
	return;
loc_82CBCE34:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12664
	ctx.r11.s64 = ctx.r11.s64 + 12664;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBCE48"))) PPC_WEAK_FUNC(sub_82CBCE48);
PPC_FUNC_IMPL(__imp__sub_82CBCE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBCE50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,12708
	ctx.r30.s64 = ctx.r11.s64 + 12708;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCE70;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbce88
	if (!ctx.cr6.eq) goto loc_82CBCE88;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCE88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCE94;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbceb0
	if (!ctx.cr6.eq) goto loc_82CBCEB0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCEB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBCEC0"))) PPC_WEAK_FUNC(sub_82CBCEC0);
PPC_FUNC_IMPL(__imp__sub_82CBCEC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82cbcef8
	if (ctx.cr6.lt) goto loc_82CBCEF8;
	// beq cr6,0x82cbcee8
	if (ctx.cr6.eq) goto loc_82CBCEE8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,12784
	ctx.r3.s64 = ctx.r11.s64 + 12784;
	// blr 
	return;
loc_82CBCEE8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12784
	ctx.r11.s64 = ctx.r11.s64 + 12784;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
loc_82CBCEF8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12784
	ctx.r11.s64 = ctx.r11.s64 + 12784;
	// addi r3,r11,-56
	ctx.r3.s64 = ctx.r11.s64 + -56;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBCF08"))) PPC_WEAK_FUNC(sub_82CBCF08);
PPC_FUNC_IMPL(__imp__sub_82CBCF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBCF10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cbcf9c
	if (ctx.cr6.eq) goto loc_82CBCF9C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,12864
	ctx.r30.s64 = ctx.r11.s64 + 12864;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCF38;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbcf50
	if (!ctx.cr6.eq) goto loc_82CBCF50;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCF50:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCF5C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbcf74
	if (!ctx.cr6.eq) goto loc_82CBCF74;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCF74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCF80;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbcf9c
	if (!ctx.cr6.eq) goto loc_82CBCF9C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCF9C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBCFA8"))) PPC_WEAK_FUNC(sub_82CBCFA8);
PPC_FUNC_IMPL(__imp__sub_82CBCFA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cbcfcc
	if (ctx.cr6.eq) goto loc_82CBCFCC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,12916
	ctx.r3.s64 = ctx.r11.s64 + 12916;
	// blr 
	return;
loc_82CBCFCC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12916
	ctx.r11.s64 = ctx.r11.s64 + 12916;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBCFE0"))) PPC_WEAK_FUNC(sub_82CBCFE0);
PPC_FUNC_IMPL(__imp__sub_82CBCFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBCFE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,12972
	ctx.r30.s64 = ctx.r11.s64 + 12972;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD008;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd020
	if (!ctx.cr6.eq) goto loc_82CBD020;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD020:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD02C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd048
	if (!ctx.cr6.eq) goto loc_82CBD048;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD048:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBD058"))) PPC_WEAK_FUNC(sub_82CBD058);
PPC_FUNC_IMPL(__imp__sub_82CBD058) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82cbd090
	if (ctx.cr6.lt) goto loc_82CBD090;
	// beq cr6,0x82cbd080
	if (ctx.cr6.eq) goto loc_82CBD080;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,13036
	ctx.r3.s64 = ctx.r11.s64 + 13036;
	// blr 
	return;
loc_82CBD080:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,13036
	ctx.r11.s64 = ctx.r11.s64 + 13036;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82CBD090:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,13036
	ctx.r11.s64 = ctx.r11.s64 + 13036;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBD0A0"))) PPC_WEAK_FUNC(sub_82CBD0A0);
PPC_FUNC_IMPL(__imp__sub_82CBD0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBD0A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cbd134
	if (ctx.cr6.eq) goto loc_82CBD134;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,13096
	ctx.r30.s64 = ctx.r11.s64 + 13096;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD0D0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd0e8
	if (!ctx.cr6.eq) goto loc_82CBD0E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD0E8:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD0F4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd10c
	if (!ctx.cr6.eq) goto loc_82CBD10C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD10C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD118;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd134
	if (!ctx.cr6.eq) goto loc_82CBD134;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD134:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBD140"))) PPC_WEAK_FUNC(sub_82CBD140);
PPC_FUNC_IMPL(__imp__sub_82CBD140) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cbd164
	if (ctx.cr6.eq) goto loc_82CBD164;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,13144
	ctx.r3.s64 = ctx.r11.s64 + 13144;
	// blr 
	return;
loc_82CBD164:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,13144
	ctx.r11.s64 = ctx.r11.s64 + 13144;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBD178"))) PPC_WEAK_FUNC(sub_82CBD178);
PPC_FUNC_IMPL(__imp__sub_82CBD178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBD180;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,13192
	ctx.r30.s64 = ctx.r11.s64 + 13192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD1A0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd1b8
	if (!ctx.cr6.eq) goto loc_82CBD1B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD1B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD1C4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd1e0
	if (!ctx.cr6.eq) goto loc_82CBD1E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD1E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBD1F0"))) PPC_WEAK_FUNC(sub_82CBD1F0);
PPC_FUNC_IMPL(__imp__sub_82CBD1F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cbd22c
	if (ctx.cr6.eq) goto loc_82CBD22C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82cbd21c
	if (ctx.cr6.eq) goto loc_82CBD21C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,13272
	ctx.r3.s64 = ctx.r11.s64 + 13272;
	// blr 
	return;
loc_82CBD21C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,13272
	ctx.r11.s64 = ctx.r11.s64 + 13272;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
loc_82CBD22C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,13272
	ctx.r11.s64 = ctx.r11.s64 + 13272;
	// addi r3,r11,-56
	ctx.r3.s64 = ctx.r11.s64 + -56;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBD240"))) PPC_WEAK_FUNC(sub_82CBD240);
PPC_FUNC_IMPL(__imp__sub_82CBD240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBD248;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,13352
	ctx.r30.s64 = ctx.r11.s64 + 13352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD268;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd280
	if (!ctx.cr6.eq) goto loc_82CBD280;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD280:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD28C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd2a8
	if (!ctx.cr6.eq) goto loc_82CBD2A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD2A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD2B4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd2d0
	if (!ctx.cr6.eq) goto loc_82CBD2D0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD2D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBD2E0"))) PPC_WEAK_FUNC(sub_82CBD2E0);
PPC_FUNC_IMPL(__imp__sub_82CBD2E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cbd31c
	if (ctx.cr6.eq) goto loc_82CBD31C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82cbd30c
	if (ctx.cr6.eq) goto loc_82CBD30C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,13424
	ctx.r3.s64 = ctx.r11.s64 + 13424;
	// blr 
	return;
loc_82CBD30C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,13424
	ctx.r11.s64 = ctx.r11.s64 + 13424;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82CBD31C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,13424
	ctx.r11.s64 = ctx.r11.s64 + 13424;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBD330"))) PPC_WEAK_FUNC(sub_82CBD330);
PPC_FUNC_IMPL(__imp__sub_82CBD330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBD338;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,13496
	ctx.r30.s64 = ctx.r11.s64 + 13496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD358;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd370
	if (!ctx.cr6.eq) goto loc_82CBD370;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD370:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD37C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd398
	if (!ctx.cr6.eq) goto loc_82CBD398;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD398:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD3A4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd3c0
	if (!ctx.cr6.eq) goto loc_82CBD3C0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD3C0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBD3D0"))) PPC_WEAK_FUNC(sub_82CBD3D0);
PPC_FUNC_IMPL(__imp__sub_82CBD3D0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-11272
	ctx.r12.s64 = ctx.r12.s64 + -11272;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CBD438;
	case 1:
		goto loc_82CBD448;
	case 2:
		goto loc_82CBD480;
	case 3:
		goto loc_82CBD458;
	case 4:
		goto loc_82CBD480;
	case 5:
		goto loc_82CBD480;
	case 6:
		goto loc_82CBD480;
	case 7:
		goto loc_82CBD468;
	case 8:
		goto loc_82CBD480;
	case 9:
		goto loc_82CBD480;
	case 10:
		goto loc_82CBD480;
	case 11:
		goto loc_82CBD480;
	case 12:
		goto loc_82CBD480;
	case 13:
		goto loc_82CBD480;
	case 14:
		goto loc_82CBD480;
	case 15:
		goto loc_82CBD478;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-11208(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11208);
	// lwz r22,-11192(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11192);
	// lwz r22,-11136(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11136);
	// lwz r22,-11176(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11176);
	// lwz r22,-11136(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11136);
	// lwz r22,-11136(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11136);
	// lwz r22,-11136(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11136);
	// lwz r22,-11160(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11160);
	// lwz r22,-11136(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11136);
	// lwz r22,-11136(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11136);
	// lwz r22,-11136(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11136);
	// lwz r22,-11136(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11136);
	// lwz r22,-11136(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11136);
	// lwz r22,-11136(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11136);
	// lwz r22,-11136(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11136);
	// lwz r22,-11144(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11144);
loc_82CBD438:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,13632
	ctx.r11.s64 = ctx.r11.s64 + 13632;
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// blr 
	return;
loc_82CBD448:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,13632
	ctx.r11.s64 = ctx.r11.s64 + 13632;
	// addi r3,r11,-84
	ctx.r3.s64 = ctx.r11.s64 + -84;
	// blr 
	return;
loc_82CBD458:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,13632
	ctx.r11.s64 = ctx.r11.s64 + 13632;
	// addi r3,r11,-56
	ctx.r3.s64 = ctx.r11.s64 + -56;
	// blr 
	return;
loc_82CBD468:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,13632
	ctx.r11.s64 = ctx.r11.s64 + 13632;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
loc_82CBD478:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,13632
	ctx.r3.s64 = ctx.r11.s64 + 13632;
loc_82CBD480:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBD488"))) PPC_WEAK_FUNC(sub_82CBD488);
PPC_FUNC_IMPL(__imp__sub_82CBD488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBD490;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,13772
	ctx.r30.s64 = ctx.r11.s64 + 13772;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-112
	ctx.r4.s64 = ctx.r30.s64 + -112;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD4B0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd4c8
	if (!ctx.cr6.eq) goto loc_82CBD4C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD4C8:
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD4D4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd4f0
	if (!ctx.cr6.eq) goto loc_82CBD4F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD4F0:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD4FC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd518
	if (!ctx.cr6.eq) goto loc_82CBD518;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD518:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD524;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd540
	if (!ctx.cr6.eq) goto loc_82CBD540;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD540:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD54C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd568
	if (!ctx.cr6.eq) goto loc_82CBD568;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD568:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBD578"))) PPC_WEAK_FUNC(sub_82CBD578);
PPC_FUNC_IMPL(__imp__sub_82CBD578) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cbd59c
	if (ctx.cr6.eq) goto loc_82CBD59C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,13816
	ctx.r3.s64 = ctx.r11.s64 + 13816;
	// blr 
	return;
loc_82CBD59C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,13816
	ctx.r11.s64 = ctx.r11.s64 + 13816;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBD5B0"))) PPC_WEAK_FUNC(sub_82CBD5B0);
PPC_FUNC_IMPL(__imp__sub_82CBD5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBD5B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,13856
	ctx.r30.s64 = ctx.r11.s64 + 13856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD5D8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd5f0
	if (!ctx.cr6.eq) goto loc_82CBD5F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD5F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBD5FC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbd618
	if (!ctx.cr6.eq) goto loc_82CBD618;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBD618:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBD628"))) PPC_WEAK_FUNC(sub_82CBD628);
PPC_FUNC_IMPL(__imp__sub_82CBD628) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bgt cr6,0x82cbd910
	if (ctx.cr6.gt) goto loc_82CBD910;
	// beq cr6,0x82cbd8fc
	if (ctx.cr6.eq) goto loc_82CBD8FC;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bgt cr6,0x82cbd9f0
	if (ctx.cr6.gt) goto loc_82CBD9F0;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-10660
	ctx.r12.s64 = ctx.r12.s64 + -10660;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82CBD85C;
	case 1:
		goto loc_82CBD870;
	case 2:
		goto loc_82CBD9F0;
	case 3:
		goto loc_82CBD884;
	case 4:
		goto loc_82CBD9F0;
	case 5:
		goto loc_82CBD9F0;
	case 6:
		goto loc_82CBD9F0;
	case 7:
		goto loc_82CBD898;
	case 8:
		goto loc_82CBD9F0;
	case 9:
		goto loc_82CBD9F0;
	case 10:
		goto loc_82CBD9F0;
	case 11:
		goto loc_82CBD9F0;
	case 12:
		goto loc_82CBD9F0;
	case 13:
		goto loc_82CBD9F0;
	case 14:
		goto loc_82CBD9F0;
	case 15:
		goto loc_82CBD8AC;
	case 16:
		goto loc_82CBD9F0;
	case 17:
		goto loc_82CBD9F0;
	case 18:
		goto loc_82CBD9F0;
	case 19:
		goto loc_82CBD9F0;
	case 20:
		goto loc_82CBD9F0;
	case 21:
		goto loc_82CBD9F0;
	case 22:
		goto loc_82CBD9F0;
	case 23:
		goto loc_82CBD9F0;
	case 24:
		goto loc_82CBD9F0;
	case 25:
		goto loc_82CBD9F0;
	case 26:
		goto loc_82CBD9F0;
	case 27:
		goto loc_82CBD9F0;
	case 28:
		goto loc_82CBD9F0;
	case 29:
		goto loc_82CBD9F0;
	case 30:
		goto loc_82CBD9F0;
	case 31:
		goto loc_82CBD8C0;
	case 32:
		goto loc_82CBD9F0;
	case 33:
		goto loc_82CBD9F0;
	case 34:
		goto loc_82CBD9F0;
	case 35:
		goto loc_82CBD9F0;
	case 36:
		goto loc_82CBD9F0;
	case 37:
		goto loc_82CBD9F0;
	case 38:
		goto loc_82CBD9F0;
	case 39:
		goto loc_82CBD9F0;
	case 40:
		goto loc_82CBD9F0;
	case 41:
		goto loc_82CBD9F0;
	case 42:
		goto loc_82CBD9F0;
	case 43:
		goto loc_82CBD9F0;
	case 44:
		goto loc_82CBD9F0;
	case 45:
		goto loc_82CBD9F0;
	case 46:
		goto loc_82CBD9F0;
	case 47:
		goto loc_82CBD9F0;
	case 48:
		goto loc_82CBD9F0;
	case 49:
		goto loc_82CBD9F0;
	case 50:
		goto loc_82CBD9F0;
	case 51:
		goto loc_82CBD9F0;
	case 52:
		goto loc_82CBD9F0;
	case 53:
		goto loc_82CBD9F0;
	case 54:
		goto loc_82CBD9F0;
	case 55:
		goto loc_82CBD9F0;
	case 56:
		goto loc_82CBD9F0;
	case 57:
		goto loc_82CBD9F0;
	case 58:
		goto loc_82CBD9F0;
	case 59:
		goto loc_82CBD9F0;
	case 60:
		goto loc_82CBD9F0;
	case 61:
		goto loc_82CBD9F0;
	case 62:
		goto loc_82CBD9F0;
	case 63:
		goto loc_82CBD8D4;
	case 64:
		goto loc_82CBD9F0;
	case 65:
		goto loc_82CBD9F0;
	case 66:
		goto loc_82CBD9F0;
	case 67:
		goto loc_82CBD9F0;
	case 68:
		goto loc_82CBD9F0;
	case 69:
		goto loc_82CBD9F0;
	case 70:
		goto loc_82CBD9F0;
	case 71:
		goto loc_82CBD9F0;
	case 72:
		goto loc_82CBD9F0;
	case 73:
		goto loc_82CBD9F0;
	case 74:
		goto loc_82CBD9F0;
	case 75:
		goto loc_82CBD9F0;
	case 76:
		goto loc_82CBD9F0;
	case 77:
		goto loc_82CBD9F0;
	case 78:
		goto loc_82CBD9F0;
	case 79:
		goto loc_82CBD9F0;
	case 80:
		goto loc_82CBD9F0;
	case 81:
		goto loc_82CBD9F0;
	case 82:
		goto loc_82CBD9F0;
	case 83:
		goto loc_82CBD9F0;
	case 84:
		goto loc_82CBD9F0;
	case 85:
		goto loc_82CBD9F0;
	case 86:
		goto loc_82CBD9F0;
	case 87:
		goto loc_82CBD9F0;
	case 88:
		goto loc_82CBD9F0;
	case 89:
		goto loc_82CBD9F0;
	case 90:
		goto loc_82CBD9F0;
	case 91:
		goto loc_82CBD9F0;
	case 92:
		goto loc_82CBD9F0;
	case 93:
		goto loc_82CBD9F0;
	case 94:
		goto loc_82CBD9F0;
	case 95:
		goto loc_82CBD9F0;
	case 96:
		goto loc_82CBD9F0;
	case 97:
		goto loc_82CBD9F0;
	case 98:
		goto loc_82CBD9F0;
	case 99:
		goto loc_82CBD9F0;
	case 100:
		goto loc_82CBD9F0;
	case 101:
		goto loc_82CBD9F0;
	case 102:
		goto loc_82CBD9F0;
	case 103:
		goto loc_82CBD9F0;
	case 104:
		goto loc_82CBD9F0;
	case 105:
		goto loc_82CBD9F0;
	case 106:
		goto loc_82CBD9F0;
	case 107:
		goto loc_82CBD9F0;
	case 108:
		goto loc_82CBD9F0;
	case 109:
		goto loc_82CBD9F0;
	case 110:
		goto loc_82CBD9F0;
	case 111:
		goto loc_82CBD9F0;
	case 112:
		goto loc_82CBD9F0;
	case 113:
		goto loc_82CBD9F0;
	case 114:
		goto loc_82CBD9F0;
	case 115:
		goto loc_82CBD9F0;
	case 116:
		goto loc_82CBD9F0;
	case 117:
		goto loc_82CBD9F0;
	case 118:
		goto loc_82CBD9F0;
	case 119:
		goto loc_82CBD9F0;
	case 120:
		goto loc_82CBD9F0;
	case 121:
		goto loc_82CBD9F0;
	case 122:
		goto loc_82CBD9F0;
	case 123:
		goto loc_82CBD9F0;
	case 124:
		goto loc_82CBD9F0;
	case 125:
		goto loc_82CBD9F0;
	case 126:
		goto loc_82CBD9F0;
	case 127:
		goto loc_82CBD8E8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-10148(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10148);
	// lwz r22,-10128(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10128);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-10108(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10108);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-10088(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10088);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-10068(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10068);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-10048(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10048);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-10028(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10028);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-9744(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9744);
	// lwz r22,-10008(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10008);
loc_82CBD85C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-328
	ctx.r11.s64 = ctx.r11.s64 + -328;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD870:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-312
	ctx.r11.s64 = ctx.r11.s64 + -312;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD884:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-284
	ctx.r11.s64 = ctx.r11.s64 + -284;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD898:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-260
	ctx.r11.s64 = ctx.r11.s64 + -260;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD8AC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-240
	ctx.r11.s64 = ctx.r11.s64 + -240;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD8C0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-220
	ctx.r11.s64 = ctx.r11.s64 + -220;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD8D4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-200
	ctx.r11.s64 = ctx.r11.s64 + -200;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD8E8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-180
	ctx.r11.s64 = ctx.r11.s64 + -180;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD8FC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -160;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD910:
	// cmpwi cr6,r3,8192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8192, ctx.xer);
	// bgt cr6,0x82cbd9a4
	if (ctx.cr6.gt) goto loc_82CBD9A4;
	// beq cr6,0x82cbd990
	if (ctx.cr6.eq) goto loc_82CBD990;
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// bgt cr6,0x82cbd974
	if (ctx.cr6.gt) goto loc_82CBD974;
	// beq cr6,0x82cbd960
	if (ctx.cr6.eq) goto loc_82CBD960;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x82cbd94c
	if (ctx.cr6.eq) goto loc_82CBD94C;
	// cmpwi cr6,r3,1024
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1024, ctx.xer);
	// bne cr6,0x82cbd9f0
	if (!ctx.cr6.eq) goto loc_82CBD9F0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-120
	ctx.r11.s64 = ctx.r11.s64 + -120;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD94C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-140
	ctx.r11.s64 = ctx.r11.s64 + -140;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD960:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD974:
	// cmpwi cr6,r3,4096
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4096, ctx.xer);
	// bne cr6,0x82cbd9f0
	if (!ctx.cr6.eq) goto loc_82CBD9F0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-80
	ctx.r11.s64 = ctx.r11.s64 + -80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD990:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD9A4:
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// beq cr6,0x82cbd9e4
	if (ctx.cr6.eq) goto loc_82CBD9E4;
	// cmplwi cr6,r3,32768
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32768, ctx.xer);
	// beq cr6,0x82cbd9d0
	if (ctx.cr6.eq) goto loc_82CBD9D0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82cbd9f0
	if (!ctx.cr6.eq) goto loc_82CBD9F0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD9D0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBD9E4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14208
	ctx.r11.s64 = ctx.r11.s64 + 14208;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_82CBD9F0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBD9F8"))) PPC_WEAK_FUNC(sub_82CBD9F8);
PPC_FUNC_IMPL(__imp__sub_82CBD9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBDA00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,14568
	ctx.r30.s64 = ctx.r11.s64 + 14568;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-328
	ctx.r4.s64 = ctx.r30.s64 + -328;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDA20;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbda3c
	if (!ctx.cr6.eq) goto loc_82CBDA3C;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDA3C:
	// addi r4,r30,-312
	ctx.r4.s64 = ctx.r30.s64 + -312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDA48;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbda68
	if (!ctx.cr6.eq) goto loc_82CBDA68;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDA68:
	// addi r4,r30,-284
	ctx.r4.s64 = ctx.r30.s64 + -284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDA74;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbda94
	if (!ctx.cr6.eq) goto loc_82CBDA94;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDA94:
	// addi r4,r30,-260
	ctx.r4.s64 = ctx.r30.s64 + -260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDAA0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdac0
	if (!ctx.cr6.eq) goto loc_82CBDAC0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDAC0:
	// addi r4,r30,-240
	ctx.r4.s64 = ctx.r30.s64 + -240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDACC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdaec
	if (!ctx.cr6.eq) goto loc_82CBDAEC;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDAEC:
	// addi r4,r30,-220
	ctx.r4.s64 = ctx.r30.s64 + -220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDAF8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdb18
	if (!ctx.cr6.eq) goto loc_82CBDB18;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDB18:
	// addi r4,r30,-200
	ctx.r4.s64 = ctx.r30.s64 + -200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDB24;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdb44
	if (!ctx.cr6.eq) goto loc_82CBDB44;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDB44:
	// addi r4,r30,-180
	ctx.r4.s64 = ctx.r30.s64 + -180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDB50;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdb70
	if (!ctx.cr6.eq) goto loc_82CBDB70;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDB70:
	// addi r4,r30,-160
	ctx.r4.s64 = ctx.r30.s64 + -160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDB7C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdb9c
	if (!ctx.cr6.eq) goto loc_82CBDB9C;
	// li r11,256
	ctx.r11.s64 = 256;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDB9C:
	// addi r4,r30,-140
	ctx.r4.s64 = ctx.r30.s64 + -140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDBA8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdbc8
	if (!ctx.cr6.eq) goto loc_82CBDBC8;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDBC8:
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDBD4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdbf4
	if (!ctx.cr6.eq) goto loc_82CBDBF4;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDBF4:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDC00;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdc20
	if (!ctx.cr6.eq) goto loc_82CBDC20;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDC20:
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDC2C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdc4c
	if (!ctx.cr6.eq) goto loc_82CBDC4C;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDC4C:
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDC58;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdc78
	if (!ctx.cr6.eq) goto loc_82CBDC78;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDC78:
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDC84;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdca4
	if (!ctx.cr6.eq) goto loc_82CBDCA4;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDCA4:
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDCB0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdcd4
	if (!ctx.cr6.eq) goto loc_82CBDCD4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDCD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDCE0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdcf4
	if (!ctx.cr6.eq) goto loc_82CBDCF4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82CBDCF4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBDD00"))) PPC_WEAK_FUNC(sub_82CBDD00);
PPC_FUNC_IMPL(__imp__sub_82CBDD00) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// bgt cr6,0x82cbded4
	if (ctx.cr6.gt) goto loc_82CBDED4;
	// beq cr6,0x82cbdec0
	if (ctx.cr6.eq) goto loc_82CBDEC0;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// bgt cr6,0x82cbdf90
	if (ctx.cr6.gt) goto loc_82CBDF90;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-8908
	ctx.r12.s64 = ctx.r12.s64 + -8908;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82CBDE34;
	case 1:
		goto loc_82CBDE48;
	case 2:
		goto loc_82CBDF90;
	case 3:
		goto loc_82CBDE5C;
	case 4:
		goto loc_82CBDF90;
	case 5:
		goto loc_82CBDF90;
	case 6:
		goto loc_82CBDF90;
	case 7:
		goto loc_82CBDE70;
	case 8:
		goto loc_82CBDF90;
	case 9:
		goto loc_82CBDF90;
	case 10:
		goto loc_82CBDF90;
	case 11:
		goto loc_82CBDF90;
	case 12:
		goto loc_82CBDF90;
	case 13:
		goto loc_82CBDF90;
	case 14:
		goto loc_82CBDF90;
	case 15:
		goto loc_82CBDE84;
	case 16:
		goto loc_82CBDF90;
	case 17:
		goto loc_82CBDF90;
	case 18:
		goto loc_82CBDF90;
	case 19:
		goto loc_82CBDF90;
	case 20:
		goto loc_82CBDF90;
	case 21:
		goto loc_82CBDF90;
	case 22:
		goto loc_82CBDF90;
	case 23:
		goto loc_82CBDF90;
	case 24:
		goto loc_82CBDF90;
	case 25:
		goto loc_82CBDF90;
	case 26:
		goto loc_82CBDF90;
	case 27:
		goto loc_82CBDF90;
	case 28:
		goto loc_82CBDF90;
	case 29:
		goto loc_82CBDF90;
	case 30:
		goto loc_82CBDF90;
	case 31:
		goto loc_82CBDE98;
	case 32:
		goto loc_82CBDF90;
	case 33:
		goto loc_82CBDF90;
	case 34:
		goto loc_82CBDF90;
	case 35:
		goto loc_82CBDF90;
	case 36:
		goto loc_82CBDF90;
	case 37:
		goto loc_82CBDF90;
	case 38:
		goto loc_82CBDF90;
	case 39:
		goto loc_82CBDF90;
	case 40:
		goto loc_82CBDF90;
	case 41:
		goto loc_82CBDF90;
	case 42:
		goto loc_82CBDF90;
	case 43:
		goto loc_82CBDF90;
	case 44:
		goto loc_82CBDF90;
	case 45:
		goto loc_82CBDF90;
	case 46:
		goto loc_82CBDF90;
	case 47:
		goto loc_82CBDF90;
	case 48:
		goto loc_82CBDF90;
	case 49:
		goto loc_82CBDF90;
	case 50:
		goto loc_82CBDF90;
	case 51:
		goto loc_82CBDF90;
	case 52:
		goto loc_82CBDF90;
	case 53:
		goto loc_82CBDF90;
	case 54:
		goto loc_82CBDF90;
	case 55:
		goto loc_82CBDF90;
	case 56:
		goto loc_82CBDF90;
	case 57:
		goto loc_82CBDF90;
	case 58:
		goto loc_82CBDF90;
	case 59:
		goto loc_82CBDF90;
	case 60:
		goto loc_82CBDF90;
	case 61:
		goto loc_82CBDF90;
	case 62:
		goto loc_82CBDF90;
	case 63:
		goto loc_82CBDEAC;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-8652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8652);
	// lwz r22,-8632(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8632);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8612(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8612);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8592(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8592);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8572(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8572);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8552(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8552);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	// lwz r22,-8532(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
loc_82CBDE34:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r11,r11,-280
	ctx.r11.s64 = ctx.r11.s64 + -280;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBDE48:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -264;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBDE5C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r11,r11,-248
	ctx.r11.s64 = ctx.r11.s64 + -248;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBDE70:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r11,r11,-220
	ctx.r11.s64 = ctx.r11.s64 + -220;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBDE84:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r11,r11,-196
	ctx.r11.s64 = ctx.r11.s64 + -196;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBDE98:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r11,r11,-172
	ctx.r11.s64 = ctx.r11.s64 + -172;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBDEAC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r11,r11,-156
	ctx.r11.s64 = ctx.r11.s64 + -156;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBDEC0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r11,r11,-140
	ctx.r11.s64 = ctx.r11.s64 + -140;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBDED4:
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// bgt cr6,0x82cbdf48
	if (ctx.cr6.gt) goto loc_82CBDF48;
	// beq cr6,0x82cbdf34
	if (ctx.cr6.eq) goto loc_82CBDF34;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// beq cr6,0x82cbdf20
	if (ctx.cr6.eq) goto loc_82CBDF20;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x82cbdf0c
	if (ctx.cr6.eq) goto loc_82CBDF0C;
	// cmpwi cr6,r3,1024
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1024, ctx.xer);
	// bne cr6,0x82cbdf90
	if (!ctx.cr6.eq) goto loc_82CBDF90;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBDF0C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBDF20:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r11,r11,-116
	ctx.r11.s64 = ctx.r11.s64 + -116;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBDF34:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBDF48:
	// cmpwi cr6,r3,4096
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4096, ctx.xer);
	// beq cr6,0x82cbdf84
	if (ctx.cr6.eq) goto loc_82CBDF84;
	// cmpwi cr6,r3,8192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8192, ctx.xer);
	// beq cr6,0x82cbdf70
	if (ctx.cr6.eq) goto loc_82CBDF70;
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// bne cr6,0x82cbdf90
	if (!ctx.cr6.eq) goto loc_82CBDF90;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBDF70:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBDF84:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_82CBDF90:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBDF98"))) PPC_WEAK_FUNC(sub_82CBDF98);
PPC_FUNC_IMPL(__imp__sub_82CBDF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBDFA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,15180
	ctx.r30.s64 = ctx.r11.s64 + 15180;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-280
	ctx.r4.s64 = ctx.r30.s64 + -280;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDFC0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbdfdc
	if (!ctx.cr6.eq) goto loc_82CBDFDC;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBDFDC:
	// addi r4,r30,-264
	ctx.r4.s64 = ctx.r30.s64 + -264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBDFE8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe008
	if (!ctx.cr6.eq) goto loc_82CBE008;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBE008:
	// addi r4,r30,-248
	ctx.r4.s64 = ctx.r30.s64 + -248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBE014;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe034
	if (!ctx.cr6.eq) goto loc_82CBE034;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBE034:
	// addi r4,r30,-220
	ctx.r4.s64 = ctx.r30.s64 + -220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBE040;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe060
	if (!ctx.cr6.eq) goto loc_82CBE060;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBE060:
	// addi r4,r30,-196
	ctx.r4.s64 = ctx.r30.s64 + -196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBE06C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe08c
	if (!ctx.cr6.eq) goto loc_82CBE08C;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBE08C:
	// addi r4,r30,-172
	ctx.r4.s64 = ctx.r30.s64 + -172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBE098;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe0b8
	if (!ctx.cr6.eq) goto loc_82CBE0B8;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBE0B8:
	// addi r4,r30,-156
	ctx.r4.s64 = ctx.r30.s64 + -156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBE0C4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe0e4
	if (!ctx.cr6.eq) goto loc_82CBE0E4;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBE0E4:
	// addi r4,r30,-140
	ctx.r4.s64 = ctx.r30.s64 + -140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBE0F0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe110
	if (!ctx.cr6.eq) goto loc_82CBE110;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBE110:
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBE11C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe13c
	if (!ctx.cr6.eq) goto loc_82CBE13C;
	// li r11,256
	ctx.r11.s64 = 256;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBE13C:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBE148;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe168
	if (!ctx.cr6.eq) goto loc_82CBE168;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBE168:
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBE174;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe194
	if (!ctx.cr6.eq) goto loc_82CBE194;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBE194:
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBE1A0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe1c0
	if (!ctx.cr6.eq) goto loc_82CBE1C0;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBE1C0:
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBE1CC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe1ec
	if (!ctx.cr6.eq) goto loc_82CBE1EC;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBE1EC:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBE1F8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe218
	if (!ctx.cr6.eq) goto loc_82CBE218;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBE218:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBE224;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe238
	if (!ctx.cr6.eq) goto loc_82CBE238;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82CBE238:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBE248"))) PPC_WEAK_FUNC(sub_82CBE248);
PPC_FUNC_IMPL(__imp__sub_82CBE248) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,15200
	ctx.r3.s64 = ctx.r11.s64 + 15200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBE268"))) PPC_WEAK_FUNC(sub_82CBE268);
PPC_FUNC_IMPL(__imp__sub_82CBE268) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,15224
	ctx.r4.s64 = ctx.r11.s64 + 15224;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBE290;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbe2a4
	if (!ctx.cr6.eq) goto loc_82CBE2A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82cbe2a8
	goto loc_82CBE2A8;
loc_82CBE2A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CBE2A8:
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

__attribute__((alias("__imp__sub_82CBE2C0"))) PPC_WEAK_FUNC(sub_82CBE2C0);
PPC_FUNC_IMPL(__imp__sub_82CBE2C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,93
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 93, ctx.xer);
	// bgt cr6,0x82cbeba8
	if (ctx.cr6.gt) goto loc_82CBEBA8;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-7452
	ctx.r12.s64 = ctx.r12.s64 + -7452;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82CBE45C;
	case 1:
		goto loc_82CBE470;
	case 2:
		goto loc_82CBE484;
	case 3:
		goto loc_82CBE498;
	case 4:
		goto loc_82CBE4AC;
	case 5:
		goto loc_82CBE4C0;
	case 6:
		goto loc_82CBE4D4;
	case 7:
		goto loc_82CBE4E8;
	case 8:
		goto loc_82CBE4FC;
	case 9:
		goto loc_82CBE510;
	case 10:
		goto loc_82CBE524;
	case 11:
		goto loc_82CBE538;
	case 12:
		goto loc_82CBE54C;
	case 13:
		goto loc_82CBE560;
	case 14:
		goto loc_82CBE574;
	case 15:
		goto loc_82CBE588;
	case 16:
		goto loc_82CBE59C;
	case 17:
		goto loc_82CBE5B0;
	case 18:
		goto loc_82CBE5C4;
	case 19:
		goto loc_82CBE5D8;
	case 20:
		goto loc_82CBE5EC;
	case 21:
		goto loc_82CBE600;
	case 22:
		goto loc_82CBE614;
	case 23:
		goto loc_82CBE628;
	case 24:
		goto loc_82CBE63C;
	case 25:
		goto loc_82CBE650;
	case 26:
		goto loc_82CBE664;
	case 27:
		goto loc_82CBE678;
	case 28:
		goto loc_82CBE68C;
	case 29:
		goto loc_82CBE6A0;
	case 30:
		goto loc_82CBE6B4;
	case 31:
		goto loc_82CBE6C8;
	case 32:
		goto loc_82CBE6DC;
	case 33:
		goto loc_82CBE6F0;
	case 34:
		goto loc_82CBE704;
	case 35:
		goto loc_82CBE718;
	case 36:
		goto loc_82CBE72C;
	case 37:
		goto loc_82CBE740;
	case 38:
		goto loc_82CBE754;
	case 39:
		goto loc_82CBE768;
	case 40:
		goto loc_82CBE77C;
	case 41:
		goto loc_82CBE790;
	case 42:
		goto loc_82CBE7A4;
	case 43:
		goto loc_82CBE7B8;
	case 44:
		goto loc_82CBE7CC;
	case 45:
		goto loc_82CBE7E0;
	case 46:
		goto loc_82CBE7F4;
	case 47:
		goto loc_82CBE808;
	case 48:
		goto loc_82CBE81C;
	case 49:
		goto loc_82CBE830;
	case 50:
		goto loc_82CBE844;
	case 51:
		goto loc_82CBE858;
	case 52:
		goto loc_82CBE86C;
	case 53:
		goto loc_82CBE880;
	case 54:
		goto loc_82CBE894;
	case 55:
		goto loc_82CBE8A8;
	case 56:
		goto loc_82CBE8BC;
	case 57:
		goto loc_82CBE8D0;
	case 58:
		goto loc_82CBE8E4;
	case 59:
		goto loc_82CBE8F8;
	case 60:
		goto loc_82CBE90C;
	case 61:
		goto loc_82CBE920;
	case 62:
		goto loc_82CBE934;
	case 63:
		goto loc_82CBE948;
	case 64:
		goto loc_82CBE95C;
	case 65:
		goto loc_82CBE970;
	case 66:
		goto loc_82CBE984;
	case 67:
		goto loc_82CBE998;
	case 68:
		goto loc_82CBE9AC;
	case 69:
		goto loc_82CBE9C0;
	case 70:
		goto loc_82CBE9D4;
	case 71:
		goto loc_82CBE9E8;
	case 72:
		goto loc_82CBE9FC;
	case 73:
		goto loc_82CBEA10;
	case 74:
		goto loc_82CBEA24;
	case 75:
		goto loc_82CBEA38;
	case 76:
		goto loc_82CBEA4C;
	case 77:
		goto loc_82CBEA60;
	case 78:
		goto loc_82CBEA74;
	case 79:
		goto loc_82CBEA88;
	case 80:
		goto loc_82CBEA9C;
	case 81:
		goto loc_82CBEAB0;
	case 82:
		goto loc_82CBEAC4;
	case 83:
		goto loc_82CBEAD8;
	case 84:
		goto loc_82CBEAEC;
	case 85:
		goto loc_82CBEB00;
	case 86:
		goto loc_82CBEB14;
	case 87:
		goto loc_82CBEB28;
	case 88:
		goto loc_82CBEB3C;
	case 89:
		goto loc_82CBEB50;
	case 90:
		goto loc_82CBEB64;
	case 91:
		goto loc_82CBEB78;
	case 92:
		goto loc_82CBEB8C;
	case 93:
		goto loc_82CBEBA0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-7076(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7076);
	// lwz r22,-7056(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7056);
	// lwz r22,-7036(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7036);
	// lwz r22,-7016(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7016);
	// lwz r22,-6996(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6996);
	// lwz r22,-6976(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6976);
	// lwz r22,-6956(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6956);
	// lwz r22,-6936(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6936);
	// lwz r22,-6916(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6916);
	// lwz r22,-6896(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6896);
	// lwz r22,-6876(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6876);
	// lwz r22,-6856(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6856);
	// lwz r22,-6836(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6836);
	// lwz r22,-6816(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6816);
	// lwz r22,-6796(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6796);
	// lwz r22,-6776(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6776);
	// lwz r22,-6756(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6756);
	// lwz r22,-6736(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6736);
	// lwz r22,-6716(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6716);
	// lwz r22,-6696(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6696);
	// lwz r22,-6676(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6676);
	// lwz r22,-6656(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6656);
	// lwz r22,-6636(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6636);
	// lwz r22,-6616(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6616);
	// lwz r22,-6596(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6596);
	// lwz r22,-6576(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6576);
	// lwz r22,-6556(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6556);
	// lwz r22,-6536(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6536);
	// lwz r22,-6516(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6516);
	// lwz r22,-6496(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6496);
	// lwz r22,-6476(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6476);
	// lwz r22,-6456(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6456);
	// lwz r22,-6436(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6436);
	// lwz r22,-6416(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6416);
	// lwz r22,-6396(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6396);
	// lwz r22,-6376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6376);
	// lwz r22,-6356(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6356);
	// lwz r22,-6336(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6336);
	// lwz r22,-6316(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6316);
	// lwz r22,-6296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6296);
	// lwz r22,-6276(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6276);
	// lwz r22,-6256(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6256);
	// lwz r22,-6236(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6236);
	// lwz r22,-6216(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6216);
	// lwz r22,-6196(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6196);
	// lwz r22,-6176(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6176);
	// lwz r22,-6156(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6156);
	// lwz r22,-6136(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6136);
	// lwz r22,-6116(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6116);
	// lwz r22,-6096(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6096);
	// lwz r22,-6076(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6076);
	// lwz r22,-6056(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// lwz r22,-6036(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6036);
	// lwz r22,-6016(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6016);
	// lwz r22,-5996(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5996);
	// lwz r22,-5976(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5976);
	// lwz r22,-5956(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5956);
	// lwz r22,-5936(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5936);
	// lwz r22,-5916(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5916);
	// lwz r22,-5896(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5896);
	// lwz r22,-5876(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5876);
	// lwz r22,-5856(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5856);
	// lwz r22,-5836(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5836);
	// lwz r22,-5816(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5816);
	// lwz r22,-5796(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5796);
	// lwz r22,-5776(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5776);
	// lwz r22,-5756(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5756);
	// lwz r22,-5736(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5736);
	// lwz r22,-5716(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5716);
	// lwz r22,-5696(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5696);
	// lwz r22,-5676(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5676);
	// lwz r22,-5656(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5656);
	// lwz r22,-5636(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5636);
	// lwz r22,-5616(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5616);
	// lwz r22,-5596(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5596);
	// lwz r22,-5576(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5576);
	// lwz r22,-5556(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5556);
	// lwz r22,-5536(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5536);
	// lwz r22,-5516(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5516);
	// lwz r22,-5496(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5496);
	// lwz r22,-5476(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5476);
	// lwz r22,-5456(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5456);
	// lwz r22,-5436(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5436);
	// lwz r22,-5416(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5416);
	// lwz r22,-5396(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5396);
	// lwz r22,-5376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5376);
	// lwz r22,-5356(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5356);
	// lwz r22,-5336(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5336);
	// lwz r22,-5316(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5316);
	// lwz r22,-5296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5296);
	// lwz r22,-5276(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5276);
	// lwz r22,-5256(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5256);
	// lwz r22,-5236(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5236);
	// lwz r22,-5216(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5216);
loc_82CBE45C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-2012
	ctx.r11.s64 = ctx.r11.s64 + -2012;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE470:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1996
	ctx.r11.s64 = ctx.r11.s64 + -1996;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE484:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1972
	ctx.r11.s64 = ctx.r11.s64 + -1972;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE498:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1952
	ctx.r11.s64 = ctx.r11.s64 + -1952;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE4AC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1932
	ctx.r11.s64 = ctx.r11.s64 + -1932;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE4C0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1912
	ctx.r11.s64 = ctx.r11.s64 + -1912;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE4D4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1896
	ctx.r11.s64 = ctx.r11.s64 + -1896;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE4E8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1872
	ctx.r11.s64 = ctx.r11.s64 + -1872;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE4FC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1848
	ctx.r11.s64 = ctx.r11.s64 + -1848;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE510:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1824
	ctx.r11.s64 = ctx.r11.s64 + -1824;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE524:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1800
	ctx.r11.s64 = ctx.r11.s64 + -1800;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE538:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1776
	ctx.r11.s64 = ctx.r11.s64 + -1776;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE54C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1752
	ctx.r11.s64 = ctx.r11.s64 + -1752;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE560:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1732
	ctx.r11.s64 = ctx.r11.s64 + -1732;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE574:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1708
	ctx.r11.s64 = ctx.r11.s64 + -1708;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE588:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1688
	ctx.r11.s64 = ctx.r11.s64 + -1688;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE59C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1672
	ctx.r11.s64 = ctx.r11.s64 + -1672;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE5B0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1652
	ctx.r11.s64 = ctx.r11.s64 + -1652;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE5C4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1632
	ctx.r11.s64 = ctx.r11.s64 + -1632;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE5D8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1616
	ctx.r11.s64 = ctx.r11.s64 + -1616;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE5EC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1596
	ctx.r11.s64 = ctx.r11.s64 + -1596;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE600:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1580
	ctx.r11.s64 = ctx.r11.s64 + -1580;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE614:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1560
	ctx.r11.s64 = ctx.r11.s64 + -1560;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE628:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1544
	ctx.r11.s64 = ctx.r11.s64 + -1544;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE63C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1528
	ctx.r11.s64 = ctx.r11.s64 + -1528;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE650:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1512
	ctx.r11.s64 = ctx.r11.s64 + -1512;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE664:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1496
	ctx.r11.s64 = ctx.r11.s64 + -1496;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE678:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1472
	ctx.r11.s64 = ctx.r11.s64 + -1472;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE68C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1448
	ctx.r11.s64 = ctx.r11.s64 + -1448;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE6A0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1424
	ctx.r11.s64 = ctx.r11.s64 + -1424;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE6B4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE6C8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1388
	ctx.r11.s64 = ctx.r11.s64 + -1388;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE6DC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1368
	ctx.r11.s64 = ctx.r11.s64 + -1368;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE6F0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1344
	ctx.r11.s64 = ctx.r11.s64 + -1344;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE704:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1320
	ctx.r11.s64 = ctx.r11.s64 + -1320;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE718:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1300
	ctx.r11.s64 = ctx.r11.s64 + -1300;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE72C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1276
	ctx.r11.s64 = ctx.r11.s64 + -1276;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE740:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1248
	ctx.r11.s64 = ctx.r11.s64 + -1248;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE754:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1228
	ctx.r11.s64 = ctx.r11.s64 + -1228;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE768:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1200
	ctx.r11.s64 = ctx.r11.s64 + -1200;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE77C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1184
	ctx.r11.s64 = ctx.r11.s64 + -1184;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE790:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1168
	ctx.r11.s64 = ctx.r11.s64 + -1168;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE7A4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1148
	ctx.r11.s64 = ctx.r11.s64 + -1148;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE7B8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1132
	ctx.r11.s64 = ctx.r11.s64 + -1132;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE7CC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1104
	ctx.r11.s64 = ctx.r11.s64 + -1104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE7E0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1080
	ctx.r11.s64 = ctx.r11.s64 + -1080;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE7F4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1052
	ctx.r11.s64 = ctx.r11.s64 + -1052;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE808:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE81C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-1008
	ctx.r11.s64 = ctx.r11.s64 + -1008;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE830:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-988
	ctx.r11.s64 = ctx.r11.s64 + -988;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE844:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-968
	ctx.r11.s64 = ctx.r11.s64 + -968;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE858:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-944
	ctx.r11.s64 = ctx.r11.s64 + -944;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE86C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-920
	ctx.r11.s64 = ctx.r11.s64 + -920;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE880:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-900
	ctx.r11.s64 = ctx.r11.s64 + -900;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE894:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-872
	ctx.r11.s64 = ctx.r11.s64 + -872;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE8A8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-844
	ctx.r11.s64 = ctx.r11.s64 + -844;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE8BC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-820
	ctx.r11.s64 = ctx.r11.s64 + -820;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE8D0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-800
	ctx.r11.s64 = ctx.r11.s64 + -800;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE8E4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-776
	ctx.r11.s64 = ctx.r11.s64 + -776;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE8F8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-760
	ctx.r11.s64 = ctx.r11.s64 + -760;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE90C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-736
	ctx.r11.s64 = ctx.r11.s64 + -736;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE920:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-712
	ctx.r11.s64 = ctx.r11.s64 + -712;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE934:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-688
	ctx.r11.s64 = ctx.r11.s64 + -688;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE948:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-664
	ctx.r11.s64 = ctx.r11.s64 + -664;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE95C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-640
	ctx.r11.s64 = ctx.r11.s64 + -640;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE970:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-616
	ctx.r11.s64 = ctx.r11.s64 + -616;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE984:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-592
	ctx.r11.s64 = ctx.r11.s64 + -592;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE998:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-572
	ctx.r11.s64 = ctx.r11.s64 + -572;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE9AC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-548
	ctx.r11.s64 = ctx.r11.s64 + -548;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE9C0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-528
	ctx.r11.s64 = ctx.r11.s64 + -528;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE9D4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-500
	ctx.r11.s64 = ctx.r11.s64 + -500;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE9E8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-472
	ctx.r11.s64 = ctx.r11.s64 + -472;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBE9FC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-456
	ctx.r11.s64 = ctx.r11.s64 + -456;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEA10:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-436
	ctx.r11.s64 = ctx.r11.s64 + -436;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEA24:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-416
	ctx.r11.s64 = ctx.r11.s64 + -416;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEA38:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-392
	ctx.r11.s64 = ctx.r11.s64 + -392;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEA4C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-368
	ctx.r11.s64 = ctx.r11.s64 + -368;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEA60:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-352
	ctx.r11.s64 = ctx.r11.s64 + -352;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEA74:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-336
	ctx.r11.s64 = ctx.r11.s64 + -336;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEA88:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-320
	ctx.r11.s64 = ctx.r11.s64 + -320;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEA9C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-284
	ctx.r11.s64 = ctx.r11.s64 + -284;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEAB0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-260
	ctx.r11.s64 = ctx.r11.s64 + -260;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEAC4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-232
	ctx.r11.s64 = ctx.r11.s64 + -232;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEAD8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-208
	ctx.r11.s64 = ctx.r11.s64 + -208;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEAEC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-188
	ctx.r11.s64 = ctx.r11.s64 + -188;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEB00:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -160;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEB14:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-136
	ctx.r11.s64 = ctx.r11.s64 + -136;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEB28:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-116
	ctx.r11.s64 = ctx.r11.s64 + -116;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEB3C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEB50:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEB64:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEB78:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEB8C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBEBA0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,17260
	ctx.r11.s64 = ctx.r11.s64 + 17260;
loc_82CBEBA8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBEBB0"))) PPC_WEAK_FUNC(sub_82CBEBB0);
PPC_FUNC_IMPL(__imp__sub_82CBEBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBEBB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cbfbec
	if (ctx.cr6.eq) goto loc_82CBFBEC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,19280
	ctx.r30.s64 = ctx.r11.s64 + 19280;
	// addi r4,r30,-2012
	ctx.r4.s64 = ctx.r30.s64 + -2012;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEBE0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbec00
	if (!ctx.cr6.eq) goto loc_82CBEC00;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEC00:
	// addi r4,r30,-1996
	ctx.r4.s64 = ctx.r30.s64 + -1996;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEC0C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbec28
	if (!ctx.cr6.eq) goto loc_82CBEC28;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEC28:
	// addi r4,r30,-1972
	ctx.r4.s64 = ctx.r30.s64 + -1972;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEC34;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbec54
	if (!ctx.cr6.eq) goto loc_82CBEC54;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEC54:
	// addi r4,r30,-1952
	ctx.r4.s64 = ctx.r30.s64 + -1952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEC60;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbec80
	if (!ctx.cr6.eq) goto loc_82CBEC80;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEC80:
	// addi r4,r30,-1932
	ctx.r4.s64 = ctx.r30.s64 + -1932;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEC8C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbecac
	if (!ctx.cr6.eq) goto loc_82CBECAC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBECAC:
	// addi r4,r30,-1912
	ctx.r4.s64 = ctx.r30.s64 + -1912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBECB8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbecd8
	if (!ctx.cr6.eq) goto loc_82CBECD8;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBECD8:
	// addi r4,r30,-1896
	ctx.r4.s64 = ctx.r30.s64 + -1896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBECE4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbed04
	if (!ctx.cr6.eq) goto loc_82CBED04;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBED04:
	// addi r4,r30,-1872
	ctx.r4.s64 = ctx.r30.s64 + -1872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBED10;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbed30
	if (!ctx.cr6.eq) goto loc_82CBED30;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBED30:
	// addi r4,r30,-1848
	ctx.r4.s64 = ctx.r30.s64 + -1848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBED3C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbed5c
	if (!ctx.cr6.eq) goto loc_82CBED5C;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBED5C:
	// addi r4,r30,-1824
	ctx.r4.s64 = ctx.r30.s64 + -1824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBED68;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbed88
	if (!ctx.cr6.eq) goto loc_82CBED88;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBED88:
	// addi r4,r30,-1800
	ctx.r4.s64 = ctx.r30.s64 + -1800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBED94;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbedb4
	if (!ctx.cr6.eq) goto loc_82CBEDB4;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEDB4:
	// addi r4,r30,-1776
	ctx.r4.s64 = ctx.r30.s64 + -1776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEDC0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbede0
	if (!ctx.cr6.eq) goto loc_82CBEDE0;
	// li r11,11
	ctx.r11.s64 = 11;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEDE0:
	// addi r4,r30,-1752
	ctx.r4.s64 = ctx.r30.s64 + -1752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEDEC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbee0c
	if (!ctx.cr6.eq) goto loc_82CBEE0C;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEE0C:
	// addi r4,r30,-1732
	ctx.r4.s64 = ctx.r30.s64 + -1732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEE18;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbee38
	if (!ctx.cr6.eq) goto loc_82CBEE38;
	// li r11,13
	ctx.r11.s64 = 13;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEE38:
	// addi r4,r30,-1708
	ctx.r4.s64 = ctx.r30.s64 + -1708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEE44;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbee64
	if (!ctx.cr6.eq) goto loc_82CBEE64;
	// li r11,14
	ctx.r11.s64 = 14;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEE64:
	// addi r4,r30,-1688
	ctx.r4.s64 = ctx.r30.s64 + -1688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEE70;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbee90
	if (!ctx.cr6.eq) goto loc_82CBEE90;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEE90:
	// addi r4,r30,-1672
	ctx.r4.s64 = ctx.r30.s64 + -1672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEE9C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbeebc
	if (!ctx.cr6.eq) goto loc_82CBEEBC;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEEBC:
	// addi r4,r30,-1652
	ctx.r4.s64 = ctx.r30.s64 + -1652;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEEC8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbeee8
	if (!ctx.cr6.eq) goto loc_82CBEEE8;
	// li r11,17
	ctx.r11.s64 = 17;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEEE8:
	// addi r4,r30,-1632
	ctx.r4.s64 = ctx.r30.s64 + -1632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEEF4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbef14
	if (!ctx.cr6.eq) goto loc_82CBEF14;
	// li r11,18
	ctx.r11.s64 = 18;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEF14:
	// addi r4,r30,-1616
	ctx.r4.s64 = ctx.r30.s64 + -1616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEF20;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbef40
	if (!ctx.cr6.eq) goto loc_82CBEF40;
	// li r11,19
	ctx.r11.s64 = 19;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEF40:
	// addi r4,r30,-1596
	ctx.r4.s64 = ctx.r30.s64 + -1596;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEF4C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbef6c
	if (!ctx.cr6.eq) goto loc_82CBEF6C;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEF6C:
	// addi r4,r30,-1580
	ctx.r4.s64 = ctx.r30.s64 + -1580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEF78;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbef98
	if (!ctx.cr6.eq) goto loc_82CBEF98;
	// li r11,21
	ctx.r11.s64 = 21;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEF98:
	// addi r4,r30,-1560
	ctx.r4.s64 = ctx.r30.s64 + -1560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEFA4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbefc4
	if (!ctx.cr6.eq) goto loc_82CBEFC4;
	// li r11,22
	ctx.r11.s64 = 22;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEFC4:
	// addi r4,r30,-1544
	ctx.r4.s64 = ctx.r30.s64 + -1544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEFD0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbeff0
	if (!ctx.cr6.eq) goto loc_82CBEFF0;
	// li r11,23
	ctx.r11.s64 = 23;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBEFF0:
	// addi r4,r30,-1528
	ctx.r4.s64 = ctx.r30.s64 + -1528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBEFFC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf01c
	if (!ctx.cr6.eq) goto loc_82CBF01C;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF01C:
	// addi r4,r30,-1512
	ctx.r4.s64 = ctx.r30.s64 + -1512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF028;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf048
	if (!ctx.cr6.eq) goto loc_82CBF048;
	// li r11,25
	ctx.r11.s64 = 25;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF048:
	// addi r4,r30,-1496
	ctx.r4.s64 = ctx.r30.s64 + -1496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF054;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf074
	if (!ctx.cr6.eq) goto loc_82CBF074;
	// li r11,26
	ctx.r11.s64 = 26;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF074:
	// addi r4,r30,-1472
	ctx.r4.s64 = ctx.r30.s64 + -1472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF080;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf0a0
	if (!ctx.cr6.eq) goto loc_82CBF0A0;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF0A0:
	// addi r4,r30,-1448
	ctx.r4.s64 = ctx.r30.s64 + -1448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF0AC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf0cc
	if (!ctx.cr6.eq) goto loc_82CBF0CC;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF0CC:
	// addi r4,r30,-1424
	ctx.r4.s64 = ctx.r30.s64 + -1424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF0D8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf0f8
	if (!ctx.cr6.eq) goto loc_82CBF0F8;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF0F8:
	// addi r4,r30,-1408
	ctx.r4.s64 = ctx.r30.s64 + -1408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF104;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf124
	if (!ctx.cr6.eq) goto loc_82CBF124;
	// li r11,30
	ctx.r11.s64 = 30;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF124:
	// addi r4,r30,-1388
	ctx.r4.s64 = ctx.r30.s64 + -1388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF130;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf150
	if (!ctx.cr6.eq) goto loc_82CBF150;
	// li r11,31
	ctx.r11.s64 = 31;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF150:
	// addi r4,r30,-1368
	ctx.r4.s64 = ctx.r30.s64 + -1368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF15C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf17c
	if (!ctx.cr6.eq) goto loc_82CBF17C;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF17C:
	// addi r4,r30,-1344
	ctx.r4.s64 = ctx.r30.s64 + -1344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF188;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf1a8
	if (!ctx.cr6.eq) goto loc_82CBF1A8;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF1A8:
	// addi r4,r30,-1320
	ctx.r4.s64 = ctx.r30.s64 + -1320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF1B4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf1d4
	if (!ctx.cr6.eq) goto loc_82CBF1D4;
	// li r11,34
	ctx.r11.s64 = 34;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF1D4:
	// addi r4,r30,-1300
	ctx.r4.s64 = ctx.r30.s64 + -1300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF1E0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf200
	if (!ctx.cr6.eq) goto loc_82CBF200;
	// li r11,35
	ctx.r11.s64 = 35;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF200:
	// addi r4,r30,-1276
	ctx.r4.s64 = ctx.r30.s64 + -1276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF20C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf22c
	if (!ctx.cr6.eq) goto loc_82CBF22C;
	// li r11,36
	ctx.r11.s64 = 36;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF22C:
	// addi r4,r30,-1248
	ctx.r4.s64 = ctx.r30.s64 + -1248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF238;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf258
	if (!ctx.cr6.eq) goto loc_82CBF258;
	// li r11,37
	ctx.r11.s64 = 37;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF258:
	// addi r4,r30,-1228
	ctx.r4.s64 = ctx.r30.s64 + -1228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF264;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf284
	if (!ctx.cr6.eq) goto loc_82CBF284;
	// li r11,38
	ctx.r11.s64 = 38;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF284:
	// addi r4,r30,-1200
	ctx.r4.s64 = ctx.r30.s64 + -1200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF290;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf2b0
	if (!ctx.cr6.eq) goto loc_82CBF2B0;
	// li r11,39
	ctx.r11.s64 = 39;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF2B0:
	// addi r4,r30,-1184
	ctx.r4.s64 = ctx.r30.s64 + -1184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF2BC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf2dc
	if (!ctx.cr6.eq) goto loc_82CBF2DC;
	// li r11,40
	ctx.r11.s64 = 40;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF2DC:
	// addi r4,r30,-1168
	ctx.r4.s64 = ctx.r30.s64 + -1168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF2E8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf308
	if (!ctx.cr6.eq) goto loc_82CBF308;
	// li r11,41
	ctx.r11.s64 = 41;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF308:
	// addi r4,r30,-1148
	ctx.r4.s64 = ctx.r30.s64 + -1148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF314;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf334
	if (!ctx.cr6.eq) goto loc_82CBF334;
	// li r11,42
	ctx.r11.s64 = 42;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF334:
	// addi r4,r30,-1132
	ctx.r4.s64 = ctx.r30.s64 + -1132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF340;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf360
	if (!ctx.cr6.eq) goto loc_82CBF360;
	// li r11,43
	ctx.r11.s64 = 43;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF360:
	// addi r4,r30,-1104
	ctx.r4.s64 = ctx.r30.s64 + -1104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF36C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf38c
	if (!ctx.cr6.eq) goto loc_82CBF38C;
	// li r11,44
	ctx.r11.s64 = 44;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF38C:
	// addi r4,r30,-1080
	ctx.r4.s64 = ctx.r30.s64 + -1080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF398;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf3b8
	if (!ctx.cr6.eq) goto loc_82CBF3B8;
	// li r11,45
	ctx.r11.s64 = 45;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF3B8:
	// addi r4,r30,-1052
	ctx.r4.s64 = ctx.r30.s64 + -1052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF3C4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf3e4
	if (!ctx.cr6.eq) goto loc_82CBF3E4;
	// li r11,46
	ctx.r11.s64 = 46;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF3E4:
	// addi r4,r30,-1028
	ctx.r4.s64 = ctx.r30.s64 + -1028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF3F0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf410
	if (!ctx.cr6.eq) goto loc_82CBF410;
	// li r11,47
	ctx.r11.s64 = 47;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF410:
	// addi r4,r30,-1008
	ctx.r4.s64 = ctx.r30.s64 + -1008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF41C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf43c
	if (!ctx.cr6.eq) goto loc_82CBF43C;
	// li r11,48
	ctx.r11.s64 = 48;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF43C:
	// addi r4,r30,-988
	ctx.r4.s64 = ctx.r30.s64 + -988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF448;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf468
	if (!ctx.cr6.eq) goto loc_82CBF468;
	// li r11,49
	ctx.r11.s64 = 49;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF468:
	// addi r4,r30,-968
	ctx.r4.s64 = ctx.r30.s64 + -968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF474;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf494
	if (!ctx.cr6.eq) goto loc_82CBF494;
	// li r11,50
	ctx.r11.s64 = 50;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF494:
	// addi r4,r30,-944
	ctx.r4.s64 = ctx.r30.s64 + -944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF4A0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf4c0
	if (!ctx.cr6.eq) goto loc_82CBF4C0;
	// li r11,51
	ctx.r11.s64 = 51;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF4C0:
	// addi r4,r30,-920
	ctx.r4.s64 = ctx.r30.s64 + -920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF4CC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf4ec
	if (!ctx.cr6.eq) goto loc_82CBF4EC;
	// li r11,52
	ctx.r11.s64 = 52;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF4EC:
	// addi r4,r30,-900
	ctx.r4.s64 = ctx.r30.s64 + -900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF4F8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf518
	if (!ctx.cr6.eq) goto loc_82CBF518;
	// li r11,53
	ctx.r11.s64 = 53;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF518:
	// addi r4,r30,-872
	ctx.r4.s64 = ctx.r30.s64 + -872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF524;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf544
	if (!ctx.cr6.eq) goto loc_82CBF544;
	// li r11,54
	ctx.r11.s64 = 54;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF544:
	// addi r4,r30,-844
	ctx.r4.s64 = ctx.r30.s64 + -844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF550;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf570
	if (!ctx.cr6.eq) goto loc_82CBF570;
	// li r11,55
	ctx.r11.s64 = 55;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF570:
	// addi r4,r30,-820
	ctx.r4.s64 = ctx.r30.s64 + -820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF57C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf59c
	if (!ctx.cr6.eq) goto loc_82CBF59C;
	// li r11,56
	ctx.r11.s64 = 56;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF59C:
	// addi r4,r30,-800
	ctx.r4.s64 = ctx.r30.s64 + -800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF5A8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf5c8
	if (!ctx.cr6.eq) goto loc_82CBF5C8;
	// li r11,57
	ctx.r11.s64 = 57;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF5C8:
	// addi r4,r30,-776
	ctx.r4.s64 = ctx.r30.s64 + -776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF5D4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf5f4
	if (!ctx.cr6.eq) goto loc_82CBF5F4;
	// li r11,58
	ctx.r11.s64 = 58;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF5F4:
	// addi r4,r30,-760
	ctx.r4.s64 = ctx.r30.s64 + -760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF600;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf620
	if (!ctx.cr6.eq) goto loc_82CBF620;
	// li r11,59
	ctx.r11.s64 = 59;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF620:
	// addi r4,r30,-736
	ctx.r4.s64 = ctx.r30.s64 + -736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF62C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf64c
	if (!ctx.cr6.eq) goto loc_82CBF64C;
	// li r11,60
	ctx.r11.s64 = 60;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF64C:
	// addi r4,r30,-712
	ctx.r4.s64 = ctx.r30.s64 + -712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF658;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf678
	if (!ctx.cr6.eq) goto loc_82CBF678;
	// li r11,61
	ctx.r11.s64 = 61;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF678:
	// addi r4,r30,-688
	ctx.r4.s64 = ctx.r30.s64 + -688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF684;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf6a4
	if (!ctx.cr6.eq) goto loc_82CBF6A4;
	// li r11,62
	ctx.r11.s64 = 62;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF6A4:
	// addi r4,r30,-664
	ctx.r4.s64 = ctx.r30.s64 + -664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF6B0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf6d0
	if (!ctx.cr6.eq) goto loc_82CBF6D0;
	// li r11,63
	ctx.r11.s64 = 63;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF6D0:
	// addi r4,r30,-640
	ctx.r4.s64 = ctx.r30.s64 + -640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF6DC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf6fc
	if (!ctx.cr6.eq) goto loc_82CBF6FC;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF6FC:
	// addi r4,r30,-616
	ctx.r4.s64 = ctx.r30.s64 + -616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF708;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf728
	if (!ctx.cr6.eq) goto loc_82CBF728;
	// li r11,65
	ctx.r11.s64 = 65;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF728:
	// addi r4,r30,-592
	ctx.r4.s64 = ctx.r30.s64 + -592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF734;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf754
	if (!ctx.cr6.eq) goto loc_82CBF754;
	// li r11,66
	ctx.r11.s64 = 66;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF754:
	// addi r4,r30,-572
	ctx.r4.s64 = ctx.r30.s64 + -572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF760;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf780
	if (!ctx.cr6.eq) goto loc_82CBF780;
	// li r11,67
	ctx.r11.s64 = 67;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF780:
	// addi r4,r30,-548
	ctx.r4.s64 = ctx.r30.s64 + -548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF78C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf7ac
	if (!ctx.cr6.eq) goto loc_82CBF7AC;
	// li r11,68
	ctx.r11.s64 = 68;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF7AC:
	// addi r4,r30,-528
	ctx.r4.s64 = ctx.r30.s64 + -528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF7B8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf7d8
	if (!ctx.cr6.eq) goto loc_82CBF7D8;
	// li r11,69
	ctx.r11.s64 = 69;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF7D8:
	// addi r4,r30,-500
	ctx.r4.s64 = ctx.r30.s64 + -500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF7E4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf804
	if (!ctx.cr6.eq) goto loc_82CBF804;
	// li r11,70
	ctx.r11.s64 = 70;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF804:
	// addi r4,r30,-472
	ctx.r4.s64 = ctx.r30.s64 + -472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF810;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf830
	if (!ctx.cr6.eq) goto loc_82CBF830;
	// li r11,71
	ctx.r11.s64 = 71;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF830:
	// addi r4,r30,-456
	ctx.r4.s64 = ctx.r30.s64 + -456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF83C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf85c
	if (!ctx.cr6.eq) goto loc_82CBF85C;
	// li r11,72
	ctx.r11.s64 = 72;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF85C:
	// addi r4,r30,-436
	ctx.r4.s64 = ctx.r30.s64 + -436;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF868;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf888
	if (!ctx.cr6.eq) goto loc_82CBF888;
	// li r11,73
	ctx.r11.s64 = 73;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF888:
	// addi r4,r30,-416
	ctx.r4.s64 = ctx.r30.s64 + -416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF894;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf8b4
	if (!ctx.cr6.eq) goto loc_82CBF8B4;
	// li r11,74
	ctx.r11.s64 = 74;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF8B4:
	// addi r4,r30,-392
	ctx.r4.s64 = ctx.r30.s64 + -392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF8C0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf8e0
	if (!ctx.cr6.eq) goto loc_82CBF8E0;
	// li r11,75
	ctx.r11.s64 = 75;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF8E0:
	// addi r4,r30,-368
	ctx.r4.s64 = ctx.r30.s64 + -368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF8EC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf90c
	if (!ctx.cr6.eq) goto loc_82CBF90C;
	// li r11,76
	ctx.r11.s64 = 76;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF90C:
	// addi r4,r30,-352
	ctx.r4.s64 = ctx.r30.s64 + -352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF918;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf938
	if (!ctx.cr6.eq) goto loc_82CBF938;
	// li r11,77
	ctx.r11.s64 = 77;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF938:
	// addi r4,r30,-336
	ctx.r4.s64 = ctx.r30.s64 + -336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF944;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf964
	if (!ctx.cr6.eq) goto loc_82CBF964;
	// li r11,78
	ctx.r11.s64 = 78;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF964:
	// addi r4,r30,-320
	ctx.r4.s64 = ctx.r30.s64 + -320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF970;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf990
	if (!ctx.cr6.eq) goto loc_82CBF990;
	// li r11,79
	ctx.r11.s64 = 79;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF990:
	// addi r4,r30,-284
	ctx.r4.s64 = ctx.r30.s64 + -284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF99C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf9bc
	if (!ctx.cr6.eq) goto loc_82CBF9BC;
	// li r11,80
	ctx.r11.s64 = 80;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF9BC:
	// addi r4,r30,-260
	ctx.r4.s64 = ctx.r30.s64 + -260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF9C8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbf9e8
	if (!ctx.cr6.eq) goto loc_82CBF9E8;
	// li r11,81
	ctx.r11.s64 = 81;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBF9E8:
	// addi r4,r30,-232
	ctx.r4.s64 = ctx.r30.s64 + -232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBF9F4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbfa14
	if (!ctx.cr6.eq) goto loc_82CBFA14;
	// li r11,82
	ctx.r11.s64 = 82;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBFA14:
	// addi r4,r30,-208
	ctx.r4.s64 = ctx.r30.s64 + -208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBFA20;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbfa40
	if (!ctx.cr6.eq) goto loc_82CBFA40;
	// li r11,83
	ctx.r11.s64 = 83;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBFA40:
	// addi r4,r30,-188
	ctx.r4.s64 = ctx.r30.s64 + -188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBFA4C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbfa6c
	if (!ctx.cr6.eq) goto loc_82CBFA6C;
	// li r11,84
	ctx.r11.s64 = 84;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBFA6C:
	// addi r4,r30,-160
	ctx.r4.s64 = ctx.r30.s64 + -160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBFA78;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbfa98
	if (!ctx.cr6.eq) goto loc_82CBFA98;
	// li r11,85
	ctx.r11.s64 = 85;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBFA98:
	// addi r4,r30,-136
	ctx.r4.s64 = ctx.r30.s64 + -136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBFAA4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbfac4
	if (!ctx.cr6.eq) goto loc_82CBFAC4;
	// li r11,86
	ctx.r11.s64 = 86;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBFAC4:
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBFAD0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbfaf0
	if (!ctx.cr6.eq) goto loc_82CBFAF0;
	// li r11,87
	ctx.r11.s64 = 87;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBFAF0:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBFAFC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbfb1c
	if (!ctx.cr6.eq) goto loc_82CBFB1C;
	// li r11,88
	ctx.r11.s64 = 88;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBFB1C:
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBFB28;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbfb48
	if (!ctx.cr6.eq) goto loc_82CBFB48;
	// li r11,89
	ctx.r11.s64 = 89;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBFB48:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBFB54;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbfb74
	if (!ctx.cr6.eq) goto loc_82CBFB74;
	// li r11,90
	ctx.r11.s64 = 90;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBFB74:
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBFB80;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbfba0
	if (!ctx.cr6.eq) goto loc_82CBFBA0;
	// li r11,91
	ctx.r11.s64 = 91;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBFBA0:
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBFBAC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbfbcc
	if (!ctx.cr6.eq) goto loc_82CBFBCC;
	// li r11,92
	ctx.r11.s64 = 92;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBFBCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBFBD8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbfbec
	if (!ctx.cr6.eq) goto loc_82CBFBEC;
	// li r11,93
	ctx.r11.s64 = 93;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82CBFBEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBFBF8"))) PPC_WEAK_FUNC(sub_82CBFBF8);
PPC_FUNC_IMPL(__imp__sub_82CBFBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f0,-27592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27592);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBFC28"))) PPC_WEAK_FUNC(sub_82CBFC28);
PPC_FUNC_IMPL(__imp__sub_82CBFC28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBFC30"))) PPC_WEAK_FUNC(sub_82CBFC30);
PPC_FUNC_IMPL(__imp__sub_82CBFC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBFC38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CBFC54;
	sub_82CE4700(ctx, base);
	// lis r28,-31975
	ctx.r28.s64 = -2095513600;
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,6740
	ctx.r30.s64 = ctx.r11.s64 + 6740;
	// bne cr6,0x82cbfc78
	if (!ctx.cr6.eq) goto loc_82CBFC78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cbfc8c
	if (ctx.cr6.eq) goto loc_82CBFC8C;
loc_82CBFC78:
	// addi r5,r30,12548
	ctx.r5.s64 = ctx.r30.s64 + 12548;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CBFC8C;
	sub_82CE4DB0(ctx, base);
loc_82CBFC8C:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cbfcb0
	if (ctx.cr6.eq) goto loc_82CBFCB0;
	// addi r5,r30,12552
	ctx.r5.s64 = ctx.r30.s64 + 12552;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CBFCAC;
	sub_82CE4C50(ctx, base);
	// b 0x82cbfd08
	goto loc_82CBFD08;
loc_82CBFCB0:
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cbfcc8
	if (!ctx.cr6.eq) goto loc_82CBFCC8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cbfd08
	if (ctx.cr6.eq) goto loc_82CBFD08;
loc_82CBFCC8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82cbfcf4
	if (ctx.cr6.lt) goto loc_82CBFCF4;
	// beq cr6,0x82cbfcec
	if (ctx.cr6.eq) goto loc_82CBFCEC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82cbfcf8
	if (!ctx.cr6.lt) goto loc_82CBFCF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82cbfcf8
	goto loc_82CBFCF8;
loc_82CBFCEC:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// b 0x82cbfcf8
	goto loc_82CBFCF8;
loc_82CBFCF4:
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
loc_82CBFCF8:
	// addi r5,r30,12560
	ctx.r5.s64 = ctx.r30.s64 + 12560;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CBFD08;
	sub_82CE4DB0(ctx, base);
loc_82CBFD08:
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cbfd24
	if (!ctx.cr6.eq) goto loc_82CBFD24;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cbfd38
	if (ctx.cr6.eq) goto loc_82CBFD38;
loc_82CBFD24:
	// addi r5,r30,12568
	ctx.r5.s64 = ctx.r30.s64 + 12568;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CBFD38;
	sub_82CE4C50(ctx, base);
loc_82CBFD38:
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cbfd58
	if (!ctx.cr6.eq) goto loc_82CBFD58;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-27592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27592);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cbfd6c
	if (ctx.cr6.eq) goto loc_82CBFD6C;
loc_82CBFD58:
	// addi r5,r30,12580
	ctx.r5.s64 = ctx.r30.s64 + 12580;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CBFD6C;
	sub_82CE4D00(ctx, base);
loc_82CBFD6C:
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cbfd84
	if (!ctx.cr6.eq) goto loc_82CBFD84;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82cbfd98
	if (ctx.cr6.eq) goto loc_82CBFD98;
loc_82CBFD84:
	// addi r5,r30,12600
	ctx.r5.s64 = ctx.r30.s64 + 12600;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CBFD98;
	sub_82CE4C50(ctx, base);
loc_82CBFD98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CBFDA0;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBFDA8"))) PPC_WEAK_FUNC(sub_82CBFDA8);
PPC_FUNC_IMPL(__imp__sub_82CBFDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CBFDB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CBFDC8;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cbfe7c
	if (ctx.cr6.eq) goto loc_82CBFE7C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,19412
	ctx.r30.s64 = ctx.r11.s64 + 19412;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CBFDF0;
	sub_82CE3780(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// li r6,1
	ctx.r6.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82cbfe1c
	if (ctx.cr6.eq) goto loc_82CBFE1C;
	// addi r5,r30,-48
	ctx.r5.s64 = ctx.r30.s64 + -48;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CBFE10;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x82cbfe38
	goto loc_82CBFE38;
loc_82CBFE1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r30,-40
	ctx.r5.s64 = ctx.r30.s64 + -40;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ce3780
	ctx.lr = 0x82CBFE2C;
	sub_82CE3780(ctx, base);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cb9ba0
	ctx.lr = 0x82CBFE38;
	sub_82CB9BA0(ctx, base);
loc_82CBFE38:
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CBFE4C;
	sub_82CE2BA8(ctx, base);
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CBFE60;
	sub_82CE2C50(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CBFE74;
	sub_82CE2BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CBFE7C;
	sub_82CE3628(ctx, base);
loc_82CBFE7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBFE88"))) PPC_WEAK_FUNC(sub_82CBFE88);
PPC_FUNC_IMPL(__imp__sub_82CBFE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBFEB0"))) PPC_WEAK_FUNC(sub_82CBFEB0);
PPC_FUNC_IMPL(__imp__sub_82CBFEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBFED8"))) PPC_WEAK_FUNC(sub_82CBFED8);
PPC_FUNC_IMPL(__imp__sub_82CBFED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBFEF8"))) PPC_WEAK_FUNC(sub_82CBFEF8);
PPC_FUNC_IMPL(__imp__sub_82CBFEF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBFF00"))) PPC_WEAK_FUNC(sub_82CBFF00);
PPC_FUNC_IMPL(__imp__sub_82CBFF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBFF08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CBFF28;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,19452
	ctx.r29.s64 = ctx.r11.s64 + 19452;
	// beq cr6,0x82cbff60
	if (ctx.cr6.eq) goto loc_82CBFF60;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cbff60
	if (!ctx.cr6.eq) goto loc_82CBFF60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CBFF4C;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-20
	ctx.r5.s64 = ctx.r29.s64 + -20;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CBFF60;
	sub_82CE4DB0(ctx, base);
loc_82CBFF60:
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// lis r30,-31975
	ctx.r30.s64 = -2095513600;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cbff88
	if (ctx.cr6.eq) goto loc_82CBFF88;
	// addi r5,r29,-16
	ctx.r5.s64 = ctx.r29.s64 + -16;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CBFF84;
	sub_82CE4C50(ctx, base);
	// b 0x82cbffbc
	goto loc_82CBFFBC;
loc_82CBFF88:
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cbffa0
	if (!ctx.cr6.eq) goto loc_82CBFFA0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cbffbc
	if (ctx.cr6.eq) goto loc_82CBFFBC;
loc_82CBFFA0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82cb89d0
	ctx.lr = 0x82CBFFA8;
	sub_82CB89D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CBFFBC;
	sub_82CE4DB0(ctx, base);
loc_82CBFFBC:
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cbffdc
	if (!ctx.cr6.eq) goto loc_82CBFFDC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cbfff0
	if (ctx.cr6.eq) goto loc_82CBFFF0;
loc_82CBFFDC:
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CBFFF0;
	sub_82CE4D00(ctx, base);
loc_82CBFFF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CBFFF8;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0000"))) PPC_WEAK_FUNC(sub_82CC0000);
PPC_FUNC_IMPL(__imp__sub_82CC0000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC0008;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC0020;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc0098
	if (ctx.cr6.eq) goto loc_82CC0098;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,19476
	ctx.r30.s64 = ctx.r11.s64 + 19476;
	// beq cr6,0x82cc0060
	if (ctx.cr6.eq) goto loc_82CC0060;
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC0054;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82cc007c
	goto loc_82CC007C;
loc_82CC0060:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ce3780
	ctx.lr = 0x82CC0070;
	sub_82CE3780(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cb9008
	ctx.lr = 0x82CC007C;
	sub_82CB9008(ctx, base);
loc_82CC007C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC0090;
	sub_82CE2C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC0098;
	sub_82CE3628(ctx, base);
loc_82CC0098:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC00A0"))) PPC_WEAK_FUNC(sub_82CC00A0);
PPC_FUNC_IMPL(__imp__sub_82CC00A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC00A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC00C0;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc0214
	if (ctx.cr6.eq) goto loc_82CC0214;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r28,r11,19708
	ctx.r28.s64 = ctx.r11.s64 + 19708;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r28,-80
	ctx.r5.s64 = ctx.r28.s64 + -80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC00E8;
	sub_82CE3780(ctx, base);
	// addi r5,r28,-76
	ctx.r5.s64 = ctx.r28.s64 + -76;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC00FC;
	sub_82CE3780(ctx, base);
	// addi r5,r28,-60
	ctx.r5.s64 = ctx.r28.s64 + -60;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4018
	ctx.lr = 0x82CC0110;
	sub_82CE4018(ctx, base);
	// addi r5,r28,-52
	ctx.r5.s64 = ctx.r28.s64 + -52;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4268
	ctx.lr = 0x82CC0124;
	sub_82CE4268(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc0150
	if (ctx.cr6.eq) goto loc_82CC0150;
	// addi r5,r28,-40
	ctx.r5.s64 = ctx.r28.s64 + -40;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC0144;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// b 0x82cc01e4
	goto loc_82CC01E4;
loc_82CC0150:
	// addi r5,r28,-32
	ctx.r5.s64 = ctx.r28.s64 + -32;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82ce4700
	ctx.lr = 0x82CC015C;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc01e4
	if (ctx.cr6.eq) goto loc_82CC01E4;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r24.u32);
loc_82CC0178:
	// slw r27,r25,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb9dc8
	ctx.lr = 0x82CC0184;
	sub_82CB9DC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cc01dc
	if (ctx.cr6.eq) goto loc_82CC01DC;
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// bl 0x82e2c390
	ctx.lr = 0x82CC0198;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc01d0
	if (!ctx.cr6.eq) goto loc_82CC01D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC01B8;
	sub_82CE2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc01d0
	if (ctx.cr6.eq) goto loc_82CC01D0;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
loc_82CC01D0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc0178
	if (ctx.cr6.lt) goto loc_82CC0178;
loc_82CC01DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC01E4;
	sub_82CE3628(ctx, base);
loc_82CC01E4:
	// addi r5,r28,-16
	ctx.r5.s64 = ctx.r28.s64 + -16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC01F8;
	sub_82CE2BA8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3e38
	ctx.lr = 0x82CC020C;
	sub_82CE3E38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC0214;
	sub_82CE3628(ctx, base);
loc_82CC0214:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0220"))) PPC_WEAK_FUNC(sub_82CC0220);
PPC_FUNC_IMPL(__imp__sub_82CC0220) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// b 0x82ce1aa0
	sub_82CE1AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0240"))) PPC_WEAK_FUNC(sub_82CC0240);
PPC_FUNC_IMPL(__imp__sub_82CC0240) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// b 0x82cdfb78
	sub_82CDFB78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0258"))) PPC_WEAK_FUNC(sub_82CC0258);
PPC_FUNC_IMPL(__imp__sub_82CC0258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC0260;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC0278;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc03a4
	if (ctx.cr6.eq) goto loc_82CC03A4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,7428
	ctx.r30.s64 = ctx.r11.s64 + 7428;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r30,12364
	ctx.r5.s64 = ctx.r30.s64 + 12364;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4018
	ctx.lr = 0x82CC02A0;
	sub_82CE4018(ctx, base);
	// addi r5,r30,12372
	ctx.r5.s64 = ctx.r30.s64 + 12372;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4268
	ctx.lr = 0x82CC02B4;
	sub_82CE4268(ctx, base);
	// lbz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 156);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc02ec
	if (ctx.cr6.eq) goto loc_82CC02EC;
	// addi r5,r30,12384
	ctx.r5.s64 = ctx.r30.s64 + 12384;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC02D4;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
	// bl 0x82ce3628
	ctx.lr = 0x82CC02E4;
	sub_82CE3628(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
loc_82CC02EC:
	// addi r5,r30,12392
	ctx.r5.s64 = ctx.r30.s64 + 12392;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82ce4700
	ctx.lr = 0x82CC02F8;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc039c
	if (ctx.cr6.eq) goto loc_82CC039C;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r25.u32);
loc_82CC0314:
	// slw r29,r24,r26
	ctx.r29.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r26.u8 & 0x3F));
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82cc0340
	if (ctx.cr6.eq) goto loc_82CC0340;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82cc0338
	if (ctx.cr6.eq) goto loc_82CC0338;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x82cc0394
	if (!ctx.cr6.eq) goto loc_82CC0394;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x82cc0344
	goto loc_82CC0344;
loc_82CC0338:
	// addi r31,r30,-24
	ctx.r31.s64 = ctx.r30.s64 + -24;
	// b 0x82cc0344
	goto loc_82CC0344;
loc_82CC0340:
	// addi r31,r30,-44
	ctx.r31.s64 = ctx.r30.s64 + -44;
loc_82CC0344:
	// addi r4,r30,12400
	ctx.r4.s64 = ctx.r30.s64 + 12400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC0350;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc0388
	if (!ctx.cr6.eq) goto loc_82CC0388;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC0370;
	sub_82CE2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc0388
	if (ctx.cr6.eq) goto loc_82CC0388;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// or r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 | ctx.r11.u64;
	// stw r11,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
loc_82CC0388:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc0314
	if (ctx.cr6.lt) goto loc_82CC0314;
loc_82CC0394:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC039C;
	sub_82CE3628(ctx, base);
loc_82CC039C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC03A4;
	sub_82CE3628(ctx, base);
loc_82CC03A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC03B0"))) PPC_WEAK_FUNC(sub_82CC03B0);
PPC_FUNC_IMPL(__imp__sub_82CC03B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x82ce1bf8
	sub_82CE1BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC03D0"))) PPC_WEAK_FUNC(sub_82CC03D0);
PPC_FUNC_IMPL(__imp__sub_82CC03D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// b 0x82cdff30
	sub_82CDFF30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC03E8"))) PPC_WEAK_FUNC(sub_82CC03E8);
PPC_FUNC_IMPL(__imp__sub_82CC03E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC03F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC0408;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc045c
	if (ctx.cr6.eq) goto loc_82CC045C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,19860
	ctx.r29.s64 = ctx.r11.s64 + 19860;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// addi r5,r29,-4
	ctx.r5.s64 = ctx.r29.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC0430;
	sub_82CE3780(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC0444;
	sub_82CE3780(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc0258
	ctx.lr = 0x82CC0454;
	sub_82CC0258(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC045C;
	sub_82CE3628(ctx, base);
loc_82CC045C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0468"))) PPC_WEAK_FUNC(sub_82CC0468);
PPC_FUNC_IMPL(__imp__sub_82CC0468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC0470;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC0488;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc05c4
	if (ctx.cr6.eq) goto loc_82CC05C4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,20320
	ctx.r29.s64 = ctx.r11.s64 + 20320;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// addi r5,r29,-192
	ctx.r5.s64 = ctx.r29.s64 + -192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC04B0;
	sub_82CE3780(ctx, base);
	// addi r5,r29,-188
	ctx.r5.s64 = ctx.r29.s64 + -188;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC04C4;
	sub_82CE3780(ctx, base);
	// addi r5,r29,-172
	ctx.r5.s64 = ctx.r29.s64 + -172;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3a58
	ctx.lr = 0x82CC04D8;
	sub_82CE3A58(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82cc0504
	if (ctx.cr6.eq) goto loc_82CC0504;
	// addi r5,r29,-152
	ctx.r5.s64 = ctx.r29.s64 + -152;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC04F8;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// b 0x82cc0520
	goto loc_82CC0520;
loc_82CC0504:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r29,-128
	ctx.r5.s64 = ctx.r29.s64 + -128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ce3780
	ctx.lr = 0x82CC0514;
	sub_82CE3780(ctx, base);
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cba030
	ctx.lr = 0x82CC0520;
	sub_82CBA030(ctx, base);
loc_82CC0520:
	// addi r5,r29,-104
	ctx.r5.s64 = ctx.r29.s64 + -104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC0534;
	sub_82CE2C50(ctx, base);
	// addi r5,r29,-76
	ctx.r5.s64 = ctx.r29.s64 + -76;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC0548;
	sub_82CE2BA8(ctx, base);
	// addi r5,r29,-64
	ctx.r5.s64 = ctx.r29.s64 + -64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC055C;
	sub_82CE2BA8(ctx, base);
	// addi r5,r29,-48
	ctx.r5.s64 = ctx.r29.s64 + -48;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3e38
	ctx.lr = 0x82CC0570;
	sub_82CE3E38(ctx, base);
	// addi r5,r29,-36
	ctx.r5.s64 = ctx.r29.s64 + -36;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC0584;
	sub_82CE2C50(ctx, base);
	// addi r5,r29,-16
	ctx.r5.s64 = ctx.r29.s64 + -16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC0598;
	sub_82CE2BA8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3e38
	ctx.lr = 0x82CC05AC;
	sub_82CE3E38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc0258
	ctx.lr = 0x82CC05BC;
	sub_82CC0258(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC05C4;
	sub_82CE3628(ctx, base);
loc_82CC05C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC05D0"))) PPC_WEAK_FUNC(sub_82CC05D0);
PPC_FUNC_IMPL(__imp__sub_82CC05D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC05D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// bl 0x82ce1b70
	ctx.lr = 0x82CC0610;
	sub_82CE1B70(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82ce1bf8
	ctx.lr = 0x82CC0628;
	sub_82CE1BF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0630"))) PPC_WEAK_FUNC(sub_82CC0630);
PPC_FUNC_IMPL(__imp__sub_82CC0630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC0638;
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
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f0,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// bl 0x82cdfaf0
	ctx.lr = 0x82CC066C;
	sub_82CDFAF0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x82cdff30
	ctx.lr = 0x82CC0684;
	sub_82CDFF30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0690"))) PPC_WEAK_FUNC(sub_82CC0690);
PPC_FUNC_IMPL(__imp__sub_82CC0690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CC0698;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC06B0;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc081c
	if (ctx.cr6.eq) goto loc_82CC081C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,7512
	ctx.r30.s64 = ctx.r11.s64 + 7512;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,12936
	ctx.r5.s64 = ctx.r30.s64 + 12936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC06D8;
	sub_82CE3780(ctx, base);
	// addi r5,r30,12940
	ctx.r5.s64 = ctx.r30.s64 + 12940;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC06EC;
	sub_82CE3780(ctx, base);
	// addi r5,r30,12956
	ctx.r5.s64 = ctx.r30.s64 + 12956;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC0700;
	sub_82CE2BA8(ctx, base);
	// addi r5,r30,12964
	ctx.r5.s64 = ctx.r30.s64 + 12964;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC0714;
	sub_82CE2BA8(ctx, base);
	// addi r5,r30,12976
	ctx.r5.s64 = ctx.r30.s64 + 12976;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3a58
	ctx.lr = 0x82CC0728;
	sub_82CE3A58(ctx, base);
	// addi r5,r30,12988
	ctx.r5.s64 = ctx.r30.s64 + 12988;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC073C;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,13004
	ctx.r5.s64 = ctx.r30.s64 + 13004;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC0750;
	sub_82CE2C50(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc0788
	if (ctx.cr6.eq) goto loc_82CC0788;
	// addi r5,r30,13024
	ctx.r5.s64 = ctx.r30.s64 + 13024;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC0770;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// bl 0x82ce3628
	ctx.lr = 0x82CC0780;
	sub_82CE3628(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
loc_82CC0788:
	// addi r5,r30,13032
	ctx.r5.s64 = ctx.r30.s64 + 13032;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82ce4700
	ctx.lr = 0x82CC0794;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc0814
	if (ctx.cr6.eq) goto loc_82CC0814;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r27,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r27.u32);
loc_82CC07B0:
	// slw r11,r26,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r28.u8 & 0x3F));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82cc080c
	if (!ctx.cr6.eq) goto loc_82CC080C;
	// addi r4,r30,13040
	ctx.r4.s64 = ctx.r30.s64 + 13040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC07C8;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc0800
	if (!ctx.cr6.eq) goto loc_82CC0800;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC07E8;
	sub_82CE2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc0800
	if (ctx.cr6.eq) goto loc_82CC0800;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
loc_82CC0800:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 32, ctx.xer);
	// blt cr6,0x82cc07b0
	if (ctx.cr6.lt) goto loc_82CC07B0;
loc_82CC080C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC0814;
	sub_82CE3628(ctx, base);
loc_82CC0814:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC081C;
	sub_82CE3628(ctx, base);
loc_82CC081C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0828"))) PPC_WEAK_FUNC(sub_82CC0828);
PPC_FUNC_IMPL(__imp__sub_82CC0828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// b 0x82ce1c70
	sub_82CE1C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0868"))) PPC_WEAK_FUNC(sub_82CC0868);
PPC_FUNC_IMPL(__imp__sub_82CC0868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// b 0x82cdffb8
	sub_82CDFFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC08A0"))) PPC_WEAK_FUNC(sub_82CC08A0);
PPC_FUNC_IMPL(__imp__sub_82CC08A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC08C0"))) PPC_WEAK_FUNC(sub_82CC08C0);
PPC_FUNC_IMPL(__imp__sub_82CC08C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC08C8"))) PPC_WEAK_FUNC(sub_82CC08C8);
PPC_FUNC_IMPL(__imp__sub_82CC08C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC08D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC08F0;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r29,r11,20608
	ctx.r29.s64 = ctx.r11.s64 + 20608;
	// beq cr6,0x82cc0928
	if (ctx.cr6.eq) goto loc_82CC0928;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc0928
	if (!ctx.cr6.eq) goto loc_82CC0928;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC0914;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-48
	ctx.r5.s64 = ctx.r29.s64 + -48;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC0928;
	sub_82CE4DB0(ctx, base);
loc_82CC0928:
	// lis r28,-31975
	ctx.r28.s64 = -2095513600;
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc0944
	if (!ctx.cr6.eq) goto loc_82CC0944;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc095c
	if (ctx.cr6.eq) goto loc_82CC095C;
loc_82CC0944:
	// addi r5,r29,-44
	ctx.r5.s64 = ctx.r29.s64 + -44;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC0958;
	sub_82CE4DB0(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC095C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc0974
	if (!ctx.cr6.eq) goto loc_82CC0974;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc098c
	if (ctx.cr6.eq) goto loc_82CC098C;
loc_82CC0974:
	// addi r5,r29,-28
	ctx.r5.s64 = ctx.r29.s64 + -28;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC0988;
	sub_82CE4C50(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC098C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc09a4
	if (!ctx.cr6.eq) goto loc_82CC09A4;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82cc09bc
	if (ctx.cr6.eq) goto loc_82CC09BC;
loc_82CC09A4:
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC09B8;
	sub_82CE4BA0(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC09BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc09d4
	if (!ctx.cr6.eq) goto loc_82CC09D4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc09e8
	if (ctx.cr6.eq) goto loc_82CC09E8;
loc_82CC09D4:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC09E8;
	sub_82CE4BA0(ctx, base);
loc_82CC09E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC09F0;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC09F8"))) PPC_WEAK_FUNC(sub_82CC09F8);
PPC_FUNC_IMPL(__imp__sub_82CC09F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC0A00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC0A18;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc0a84
	if (ctx.cr6.eq) goto loc_82CC0A84;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,20664
	ctx.r30.s64 = ctx.r11.s64 + 20664;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC0A40;
	sub_82CE3780(ctx, base);
	// addi r5,r30,-28
	ctx.r5.s64 = ctx.r30.s64 + -28;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC0A54;
	sub_82CE2BA8(ctx, base);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC0A68;
	sub_82CE2A58(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC0A7C;
	sub_82CE2A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC0A84;
	sub_82CE3628(ctx, base);
loc_82CC0A84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0A90"))) PPC_WEAK_FUNC(sub_82CC0A90);
PPC_FUNC_IMPL(__imp__sub_82CC0A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC0A98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC0AB0;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc0b74
	if (ctx.cr6.eq) goto loc_82CC0B74;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,20804
	ctx.r29.s64 = ctx.r11.s64 + 20804;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// addi r5,r29,-60
	ctx.r5.s64 = ctx.r29.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC0AD8;
	sub_82CE3780(ctx, base);
	// addi r5,r29,-56
	ctx.r5.s64 = ctx.r29.s64 + -56;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC0AEC;
	sub_82CE3780(ctx, base);
	// addi r5,r29,-40
	ctx.r5.s64 = ctx.r29.s64 + -40;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3a58
	ctx.lr = 0x82CC0B00;
	sub_82CE3A58(ctx, base);
	// addi r5,r29,-24
	ctx.r5.s64 = ctx.r29.s64 + -24;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3a58
	ctx.lr = 0x82CC0B14;
	sub_82CE3A58(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82cc0b40
	if (ctx.cr6.eq) goto loc_82CC0B40;
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC0B34;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// b 0x82cc0b5c
	goto loc_82CC0B5C;
loc_82CC0B40:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ce3780
	ctx.lr = 0x82CC0B50;
	sub_82CE3780(ctx, base);
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cba268
	ctx.lr = 0x82CC0B5C;
	sub_82CBA268(ctx, base);
loc_82CC0B5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc0258
	ctx.lr = 0x82CC0B6C;
	sub_82CC0258(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC0B74;
	sub_82CE3628(ctx, base);
loc_82CC0B74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0B80"))) PPC_WEAK_FUNC(sub_82CC0B80);
PPC_FUNC_IMPL(__imp__sub_82CC0B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC0B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82ce1ca0
	ctx.lr = 0x82CC0BB0;
	sub_82CE1CA0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82ce1bf8
	ctx.lr = 0x82CC0BC8;
	sub_82CE1BF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0BD0"))) PPC_WEAK_FUNC(sub_82CC0BD0);
PPC_FUNC_IMPL(__imp__sub_82CC0BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC0BD8;
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
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// bl 0x82cdffe8
	ctx.lr = 0x82CC0BFC;
	sub_82CDFFE8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x82cdff30
	ctx.lr = 0x82CC0C14;
	sub_82CDFF30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0C20"))) PPC_WEAK_FUNC(sub_82CC0C20);
PPC_FUNC_IMPL(__imp__sub_82CC0C20) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC0C40"))) PPC_WEAK_FUNC(sub_82CC0C40);
PPC_FUNC_IMPL(__imp__sub_82CC0C40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC0C48"))) PPC_WEAK_FUNC(sub_82CC0C48);
PPC_FUNC_IMPL(__imp__sub_82CC0C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC0C50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC0C70;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r29,r11,20840
	ctx.r29.s64 = ctx.r11.s64 + 20840;
	// beq cr6,0x82cc0ca8
	if (ctx.cr6.eq) goto loc_82CC0CA8;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc0ca8
	if (!ctx.cr6.eq) goto loc_82CC0CA8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC0C94;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-28
	ctx.r5.s64 = ctx.r29.s64 + -28;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC0CA8;
	sub_82CE4DB0(ctx, base);
loc_82CC0CA8:
	// lis r28,-31975
	ctx.r28.s64 = -2095513600;
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc0cc4
	if (!ctx.cr6.eq) goto loc_82CC0CC4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc0cdc
	if (ctx.cr6.eq) goto loc_82CC0CDC;
loc_82CC0CC4:
	// addi r5,r29,-24
	ctx.r5.s64 = ctx.r29.s64 + -24;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC0CD8;
	sub_82CE4C50(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC0CDC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc0cf4
	if (!ctx.cr6.eq) goto loc_82CC0CF4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc0d0c
	if (ctx.cr6.eq) goto loc_82CC0D0C;
loc_82CC0CF4:
	// addi r5,r29,-16
	ctx.r5.s64 = ctx.r29.s64 + -16;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC0D08;
	sub_82CE4C50(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC0D0C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc0d24
	if (!ctx.cr6.eq) goto loc_82CC0D24;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc0d3c
	if (ctx.cr6.eq) goto loc_82CC0D3C;
loc_82CC0D24:
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC0D38;
	sub_82CE4C50(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC0D3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc0d54
	if (!ctx.cr6.eq) goto loc_82CC0D54;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc0d68
	if (ctx.cr6.eq) goto loc_82CC0D68;
loc_82CC0D54:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC0D68;
	sub_82CE4C50(ctx, base);
loc_82CC0D68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC0D70;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0D78"))) PPC_WEAK_FUNC(sub_82CC0D78);
PPC_FUNC_IMPL(__imp__sub_82CC0D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC0D80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC0D98;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc0e04
	if (ctx.cr6.eq) goto loc_82CC0E04;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,20872
	ctx.r30.s64 = ctx.r11.s64 + 20872;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC0DC0;
	sub_82CE2BA8(ctx, base);
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC0DD4;
	sub_82CE2BA8(ctx, base);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC0DE8;
	sub_82CE2BA8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC0DFC;
	sub_82CE2BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC0E04;
	sub_82CE3628(ctx, base);
loc_82CC0E04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC0E10"))) PPC_WEAK_FUNC(sub_82CC0E10);
PPC_FUNC_IMPL(__imp__sub_82CC0E10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC0E38"))) PPC_WEAK_FUNC(sub_82CC0E38);
PPC_FUNC_IMPL(__imp__sub_82CC0E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC0E60"))) PPC_WEAK_FUNC(sub_82CC0E60);
PPC_FUNC_IMPL(__imp__sub_82CC0E60) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC0E78"))) PPC_WEAK_FUNC(sub_82CC0E78);
PPC_FUNC_IMPL(__imp__sub_82CC0E78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC0E80"))) PPC_WEAK_FUNC(sub_82CC0E80);
PPC_FUNC_IMPL(__imp__sub_82CC0E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82CC0E88;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC0EA8;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,20920
	ctx.r28.s64 = ctx.r11.s64 + 20920;
	// beq cr6,0x82cc0ee0
	if (ctx.cr6.eq) goto loc_82CC0EE0;
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc0ee0
	if (!ctx.cr6.eq) goto loc_82CC0EE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC0ECC;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,-40
	ctx.r5.s64 = ctx.r28.s64 + -40;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC0EE0;
	sub_82CE4DB0(ctx, base);
loc_82CC0EE0:
	// lis r31,-31975
	ctx.r31.s64 = -2095513600;
	// lbz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc0efc
	if (!ctx.cr6.eq) goto loc_82CC0EFC;
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc0f14
	if (ctx.cr6.eq) goto loc_82CC0F14;
loc_82CC0EFC:
	// addi r5,r28,-36
	ctx.r5.s64 = ctx.r28.s64 + -36;
	// lhz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce5758
	ctx.lr = 0x82CC0F10;
	sub_82CE5758(ctx, base);
	// lbz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11508);
loc_82CC0F14:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc0f2c
	if (!ctx.cr6.eq) goto loc_82CC0F2C;
	// lhz r10,2(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc0f44
	if (ctx.cr6.eq) goto loc_82CC0F44;
loc_82CC0F2C:
	// addi r5,r28,-28
	ctx.r5.s64 = ctx.r28.s64 + -28;
	// lhz r4,2(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce5758
	ctx.lr = 0x82CC0F40;
	sub_82CE5758(ctx, base);
	// lbz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11508);
loc_82CC0F44:
	// lbz r10,156(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc0f74
	if (ctx.cr6.eq) goto loc_82CC0F74;
	// addi r5,r28,-20
	ctx.r5.s64 = ctx.r28.s64 + -20;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC0F64;
	sub_82CE4C50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC0F6C;
	sub_82CE3628(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
loc_82CC0F74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc0f90
	if (!ctx.cr6.eq) goto loc_82CC0F90;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82cc1020
	if (ctx.cr6.eq) goto loc_82CC1020;
loc_82CC0F90:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC0FA0;
	sub_82CE4700(ctx, base);
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC0FB4;
	sub_82CE4DB0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82CC0FBC:
	// slw r31,r25,r27
	ctx.r31.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r27.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbd628
	ctx.lr = 0x82CC0FC8;
	sub_82CBD628(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cc1018
	if (ctx.cr6.eq) goto loc_82CC1018;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC0FDC;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc100c
	if (!ctx.cr6.eq) goto loc_82CC100C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc0ffc
	if (ctx.cr6.eq) goto loc_82CC0FFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82CC0FFC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC100C;
	sub_82CE4BA0(ctx, base);
loc_82CC100C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x82cc0fbc
	if (ctx.cr6.lt) goto loc_82CC0FBC;
loc_82CC1018:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC1020;
	sub_82CE3628(ctx, base);
loc_82CC1020:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC1028;
	sub_82CE3628(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1030"))) PPC_WEAK_FUNC(sub_82CC1030);
PPC_FUNC_IMPL(__imp__sub_82CC1030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC1038;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC1050;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc1160
	if (ctx.cr6.eq) goto loc_82CC1160;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r26,r11,20960
	ctx.r26.s64 = ctx.r11.s64 + 20960;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r26,-32
	ctx.r5.s64 = ctx.r26.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce2b00
	ctx.lr = 0x82CC1078;
	sub_82CE2B00(ctx, base);
	// addi r5,r26,-24
	ctx.r5.s64 = ctx.r26.s64 + -24;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r27,2
	ctx.r4.s64 = ctx.r27.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce2b00
	ctx.lr = 0x82CC108C;
	sub_82CE2B00(ctx, base);
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc10c4
	if (ctx.cr6.eq) goto loc_82CC10C4;
	// addi r5,r26,-16
	ctx.r5.s64 = ctx.r26.s64 + -16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC10AC;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// bl 0x82ce3628
	ctx.lr = 0x82CC10BC;
	sub_82CE3628(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
loc_82CC10C4:
	// addi r5,r26,-8
	ctx.r5.s64 = ctx.r26.s64 + -8;
	// li r4,65
	ctx.r4.s64 = 65;
	// bl 0x82ce4700
	ctx.lr = 0x82CC10D0;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc1158
	if (ctx.cr6.eq) goto loc_82CC1158;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// stw r24,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r24.u32);
loc_82CC10EC:
	// slw r29,r25,r28
	ctx.r29.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r28.u8 & 0x3F));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cbd628
	ctx.lr = 0x82CC10F8;
	sub_82CBD628(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cc1150
	if (ctx.cr6.eq) goto loc_82CC1150;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC110C;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc1144
	if (!ctx.cr6.eq) goto loc_82CC1144;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC112C;
	sub_82CE2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc1144
	if (ctx.cr6.eq) goto loc_82CC1144;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// or r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 | ctx.r11.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_82CC1144:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 32, ctx.xer);
	// blt cr6,0x82cc10ec
	if (ctx.cr6.lt) goto loc_82CC10EC;
loc_82CC1150:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC1158;
	sub_82CE3628(ctx, base);
loc_82CC1158:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC1160;
	sub_82CE3628(ctx, base);
loc_82CC1160:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1168"))) PPC_WEAK_FUNC(sub_82CC1168);
PPC_FUNC_IMPL(__imp__sub_82CC1168) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1188"))) PPC_WEAK_FUNC(sub_82CC1188);
PPC_FUNC_IMPL(__imp__sub_82CC1188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1190"))) PPC_WEAK_FUNC(sub_82CC1190);
PPC_FUNC_IMPL(__imp__sub_82CC1190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC1198;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC11B8;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r29,r11,21036
	ctx.r29.s64 = ctx.r11.s64 + 21036;
	// beq cr6,0x82cc11f0
	if (ctx.cr6.eq) goto loc_82CC11F0;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc11f0
	if (!ctx.cr6.eq) goto loc_82CC11F0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC11DC;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-68
	ctx.r5.s64 = ctx.r29.s64 + -68;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC11F0;
	sub_82CE4DB0(ctx, base);
loc_82CC11F0:
	// lis r28,-31975
	ctx.r28.s64 = -2095513600;
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc120c
	if (!ctx.cr6.eq) goto loc_82CC120C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc1224
	if (ctx.cr6.eq) goto loc_82CC1224;
loc_82CC120C:
	// addi r5,r29,-64
	ctx.r5.s64 = ctx.r29.s64 + -64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC1220;
	sub_82CE4C50(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC1224:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc123c
	if (!ctx.cr6.eq) goto loc_82CC123C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc1254
	if (ctx.cr6.eq) goto loc_82CC1254;
loc_82CC123C:
	// addi r5,r29,-52
	ctx.r5.s64 = ctx.r29.s64 + -52;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC1250;
	sub_82CE4C50(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC1254:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc126c
	if (!ctx.cr6.eq) goto loc_82CC126C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc1284
	if (ctx.cr6.eq) goto loc_82CC1284;
loc_82CC126C:
	// addi r5,r29,-40
	ctx.r5.s64 = ctx.r29.s64 + -40;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC1280;
	sub_82CE4C50(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC1284:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc129c
	if (!ctx.cr6.eq) goto loc_82CC129C;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc12b4
	if (ctx.cr6.eq) goto loc_82CC12B4;
loc_82CC129C:
	// addi r5,r29,-20
	ctx.r5.s64 = ctx.r29.s64 + -20;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC12B0;
	sub_82CE4C50(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC12B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc12cc
	if (!ctx.cr6.eq) goto loc_82CC12CC;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc12e0
	if (ctx.cr6.eq) goto loc_82CC12E0;
loc_82CC12CC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC12E0;
	sub_82CE4C50(ctx, base);
loc_82CC12E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC12E8;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC12F0"))) PPC_WEAK_FUNC(sub_82CC12F0);
PPC_FUNC_IMPL(__imp__sub_82CC12F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC12F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC1310;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc1390
	if (ctx.cr6.eq) goto loc_82CC1390;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,21112
	ctx.r30.s64 = ctx.r11.s64 + 21112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-64
	ctx.r5.s64 = ctx.r30.s64 + -64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC1338;
	sub_82CE2BA8(ctx, base);
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC134C;
	sub_82CE2BA8(ctx, base);
	// addi r5,r30,-40
	ctx.r5.s64 = ctx.r30.s64 + -40;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC1360;
	sub_82CE2BA8(ctx, base);
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC1374;
	sub_82CE2BA8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC1388;
	sub_82CE2BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC1390;
	sub_82CE3628(ctx, base);
loc_82CC1390:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1398"))) PPC_WEAK_FUNC(sub_82CC1398);
PPC_FUNC_IMPL(__imp__sub_82CC1398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC13C8"))) PPC_WEAK_FUNC(sub_82CC13C8);
PPC_FUNC_IMPL(__imp__sub_82CC13C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC13F8"))) PPC_WEAK_FUNC(sub_82CC13F8);
PPC_FUNC_IMPL(__imp__sub_82CC13F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1400"))) PPC_WEAK_FUNC(sub_82CC1400);
PPC_FUNC_IMPL(__imp__sub_82CC1400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC1408;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC1420;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc1478
	if (ctx.cr6.eq) goto loc_82CC1478;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,21172
	ctx.r30.s64 = ctx.r11.s64 + 21172;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1448;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC145C;
	sub_82CE2C50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1470;
	sub_82CE2C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC1478;
	sub_82CE3628(ctx, base);
loc_82CC1478:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1480"))) PPC_WEAK_FUNC(sub_82CC1480);
PPC_FUNC_IMPL(__imp__sub_82CC1480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC14A0"))) PPC_WEAK_FUNC(sub_82CC14A0);
PPC_FUNC_IMPL(__imp__sub_82CC14A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC14C0"))) PPC_WEAK_FUNC(sub_82CC14C0);
PPC_FUNC_IMPL(__imp__sub_82CC14C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC14C8"))) PPC_WEAK_FUNC(sub_82CC14C8);
PPC_FUNC_IMPL(__imp__sub_82CC14C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x82CC14D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC14E8;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc1734
	if (ctx.cr6.eq) goto loc_82CC1734;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,21708
	ctx.r29.s64 = ctx.r11.s64 + 21708;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r29,-256
	ctx.r5.s64 = ctx.r29.s64 + -256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC1510;
	sub_82CE3780(ctx, base);
	// addi r5,r29,-252
	ctx.r5.s64 = ctx.r29.s64 + -252;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC1524;
	sub_82CE3780(ctx, base);
	// addi r23,r30,8
	ctx.r23.s64 = ctx.r30.s64 + 8;
	// addi r5,r29,-236
	ctx.r5.s64 = ctx.r29.s64 + -236;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC153C;
	sub_82CE2A58(ctx, base);
	// addi r5,r29,-224
	ctx.r5.s64 = ctx.r29.s64 + -224;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2b00
	ctx.lr = 0x82CC1550;
	sub_82CE2B00(ctx, base);
	// addi r5,r29,-208
	ctx.r5.s64 = ctx.r29.s64 + -208;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1564;
	sub_82CE2C50(ctx, base);
	// addi r5,r29,-192
	ctx.r5.s64 = ctx.r29.s64 + -192;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1578;
	sub_82CE2C50(ctx, base);
	// addi r5,r29,-176
	ctx.r5.s64 = ctx.r29.s64 + -176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC158C;
	sub_82CE2C50(ctx, base);
	// addi r5,r29,-164
	ctx.r5.s64 = ctx.r29.s64 + -164;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC15A0;
	sub_82CE2C50(ctx, base);
	// addi r5,r29,-144
	ctx.r5.s64 = ctx.r29.s64 + -144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC15B4;
	sub_82CE2C50(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82cc15e4
	if (ctx.cr6.eq) goto loc_82CC15E4;
	// addi r5,r29,-128
	ctx.r5.s64 = ctx.r29.s64 + -128;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC15D8;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// b 0x82cc15fc
	goto loc_82CC15FC;
loc_82CC15E4:
	// addi r5,r29,-108
	ctx.r5.s64 = ctx.r29.s64 + -108;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bl 0x82ce3780
	ctx.lr = 0x82CC15F0;
	sub_82CE3780(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cbb650
	ctx.lr = 0x82CC15FC;
	sub_82CBB650(ctx, base);
loc_82CC15FC:
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82cc1628
	if (ctx.cr6.eq) goto loc_82CC1628;
	// addi r5,r29,-88
	ctx.r5.s64 = ctx.r29.s64 + -88;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC161C;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// b 0x82cc1640
	goto loc_82CC1640;
loc_82CC1628:
	// addi r5,r29,-64
	ctx.r5.s64 = ctx.r29.s64 + -64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bl 0x82ce3780
	ctx.lr = 0x82CC1634;
	sub_82CE3780(ctx, base);
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cbb650
	ctx.lr = 0x82CC1640;
	sub_82CBB650(ctx, base);
loc_82CC1640:
	// addi r5,r29,-40
	ctx.r5.s64 = ctx.r29.s64 + -40;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2cf8
	ctx.lr = 0x82CC1654;
	sub_82CE2CF8(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc1680
	if (ctx.cr6.eq) goto loc_82CC1680;
	// addi r5,r29,-24
	ctx.r5.s64 = ctx.r29.s64 + -24;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC1674;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// b 0x82cc1710
	goto loc_82CC1710;
loc_82CC1680:
	// addi r5,r29,-16
	ctx.r5.s64 = ctx.r29.s64 + -16;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82ce4700
	ctx.lr = 0x82CC168C;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc1710
	if (ctx.cr6.eq) goto loc_82CC1710;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r24.u32);
	// li r25,1
	ctx.r25.s64 = 1;
loc_82CC16A4:
	// slw r27,r25,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cbb718
	ctx.lr = 0x82CC16B0;
	sub_82CBB718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82cc1708
	if (ctx.cr6.eq) goto loc_82CC1708;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82e2c390
	ctx.lr = 0x82CC16C4;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc16fc
	if (!ctx.cr6.eq) goto loc_82CC16FC;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC16E4;
	sub_82CE2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc16fc
	if (ctx.cr6.eq) goto loc_82CC16FC;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// or r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 | ctx.r11.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_82CC16FC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc16a4
	if (ctx.cr6.lt) goto loc_82CC16A4;
loc_82CC1708:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC1710;
	sub_82CE3628(ctx, base);
loc_82CC1710:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc172c
	if (ctx.cr6.eq) goto loc_82CC172C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82cc1400
	ctx.lr = 0x82CC172C;
	sub_82CC1400(ctx, base);
loc_82CC172C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC1734;
	sub_82CE3628(ctx, base);
loc_82CC1734:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1740"))) PPC_WEAK_FUNC(sub_82CC1740);
PPC_FUNC_IMPL(__imp__sub_82CC1740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f0,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// b 0x82cdfaf8
	sub_82CDFAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC17B0"))) PPC_WEAK_FUNC(sub_82CC17B0);
PPC_FUNC_IMPL(__imp__sub_82CC17B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r10.u32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// b 0x82cdfb28
	sub_82CDFB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1818"))) PPC_WEAK_FUNC(sub_82CC1818);
PPC_FUNC_IMPL(__imp__sub_82CC1818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1820"))) PPC_WEAK_FUNC(sub_82CC1820);
PPC_FUNC_IMPL(__imp__sub_82CC1820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC1828;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC1840;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc1a48
	if (ctx.cr6.eq) goto loc_82CC1A48;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r11,22300
	ctx.r29.s64 = ctx.r11.s64 + 22300;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r29,-280
	ctx.r5.s64 = ctx.r29.s64 + -280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2e78
	ctx.lr = 0x82CC1868;
	sub_82CE2E78(ctx, base);
	// addi r5,r29,-264
	ctx.r5.s64 = ctx.r29.s64 + -264;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2cf8
	ctx.lr = 0x82CC187C;
	sub_82CE2CF8(ctx, base);
	// addi r5,r29,-244
	ctx.r5.s64 = ctx.r29.s64 + -244;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1890;
	sub_82CE2C50(ctx, base);
	// addi r5,r29,-236
	ctx.r5.s64 = ctx.r29.s64 + -236;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2cf8
	ctx.lr = 0x82CC18A4;
	sub_82CE2CF8(ctx, base);
	// addi r5,r29,-220
	ctx.r5.s64 = ctx.r29.s64 + -220;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2cf8
	ctx.lr = 0x82CC18B8;
	sub_82CE2CF8(ctx, base);
	// addi r5,r29,-204
	ctx.r5.s64 = ctx.r29.s64 + -204;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC18CC;
	sub_82CE2C50(ctx, base);
	// addi r5,r29,-188
	ctx.r5.s64 = ctx.r29.s64 + -188;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC18E0;
	sub_82CE2C50(ctx, base);
	// addi r5,r29,-172
	ctx.r5.s64 = ctx.r29.s64 + -172;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC18F4;
	sub_82CE2C50(ctx, base);
	// addi r5,r29,-156
	ctx.r5.s64 = ctx.r29.s64 + -156;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1908;
	sub_82CE2C50(ctx, base);
	// addi r5,r29,-136
	ctx.r5.s64 = ctx.r29.s64 + -136;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC191C;
	sub_82CE2C50(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc1948
	if (ctx.cr6.eq) goto loc_82CC1948;
	// addi r5,r29,-116
	ctx.r5.s64 = ctx.r29.s64 + -116;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC193C;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// b 0x82cc19dc
	goto loc_82CC19DC;
loc_82CC1948:
	// addi r5,r29,-108
	ctx.r5.s64 = ctx.r29.s64 + -108;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x82ce4700
	ctx.lr = 0x82CC1954;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc19dc
	if (ctx.cr6.eq) goto loc_82CC19DC;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r24.u32);
loc_82CC1970:
	// slw r27,r25,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cbb938
	ctx.lr = 0x82CC197C;
	sub_82CBB938(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82cc19d4
	if (ctx.cr6.eq) goto loc_82CC19D4;
	// addi r4,r29,-100
	ctx.r4.s64 = ctx.r29.s64 + -100;
	// bl 0x82e2c390
	ctx.lr = 0x82CC1990;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc19c8
	if (!ctx.cr6.eq) goto loc_82CC19C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC19B0;
	sub_82CE2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc19c8
	if (ctx.cr6.eq) goto loc_82CC19C8;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// or r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 | ctx.r11.u64;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
loc_82CC19C8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc1970
	if (ctx.cr6.lt) goto loc_82CC1970;
loc_82CC19D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC19DC;
	sub_82CE3628(ctx, base);
loc_82CC19DC:
	// addi r5,r29,-92
	ctx.r5.s64 = ctx.r29.s64 + -92;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC19F0;
	sub_82CE2C50(ctx, base);
	// addi r5,r29,-72
	ctx.r5.s64 = ctx.r29.s64 + -72;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,116
	ctx.r4.s64 = ctx.r30.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1A04;
	sub_82CE2C50(ctx, base);
	// addi r5,r29,-48
	ctx.r5.s64 = ctx.r29.s64 + -48;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC1A18;
	sub_82CE2BA8(ctx, base);
	// addi r5,r29,-24
	ctx.r5.s64 = ctx.r29.s64 + -24;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1A2C;
	sub_82CE2C50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1A40;
	sub_82CE2C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC1A48;
	sub_82CE3628(ctx, base);
loc_82CC1A48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1A50"))) PPC_WEAK_FUNC(sub_82CC1A50);
PPC_FUNC_IMPL(__imp__sub_82CC1A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82CC1A60:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82cc1a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CC1A60;
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f0,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f0,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f0,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f0,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f0,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f0,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f0,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f0,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lwz r11,108(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lwz r11,120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// lfs f0,124(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lfs f0,128(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1B38"))) PPC_WEAK_FUNC(sub_82CC1B38);
PPC_FUNC_IMPL(__imp__sub_82CC1B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82CC1B48:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82cc1b48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CC1B48;
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f0,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f0,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// lfs f0,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lfs f0,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// lfs f0,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// lfs f0,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// lfs f0,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// lfs f0,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// lfs f0,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 100, temp.u32);
	// lfs f0,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// stw r11,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r11.u32);
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// stw r11,120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 120, ctx.r11.u32);
	// lfs f0,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 124, temp.u32);
	// lfs f0,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 128, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1C20"))) PPC_WEAK_FUNC(sub_82CC1C20);
PPC_FUNC_IMPL(__imp__sub_82CC1C20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1C28"))) PPC_WEAK_FUNC(sub_82CC1C28);
PPC_FUNC_IMPL(__imp__sub_82CC1C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC1C30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC1C48;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc1cc8
	if (ctx.cr6.eq) goto loc_82CC1CC8;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,22464
	ctx.r30.s64 = ctx.r11.s64 + 22464;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-64
	ctx.r5.s64 = ctx.r30.s64 + -64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1C70;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,-48
	ctx.r5.s64 = ctx.r30.s64 + -48;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1C84;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1C98;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1CAC;
	sub_82CE2C50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1CC0;
	sub_82CE2C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC1CC8;
	sub_82CE3628(ctx, base);
loc_82CC1CC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1CD0"))) PPC_WEAK_FUNC(sub_82CC1CD0);
PPC_FUNC_IMPL(__imp__sub_82CC1CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1D00"))) PPC_WEAK_FUNC(sub_82CC1D00);
PPC_FUNC_IMPL(__imp__sub_82CC1D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1D30"))) PPC_WEAK_FUNC(sub_82CC1D30);
PPC_FUNC_IMPL(__imp__sub_82CC1D30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC1D38"))) PPC_WEAK_FUNC(sub_82CC1D38);
PPC_FUNC_IMPL(__imp__sub_82CC1D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC1D40;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82ce2828
	ctx.lr = 0x82CC1D5C;
	sub_82CE2828(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC1D6C;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc1f0c
	if (ctx.cr6.eq) goto loc_82CC1F0C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r28,r11,22796
	ctx.r28.s64 = ctx.r11.s64 + 22796;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r28,-148
	ctx.r5.s64 = ctx.r28.s64 + -148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC1D94;
	sub_82CE3780(ctx, base);
	// addi r5,r28,-132
	ctx.r5.s64 = ctx.r28.s64 + -132;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC1DA8;
	sub_82CE3780(ctx, base);
	// addi r5,r28,-124
	ctx.r5.s64 = ctx.r28.s64 + -124;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2e78
	ctx.lr = 0x82CC1DBC;
	sub_82CE2E78(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc1de8
	if (ctx.cr6.eq) goto loc_82CC1DE8;
	// addi r5,r28,-112
	ctx.r5.s64 = ctx.r28.s64 + -112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC1DDC;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// b 0x82cc1e7c
	goto loc_82CC1E7C;
loc_82CC1DE8:
	// addi r5,r28,-100
	ctx.r5.s64 = ctx.r28.s64 + -100;
	// li r4,25
	ctx.r4.s64 = 25;
	// bl 0x82ce4700
	ctx.lr = 0x82CC1DF4;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc1e7c
	if (ctx.cr6.eq) goto loc_82CC1E7C;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r24.u32);
loc_82CC1E10:
	// slw r27,r25,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cbc1b0
	ctx.lr = 0x82CC1E1C;
	sub_82CBC1B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cc1e74
	if (ctx.cr6.eq) goto loc_82CC1E74;
	// addi r4,r28,-88
	ctx.r4.s64 = ctx.r28.s64 + -88;
	// bl 0x82e2c390
	ctx.lr = 0x82CC1E30;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc1e68
	if (!ctx.cr6.eq) goto loc_82CC1E68;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC1E50;
	sub_82CE2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc1e68
	if (ctx.cr6.eq) goto loc_82CC1E68;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_82CC1E68:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc1e10
	if (ctx.cr6.lt) goto loc_82CC1E10;
loc_82CC1E74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC1E7C;
	sub_82CE3628(ctx, base);
loc_82CC1E7C:
	// addi r5,r28,-80
	ctx.r5.s64 = ctx.r28.s64 + -80;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2b00
	ctx.lr = 0x82CC1E90;
	sub_82CE2B00(ctx, base);
	// addi r5,r28,-72
	ctx.r5.s64 = ctx.r28.s64 + -72;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,62
	ctx.r4.s64 = ctx.r30.s64 + 62;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2b00
	ctx.lr = 0x82CC1EA4;
	sub_82CE2B00(ctx, base);
	// addi r5,r28,-56
	ctx.r5.s64 = ctx.r28.s64 + -56;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC1EB8;
	sub_82CE3780(ctx, base);
	// addi r5,r28,-40
	ctx.r5.s64 = ctx.r28.s64 + -40;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1ECC;
	sub_82CE2C50(ctx, base);
	// addi r5,r28,-24
	ctx.r5.s64 = ctx.r28.s64 + -24;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1EE0;
	sub_82CE2C50(ctx, base);
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC1EF4;
	sub_82CE2C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x82cc0d78
	ctx.lr = 0x82CC1F04;
	sub_82CC0D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC1F0C;
	sub_82CE3628(ctx, base);
loc_82CC1F0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1F18"))) PPC_WEAK_FUNC(sub_82CC1F18);
PPC_FUNC_IMPL(__imp__sub_82CC1F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r7,84(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82CC1F44:
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x82cc1f44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CC1F44;
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stfs f0,36(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lfs f0,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// lfs f0,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// lhz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 60);
	// sth r9,60(r11)
	PPC_STORE_U16(ctx.r11.u32 + 60, ctx.r9.u16);
	// lhz r9,62(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 62);
	// sth r9,62(r11)
	PPC_STORE_U16(ctx.r11.u32 + 62, ctx.r9.u16);
	// lfs f0,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// b 0x82ce0968
	sub_82CE0968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC1FC0"))) PPC_WEAK_FUNC(sub_82CC1FC0);
PPC_FUNC_IMPL(__imp__sub_82CC1FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r8,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r8.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82CC1FE8:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82cc1fe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CC1FE8;
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stfs f0,36(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// lfs f0,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r10.u32);
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// sth r10,60(r4)
	PPC_STORE_U16(ctx.r4.u32 + 60, ctx.r10.u16);
	// lhz r10,62(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// sth r10,62(r4)
	PPC_STORE_U16(ctx.r4.u32 + 62, ctx.r10.u16);
	// lfs f0,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r10.u32);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r10.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r10.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r11,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r11.u32);
	// b 0x82ce09a8
	sub_82CE09A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2060"))) PPC_WEAK_FUNC(sub_82CC2060);
PPC_FUNC_IMPL(__imp__sub_82CC2060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC2068"))) PPC_WEAK_FUNC(sub_82CC2068);
PPC_FUNC_IMPL(__imp__sub_82CC2068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC2070;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82ce2828
	ctx.lr = 0x82CC208C;
	sub_82CE2828(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC209C;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc20d8
	if (ctx.cr6.eq) goto loc_82CC20D8;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,22824
	ctx.r5.s64 = ctx.r11.s64 + 22824;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2cf8
	ctx.lr = 0x82CC20C0;
	sub_82CE2CF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc1d38
	ctx.lr = 0x82CC20D0;
	sub_82CC1D38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC20D8;
	sub_82CE3628(ctx, base);
loc_82CC20D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC20E0"))) PPC_WEAK_FUNC(sub_82CC20E0);
PPC_FUNC_IMPL(__imp__sub_82CC20E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,104(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// b 0x82cc1f18
	sub_82CC1F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2100"))) PPC_WEAK_FUNC(sub_82CC2100);
PPC_FUNC_IMPL(__imp__sub_82CC2100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f0,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// b 0x82cc1fc0
	sub_82CC1FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2120"))) PPC_WEAK_FUNC(sub_82CC2120);
PPC_FUNC_IMPL(__imp__sub_82CC2120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC2128"))) PPC_WEAK_FUNC(sub_82CC2128);
PPC_FUNC_IMPL(__imp__sub_82CC2128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC2130;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82ce2828
	ctx.lr = 0x82CC214C;
	sub_82CE2828(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC215C;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc21b0
	if (ctx.cr6.eq) goto loc_82CC21B0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,22860
	ctx.r29.s64 = ctx.r11.s64 + 22860;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2cf8
	ctx.lr = 0x82CC2184;
	sub_82CE2CF8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC2198;
	sub_82CE2C50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc1d38
	ctx.lr = 0x82CC21A8;
	sub_82CC1D38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC21B0;
	sub_82CE3628(ctx, base);
loc_82CC21B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC21B8"))) PPC_WEAK_FUNC(sub_82CC21B8);
PPC_FUNC_IMPL(__imp__sub_82CC21B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,104(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f0,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// b 0x82cc1f18
	sub_82CC1F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC21E0"))) PPC_WEAK_FUNC(sub_82CC21E0);
PPC_FUNC_IMPL(__imp__sub_82CC21E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f0,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// b 0x82cc1fc0
	sub_82CC1FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2208"))) PPC_WEAK_FUNC(sub_82CC2208);
PPC_FUNC_IMPL(__imp__sub_82CC2208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC2210"))) PPC_WEAK_FUNC(sub_82CC2210);
PPC_FUNC_IMPL(__imp__sub_82CC2210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC2218;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82ce2828
	ctx.lr = 0x82CC2234;
	sub_82CE2828(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC2244;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc2280
	if (ctx.cr6.eq) goto loc_82CC2280;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,22876
	ctx.r5.s64 = ctx.r11.s64 + 22876;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC2268;
	sub_82CE2C50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc1d38
	ctx.lr = 0x82CC2278;
	sub_82CC1D38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC2280;
	sub_82CE3628(ctx, base);
loc_82CC2280:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2288"))) PPC_WEAK_FUNC(sub_82CC2288);
PPC_FUNC_IMPL(__imp__sub_82CC2288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,104(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// b 0x82cc1f18
	sub_82CC1F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2298"))) PPC_WEAK_FUNC(sub_82CC2298);
PPC_FUNC_IMPL(__imp__sub_82CC2298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// b 0x82cc1fc0
	sub_82CC1FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC22A8"))) PPC_WEAK_FUNC(sub_82CC22A8);
PPC_FUNC_IMPL(__imp__sub_82CC22A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC22B0"))) PPC_WEAK_FUNC(sub_82CC22B0);
PPC_FUNC_IMPL(__imp__sub_82CC22B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CC22B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82ce2828
	ctx.lr = 0x82CC22D4;
	sub_82CE2828(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC22E4;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc23f0
	if (ctx.cr6.eq) goto loc_82CC23F0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,11592
	ctx.r30.s64 = ctx.r11.s64 + 11592;
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// addi r5,r30,11340
	ctx.r5.s64 = ctx.r30.s64 + 11340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC230C;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,11348
	ctx.r5.s64 = ctx.r30.s64 + 11348;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC2320;
	sub_82CE2C50(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc234c
	if (ctx.cr6.eq) goto loc_82CC234C;
	// addi r5,r30,11356
	ctx.r5.s64 = ctx.r30.s64 + 11356;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC2340;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r11.u32);
	// b 0x82cc23d8
	goto loc_82CC23D8;
loc_82CC234C:
	// addi r5,r30,11364
	ctx.r5.s64 = ctx.r30.s64 + 11364;
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x82ce4700
	ctx.lr = 0x82CC2358;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc23d8
	if (ctx.cr6.eq) goto loc_82CC23D8;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r27,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r27.u32);
loc_82CC2374:
	// slw r11,r26,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r28.u8 & 0x3F));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82cc23d0
	if (!ctx.cr6.eq) goto loc_82CC23D0;
	// addi r4,r30,11372
	ctx.r4.s64 = ctx.r30.s64 + 11372;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC238C;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc23c4
	if (!ctx.cr6.eq) goto loc_82CC23C4;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC23AC;
	sub_82CE2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc23c4
	if (ctx.cr6.eq) goto loc_82CC23C4;
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r11.u32);
loc_82CC23C4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 32, ctx.xer);
	// blt cr6,0x82cc2374
	if (ctx.cr6.lt) goto loc_82CC2374;
loc_82CC23D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC23D8;
	sub_82CE3628(ctx, base);
loc_82CC23D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cc1d38
	ctx.lr = 0x82CC23E8;
	sub_82CC1D38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC23F0;
	sub_82CE3628(ctx, base);
loc_82CC23F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC23F8"))) PPC_WEAK_FUNC(sub_82CC23F8);
PPC_FUNC_IMPL(__imp__sub_82CC23F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,104(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lwz r11,112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// b 0x82cc1f18
	sub_82CC1F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2418"))) PPC_WEAK_FUNC(sub_82CC2418);
PPC_FUNC_IMPL(__imp__sub_82CC2418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// stw r11,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
	// b 0x82cc1fc0
	sub_82CC1FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2438"))) PPC_WEAK_FUNC(sub_82CC2438);
PPC_FUNC_IMPL(__imp__sub_82CC2438) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC2440"))) PPC_WEAK_FUNC(sub_82CC2440);
PPC_FUNC_IMPL(__imp__sub_82CC2440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC2448;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82ce2828
	ctx.lr = 0x82CC2464;
	sub_82CE2828(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC2474;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc2580
	if (ctx.cr6.eq) goto loc_82CC2580;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,12164
	ctx.r29.s64 = ctx.r11.s64 + 12164;
	// addi r4,r27,108
	ctx.r4.s64 = ctx.r27.s64 + 108;
	// addi r5,r29,10860
	ctx.r5.s64 = ctx.r29.s64 + 10860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC249C;
	sub_82CE3780(ctx, base);
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc24c8
	if (ctx.cr6.eq) goto loc_82CC24C8;
	// addi r5,r29,10872
	ctx.r5.s64 = ctx.r29.s64 + 10872;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC24BC;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r11.u32);
	// b 0x82cc2568
	goto loc_82CC2568;
loc_82CC24C8:
	// addi r5,r29,10884
	ctx.r5.s64 = ctx.r29.s64 + 10884;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x82ce4700
	ctx.lr = 0x82CC24D4;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc2568
	if (ctx.cr6.eq) goto loc_82CC2568;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r25.u32);
loc_82CC24F0:
	// slw r28,r24,r26
	ctx.r28.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r26.u8 & 0x3F));
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82cc250c
	if (ctx.cr6.eq) goto loc_82CC250C;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x82cc2560
	if (!ctx.cr6.eq) goto loc_82CC2560;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82cc2510
	goto loc_82CC2510;
loc_82CC250C:
	// addi r31,r29,-36
	ctx.r31.s64 = ctx.r29.s64 + -36;
loc_82CC2510:
	// addi r4,r29,10896
	ctx.r4.s64 = ctx.r29.s64 + 10896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC251C;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc2554
	if (!ctx.cr6.eq) goto loc_82CC2554;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC253C;
	sub_82CE2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc2554
	if (ctx.cr6.eq) goto loc_82CC2554;
	// lwz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// or r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 | ctx.r11.u64;
	// stw r11,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r11.u32);
loc_82CC2554:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc24f0
	if (ctx.cr6.lt) goto loc_82CC24F0;
loc_82CC2560:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC2568;
	sub_82CE3628(ctx, base);
loc_82CC2568:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cc1d38
	ctx.lr = 0x82CC2578;
	sub_82CC1D38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC2580;
	sub_82CE3628(ctx, base);
loc_82CC2580:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2588"))) PPC_WEAK_FUNC(sub_82CC2588);
PPC_FUNC_IMPL(__imp__sub_82CC2588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC2590;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x82ce0b98
	ctx.lr = 0x82CC25B8;
	sub_82CE0B98(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc1f18
	ctx.lr = 0x82CC25C8;
	sub_82CC1F18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC25D0"))) PPC_WEAK_FUNC(sub_82CC25D0);
PPC_FUNC_IMPL(__imp__sub_82CC25D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC25D8;
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
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// bl 0x82ce0bc8
	ctx.lr = 0x82CC25FC;
	sub_82CE0BC8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc1fc0
	ctx.lr = 0x82CC260C;
	sub_82CC1FC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2618"))) PPC_WEAK_FUNC(sub_82CC2618);
PPC_FUNC_IMPL(__imp__sub_82CC2618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC2620"))) PPC_WEAK_FUNC(sub_82CC2620);
PPC_FUNC_IMPL(__imp__sub_82CC2620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC2628;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82ce2828
	ctx.lr = 0x82CC2644;
	sub_82CE2828(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC2654;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc27a4
	if (ctx.cr6.eq) goto loc_82CC27A4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,12164
	ctx.r29.s64 = ctx.r11.s64 + 12164;
	// addi r4,r28,108
	ctx.r4.s64 = ctx.r28.s64 + 108;
	// addi r5,r29,10988
	ctx.r5.s64 = ctx.r29.s64 + 10988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC267C;
	sub_82CE3780(ctx, base);
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82cc26ac
	if (ctx.cr6.eq) goto loc_82CC26AC;
	// addi r5,r29,11000
	ctx.r5.s64 = ctx.r29.s64 + 11000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC26A0;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r11.u32);
	// b 0x82cc2748
	goto loc_82CC2748;
loc_82CC26AC:
	// addi r5,r29,11012
	ctx.r5.s64 = ctx.r29.s64 + 11012;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x82ce4700
	ctx.lr = 0x82CC26B8;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc2748
	if (ctx.cr6.eq) goto loc_82CC2748;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r24.u32);
	// li r25,1
	ctx.r25.s64 = 1;
loc_82CC26D0:
	// slw r27,r25,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82cc26ec
	if (ctx.cr6.eq) goto loc_82CC26EC;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x82cc2740
	if (!ctx.cr6.eq) goto loc_82CC2740;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82cc26f0
	goto loc_82CC26F0;
loc_82CC26EC:
	// addi r31,r29,-36
	ctx.r31.s64 = ctx.r29.s64 + -36;
loc_82CC26F0:
	// addi r4,r29,11024
	ctx.r4.s64 = ctx.r29.s64 + 11024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC26FC;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc2734
	if (!ctx.cr6.eq) goto loc_82CC2734;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC271C;
	sub_82CE2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc2734
	if (ctx.cr6.eq) goto loc_82CC2734;
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// or r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 | ctx.r11.u64;
	// stw r11,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r11.u32);
loc_82CC2734:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc26d0
	if (ctx.cr6.lt) goto loc_82CC26D0;
loc_82CC2740:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC2748;
	sub_82CE3628(ctx, base);
loc_82CC2748:
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82cc2774
	if (ctx.cr6.eq) goto loc_82CC2774;
	// addi r5,r29,11032
	ctx.r5.s64 = ctx.r29.s64 + 11032;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC2768;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 116, ctx.r11.u32);
	// b 0x82cc278c
	goto loc_82CC278C;
loc_82CC2774:
	// addi r5,r29,11048
	ctx.r5.s64 = ctx.r29.s64 + 11048;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bl 0x82ce3780
	ctx.lr = 0x82CC2780;
	sub_82CE3780(ctx, base);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82cbc9d8
	ctx.lr = 0x82CC278C;
	sub_82CBC9D8(ctx, base);
loc_82CC278C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cc1d38
	ctx.lr = 0x82CC279C;
	sub_82CC1D38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC27A4;
	sub_82CE3628(ctx, base);
loc_82CC27A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC27B0"))) PPC_WEAK_FUNC(sub_82CC27B0);
PPC_FUNC_IMPL(__imp__sub_82CC27B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC27B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x82ce0c00
	ctx.lr = 0x82CC27E8;
	sub_82CE0C00(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc1f18
	ctx.lr = 0x82CC27F8;
	sub_82CC1F18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2800"))) PPC_WEAK_FUNC(sub_82CC2800);
PPC_FUNC_IMPL(__imp__sub_82CC2800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC2808;
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
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// bl 0x82ce0c30
	ctx.lr = 0x82CC2834;
	sub_82CE0C30(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc1fc0
	ctx.lr = 0x82CC2844;
	sub_82CC1FC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2850"))) PPC_WEAK_FUNC(sub_82CC2850);
PPC_FUNC_IMPL(__imp__sub_82CC2850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC2858"))) PPC_WEAK_FUNC(sub_82CC2858);
PPC_FUNC_IMPL(__imp__sub_82CC2858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC2860;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82ce2828
	ctx.lr = 0x82CC287C;
	sub_82CE2828(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC288C;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc2a20
	if (ctx.cr6.eq) goto loc_82CC2A20;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,23592
	ctx.r28.s64 = ctx.r11.s64 + 23592;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// addi r5,r28,-172
	ctx.r5.s64 = ctx.r28.s64 + -172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC28B4;
	sub_82CE2C50(ctx, base);
	// addi r5,r28,-164
	ctx.r5.s64 = ctx.r28.s64 + -164;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC28C8;
	sub_82CE2C50(ctx, base);
	// addi r5,r28,-144
	ctx.r5.s64 = ctx.r28.s64 + -144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x82cc1400
	ctx.lr = 0x82CC28D8;
	sub_82CC1400(ctx, base);
	// addi r5,r28,-132
	ctx.r5.s64 = ctx.r28.s64 + -132;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,132
	ctx.r3.s64 = ctx.r30.s64 + 132;
	// bl 0x82cc1c28
	ctx.lr = 0x82CC28E8;
	sub_82CC1C28(ctx, base);
	// addi r5,r28,-104
	ctx.r5.s64 = ctx.r28.s64 + -104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,156
	ctx.r3.s64 = ctx.r30.s64 + 156;
	// bl 0x82cc1c28
	ctx.lr = 0x82CC28F8;
	sub_82CC1C28(ctx, base);
	// addi r5,r28,-76
	ctx.r5.s64 = ctx.r28.s64 + -76;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC290C;
	sub_82CE2C50(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc2938
	if (ctx.cr6.eq) goto loc_82CC2938;
	// addi r5,r28,-56
	ctx.r5.s64 = ctx.r28.s64 + -56;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC292C;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r11.u32);
	// b 0x82cc29cc
	goto loc_82CC29CC;
loc_82CC2938:
	// addi r5,r28,-44
	ctx.r5.s64 = ctx.r28.s64 + -44;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82ce4700
	ctx.lr = 0x82CC2944;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc29cc
	if (ctx.cr6.eq) goto loc_82CC29CC;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r24.u32);
loc_82CC2960:
	// slw r27,r25,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cbc770
	ctx.lr = 0x82CC296C;
	sub_82CBC770(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cc29c4
	if (ctx.cr6.eq) goto loc_82CC29C4;
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// bl 0x82e2c390
	ctx.lr = 0x82CC2980;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc29b8
	if (!ctx.cr6.eq) goto loc_82CC29B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC29A0;
	sub_82CE2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc29b8
	if (ctx.cr6.eq) goto loc_82CC29B8;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stw r11,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r11.u32);
loc_82CC29B8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc2960
	if (ctx.cr6.lt) goto loc_82CC2960;
loc_82CC29C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC29CC;
	sub_82CE3628(ctx, base);
loc_82CC29CC:
	// addi r5,r28,-24
	ctx.r5.s64 = ctx.r28.s64 + -24;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,188
	ctx.r4.s64 = ctx.r30.s64 + 188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC29E0;
	sub_82CE2C50(ctx, base);
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC29F4;
	sub_82CE2C50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r30,196
	ctx.r4.s64 = ctx.r30.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC2A08;
	sub_82CE2C50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc1d38
	ctx.lr = 0x82CC2A18;
	sub_82CC1D38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC2A20;
	sub_82CE3628(ctx, base);
loc_82CC2A20:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2A28"))) PPC_WEAK_FUNC(sub_82CC2A28);
PPC_FUNC_IMPL(__imp__sub_82CC2A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,104(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f0,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f0,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lfs f0,128(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lfs f0,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lfs f0,136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// lfs f0,140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lfs f0,144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// lfs f0,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lfs f0,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f0,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lfs f0,164(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lfs f0,168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f0,172(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lwz r11,176(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// lfs f0,180(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lfs f0,184(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lfs f0,188(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// b 0x82cc1f18
	sub_82CC1F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2AD0"))) PPC_WEAK_FUNC(sub_82CC2AD0);
PPC_FUNC_IMPL(__imp__sub_82CC2AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f0,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lfs f0,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 120, temp.u32);
	// lfs f0,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 128, temp.u32);
	// lfs f0,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 132, temp.u32);
	// lfs f0,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 136, temp.u32);
	// lfs f0,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 140, temp.u32);
	// lfs f0,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 144, temp.u32);
	// lfs f0,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 152, temp.u32);
	// lfs f0,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 156, temp.u32);
	// lfs f0,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 160, temp.u32);
	// lfs f0,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 164, temp.u32);
	// lfs f0,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 168, temp.u32);
	// lfs f0,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 172, temp.u32);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// stw r11,176(r4)
	PPC_STORE_U32(ctx.r4.u32 + 176, ctx.r11.u32);
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 180, temp.u32);
	// lfs f0,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 184, temp.u32);
	// lfs f0,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 188, temp.u32);
	// b 0x82cc1fc0
	sub_82CC1FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2B78"))) PPC_WEAK_FUNC(sub_82CC2B78);
PPC_FUNC_IMPL(__imp__sub_82CC2B78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC2B80"))) PPC_WEAK_FUNC(sub_82CC2B80);
PPC_FUNC_IMPL(__imp__sub_82CC2B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC2B88;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82ce2828
	ctx.lr = 0x82CC2BA4;
	sub_82CE2828(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC2BB4;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc2d24
	if (ctx.cr6.eq) goto loc_82CC2D24;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,12164
	ctx.r30.s64 = ctx.r11.s64 + 12164;
	// addi r4,r28,108
	ctx.r4.s64 = ctx.r28.s64 + 108;
	// addi r5,r30,11572
	ctx.r5.s64 = ctx.r30.s64 + 11572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC2BDC;
	sub_82CE3780(ctx, base);
	// addi r5,r30,11588
	ctx.r5.s64 = ctx.r30.s64 + 11588;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,112
	ctx.r4.s64 = ctx.r28.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC2BF0;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,11600
	ctx.r5.s64 = ctx.r30.s64 + 11600;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC2C04;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,11612
	ctx.r5.s64 = ctx.r30.s64 + 11612;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,120
	ctx.r4.s64 = ctx.r28.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC2C18;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,11624
	ctx.r5.s64 = ctx.r30.s64 + 11624;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,124
	ctx.r4.s64 = ctx.r28.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2b00
	ctx.lr = 0x82CC2C2C;
	sub_82CE2B00(ctx, base);
	// addi r5,r30,11648
	ctx.r5.s64 = ctx.r30.s64 + 11648;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,126
	ctx.r4.s64 = ctx.r28.s64 + 126;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2b00
	ctx.lr = 0x82CC2C40;
	sub_82CE2B00(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc2c6c
	if (ctx.cr6.eq) goto loc_82CC2C6C;
	// addi r5,r30,11664
	ctx.r5.s64 = ctx.r30.s64 + 11664;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC2C60;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r11.u32);
	// b 0x82cc2d0c
	goto loc_82CC2D0C;
loc_82CC2C6C:
	// addi r5,r30,11676
	ctx.r5.s64 = ctx.r30.s64 + 11676;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x82ce4700
	ctx.lr = 0x82CC2C78;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc2d0c
	if (ctx.cr6.eq) goto loc_82CC2D0C;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r25.u32);
loc_82CC2C94:
	// slw r27,r24,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r26.u8 & 0x3F));
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82cc2cb0
	if (ctx.cr6.eq) goto loc_82CC2CB0;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x82cc2d04
	if (!ctx.cr6.eq) goto loc_82CC2D04;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x82cc2cb4
	goto loc_82CC2CB4;
loc_82CC2CB0:
	// addi r29,r30,-36
	ctx.r29.s64 = ctx.r30.s64 + -36;
loc_82CC2CB4:
	// addi r4,r30,11688
	ctx.r4.s64 = ctx.r30.s64 + 11688;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC2CC0;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc2cf8
	if (!ctx.cr6.eq) goto loc_82CC2CF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC2CE0;
	sub_82CE2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc2cf8
	if (ctx.cr6.eq) goto loc_82CC2CF8;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stw r11,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r11.u32);
loc_82CC2CF8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc2c94
	if (ctx.cr6.lt) goto loc_82CC2C94;
loc_82CC2D04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC2D0C;
	sub_82CE3628(ctx, base);
loc_82CC2D0C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cc1d38
	ctx.lr = 0x82CC2D1C;
	sub_82CC1D38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC2D24;
	sub_82CE3628(ctx, base);
loc_82CC2D24:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2D30"))) PPC_WEAK_FUNC(sub_82CC2D30);
PPC_FUNC_IMPL(__imp__sub_82CC2D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC2D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lfs f0,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f0,116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// sth r11,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r11.u16);
	// lhz r11,122(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// sth r11,126(r31)
	PPC_STORE_U16(ctx.r31.u32 + 126, ctx.r11.u16);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82ce0c68
	ctx.lr = 0x82CC2D88;
	sub_82CE0C68(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc1f18
	ctx.lr = 0x82CC2D98;
	sub_82CC1F18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2DA0"))) PPC_WEAK_FUNC(sub_82CC2DA0);
PPC_FUNC_IMPL(__imp__sub_82CC2DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC2DA8;
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
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// lfs f0,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// lfs f0,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// lhz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// sth r11,120(r30)
	PPC_STORE_U16(ctx.r30.u32 + 120, ctx.r11.u16);
	// lhz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// sth r11,122(r30)
	PPC_STORE_U16(ctx.r30.u32 + 122, ctx.r11.u16);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// bl 0x82ce0c98
	ctx.lr = 0x82CC2DF4;
	sub_82CE0C98(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cc1fc0
	ctx.lr = 0x82CC2E04;
	sub_82CC1FC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2E10"))) PPC_WEAK_FUNC(sub_82CC2E10);
PPC_FUNC_IMPL(__imp__sub_82CC2E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r7,68(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82CC2E38:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82cc2e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CC2E38;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stfs f0,36(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r9,204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 204, ctx.r9.u32);
	// lhz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// sth r11,208(r10)
	PPC_STORE_U16(ctx.r10.u32 + 208, ctx.r11.u16);
	// b 0x82ce1fa0
	sub_82CE1FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2E88"))) PPC_WEAK_FUNC(sub_82CC2E88);
PPC_FUNC_IMPL(__imp__sub_82CC2E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r9.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82CC2EAC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82cc2eac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CC2EAC;
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f0,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f0,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// stw r10,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r10.u32);
	// lhz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 208);
	// sth r11,60(r4)
	PPC_STORE_U16(ctx.r4.u32 + 60, ctx.r11.u16);
	// b 0x82ce0a00
	sub_82CE0A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC2EF8"))) PPC_WEAK_FUNC(sub_82CC2EF8);
PPC_FUNC_IMPL(__imp__sub_82CC2EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82CC2F20"))) PPC_WEAK_FUNC(sub_82CC2F20);
PPC_FUNC_IMPL(__imp__sub_82CC2F20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC2F28"))) PPC_WEAK_FUNC(sub_82CC2F28);
PPC_FUNC_IMPL(__imp__sub_82CC2F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC2F30;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC2F54;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,24116
	ctx.r28.s64 = ctx.r11.s64 + 24116;
	// beq cr6,0x82cc2f8c
	if (ctx.cr6.eq) goto loc_82CC2F8C;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc2f8c
	if (!ctx.cr6.eq) goto loc_82CC2F8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC2F78;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,-20
	ctx.r5.s64 = ctx.r28.s64 + -20;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC2F8C;
	sub_82CE4DB0(ctx, base);
loc_82CC2F8C:
	// lis r30,-31975
	ctx.r30.s64 = -2095513600;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// lfs f31,-13892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc2fdc
	if (!ctx.cr6.eq) goto loc_82CC2FDC;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82cc2fcc
	if (!ctx.cr6.eq) goto loc_82CC2FCC;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82cc2fcc
	if (!ctx.cr6.eq) goto loc_82CC2FCC;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc2fd0
	if (ctx.cr6.eq) goto loc_82CC2FD0;
loc_82CC2FCC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82CC2FD0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc2ff4
	if (ctx.cr6.eq) goto loc_82CC2FF4;
loc_82CC2FDC:
	// addi r5,r28,-16
	ctx.r5.s64 = ctx.r28.s64 + -16;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce5218
	ctx.lr = 0x82CC2FF0;
	sub_82CE5218(ctx, base);
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
loc_82CC2FF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc300c
	if (!ctx.cr6.eq) goto loc_82CC300C;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc3020
	if (ctx.cr6.eq) goto loc_82CC3020;
loc_82CC300C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC3020;
	sub_82CE4D00(ctx, base);
loc_82CC3020:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC3028;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3038"))) PPC_WEAK_FUNC(sub_82CC3038);
PPC_FUNC_IMPL(__imp__sub_82CC3038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC3040;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC3058;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc309c
	if (ctx.cr6.eq) goto loc_82CC309C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,24140
	ctx.r30.s64 = ctx.r11.s64 + 24140;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2cf8
	ctx.lr = 0x82CC3080;
	sub_82CE2CF8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC3094;
	sub_82CE2C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC309C;
	sub_82CE3628(ctx, base);
loc_82CC309C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC30A8"))) PPC_WEAK_FUNC(sub_82CC30A8);
PPC_FUNC_IMPL(__imp__sub_82CC30A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f0,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f0,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f0,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f0,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f0,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f0,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f0,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f0,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f0,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f0,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// b 0x82ce0a38
	sub_82CE0A38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3170"))) PPC_WEAK_FUNC(sub_82CC3170);
PPC_FUNC_IMPL(__imp__sub_82CC3170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r10.u32);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// lfs f0,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lfs f0,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// lfs f0,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// lfs f0,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// lfs f0,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r11,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r11.u32);
	// b 0x82ce0a88
	sub_82CE0A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3230"))) PPC_WEAK_FUNC(sub_82CC3230);
PPC_FUNC_IMPL(__imp__sub_82CC3230) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cc30a8
	sub_82CC30A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3238"))) PPC_WEAK_FUNC(sub_82CC3238);
PPC_FUNC_IMPL(__imp__sub_82CC3238) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cc3170
	sub_82CC3170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3240"))) PPC_WEAK_FUNC(sub_82CC3240);
PPC_FUNC_IMPL(__imp__sub_82CC3240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3248"))) PPC_WEAK_FUNC(sub_82CC3248);
PPC_FUNC_IMPL(__imp__sub_82CC3248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC3250;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC3268;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc32d4
	if (ctx.cr6.eq) goto loc_82CC32D4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,24664
	ctx.r30.s64 = ctx.r11.s64 + 24664;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-28
	ctx.r5.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC3290;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC32A4;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC32B8;
	sub_82CE2C50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC32CC;
	sub_82CE2C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC32D4;
	sub_82CE3628(ctx, base);
loc_82CC32D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC32E0"))) PPC_WEAK_FUNC(sub_82CC32E0);
PPC_FUNC_IMPL(__imp__sub_82CC32E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3308"))) PPC_WEAK_FUNC(sub_82CC3308);
PPC_FUNC_IMPL(__imp__sub_82CC3308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3330"))) PPC_WEAK_FUNC(sub_82CC3330);
PPC_FUNC_IMPL(__imp__sub_82CC3330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3338"))) PPC_WEAK_FUNC(sub_82CC3338);
PPC_FUNC_IMPL(__imp__sub_82CC3338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC3340;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC3358;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc3394
	if (ctx.cr6.eq) goto loc_82CC3394;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,24692
	ctx.r30.s64 = ctx.r11.s64 + 24692;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// bl 0x82cc3248
	ctx.lr = 0x82CC337C;
	sub_82CC3248(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x82cc3248
	ctx.lr = 0x82CC338C;
	sub_82CC3248(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC3394;
	sub_82CE3628(ctx, base);
loc_82CC3394:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC33A0"))) PPC_WEAK_FUNC(sub_82CC33A0);
PPC_FUNC_IMPL(__imp__sub_82CC33A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC33E8"))) PPC_WEAK_FUNC(sub_82CC33E8);
PPC_FUNC_IMPL(__imp__sub_82CC33E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3430"))) PPC_WEAK_FUNC(sub_82CC3430);
PPC_FUNC_IMPL(__imp__sub_82CC3430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lfs f13,-18528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18528);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3460"))) PPC_WEAK_FUNC(sub_82CC3460);
PPC_FUNC_IMPL(__imp__sub_82CC3460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3468"))) PPC_WEAK_FUNC(sub_82CC3468);
PPC_FUNC_IMPL(__imp__sub_82CC3468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC3470;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC3494;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,12916
	ctx.r28.s64 = ctx.r11.s64 + 12916;
	// beq cr6,0x82cc34cc
	if (ctx.cr6.eq) goto loc_82CC34CC;
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc34cc
	if (!ctx.cr6.eq) goto loc_82CC34CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC34B8;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,11784
	ctx.r5.s64 = ctx.r28.s64 + 11784;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC34CC;
	sub_82CE4DB0(ctx, base);
loc_82CC34CC:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// lis r24,-31975
	ctx.r24.s64 = -2095513600;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc34f4
	if (ctx.cr6.eq) goto loc_82CC34F4;
	// addi r5,r28,11788
	ctx.r5.s64 = ctx.r28.s64 + 11788;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC34F0;
	sub_82CE4C50(ctx, base);
	// b 0x82cc35a8
	goto loc_82CC35A8;
loc_82CC34F4:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc350c
	if (!ctx.cr6.eq) goto loc_82CC350C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc35a8
	if (ctx.cr6.eq) goto loc_82CC35A8;
loc_82CC350C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC351C;
	sub_82CE4700(ctx, base);
	// addi r5,r28,11800
	ctx.r5.s64 = ctx.r28.s64 + 11800;
	// addi r4,r28,11804
	ctx.r4.s64 = ctx.r28.s64 + 11804;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC3530;
	sub_82CE4DB0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82CC3538:
	// slw r31,r25,r27
	ctx.r31.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r27.u8 & 0x3F));
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82cc3554
	if (ctx.cr6.eq) goto loc_82CC3554;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x82cc35a0
	if (!ctx.cr6.eq) goto loc_82CC35A0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82cc3558
	goto loc_82CC3558;
loc_82CC3554:
	// addi r30,r28,-28
	ctx.r30.s64 = ctx.r28.s64 + -28;
loc_82CC3558:
	// addi r4,r28,11816
	ctx.r4.s64 = ctx.r28.s64 + 11816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC3564;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc3594
	if (!ctx.cr6.eq) goto loc_82CC3594;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc3584
	if (ctx.cr6.eq) goto loc_82CC3584;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82CC3584:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC3594;
	sub_82CE4BA0(ctx, base);
loc_82CC3594:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x82cc3538
	if (ctx.cr6.lt) goto loc_82CC3538;
loc_82CC35A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC35A8;
	sub_82CE3628(ctx, base);
loc_82CC35A8:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f31,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82cc35c8
	if (!ctx.cr6.eq) goto loc_82CC35C8;
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc35dc
	if (ctx.cr6.eq) goto loc_82CC35DC;
loc_82CC35C8:
	// addi r5,r28,11824
	ctx.r5.s64 = ctx.r28.s64 + 11824;
	// lfs f1,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC35DC;
	sub_82CE4D00(ctx, base);
loc_82CC35DC:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc35f4
	if (!ctx.cr6.eq) goto loc_82CC35F4;
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc3608
	if (ctx.cr6.eq) goto loc_82CC3608;
loc_82CC35F4:
	// addi r5,r28,11832
	ctx.r5.s64 = ctx.r28.s64 + 11832;
	// lfs f1,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC3608;
	sub_82CE4D00(ctx, base);
loc_82CC3608:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc3628
	if (!ctx.cr6.eq) goto loc_82CC3628;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18528);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc363c
	if (ctx.cr6.eq) goto loc_82CC363C;
loc_82CC3628:
	// addi r5,r28,11840
	ctx.r5.s64 = ctx.r28.s64 + 11840;
	// lfs f1,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC363C;
	sub_82CE4D00(ctx, base);
loc_82CC363C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC3644;
	sub_82CE3628(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3650"))) PPC_WEAK_FUNC(sub_82CC3650);
PPC_FUNC_IMPL(__imp__sub_82CC3650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC3658;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC3670;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc3794
	if (ctx.cr6.eq) goto loc_82CC3794;
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,12916
	ctx.r30.s64 = ctx.r11.s64 + 12916;
	// beq cr6,0x82cc36b0
	if (ctx.cr6.eq) goto loc_82CC36B0;
	// addi r5,r30,11852
	ctx.r5.s64 = ctx.r30.s64 + 11852;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC36A4;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82cc3750
	goto loc_82CC3750;
loc_82CC36B0:
	// addi r5,r30,11864
	ctx.r5.s64 = ctx.r30.s64 + 11864;
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x82ce4700
	ctx.lr = 0x82CC36BC;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc3750
	if (ctx.cr6.eq) goto loc_82CC3750;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
loc_82CC36D8:
	// slw r28,r24,r26
	ctx.r28.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r26.u8 & 0x3F));
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82cc36f4
	if (ctx.cr6.eq) goto loc_82CC36F4;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x82cc3748
	if (!ctx.cr6.eq) goto loc_82CC3748;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x82cc36f8
	goto loc_82CC36F8;
loc_82CC36F4:
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
loc_82CC36F8:
	// addi r4,r30,11876
	ctx.r4.s64 = ctx.r30.s64 + 11876;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC3704;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc373c
	if (!ctx.cr6.eq) goto loc_82CC373C;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC3724;
	sub_82CE2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc373c
	if (ctx.cr6.eq) goto loc_82CC373C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82CC373C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc36d8
	if (ctx.cr6.lt) goto loc_82CC36D8;
loc_82CC3748:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC3750;
	sub_82CE3628(ctx, base);
loc_82CC3750:
	// addi r5,r30,11884
	ctx.r5.s64 = ctx.r30.s64 + 11884;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC3764;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,11892
	ctx.r5.s64 = ctx.r30.s64 + 11892;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC3778;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,11900
	ctx.r5.s64 = ctx.r30.s64 + 11900;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,12
	ctx.r4.s64 = ctx.r27.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC378C;
	sub_82CE2C50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC3794;
	sub_82CE3628(ctx, base);
loc_82CC3794:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC37A0"))) PPC_WEAK_FUNC(sub_82CC37A0);
PPC_FUNC_IMPL(__imp__sub_82CC37A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC37C8"))) PPC_WEAK_FUNC(sub_82CC37C8);
PPC_FUNC_IMPL(__imp__sub_82CC37C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC37F0"))) PPC_WEAK_FUNC(sub_82CC37F0);
PPC_FUNC_IMPL(__imp__sub_82CC37F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,108(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// addi r11,r4,180
	ctx.r11.s64 = ctx.r4.s64 + 180;
	// addi r10,r3,232
	ctx.r10.s64 = ctx.r3.s64 + 232;
	// stw r9,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r9.u32);
	// lwz r9,112(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r9,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// lwz r9,116(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r9,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r9.u32);
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// stw r9,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r9.u32);
	// lwz r9,124(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r9,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r9.u32);
	// lwz r9,128(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r9,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r9.u32);
	// lfs f0,132(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f0,136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f0,140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lfs f0,144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// lfs f0,148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lfs f0,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// lfs f0,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lfs f0,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lfs f0,164(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lfs f0,168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// lfs f0,172(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// lfs f0,176(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r11,212(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// lfs f0,216(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// lfs f0,220(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// lfs f0,224(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// lwz r11,228(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// lfs f0,232(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,300(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// lfs f0,236(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,304(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// lfs f0,240(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,308(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// lwz r11,244(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// lfs f0,248(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,320(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// lfs f0,252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// lfs f0,256(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,328(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// lwz r11,260(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// lfs f0,264(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,340(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// lfs f0,268(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,344(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 344, temp.u32);
	// lfs f0,272(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// lwz r11,276(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 276);
	// stw r11,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r11.u32);
	// lfs f0,280(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,360(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 360, temp.u32);
	// lfs f0,284(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,364(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// lfs f0,288(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,368(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// lwz r11,292(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 292);
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r11.u32);
	// lfs f0,296(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,380(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 380, temp.u32);
	// lfs f0,300(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,384(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 384, temp.u32);
	// lfs f0,304(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,388(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 388, temp.u32);
	// lfs f0,308(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,396(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// lfs f0,312(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,400(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// lfs f0,316(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,404(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// lfs f0,320(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,408(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 408, temp.u32);
	// lfs f0,324(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,412(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// lfs f0,328(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,416(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 416, temp.u32);
	// lfs f0,332(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,420(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// lfs f0,336(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 424, temp.u32);
	// lfs f0,340(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,428(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 428, temp.u32);
	// lfs f0,344(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,432(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 432, temp.u32);
	// lfs f0,348(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,436(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 436, temp.u32);
	// lfs f0,352(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,440(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 440, temp.u32);
	// lfs f0,356(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,444(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 444, temp.u32);
	// lwz r11,360(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 360);
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// lfs f0,364(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,452(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 452, temp.u32);
	// lfs f0,368(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,456(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// lfs f0,372(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,460(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// lwz r11,376(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 376);
	// stw r11,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r11.u32);
	// b 0x82cc30a8
	sub_82CC30A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3A20"))) PPC_WEAK_FUNC(sub_82CC3A20);
PPC_FUNC_IMPL(__imp__sub_82CC3A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// addi r11,r3,232
	ctx.r11.s64 = ctx.r3.s64 + 232;
	// addi r10,r4,180
	ctx.r10.s64 = ctx.r4.s64 + 180;
	// stw r9,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r9.u32);
	// lwz r9,152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r9,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r9.u32);
	// lwz r9,156(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// stw r9,116(r4)
	PPC_STORE_U32(ctx.r4.u32 + 116, ctx.r9.u32);
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stw r9,120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 120, ctx.r9.u32);
	// lwz r9,164(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// stw r9,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r9.u32);
	// lwz r9,168(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// stw r9,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, ctx.r9.u32);
	// lfs f0,172(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 132, temp.u32);
	// lfs f0,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 136, temp.u32);
	// lfs f0,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 140, temp.u32);
	// lfs f0,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 144, temp.u32);
	// lfs f0,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 148, temp.u32);
	// lfs f0,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 152, temp.u32);
	// lfs f0,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 156, temp.u32);
	// lfs f0,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 160, temp.u32);
	// lfs f0,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 164, temp.u32);
	// lfs f0,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 168, temp.u32);
	// lfs f0,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 172, temp.u32);
	// lfs f0,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 176, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// stw r11,212(r4)
	PPC_STORE_U32(ctx.r4.u32 + 212, ctx.r11.u32);
	// lfs f0,280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 216, temp.u32);
	// lfs f0,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 220, temp.u32);
	// lfs f0,288(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 224, temp.u32);
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// stw r11,228(r4)
	PPC_STORE_U32(ctx.r4.u32 + 228, ctx.r11.u32);
	// lfs f0,300(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 232, temp.u32);
	// lfs f0,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 236, temp.u32);
	// lfs f0,308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 240, temp.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// stw r11,244(r4)
	PPC_STORE_U32(ctx.r4.u32 + 244, ctx.r11.u32);
	// lfs f0,320(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 248, temp.u32);
	// lfs f0,324(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 252, temp.u32);
	// lfs f0,328(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 256, temp.u32);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// stw r11,260(r4)
	PPC_STORE_U32(ctx.r4.u32 + 260, ctx.r11.u32);
	// lfs f0,340(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,264(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 264, temp.u32);
	// lfs f0,344(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,268(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 268, temp.u32);
	// lfs f0,348(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,272(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 272, temp.u32);
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// stw r11,276(r4)
	PPC_STORE_U32(ctx.r4.u32 + 276, ctx.r11.u32);
	// lfs f0,360(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 280, temp.u32);
	// lfs f0,364(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,284(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 284, temp.u32);
	// lfs f0,368(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 288, temp.u32);
	// lwz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// stw r11,292(r4)
	PPC_STORE_U32(ctx.r4.u32 + 292, ctx.r11.u32);
	// lfs f0,380(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,296(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 296, temp.u32);
	// lfs f0,384(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,300(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 300, temp.u32);
	// lfs f0,388(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,304(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 304, temp.u32);
	// lfs f0,396(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,308(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 308, temp.u32);
	// lfs f0,400(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,312(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 312, temp.u32);
	// lfs f0,404(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,316(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 316, temp.u32);
	// lfs f0,408(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,320(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 320, temp.u32);
	// lfs f0,412(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 324, temp.u32);
	// lfs f0,416(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,328(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 328, temp.u32);
	// lfs f0,420(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,332(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 332, temp.u32);
	// lfs f0,424(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,336(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 336, temp.u32);
	// lfs f0,428(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,340(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 340, temp.u32);
	// lfs f0,432(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,344(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 344, temp.u32);
	// lfs f0,436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 348, temp.u32);
	// lfs f0,440(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,352(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 352, temp.u32);
	// lfs f0,444(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,356(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 356, temp.u32);
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// stw r11,360(r4)
	PPC_STORE_U32(ctx.r4.u32 + 360, ctx.r11.u32);
	// lfs f0,452(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,364(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 364, temp.u32);
	// lfs f0,456(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,368(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 368, temp.u32);
	// lfs f0,460(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,372(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 372, temp.u32);
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// stw r11,376(r4)
	PPC_STORE_U32(ctx.r4.u32 + 376, ctx.r11.u32);
	// b 0x82cc3170
	sub_82CC3170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3C50"))) PPC_WEAK_FUNC(sub_82CC3C50);
PPC_FUNC_IMPL(__imp__sub_82CC3C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lfs f0,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lfs f0,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f0,124(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// b 0x82cc30a8
	sub_82CC30A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3C88"))) PPC_WEAK_FUNC(sub_82CC3C88);
PPC_FUNC_IMPL(__imp__sub_82CC3C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f0,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lfs f0,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 120, temp.u32);
	// lfs f0,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 124, temp.u32);
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// stw r11,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, ctx.r11.u32);
	// b 0x82cc3170
	sub_82CC3170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3CC0"))) PPC_WEAK_FUNC(sub_82CC3CC0);
PPC_FUNC_IMPL(__imp__sub_82CC3CC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cc30a8
	sub_82CC30A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3CC8"))) PPC_WEAK_FUNC(sub_82CC3CC8);
PPC_FUNC_IMPL(__imp__sub_82CC3CC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cc3170
	sub_82CC3170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3CD0"))) PPC_WEAK_FUNC(sub_82CC3CD0);
PPC_FUNC_IMPL(__imp__sub_82CC3CD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cc30a8
	sub_82CC30A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3CD8"))) PPC_WEAK_FUNC(sub_82CC3CD8);
PPC_FUNC_IMPL(__imp__sub_82CC3CD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cc3170
	sub_82CC3170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3CE0"))) PPC_WEAK_FUNC(sub_82CC3CE0);
PPC_FUNC_IMPL(__imp__sub_82CC3CE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cc30a8
	sub_82CC30A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3CE8"))) PPC_WEAK_FUNC(sub_82CC3CE8);
PPC_FUNC_IMPL(__imp__sub_82CC3CE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cc3170
	sub_82CC3170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3CF0"))) PPC_WEAK_FUNC(sub_82CC3CF0);
PPC_FUNC_IMPL(__imp__sub_82CC3CF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cc30a8
	sub_82CC30A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3CF8"))) PPC_WEAK_FUNC(sub_82CC3CF8);
PPC_FUNC_IMPL(__imp__sub_82CC3CF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82cc3170
	sub_82CC3170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3D00"))) PPC_WEAK_FUNC(sub_82CC3D00);
PPC_FUNC_IMPL(__imp__sub_82CC3D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3D08"))) PPC_WEAK_FUNC(sub_82CC3D08);
PPC_FUNC_IMPL(__imp__sub_82CC3D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC3D10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC3D28;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc3d80
	if (ctx.cr6.eq) goto loc_82CC3D80;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,25884
	ctx.r30.s64 = ctx.r11.s64 + 25884;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC3D50;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,-12
	ctx.r5.s64 = ctx.r30.s64 + -12;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC3D64;
	sub_82CE2C50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC3D78;
	sub_82CE2C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC3D80;
	sub_82CE3628(ctx, base);
loc_82CC3D80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3D88"))) PPC_WEAK_FUNC(sub_82CC3D88);
PPC_FUNC_IMPL(__imp__sub_82CC3D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3DA8"))) PPC_WEAK_FUNC(sub_82CC3DA8);
PPC_FUNC_IMPL(__imp__sub_82CC3DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3DC8"))) PPC_WEAK_FUNC(sub_82CC3DC8);
PPC_FUNC_IMPL(__imp__sub_82CC3DC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3DD0"))) PPC_WEAK_FUNC(sub_82CC3DD0);
PPC_FUNC_IMPL(__imp__sub_82CC3DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC3DD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC3DF0;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc3e2c
	if (ctx.cr6.eq) goto loc_82CC3E2C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,25916
	ctx.r30.s64 = ctx.r11.s64 + 25916;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// bl 0x82cc3d08
	ctx.lr = 0x82CC3E14;
	sub_82CC3D08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x82cc3d08
	ctx.lr = 0x82CC3E24;
	sub_82CC3D08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC3E2C;
	sub_82CE3628(ctx, base);
loc_82CC3E2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3E38"))) PPC_WEAK_FUNC(sub_82CC3E38);
PPC_FUNC_IMPL(__imp__sub_82CC3E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3E70"))) PPC_WEAK_FUNC(sub_82CC3E70);
PPC_FUNC_IMPL(__imp__sub_82CC3E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3EA8"))) PPC_WEAK_FUNC(sub_82CC3EA8);
PPC_FUNC_IMPL(__imp__sub_82CC3EA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3EB0"))) PPC_WEAK_FUNC(sub_82CC3EB0);
PPC_FUNC_IMPL(__imp__sub_82CC3EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC3EB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC3ED0;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc3f28
	if (ctx.cr6.eq) goto loc_82CC3F28;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,25988
	ctx.r30.s64 = ctx.r11.s64 + 25988;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC3EF8;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,-12
	ctx.r5.s64 = ctx.r30.s64 + -12;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC3F0C;
	sub_82CE2C50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC3F20;
	sub_82CE2A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC3F28;
	sub_82CE3628(ctx, base);
loc_82CC3F28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC3F30"))) PPC_WEAK_FUNC(sub_82CC3F30);
PPC_FUNC_IMPL(__imp__sub_82CC3F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3F50"))) PPC_WEAK_FUNC(sub_82CC3F50);
PPC_FUNC_IMPL(__imp__sub_82CC3F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC3F70"))) PPC_WEAK_FUNC(sub_82CC3F70);
PPC_FUNC_IMPL(__imp__sub_82CC3F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 + 108;
	// addi r10,r3,148
	ctx.r10.s64 = ctx.r3.s64 + 148;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// lfs f0,136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// lfs f0,144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lfs f0,148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lfs f0,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lfs f0,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// lfs f0,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// lwz r11,164(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// lwz r11,168(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// b 0x82cc30a8
	sub_82CC30A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4000"))) PPC_WEAK_FUNC(sub_82CC4000);
PPC_FUNC_IMPL(__imp__sub_82CC4000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,148
	ctx.r11.s64 = ctx.r3.s64 + 148;
	// addi r10,r4,108
	ctx.r10.s64 = ctx.r4.s64 + 108;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 132, temp.u32);
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 136, temp.u32);
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// stw r11,140(r4)
	PPC_STORE_U32(ctx.r4.u32 + 140, ctx.r11.u32);
	// lfs f0,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 144, temp.u32);
	// lfs f0,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 148, temp.u32);
	// lfs f0,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 152, temp.u32);
	// lfs f0,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 156, temp.u32);
	// lfs f0,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 160, temp.u32);
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// stw r11,164(r4)
	PPC_STORE_U32(ctx.r4.u32 + 164, ctx.r11.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// stw r11,168(r4)
	PPC_STORE_U32(ctx.r4.u32 + 168, ctx.r11.u32);
	// b 0x82cc3170
	sub_82CC3170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4090"))) PPC_WEAK_FUNC(sub_82CC4090);
PPC_FUNC_IMPL(__imp__sub_82CC4090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r4,124
	ctx.r11.s64 = ctx.r4.s64 + 124;
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// addi r10,r3,164
	ctx.r10.s64 = ctx.r3.s64 + 164;
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lfs f0,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lfs f0,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lfs f0,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lfs f0,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lfs f0,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// lfs f0,164(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// lfs f0,168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lfs f0,172(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// lfs f0,176(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lfs f0,180(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lfs f0,184(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// lfs f0,188(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// lfs f0,192(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// lwz r11,196(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// lwz r11,200(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// b 0x82cc30a8
	sub_82CC30A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4160"))) PPC_WEAK_FUNC(sub_82CC4160);
PPC_FUNC_IMPL(__imp__sub_82CC4160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,164
	ctx.r11.s64 = ctx.r3.s64 + 164;
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// addi r10,r4,124
	ctx.r10.s64 = ctx.r4.s64 + 124;
	// lfs f0,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lfs f0,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 120, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 148, temp.u32);
	// lfs f0,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 152, temp.u32);
	// lfs f0,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 156, temp.u32);
	// lfs f0,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 160, temp.u32);
	// lfs f0,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 164, temp.u32);
	// lfs f0,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 168, temp.u32);
	// lfs f0,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 172, temp.u32);
	// lfs f0,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 176, temp.u32);
	// lfs f0,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 180, temp.u32);
	// lfs f0,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 184, temp.u32);
	// lfs f0,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 188, temp.u32);
	// lfs f0,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 192, temp.u32);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// stw r11,196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 196, ctx.r11.u32);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// stw r11,200(r4)
	PPC_STORE_U32(ctx.r4.u32 + 200, ctx.r11.u32);
	// b 0x82cc3170
	sub_82CC3170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4230"))) PPC_WEAK_FUNC(sub_82CC4230);
PPC_FUNC_IMPL(__imp__sub_82CC4230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lfs f0,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lfs f0,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f0,124(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lfs f0,128(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lfs f0,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f0,136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f0,140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lwz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// lfs f0,148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lfs f0,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lwz r11,156(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// b 0x82cc30a8
	sub_82CC30A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC42A0"))) PPC_WEAK_FUNC(sub_82CC42A0);
PPC_FUNC_IMPL(__imp__sub_82CC42A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f0,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lfs f0,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 120, temp.u32);
	// lfs f0,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 124, temp.u32);
	// lfs f0,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 128, temp.u32);
	// lfs f0,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 132, temp.u32);
	// lfs f0,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 136, temp.u32);
	// lfs f0,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 140, temp.u32);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// stw r11,144(r4)
	PPC_STORE_U32(ctx.r4.u32 + 144, ctx.r11.u32);
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 148, temp.u32);
	// lfs f0,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 152, temp.u32);
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// stw r11,156(r4)
	PPC_STORE_U32(ctx.r4.u32 + 156, ctx.r11.u32);
	// b 0x82cc3170
	sub_82CC3170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4310"))) PPC_WEAK_FUNC(sub_82CC4310);
PPC_FUNC_IMPL(__imp__sub_82CC4310) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC4340"))) PPC_WEAK_FUNC(sub_82CC4340);
PPC_FUNC_IMPL(__imp__sub_82CC4340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC4348"))) PPC_WEAK_FUNC(sub_82CC4348);
PPC_FUNC_IMPL(__imp__sub_82CC4348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC4350;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,66
	ctx.r4.s64 = 66;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC436C;
	sub_82CE4700(ctx, base);
	// lis r24,-31975
	ctx.r24.s64 = -2095513600;
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r26,r11,26808
	ctx.r26.s64 = ctx.r11.s64 + 26808;
	// bne cr6,0x82cc4390
	if (!ctx.cr6.eq) goto loc_82CC4390;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc43a4
	if (ctx.cr6.eq) goto loc_82CC43A4;
loc_82CC4390:
	// addi r5,r26,-96
	ctx.r5.s64 = ctx.r26.s64 + -96;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC43A4;
	sub_82CE4DB0(ctx, base);
loc_82CC43A4:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc43bc
	if (!ctx.cr6.eq) goto loc_82CC43BC;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc43d0
	if (ctx.cr6.eq) goto loc_82CC43D0;
loc_82CC43BC:
	// addi r5,r26,-92
	ctx.r5.s64 = ctx.r26.s64 + -92;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC43D0;
	sub_82CE4DB0(ctx, base);
loc_82CC43D0:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc43e8
	if (!ctx.cr6.eq) goto loc_82CC43E8;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc43fc
	if (ctx.cr6.eq) goto loc_82CC43FC;
loc_82CC43E8:
	// addi r5,r26,-76
	ctx.r5.s64 = ctx.r26.s64 + -76;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC43FC;
	sub_82CE4BA0(ctx, base);
loc_82CC43FC:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc4420
	if (ctx.cr6.eq) goto loc_82CC4420;
	// addi r5,r26,-60
	ctx.r5.s64 = ctx.r26.s64 + -60;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC441C;
	sub_82CE4C50(ctx, base);
	// b 0x82cc44c8
	goto loc_82CC44C8;
loc_82CC4420:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc4438
	if (!ctx.cr6.eq) goto loc_82CC4438;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cc44c8
	if (ctx.cr6.eq) goto loc_82CC44C8;
loc_82CC4438:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC4448;
	sub_82CE4700(ctx, base);
	// addi r5,r26,-52
	ctx.r5.s64 = ctx.r26.s64 + -52;
	// addi r4,r26,-48
	ctx.r4.s64 = ctx.r26.s64 + -48;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC445C;
	sub_82CE4DB0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82CC4464:
	// slw r31,r25,r27
	ctx.r31.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r27.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbd628
	ctx.lr = 0x82CC4470;
	sub_82CBD628(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cc44c0
	if (ctx.cr6.eq) goto loc_82CC44C0;
	// addi r4,r26,-40
	ctx.r4.s64 = ctx.r26.s64 + -40;
	// bl 0x82e2c390
	ctx.lr = 0x82CC4484;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc44b4
	if (!ctx.cr6.eq) goto loc_82CC44B4;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc44a4
	if (ctx.cr6.eq) goto loc_82CC44A4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82CC44A4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC44B4;
	sub_82CE4BA0(ctx, base);
loc_82CC44B4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x82cc4464
	if (ctx.cr6.lt) goto loc_82CC4464;
loc_82CC44C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC44C8;
	sub_82CE3628(ctx, base);
loc_82CC44C8:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc44e0
	if (!ctx.cr6.eq) goto loc_82CC44E0;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc44f4
	if (ctx.cr6.eq) goto loc_82CC44F4;
loc_82CC44E0:
	// addi r5,r26,-32
	ctx.r5.s64 = ctx.r26.s64 + -32;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC44F4;
	sub_82CE4DB0(ctx, base);
loc_82CC44F4:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc450c
	if (!ctx.cr6.eq) goto loc_82CC450C;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc4520
	if (ctx.cr6.eq) goto loc_82CC4520;
loc_82CC450C:
	// addi r5,r26,-24
	ctx.r5.s64 = ctx.r26.s64 + -24;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC4520;
	sub_82CE4C50(ctx, base);
loc_82CC4520:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc4538
	if (!ctx.cr6.eq) goto loc_82CC4538;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc454c
	if (ctx.cr6.eq) goto loc_82CC454C;
loc_82CC4538:
	// addi r5,r26,-8
	ctx.r5.s64 = ctx.r26.s64 + -8;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC454C;
	sub_82CE4DB0(ctx, base);
loc_82CC454C:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc4564
	if (!ctx.cr6.eq) goto loc_82CC4564;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc4578
	if (ctx.cr6.eq) goto loc_82CC4578;
loc_82CC4564:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC4578;
	sub_82CE4C50(ctx, base);
loc_82CC4578:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC4580;
	sub_82CE3628(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4588"))) PPC_WEAK_FUNC(sub_82CC4588);
PPC_FUNC_IMPL(__imp__sub_82CC4588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC4590;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,66
	ctx.r4.s64 = 66;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC45A8;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc4710
	if (ctx.cr6.eq) goto loc_82CC4710;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r28,r11,26916
	ctx.r28.s64 = ctx.r11.s64 + 26916;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r28,-92
	ctx.r5.s64 = ctx.r28.s64 + -92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC45D0;
	sub_82CE3780(ctx, base);
	// addi r5,r28,-88
	ctx.r5.s64 = ctx.r28.s64 + -88;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC45E4;
	sub_82CE3780(ctx, base);
	// addi r5,r28,-72
	ctx.r5.s64 = ctx.r28.s64 + -72;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC45F8;
	sub_82CE2A58(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc4624
	if (ctx.cr6.eq) goto loc_82CC4624;
	// addi r5,r28,-56
	ctx.r5.s64 = ctx.r28.s64 + -56;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC4618;
	sub_82CE2BA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// b 0x82cc46b8
	goto loc_82CC46B8;
loc_82CC4624:
	// addi r5,r28,-48
	ctx.r5.s64 = ctx.r28.s64 + -48;
	// li r4,65
	ctx.r4.s64 = 65;
	// bl 0x82ce4700
	ctx.lr = 0x82CC4630;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc46b8
	if (ctx.cr6.eq) goto loc_82CC46B8;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r24.u32);
loc_82CC464C:
	// slw r27,r25,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cbd628
	ctx.lr = 0x82CC4658;
	sub_82CBD628(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cc46b0
	if (ctx.cr6.eq) goto loc_82CC46B0;
	// addi r4,r28,-40
	ctx.r4.s64 = ctx.r28.s64 + -40;
	// bl 0x82e2c390
	ctx.lr = 0x82CC466C;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc46a4
	if (!ctx.cr6.eq) goto loc_82CC46A4;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC468C;
	sub_82CE2A58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc46a4
	if (ctx.cr6.eq) goto loc_82CC46A4;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_82CC46A4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc464c
	if (ctx.cr6.lt) goto loc_82CC464C;
loc_82CC46B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC46B8;
	sub_82CE3628(ctx, base);
loc_82CC46B8:
	// addi r5,r28,-32
	ctx.r5.s64 = ctx.r28.s64 + -32;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC46CC;
	sub_82CE3780(ctx, base);
	// addi r5,r28,-24
	ctx.r5.s64 = ctx.r28.s64 + -24;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC46E0;
	sub_82CE2BA8(ctx, base);
	// addi r5,r28,-8
	ctx.r5.s64 = ctx.r28.s64 + -8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC46F4;
	sub_82CE3780(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC4708;
	sub_82CE2BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC4710;
	sub_82CE3628(ctx, base);
loc_82CC4710:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4718"))) PPC_WEAK_FUNC(sub_82CC4718);
PPC_FUNC_IMPL(__imp__sub_82CC4718) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC4730"))) PPC_WEAK_FUNC(sub_82CC4730);
PPC_FUNC_IMPL(__imp__sub_82CC4730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC4738"))) PPC_WEAK_FUNC(sub_82CC4738);
PPC_FUNC_IMPL(__imp__sub_82CC4738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC4740;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC4760;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,26976
	ctx.r30.s64 = ctx.r11.s64 + 26976;
	// beq cr6,0x82cc4798
	if (ctx.cr6.eq) goto loc_82CC4798;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc4798
	if (!ctx.cr6.eq) goto loc_82CC4798;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC4784;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC4798;
	sub_82CE4DB0(ctx, base);
loc_82CC4798:
	// lis r29,-31975
	ctx.r29.s64 = -2095513600;
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc47b4
	if (!ctx.cr6.eq) goto loc_82CC47B4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc47cc
	if (ctx.cr6.eq) goto loc_82CC47CC;
loc_82CC47B4:
	// addi r5,r30,-40
	ctx.r5.s64 = ctx.r30.s64 + -40;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC47C8;
	sub_82CE4C50(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC47CC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc47e4
	if (!ctx.cr6.eq) goto loc_82CC47E4;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc47fc
	if (ctx.cr6.eq) goto loc_82CC47FC;
loc_82CC47E4:
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC47F8;
	sub_82CE4C50(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC47FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc4814
	if (!ctx.cr6.eq) goto loc_82CC4814;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc4828
	if (ctx.cr6.eq) goto loc_82CC4828;
loc_82CC4814:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC4828;
	sub_82CE4BA0(ctx, base);
loc_82CC4828:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC4830;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4838"))) PPC_WEAK_FUNC(sub_82CC4838);
PPC_FUNC_IMPL(__imp__sub_82CC4838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC4840;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC4858;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc48b0
	if (ctx.cr6.eq) goto loc_82CC48B0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,27024
	ctx.r30.s64 = ctx.r11.s64 + 27024;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-40
	ctx.r5.s64 = ctx.r30.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC4880;
	sub_82CE2BA8(ctx, base);
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC4894;
	sub_82CE2BA8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2a58
	ctx.lr = 0x82CC48A8;
	sub_82CE2A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC48B0;
	sub_82CE3628(ctx, base);
loc_82CC48B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC48B8"))) PPC_WEAK_FUNC(sub_82CC48B8);
PPC_FUNC_IMPL(__imp__sub_82CC48B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r7,240(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82CC48E4:
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x82cc48e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CC48E4;
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stfs f0,36(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lfs f0,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// lfs f0,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f0,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f0,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f0,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f0,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f0,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f0,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfs f0,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f0,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// lfs f0,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// lfs f0,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// lfs f0,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lfs f0,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// lfs f0,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// lhz r9,188(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 188);
	// sth r9,132(r11)
	PPC_STORE_U16(ctx.r11.u32 + 132, ctx.r9.u16);
	// lwz r9,192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// stw r9,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r9.u32);
	// lwz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// lwz r9,200(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// lwz r9,204(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// lwz r10,232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// b 0x82ce2000
	sub_82CE2000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC49D8"))) PPC_WEAK_FUNC(sub_82CC49D8);
PPC_FUNC_IMPL(__imp__sub_82CC49D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r8,240(r4)
	PPC_STORE_U32(ctx.r4.u32 + 240, ctx.r8.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82CC4A00:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82cc4a00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CC4A00;
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stfs f0,36(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// lfs f0,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f0,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// lfs f0,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// lfs f0,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lfs f0,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// lfs f0,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// lfs f0,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// lfs f0,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r10,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r10.u32);
	// lfs f0,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 100, temp.u32);
	// lfs f0,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lfs f0,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f0,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lhz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 132);
	// sth r10,188(r4)
	PPC_STORE_U16(ctx.r4.u32 + 188, ctx.r10.u16);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// stw r10,192(r4)
	PPC_STORE_U32(ctx.r4.u32 + 192, ctx.r10.u32);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// stw r10,196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 196, ctx.r10.u32);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// stw r10,200(r4)
	PPC_STORE_U32(ctx.r4.u32 + 200, ctx.r10.u32);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r10,204(r4)
	PPC_STORE_U32(ctx.r4.u32 + 204, ctx.r10.u32);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// stw r11,232(r4)
	PPC_STORE_U32(ctx.r4.u32 + 232, ctx.r11.u32);
	// b 0x82ce0ac8
	sub_82CE0AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4AF0"))) PPC_WEAK_FUNC(sub_82CC4AF0);
PPC_FUNC_IMPL(__imp__sub_82CC4AF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC4AF8"))) PPC_WEAK_FUNC(sub_82CC4AF8);
PPC_FUNC_IMPL(__imp__sub_82CC4AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC4B00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC4B18;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc4c60
	if (ctx.cr6.eq) goto loc_82CC4C60;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,28412
	ctx.r30.s64 = ctx.r11.s64 + 28412;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-256
	ctx.r5.s64 = ctx.r30.s64 + -256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC4B40;
	sub_82CE3780(ctx, base);
	// addi r5,r30,-252
	ctx.r5.s64 = ctx.r30.s64 + -252;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC4B54;
	sub_82CE3780(ctx, base);
	// addi r5,r30,-236
	ctx.r5.s64 = ctx.r30.s64 + -236;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC4B68;
	sub_82CE3780(ctx, base);
	// addi r5,r30,-228
	ctx.r5.s64 = ctx.r30.s64 + -228;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3780
	ctx.lr = 0x82CC4B7C;
	sub_82CE3780(ctx, base);
	// addi r5,r30,-220
	ctx.r5.s64 = ctx.r30.s64 + -220;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2cf8
	ctx.lr = 0x82CC4B90;
	sub_82CE2CF8(ctx, base);
	// addi r5,r30,-212
	ctx.r5.s64 = ctx.r30.s64 + -212;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2cf8
	ctx.lr = 0x82CC4BA4;
	sub_82CE2CF8(ctx, base);
	// addi r5,r30,-204
	ctx.r5.s64 = ctx.r30.s64 + -204;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC4BB8;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,-176
	ctx.r5.s64 = ctx.r30.s64 + -176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC4BCC;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,-156
	ctx.r5.s64 = ctx.r30.s64 + -156;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC4BE0;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,-128
	ctx.r5.s64 = ctx.r30.s64 + -128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC4BF4;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,-104
	ctx.r5.s64 = ctx.r30.s64 + -104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC4C08;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,-80
	ctx.r5.s64 = ctx.r30.s64 + -80;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC4C1C;
	sub_82CE2C50(ctx, base);
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC4C30;
	sub_82CE2C50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC4C44;
	sub_82CE2C50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,72
	ctx.r4.s64 = ctx.r29.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2c50
	ctx.lr = 0x82CC4C58;
	sub_82CE2C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC4C60;
	sub_82CE3628(ctx, base);
loc_82CC4C60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4C68"))) PPC_WEAK_FUNC(sub_82CC4C68);
PPC_FUNC_IMPL(__imp__sub_82CC4C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f0,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f0,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f0,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// b 0x82ce0b08
	sub_82CE0B08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4CF8"))) PPC_WEAK_FUNC(sub_82CC4CF8);
PPC_FUNC_IMPL(__imp__sub_82CC4CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// b 0x82ce0b58
	sub_82CE0B58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4D80"))) PPC_WEAK_FUNC(sub_82CC4D80);
PPC_FUNC_IMPL(__imp__sub_82CC4D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r9,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r9.u32);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r9,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r9.u32);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stw r9,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r9.u32);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r9,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r9.u32);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stw r9,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r9.u32);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r9,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r9.u32);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// stw r9,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r9.u32);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// stw r9,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r9.u32);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r9.u32);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r9,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r9.u32);
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// stw r9,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r9.u32);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stw r9,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r9.u32);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// stw r9,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r9.u32);
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// stw r10,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
	// b 0x82cdfc00
	sub_82CDFC00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4E48"))) PPC_WEAK_FUNC(sub_82CC4E48);
PPC_FUNC_IMPL(__imp__sub_82CC4E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lfs f0,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r10,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r10.u32);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r10,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r10.u32);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// stw r10,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r10.u32);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// stw r10,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r10.u32);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// stw r10,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r10.u32);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// stw r10,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r10.u32);
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// stw r10,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r10.u32);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// stw r10,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r10.u32);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// stw r10,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r10.u32);
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// stw r10,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r10.u32);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r10,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r10.u32);
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// stw r10,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r10.u32);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// stw r10,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r10.u32);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// stw r10,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r10.u32);
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stw r10,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r10.u32);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// stw r10,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r10.u32);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// stw r11,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
	// b 0x82cdfb40
	sub_82CDFB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC4F08"))) PPC_WEAK_FUNC(sub_82CC4F08);
PPC_FUNC_IMPL(__imp__sub_82CC4F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r9,2048
	ctx.r9.s64 = 2048;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC4F30"))) PPC_WEAK_FUNC(sub_82CC4F30);
PPC_FUNC_IMPL(__imp__sub_82CC4F30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC4F38"))) PPC_WEAK_FUNC(sub_82CC4F38);
PPC_FUNC_IMPL(__imp__sub_82CC4F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC4F40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC4F60;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,29884
	ctx.r30.s64 = ctx.r11.s64 + 29884;
	// beq cr6,0x82cc4f98
	if (ctx.cr6.eq) goto loc_82CC4F98;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc4f98
	if (!ctx.cr6.eq) goto loc_82CC4F98;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC4F84;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r30,-28
	ctx.r5.s64 = ctx.r30.s64 + -28;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC4F98;
	sub_82CE4DB0(ctx, base);
loc_82CC4F98:
	// lis r29,-31975
	ctx.r29.s64 = -2095513600;
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc4fb8
	if (!ctx.cr6.eq) goto loc_82CC4FB8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82cc4fd0
	if (ctx.cr6.eq) goto loc_82CC4FD0;
loc_82CC4FB8:
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC4FCC;
	sub_82CE4C50(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC4FD0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc4fe8
	if (!ctx.cr6.eq) goto loc_82CC4FE8;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// beq cr6,0x82cc5000
	if (ctx.cr6.eq) goto loc_82CC5000;
loc_82CC4FE8:
	// addi r5,r30,-12
	ctx.r5.s64 = ctx.r30.s64 + -12;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC4FFC;
	sub_82CE4C50(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC5000:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5018
	if (!ctx.cr6.eq) goto loc_82CC5018;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// beq cr6,0x82cc502c
	if (ctx.cr6.eq) goto loc_82CC502C;
loc_82CC5018:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC502C;
	sub_82CE4C50(ctx, base);
loc_82CC502C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC5034;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC5040"))) PPC_WEAK_FUNC(sub_82CC5040);
PPC_FUNC_IMPL(__imp__sub_82CC5040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC5048;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC5060;
	sub_82CE4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc50b8
	if (ctx.cr6.eq) goto loc_82CC50B8;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,29920
	ctx.r30.s64 = ctx.r11.s64 + 29920;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC5088;
	sub_82CE2BA8(ctx, base);
	// addi r5,r30,-12
	ctx.r5.s64 = ctx.r30.s64 + -12;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC509C;
	sub_82CE2BA8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce2ba8
	ctx.lr = 0x82CC50B0;
	sub_82CE2BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC50B8;
	sub_82CE3628(ctx, base);
loc_82CC50B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC50C0"))) PPC_WEAK_FUNC(sub_82CC50C0);
PPC_FUNC_IMPL(__imp__sub_82CC50C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC50E0"))) PPC_WEAK_FUNC(sub_82CC50E0);
PPC_FUNC_IMPL(__imp__sub_82CC50E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC5100"))) PPC_WEAK_FUNC(sub_82CC5100);
PPC_FUNC_IMPL(__imp__sub_82CC5100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC5120"))) PPC_WEAK_FUNC(sub_82CC5120);
PPC_FUNC_IMPL(__imp__sub_82CC5120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC5128;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC514C;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,21144
	ctx.r29.s64 = ctx.r11.s64 + 21144;
	// beq cr6,0x82cc5184
	if (ctx.cr6.eq) goto loc_82CC5184;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5184
	if (!ctx.cr6.eq) goto loc_82CC5184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC5170;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-20
	ctx.r5.s64 = ctx.r29.s64 + -20;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC5184;
	sub_82CE4DB0(ctx, base);
loc_82CC5184:
	// lis r30,-31975
	ctx.r30.s64 = -2095513600;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// lfs f31,-13892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc51a8
	if (!ctx.cr6.eq) goto loc_82CC51A8;
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc51c0
	if (ctx.cr6.eq) goto loc_82CC51C0;
loc_82CC51A8:
	// addi r5,r29,-16
	ctx.r5.s64 = ctx.r29.s64 + -16;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC51BC;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
loc_82CC51C0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc51d8
	if (!ctx.cr6.eq) goto loc_82CC51D8;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc51f0
	if (ctx.cr6.eq) goto loc_82CC51F0;
loc_82CC51D8:
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// lfs f1,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC51EC;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
loc_82CC51F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5208
	if (!ctx.cr6.eq) goto loc_82CC5208;
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc521c
	if (ctx.cr6.eq) goto loc_82CC521C;
loc_82CC5208:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC521C;
	sub_82CE4D00(ctx, base);
loc_82CC521C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC5224;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC5230"))) PPC_WEAK_FUNC(sub_82CC5230);
PPC_FUNC_IMPL(__imp__sub_82CC5230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f13,-13896(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// sth r11,76(r3)
	PPC_STORE_U16(ctx.r3.u32 + 76, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC5298"))) PPC_WEAK_FUNC(sub_82CC5298);
PPC_FUNC_IMPL(__imp__sub_82CC5298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82CC52A0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC52C0;
	sub_82CE4700(ctx, base);
	// lis r30,-31975
	ctx.r30.s64 = -2095513600;
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r27,r11,21444
	ctx.r27.s64 = ctx.r11.s64 + 21444;
	// bne cr6,0x82cc52e4
	if (!ctx.cr6.eq) goto loc_82CC52E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc52f8
	if (ctx.cr6.eq) goto loc_82CC52F8;
loc_82CC52E4:
	// addi r5,r27,-260
	ctx.r5.s64 = ctx.r27.s64 + -260;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC52F8;
	sub_82CE4DB0(ctx, base);
loc_82CC52F8:
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5310
	if (!ctx.cr6.eq) goto loc_82CC5310;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc5324
	if (ctx.cr6.eq) goto loc_82CC5324;
loc_82CC5310:
	// addi r5,r27,-256
	ctx.r5.s64 = ctx.r27.s64 + -256;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC5324;
	sub_82CE4DB0(ctx, base);
loc_82CC5324:
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc533c
	if (!ctx.cr6.eq) goto loc_82CC533C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc5350
	if (ctx.cr6.eq) goto loc_82CC5350;
loc_82CC533C:
	// addi r5,r27,-240
	ctx.r5.s64 = ctx.r27.s64 + -240;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC5350;
	sub_82CE4BA0(ctx, base);
loc_82CC5350:
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5368
	if (!ctx.cr6.eq) goto loc_82CC5368;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc537c
	if (ctx.cr6.eq) goto loc_82CC537C;
loc_82CC5368:
	// addi r5,r27,-228
	ctx.r5.s64 = ctx.r27.s64 + -228;
	// lhz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce5758
	ctx.lr = 0x82CC537C;
	sub_82CE5758(ctx, base);
loc_82CC537C:
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f31,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82cc539c
	if (!ctx.cr6.eq) goto loc_82CC539C;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc53b0
	if (ctx.cr6.eq) goto loc_82CC53B0;
loc_82CC539C:
	// addi r5,r27,-212
	ctx.r5.s64 = ctx.r27.s64 + -212;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC53B0;
	sub_82CE4D00(ctx, base);
loc_82CC53B0:
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc53c8
	if (!ctx.cr6.eq) goto loc_82CC53C8;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc53dc
	if (ctx.cr6.eq) goto loc_82CC53DC;
loc_82CC53C8:
	// addi r5,r27,-196
	ctx.r5.s64 = ctx.r27.s64 + -196;
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC53DC;
	sub_82CE4D00(ctx, base);
loc_82CC53DC:
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc53f4
	if (!ctx.cr6.eq) goto loc_82CC53F4;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc5408
	if (ctx.cr6.eq) goto loc_82CC5408;
loc_82CC53F4:
	// addi r5,r27,-180
	ctx.r5.s64 = ctx.r27.s64 + -180;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5408;
	sub_82CE4D00(ctx, base);
loc_82CC5408:
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5420
	if (!ctx.cr6.eq) goto loc_82CC5420;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc5434
	if (ctx.cr6.eq) goto loc_82CC5434;
loc_82CC5420:
	// addi r5,r27,-168
	ctx.r5.s64 = ctx.r27.s64 + -168;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5434;
	sub_82CE4D00(ctx, base);
loc_82CC5434:
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc544c
	if (!ctx.cr6.eq) goto loc_82CC544C;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc5460
	if (ctx.cr6.eq) goto loc_82CC5460;
loc_82CC544C:
	// addi r5,r27,-148
	ctx.r5.s64 = ctx.r27.s64 + -148;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5460;
	sub_82CE4D00(ctx, base);
loc_82CC5460:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc5484
	if (ctx.cr6.eq) goto loc_82CC5484;
	// addi r5,r27,-132
	ctx.r5.s64 = ctx.r27.s64 + -132;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC5480;
	sub_82CE4C50(ctx, base);
	// b 0x82cc54b8
	goto loc_82CC54B8;
loc_82CC5484:
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc549c
	if (!ctx.cr6.eq) goto loc_82CC549C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc54b8
	if (ctx.cr6.eq) goto loc_82CC54B8;
loc_82CC549C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82cbb5d0
	ctx.lr = 0x82CC54A4;
	sub_82CBB5D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r27,-112
	ctx.r5.s64 = ctx.r27.s64 + -112;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC54B8;
	sub_82CE4DB0(ctx, base);
loc_82CC54B8:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc54dc
	if (ctx.cr6.eq) goto loc_82CC54DC;
	// addi r5,r27,-92
	ctx.r5.s64 = ctx.r27.s64 + -92;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC54D8;
	sub_82CE4C50(ctx, base);
	// b 0x82cc5510
	goto loc_82CC5510;
loc_82CC54DC:
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc54f4
	if (!ctx.cr6.eq) goto loc_82CC54F4;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc5510
	if (ctx.cr6.eq) goto loc_82CC5510;
loc_82CC54F4:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82cbb5d0
	ctx.lr = 0x82CC54FC;
	sub_82CBB5D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r27,-68
	ctx.r5.s64 = ctx.r27.s64 + -68;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC5510;
	sub_82CE4DB0(ctx, base);
loc_82CC5510:
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5560
	if (!ctx.cr6.eq) goto loc_82CC5560;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82cc5550
	if (!ctx.cr6.eq) goto loc_82CC5550;
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82cc5550
	if (!ctx.cr6.eq) goto loc_82CC5550;
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc5554
	if (ctx.cr6.eq) goto loc_82CC5554;
loc_82CC5550:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82CC5554:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc5574
	if (ctx.cr6.eq) goto loc_82CC5574;
loc_82CC5560:
	// addi r5,r27,-44
	ctx.r5.s64 = ctx.r27.s64 + -44;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce5218
	ctx.lr = 0x82CC5574;
	sub_82CE5218(ctx, base);
loc_82CC5574:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc5598
	if (ctx.cr6.eq) goto loc_82CC5598;
	// addi r5,r27,-28
	ctx.r5.s64 = ctx.r27.s64 + -28;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC5594;
	sub_82CE4C50(ctx, base);
	// b 0x82cc563c
	goto loc_82CC563C;
loc_82CC5598:
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc55b0
	if (!ctx.cr6.eq) goto loc_82CC55B0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc563c
	if (ctx.cr6.eq) goto loc_82CC563C;
loc_82CC55B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC55C0;
	sub_82CE4700(ctx, base);
	// addi r5,r27,-20
	ctx.r5.s64 = ctx.r27.s64 + -20;
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC55D4;
	sub_82CE4DB0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
loc_82CC55D8:
	// slw r30,r25,r26
	ctx.r30.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbb718
	ctx.lr = 0x82CC55E4;
	sub_82CBB718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82cc5634
	if (ctx.cr6.eq) goto loc_82CC5634;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// bl 0x82e2c390
	ctx.lr = 0x82CC55F8;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc5628
	if (!ctx.cr6.eq) goto loc_82CC5628;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc5618
	if (ctx.cr6.eq) goto loc_82CC5618;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82CC5618:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC5628;
	sub_82CE4BA0(ctx, base);
loc_82CC5628:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc55d8
	if (ctx.cr6.lt) goto loc_82CC55D8;
loc_82CC5634:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC563C;
	sub_82CE3628(ctx, base);
loc_82CC563C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc5658
	if (ctx.cr6.eq) goto loc_82CC5658;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82cc5120
	ctx.lr = 0x82CC5658;
	sub_82CC5120(ctx, base);
loc_82CC5658:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC5660;
	sub_82CE3628(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC5670"))) PPC_WEAK_FUNC(sub_82CC5670);
PPC_FUNC_IMPL(__imp__sub_82CC5670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// lfs f13,-13896(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,-144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// stfs f13,-128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// stfs f0,-124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// stfs f13,-112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
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
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82CC56E4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82cc56e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CC56E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// li r10,2304
	ctx.r10.s64 = 2304;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f12,-3000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3000);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f11,-1968(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1968);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lfs f13,-13880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13880);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r9.u32);
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r8,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r8.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f11,96(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f13,100(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f13,116(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f13,124(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC5788"))) PPC_WEAK_FUNC(sub_82CC5788);
PPC_FUNC_IMPL(__imp__sub_82CC5788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC5790;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82cc5670
	ctx.lr = 0x82CC57A8;
	sub_82CC5670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC57B8;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r26,r11,22004
	ctx.r26.s64 = ctx.r11.s64 + 22004;
	// beq cr6,0x82cc57f0
	if (ctx.cr6.eq) goto loc_82CC57F0;
	// lbz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc57f0
	if (!ctx.cr6.eq) goto loc_82CC57F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC57DC;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r26,-288
	ctx.r5.s64 = ctx.r26.s64 + -288;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC57F0;
	sub_82CE4DB0(ctx, base);
loc_82CC57F0:
	// lis r24,-31975
	ctx.r24.s64 = -2095513600;
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5818
	if (!ctx.cr6.eq) goto loc_82CC5818;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb87b0
	ctx.lr = 0x82CC580C;
	sub_82CB87B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc582c
	if (!ctx.cr6.eq) goto loc_82CC582C;
loc_82CC5818:
	// addi r5,r26,-284
	ctx.r5.s64 = ctx.r26.s64 + -284;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce5388
	ctx.lr = 0x82CC582C;
	sub_82CE5388(ctx, base);
loc_82CC582C:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc587c
	if (!ctx.cr6.eq) goto loc_82CC587C;
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82cc586c
	if (!ctx.cr6.eq) goto loc_82CC586C;
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82cc586c
	if (!ctx.cr6.eq) goto loc_82CC586C;
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5870
	if (ctx.cr6.eq) goto loc_82CC5870;
loc_82CC586C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82CC5870:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc5890
	if (ctx.cr6.eq) goto loc_82CC5890;
loc_82CC587C:
	// addi r5,r26,-268
	ctx.r5.s64 = ctx.r26.s64 + -268;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce5218
	ctx.lr = 0x82CC5890;
	sub_82CE5218(ctx, base);
loc_82CC5890:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc58ac
	if (!ctx.cr6.eq) goto loc_82CC58AC;
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc58c0
	if (ctx.cr6.eq) goto loc_82CC58C0;
loc_82CC58AC:
	// addi r5,r26,-248
	ctx.r5.s64 = ctx.r26.s64 + -248;
	// lfs f1,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC58C0;
	sub_82CE4D00(ctx, base);
loc_82CC58C0:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc590c
	if (!ctx.cr6.eq) goto loc_82CC590C;
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82cc58fc
	if (!ctx.cr6.eq) goto loc_82CC58FC;
	// lfs f0,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82cc58fc
	if (!ctx.cr6.eq) goto loc_82CC58FC;
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5900
	if (ctx.cr6.eq) goto loc_82CC5900;
loc_82CC58FC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82CC5900:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc5920
	if (ctx.cr6.eq) goto loc_82CC5920;
loc_82CC590C:
	// addi r5,r26,-240
	ctx.r5.s64 = ctx.r26.s64 + -240;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce5218
	ctx.lr = 0x82CC5920;
	sub_82CE5218(ctx, base);
loc_82CC5920:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc596c
	if (!ctx.cr6.eq) goto loc_82CC596C;
	// lfs f0,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82cc595c
	if (!ctx.cr6.eq) goto loc_82CC595C;
	// lfs f0,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82cc595c
	if (!ctx.cr6.eq) goto loc_82CC595C;
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5960
	if (ctx.cr6.eq) goto loc_82CC5960;
loc_82CC595C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82CC5960:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc5980
	if (ctx.cr6.eq) goto loc_82CC5980;
loc_82CC596C:
	// addi r5,r26,-224
	ctx.r5.s64 = ctx.r26.s64 + -224;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce5218
	ctx.lr = 0x82CC5980;
	sub_82CE5218(ctx, base);
loc_82CC5980:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc599c
	if (!ctx.cr6.eq) goto loc_82CC599C;
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc59b0
	if (ctx.cr6.eq) goto loc_82CC59B0;
loc_82CC599C:
	// addi r5,r26,-208
	ctx.r5.s64 = ctx.r26.s64 + -208;
	// lfs f1,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC59B0;
	sub_82CE4D00(ctx, base);
loc_82CC59B0:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc59cc
	if (!ctx.cr6.eq) goto loc_82CC59CC;
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc59e0
	if (ctx.cr6.eq) goto loc_82CC59E0;
loc_82CC59CC:
	// addi r5,r26,-192
	ctx.r5.s64 = ctx.r26.s64 + -192;
	// lfs f1,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC59E0;
	sub_82CE4D00(ctx, base);
loc_82CC59E0:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc59fc
	if (!ctx.cr6.eq) goto loc_82CC59FC;
	// lfs f0,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5a10
	if (ctx.cr6.eq) goto loc_82CC5A10;
loc_82CC59FC:
	// addi r5,r26,-176
	ctx.r5.s64 = ctx.r26.s64 + -176;
	// lfs f1,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5A10;
	sub_82CE4D00(ctx, base);
loc_82CC5A10:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5a2c
	if (!ctx.cr6.eq) goto loc_82CC5A2C;
	// lfs f0,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5a40
	if (ctx.cr6.eq) goto loc_82CC5A40;
loc_82CC5A2C:
	// addi r5,r26,-160
	ctx.r5.s64 = ctx.r26.s64 + -160;
	// lfs f1,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5A40;
	sub_82CE4D00(ctx, base);
loc_82CC5A40:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5a5c
	if (!ctx.cr6.eq) goto loc_82CC5A5C;
	// lfs f0,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5a70
	if (ctx.cr6.eq) goto loc_82CC5A70;
loc_82CC5A5C:
	// addi r5,r26,-140
	ctx.r5.s64 = ctx.r26.s64 + -140;
	// lfs f1,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5A70;
	sub_82CE4D00(ctx, base);
loc_82CC5A70:
	// lbz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc5a94
	if (ctx.cr6.eq) goto loc_82CC5A94;
	// addi r5,r26,-120
	ctx.r5.s64 = ctx.r26.s64 + -120;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC5A90;
	sub_82CE4C50(ctx, base);
	// b 0x82cc5b3c
	goto loc_82CC5B3C;
loc_82CC5A94:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5ab0
	if (!ctx.cr6.eq) goto loc_82CC5AB0;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82cc5b3c
	if (ctx.cr6.eq) goto loc_82CC5B3C;
loc_82CC5AB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC5AC0;
	sub_82CE4700(ctx, base);
	// addi r5,r26,-112
	ctx.r5.s64 = ctx.r26.s64 + -112;
	// addi r4,r26,-108
	ctx.r4.s64 = ctx.r26.s64 + -108;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC5AD4;
	sub_82CE4DB0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
loc_82CC5AD8:
	// slw r31,r25,r27
	ctx.r31.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r27.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbb938
	ctx.lr = 0x82CC5AE4;
	sub_82CBB938(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cc5b34
	if (ctx.cr6.eq) goto loc_82CC5B34;
	// addi r4,r26,-100
	ctx.r4.s64 = ctx.r26.s64 + -100;
	// bl 0x82e2c390
	ctx.lr = 0x82CC5AF8;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc5b28
	if (!ctx.cr6.eq) goto loc_82CC5B28;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc5b18
	if (ctx.cr6.eq) goto loc_82CC5B18;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82CC5B18:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC5B28;
	sub_82CE4BA0(ctx, base);
loc_82CC5B28:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x82cc5ad8
	if (ctx.cr6.lt) goto loc_82CC5AD8;
loc_82CC5B34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC5B3C;
	sub_82CE3628(ctx, base);
loc_82CC5B3C:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5b58
	if (!ctx.cr6.eq) goto loc_82CC5B58;
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5b6c
	if (ctx.cr6.eq) goto loc_82CC5B6C;
loc_82CC5B58:
	// addi r5,r26,-92
	ctx.r5.s64 = ctx.r26.s64 + -92;
	// lfs f1,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5B6C;
	sub_82CE4D00(ctx, base);
loc_82CC5B6C:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5b88
	if (!ctx.cr6.eq) goto loc_82CC5B88;
	// lfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5b9c
	if (ctx.cr6.eq) goto loc_82CC5B9C;
loc_82CC5B88:
	// addi r5,r26,-72
	ctx.r5.s64 = ctx.r26.s64 + -72;
	// lfs f1,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5B9C;
	sub_82CE4D00(ctx, base);
loc_82CC5B9C:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5bb8
	if (!ctx.cr6.eq) goto loc_82CC5BB8;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82cc5bcc
	if (ctx.cr6.eq) goto loc_82CC5BCC;
loc_82CC5BB8:
	// addi r5,r26,-48
	ctx.r5.s64 = ctx.r26.s64 + -48;
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC5BCC;
	sub_82CE4C50(ctx, base);
loc_82CC5BCC:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5be8
	if (!ctx.cr6.eq) goto loc_82CC5BE8;
	// lfs f0,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5bfc
	if (ctx.cr6.eq) goto loc_82CC5BFC;
loc_82CC5BE8:
	// addi r5,r26,-24
	ctx.r5.s64 = ctx.r26.s64 + -24;
	// lfs f1,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5BFC;
	sub_82CE4D00(ctx, base);
loc_82CC5BFC:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5c18
	if (!ctx.cr6.eq) goto loc_82CC5C18;
	// lfs f0,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5c2c
	if (ctx.cr6.eq) goto loc_82CC5C2C;
loc_82CC5C18:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5C2C;
	sub_82CE4D00(ctx, base);
loc_82CC5C2C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC5C34;
	sub_82CE3628(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC5C40"))) PPC_WEAK_FUNC(sub_82CC5C40);
PPC_FUNC_IMPL(__imp__sub_82CC5C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lfs f13,17120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17120);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,-13884(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13884);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,-11424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11424);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,32360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC5C88"))) PPC_WEAK_FUNC(sub_82CC5C88);
PPC_FUNC_IMPL(__imp__sub_82CC5C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC5C90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC5CB0;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r29,r11,22384
	ctx.r29.s64 = ctx.r11.s64 + 22384;
	// beq cr6,0x82cc5ce8
	if (ctx.cr6.eq) goto loc_82CC5CE8;
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5ce8
	if (!ctx.cr6.eq) goto loc_82CC5CE8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC5CD4;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-68
	ctx.r5.s64 = ctx.r29.s64 + -68;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC5CE8;
	sub_82CE4DB0(ctx, base);
loc_82CC5CE8:
	// lis r28,-31975
	ctx.r28.s64 = -2095513600;
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5d0c
	if (!ctx.cr6.eq) goto loc_82CC5D0C;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13896(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5d24
	if (ctx.cr6.eq) goto loc_82CC5D24;
loc_82CC5D0C:
	// addi r5,r29,-64
	ctx.r5.s64 = ctx.r29.s64 + -64;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5D20;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC5D24:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc5d44
	if (!ctx.cr6.eq) goto loc_82CC5D44;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5d5c
	if (ctx.cr6.eq) goto loc_82CC5D5C;
loc_82CC5D44:
	// addi r5,r29,-48
	ctx.r5.s64 = ctx.r29.s64 + -48;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5D58;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC5D5C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc5d7c
	if (!ctx.cr6.eq) goto loc_82CC5D7C;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13884(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13884);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5d94
	if (ctx.cr6.eq) goto loc_82CC5D94;
loc_82CC5D7C:
	// addi r5,r29,-32
	ctx.r5.s64 = ctx.r29.s64 + -32;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5D90;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC5D94:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc5db4
	if (!ctx.cr6.eq) goto loc_82CC5DB4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11424);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5dcc
	if (ctx.cr6.eq) goto loc_82CC5DCC;
loc_82CC5DB4:
	// addi r5,r29,-16
	ctx.r5.s64 = ctx.r29.s64 + -16;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5DC8;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC5DCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5dec
	if (!ctx.cr6.eq) goto loc_82CC5DEC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32360);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc5e00
	if (ctx.cr6.eq) goto loc_82CC5E00;
loc_82CC5DEC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC5E00;
	sub_82CE4D00(ctx, base);
loc_82CC5E00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC5E08;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC5E10"))) PPC_WEAK_FUNC(sub_82CC5E10);
PPC_FUNC_IMPL(__imp__sub_82CC5E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r7,9
	ctx.r7.s64 = 9;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lfs f0,-13892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f13,-13896(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-120
	ctx.r9.s64 = ctx.r1.s64 + -120;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stfs f13,-120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stfs f0,-108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f13,-104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,-100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f0,-92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f13,-88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82CC5EA8:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82cc5ea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82CC5EA8;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// sth r10,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r10.u16);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// sth r10,62(r3)
	PPC_STORE_U16(ctx.r3.u32 + 62, ctx.r10.u16);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lfs f12,-13880(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13880);
	ctx.f12.f64 = double(temp.f32);
	// li r9,93
	ctx.r9.s64 = 93;
	// stfs f12,72(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC5F00"))) PPC_WEAK_FUNC(sub_82CC5F00);
PPC_FUNC_IMPL(__imp__sub_82CC5F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC5F08;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82cc5e10
	ctx.lr = 0x82CC5F20;
	sub_82CC5E10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC5F30;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,22636
	ctx.r27.s64 = ctx.r11.s64 + 22636;
	// beq cr6,0x82cc5f68
	if (ctx.cr6.eq) goto loc_82CC5F68;
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5f68
	if (!ctx.cr6.eq) goto loc_82CC5F68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC5F54;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r27,-156
	ctx.r5.s64 = ctx.r27.s64 + -156;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC5F68;
	sub_82CE4DB0(ctx, base);
loc_82CC5F68:
	// lis r24,-31975
	ctx.r24.s64 = -2095513600;
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5f88
	if (!ctx.cr6.eq) goto loc_82CC5F88;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82cc5f9c
	if (ctx.cr6.eq) goto loc_82CC5F9C;
loc_82CC5F88:
	// addi r5,r27,-152
	ctx.r5.s64 = ctx.r27.s64 + -152;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC5F9C;
	sub_82CE4DB0(ctx, base);
loc_82CC5F9C:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5fb8
	if (!ctx.cr6.eq) goto loc_82CC5FB8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82cc5fcc
	if (ctx.cr6.eq) goto loc_82CC5FCC;
loc_82CC5FB8:
	// addi r5,r27,-136
	ctx.r5.s64 = ctx.r27.s64 + -136;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC5FCC;
	sub_82CE4DB0(ctx, base);
loc_82CC5FCC:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc5ff0
	if (!ctx.cr6.eq) goto loc_82CC5FF0;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cb87b0
	ctx.lr = 0x82CC5FE4;
	sub_82CB87B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6004
	if (!ctx.cr6.eq) goto loc_82CC6004;
loc_82CC5FF0:
	// addi r5,r27,-128
	ctx.r5.s64 = ctx.r27.s64 + -128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce5388
	ctx.lr = 0x82CC6004;
	sub_82CE5388(ctx, base);
loc_82CC6004:
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc6028
	if (ctx.cr6.eq) goto loc_82CC6028;
	// addi r5,r27,-116
	ctx.r5.s64 = ctx.r27.s64 + -116;
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC6024;
	sub_82CE4C50(ctx, base);
	// b 0x82cc60d4
	goto loc_82CC60D4;
loc_82CC6028:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6044
	if (!ctx.cr6.eq) goto loc_82CC6044;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82cc60d4
	if (ctx.cr6.eq) goto loc_82CC60D4;
loc_82CC6044:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC6054;
	sub_82CE4700(ctx, base);
	// addi r5,r27,-104
	ctx.r5.s64 = ctx.r27.s64 + -104;
	// addi r4,r27,-100
	ctx.r4.s64 = ctx.r27.s64 + -100;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC6068;
	sub_82CE4DB0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82CC6070:
	// slw r31,r25,r26
	ctx.r31.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbc1b0
	ctx.lr = 0x82CC607C;
	sub_82CBC1B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cc60cc
	if (ctx.cr6.eq) goto loc_82CC60CC;
	// addi r4,r27,-88
	ctx.r4.s64 = ctx.r27.s64 + -88;
	// bl 0x82e2c390
	ctx.lr = 0x82CC6090;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc60c0
	if (!ctx.cr6.eq) goto loc_82CC60C0;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc60b0
	if (ctx.cr6.eq) goto loc_82CC60B0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82CC60B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC60C0;
	sub_82CE4BA0(ctx, base);
loc_82CC60C0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc6070
	if (ctx.cr6.lt) goto loc_82CC6070;
loc_82CC60CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC60D4;
	sub_82CE3628(ctx, base);
loc_82CC60D4:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc60f0
	if (!ctx.cr6.eq) goto loc_82CC60F0;
	// lhz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 60);
	// lhz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82cc6104
	if (ctx.cr6.eq) goto loc_82CC6104;
loc_82CC60F0:
	// addi r5,r27,-80
	ctx.r5.s64 = ctx.r27.s64 + -80;
	// lhz r4,60(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 60);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce5758
	ctx.lr = 0x82CC6104;
	sub_82CE5758(ctx, base);
loc_82CC6104:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6120
	if (!ctx.cr6.eq) goto loc_82CC6120;
	// lhz r11,62(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 62);
	// lhz r10,142(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 142);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82cc6134
	if (ctx.cr6.eq) goto loc_82CC6134;
loc_82CC6120:
	// addi r5,r27,-72
	ctx.r5.s64 = ctx.r27.s64 + -72;
	// lhz r4,62(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 62);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce5758
	ctx.lr = 0x82CC6134;
	sub_82CE5758(ctx, base);
loc_82CC6134:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6150
	if (!ctx.cr6.eq) goto loc_82CC6150;
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82cc6164
	if (ctx.cr6.eq) goto loc_82CC6164;
loc_82CC6150:
	// addi r5,r27,-56
	ctx.r5.s64 = ctx.r27.s64 + -56;
	// lwz r4,64(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC6164;
	sub_82CE4DB0(ctx, base);
loc_82CC6164:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6180
	if (!ctx.cr6.eq) goto loc_82CC6180;
	// lfs f0,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc6194
	if (ctx.cr6.eq) goto loc_82CC6194;
loc_82CC6180:
	// addi r5,r27,-40
	ctx.r5.s64 = ctx.r27.s64 + -40;
	// lfs f1,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC6194;
	sub_82CE4D00(ctx, base);
loc_82CC6194:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc61b0
	if (!ctx.cr6.eq) goto loc_82CC61B0;
	// lfs f0,72(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc61c4
	if (ctx.cr6.eq) goto loc_82CC61C4;
loc_82CC61B0:
	// addi r5,r27,-24
	ctx.r5.s64 = ctx.r27.s64 + -24;
	// lfs f1,72(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC61C4;
	sub_82CE4D00(ctx, base);
loc_82CC61C4:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc61e0
	if (!ctx.cr6.eq) goto loc_82CC61E0;
	// lfs f0,76(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc61f4
	if (ctx.cr6.eq) goto loc_82CC61F4;
loc_82CC61E0:
	// addi r5,r27,-12
	ctx.r5.s64 = ctx.r27.s64 + -12;
	// lfs f1,76(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC61F4;
	sub_82CE4D00(ctx, base);
loc_82CC61F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// bl 0x82cc0c48
	ctx.lr = 0x82CC6204;
	sub_82CC0C48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC620C;
	sub_82CE3628(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC6218"))) PPC_WEAK_FUNC(sub_82CC6218);
PPC_FUNC_IMPL(__imp__sub_82CC6218) {
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
	// bl 0x82cc5e10
	ctx.lr = 0x82CC6228;
	sub_82CC5E10(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,30
	ctx.r10.s64 = 30;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC6260"))) PPC_WEAK_FUNC(sub_82CC6260);
PPC_FUNC_IMPL(__imp__sub_82CC6260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC6268;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82cc5e10
	ctx.lr = 0x82CC6280;
	sub_82CC5E10(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// li r11,30
	ctx.r11.s64 = 30;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// bl 0x82ce4700
	ctx.lr = 0x82CC62B4;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,22812
	ctx.r28.s64 = ctx.r11.s64 + 22812;
	// beq cr6,0x82cc62ec
	if (ctx.cr6.eq) goto loc_82CC62EC;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc62ec
	if (!ctx.cr6.eq) goto loc_82CC62EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC62D8;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,-4
	ctx.r5.s64 = ctx.r28.s64 + -4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC62EC;
	sub_82CE4DB0(ctx, base);
loc_82CC62EC:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lbz r11,11508(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc633c
	if (!ctx.cr6.eq) goto loc_82CC633C;
	// lfs f0,108(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82cc632c
	if (!ctx.cr6.eq) goto loc_82CC632C;
	// lfs f0,112(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82cc632c
	if (!ctx.cr6.eq) goto loc_82CC632C;
	// lfs f0,116(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc6330
	if (ctx.cr6.eq) goto loc_82CC6330;
loc_82CC632C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CC6330:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc6350
	if (ctx.cr6.eq) goto loc_82CC6350;
loc_82CC633C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce5218
	ctx.lr = 0x82CC6350;
	sub_82CE5218(ctx, base);
loc_82CC6350:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cc5f00
	ctx.lr = 0x82CC6360;
	sub_82CC5F00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC6368;
	sub_82CE3628(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC6370"))) PPC_WEAK_FUNC(sub_82CC6370);
PPC_FUNC_IMPL(__imp__sub_82CC6370) {
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
	// bl 0x82cc5e10
	ctx.lr = 0x82CC6380;
	sub_82CC5E10(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f13,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC63C0"))) PPC_WEAK_FUNC(sub_82CC63C0);
PPC_FUNC_IMPL(__imp__sub_82CC63C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC63C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82cc5e10
	ctx.lr = 0x82CC63E0;
	sub_82CC5E10(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f13,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// li r11,31
	ctx.r11.s64 = 31;
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// bl 0x82ce4700
	ctx.lr = 0x82CC6420;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,22848
	ctx.r28.s64 = ctx.r11.s64 + 22848;
	// beq cr6,0x82cc6458
	if (ctx.cr6.eq) goto loc_82CC6458;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6458
	if (!ctx.cr6.eq) goto loc_82CC6458;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC6444;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC6458;
	sub_82CE4DB0(ctx, base);
loc_82CC6458:
	// lis r30,-31975
	ctx.r30.s64 = -2095513600;
	// lbz r10,11508(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc64ac
	if (!ctx.cr6.eq) goto loc_82CC64AC;
	// lfs f0,108(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82cc649c
	if (!ctx.cr6.eq) goto loc_82CC649C;
	// lfs f0,112(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82cc649c
	if (!ctx.cr6.eq) goto loc_82CC649C;
	// lfs f0,116(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc64a0
	if (ctx.cr6.eq) goto loc_82CC64A0;
loc_82CC649C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CC64A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc64c4
	if (ctx.cr6.eq) goto loc_82CC64C4;
loc_82CC64AC:
	// addi r5,r28,-8
	ctx.r5.s64 = ctx.r28.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce5218
	ctx.lr = 0x82CC64C0;
	sub_82CE5218(ctx, base);
	// lbz r10,11508(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
loc_82CC64C4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc64e0
	if (!ctx.cr6.eq) goto loc_82CC64E0;
	// lfs f0,120(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc64f4
	if (ctx.cr6.eq) goto loc_82CC64F4;
loc_82CC64E0:
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,120(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC64F4;
	sub_82CE4D00(ctx, base);
loc_82CC64F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cc5f00
	ctx.lr = 0x82CC6504;
	sub_82CC5F00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC650C;
	sub_82CE3628(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC6518"))) PPC_WEAK_FUNC(sub_82CC6518);
PPC_FUNC_IMPL(__imp__sub_82CC6518) {
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
	// bl 0x82cc5e10
	ctx.lr = 0x82CC6528;
	sub_82CC5E10(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r9,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC6558"))) PPC_WEAK_FUNC(sub_82CC6558);
PPC_FUNC_IMPL(__imp__sub_82CC6558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC6560;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82cc5e10
	ctx.lr = 0x82CC6578;
	sub_82CC5E10(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x82ce4700
	ctx.lr = 0x82CC65A4;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,22868
	ctx.r29.s64 = ctx.r11.s64 + 22868;
	// beq cr6,0x82cc65dc
	if (ctx.cr6.eq) goto loc_82CC65DC;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc65dc
	if (!ctx.cr6.eq) goto loc_82CC65DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC65C8;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-4
	ctx.r5.s64 = ctx.r29.s64 + -4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC65DC;
	sub_82CE4DB0(ctx, base);
loc_82CC65DC:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lbz r11,11508(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc65fc
	if (!ctx.cr6.eq) goto loc_82CC65FC;
	// lfs f0,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc6610
	if (ctx.cr6.eq) goto loc_82CC6610;
loc_82CC65FC:
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC6610;
	sub_82CE4D00(ctx, base);
loc_82CC6610:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cc5f00
	ctx.lr = 0x82CC6620;
	sub_82CC5F00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC6628;
	sub_82CE3628(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC6630"))) PPC_WEAK_FUNC(sub_82CC6630);
PPC_FUNC_IMPL(__imp__sub_82CC6630) {
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
	// bl 0x82cc5e10
	ctx.lr = 0x82CC6640;
	sub_82CC5E10(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,33
	ctx.r9.s64 = 33;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC6678"))) PPC_WEAK_FUNC(sub_82CC6678);
PPC_FUNC_IMPL(__imp__sub_82CC6678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CC6680;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82cc5e10
	ctx.lr = 0x82CC6698;
	sub_82CC5E10(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// li r11,33
	ctx.r11.s64 = 33;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bl 0x82ce4700
	ctx.lr = 0x82CC66CC;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,11592
	ctx.r29.s64 = ctx.r11.s64 + 11592;
	// beq cr6,0x82cc6704
	if (ctx.cr6.eq) goto loc_82CC6704;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6704
	if (!ctx.cr6.eq) goto loc_82CC6704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC66F0;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,11292
	ctx.r5.s64 = ctx.r29.s64 + 11292;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC6704;
	sub_82CE4DB0(ctx, base);
loc_82CC6704:
	// lis r30,-31975
	ctx.r30.s64 = -2095513600;
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6724
	if (!ctx.cr6.eq) goto loc_82CC6724;
	// lfs f0,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc673c
	if (ctx.cr6.eq) goto loc_82CC673C;
loc_82CC6724:
	// addi r5,r29,11296
	ctx.r5.s64 = ctx.r29.s64 + 11296;
	// lfs f1,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC6738;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
loc_82CC673C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc6758
	if (!ctx.cr6.eq) goto loc_82CC6758;
	// lfs f0,112(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc6770
	if (ctx.cr6.eq) goto loc_82CC6770;
loc_82CC6758:
	// addi r5,r29,11304
	ctx.r5.s64 = ctx.r29.s64 + 11304;
	// lfs f1,112(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC676C;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
loc_82CC6770:
	// lbz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc6794
	if (ctx.cr6.eq) goto loc_82CC6794;
	// addi r5,r29,11312
	ctx.r5.s64 = ctx.r29.s64 + 11312;
	// lwz r4,116(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC6790;
	sub_82CE4C50(ctx, base);
	// b 0x82cc6838
	goto loc_82CC6838;
loc_82CC6794:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc67b0
	if (!ctx.cr6.eq) goto loc_82CC67B0;
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82cc6838
	if (ctx.cr6.eq) goto loc_82CC6838;
loc_82CC67B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC67C0;
	sub_82CE4700(ctx, base);
	// addi r5,r29,11320
	ctx.r5.s64 = ctx.r29.s64 + 11320;
	// addi r4,r29,11324
	ctx.r4.s64 = ctx.r29.s64 + 11324;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC67D4;
	sub_82CE4DB0(ctx, base);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82CC67DC:
	// slw r11,r27,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82cc6830
	if (!ctx.cr6.eq) goto loc_82CC6830;
	// addi r4,r29,11332
	ctx.r4.s64 = ctx.r29.s64 + 11332;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC67F4;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc6824
	if (!ctx.cr6.eq) goto loc_82CC6824;
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc6814
	if (ctx.cr6.eq) goto loc_82CC6814;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82CC6814:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC6824;
	sub_82CE4BA0(ctx, base);
loc_82CC6824:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x82cc67dc
	if (ctx.cr6.lt) goto loc_82CC67DC;
loc_82CC6830:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC6838;
	sub_82CE3628(ctx, base);
loc_82CC6838:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cc5f00
	ctx.lr = 0x82CC6848;
	sub_82CC5F00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC6850;
	sub_82CE3628(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC6858"))) PPC_WEAK_FUNC(sub_82CC6858);
PPC_FUNC_IMPL(__imp__sub_82CC6858) {
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
	// bl 0x82cc5e10
	ctx.lr = 0x82CC6868;
	sub_82CC5E10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,35
	ctx.r9.s64 = 35;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC6898"))) PPC_WEAK_FUNC(sub_82CC6898);
PPC_FUNC_IMPL(__imp__sub_82CC6898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC68A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82cc5e10
	ctx.lr = 0x82CC68B8;
	sub_82CC5E10(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r11,35
	ctx.r11.s64 = 35;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// stw r25,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r25.u32);
	// bl 0x82ce4700
	ctx.lr = 0x82CC68E4;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,12164
	ctx.r28.s64 = ctx.r11.s64 + 12164;
	// beq cr6,0x82cc691c
	if (ctx.cr6.eq) goto loc_82CC691C;
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc691c
	if (!ctx.cr6.eq) goto loc_82CC691C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC6908;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,10808
	ctx.r5.s64 = ctx.r28.s64 + 10808;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC691C;
	sub_82CE4DB0(ctx, base);
loc_82CC691C:
	// lis r31,-31975
	ctx.r31.s64 = -2095513600;
	// lbz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc693c
	if (!ctx.cr6.eq) goto loc_82CC693C;
	// lwz r10,108(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cc6954
	if (ctx.cr6.eq) goto loc_82CC6954;
loc_82CC693C:
	// addi r5,r28,10812
	ctx.r5.s64 = ctx.r28.s64 + 10812;
	// lwz r4,108(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC6950;
	sub_82CE4DB0(ctx, base);
	// lbz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11508);
loc_82CC6954:
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc6978
	if (ctx.cr6.eq) goto loc_82CC6978;
	// addi r5,r28,10824
	ctx.r5.s64 = ctx.r28.s64 + 10824;
	// lwz r4,112(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC6974;
	sub_82CE4C50(ctx, base);
	// b 0x82cc6a2c
	goto loc_82CC6A2C;
loc_82CC6978:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6994
	if (!ctx.cr6.eq) goto loc_82CC6994;
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82cc6a2c
	if (ctx.cr6.eq) goto loc_82CC6A2C;
loc_82CC6994:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC69A4;
	sub_82CE4700(ctx, base);
	// addi r5,r28,10836
	ctx.r5.s64 = ctx.r28.s64 + 10836;
	// addi r4,r28,10840
	ctx.r4.s64 = ctx.r28.s64 + 10840;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC69B8;
	sub_82CE4DB0(ctx, base);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82CC69BC:
	// slw r31,r24,r27
	ctx.r31.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r27.u8 & 0x3F));
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82cc69d8
	if (ctx.cr6.eq) goto loc_82CC69D8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x82cc6a24
	if (!ctx.cr6.eq) goto loc_82CC6A24;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x82cc69dc
	goto loc_82CC69DC;
loc_82CC69D8:
	// addi r29,r28,-36
	ctx.r29.s64 = ctx.r28.s64 + -36;
loc_82CC69DC:
	// addi r4,r28,10852
	ctx.r4.s64 = ctx.r28.s64 + 10852;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC69E8;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc6a18
	if (!ctx.cr6.eq) goto loc_82CC6A18;
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc6a08
	if (ctx.cr6.eq) goto loc_82CC6A08;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82CC6A08:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC6A18;
	sub_82CE4BA0(ctx, base);
loc_82CC6A18:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x82cc69bc
	if (ctx.cr6.lt) goto loc_82CC69BC;
loc_82CC6A24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC6A2C;
	sub_82CE3628(ctx, base);
loc_82CC6A2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cc5f00
	ctx.lr = 0x82CC6A3C;
	sub_82CC5F00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC6A44;
	sub_82CE3628(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC6A50"))) PPC_WEAK_FUNC(sub_82CC6A50);
PPC_FUNC_IMPL(__imp__sub_82CC6A50) {
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
	// bl 0x82cc5e10
	ctx.lr = 0x82CC6A60;
	sub_82CC5E10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC6A90"))) PPC_WEAK_FUNC(sub_82CC6A90);
PPC_FUNC_IMPL(__imp__sub_82CC6A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x82CC6A98;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82cc5e10
	ctx.lr = 0x82CC6AB0;
	sub_82CC5E10(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r11,36
	ctx.r11.s64 = 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r24,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r24.u32);
	// bl 0x82ce4700
	ctx.lr = 0x82CC6ADC;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,12040
	ctx.r29.s64 = ctx.r11.s64 + 12040;
	// beq cr6,0x82cc6b14
	if (ctx.cr6.eq) goto loc_82CC6B14;
	// lbz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6b14
	if (!ctx.cr6.eq) goto loc_82CC6B14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC6B00;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,11028
	ctx.r5.s64 = ctx.r29.s64 + 11028;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC6B14;
	sub_82CE4DB0(ctx, base);
loc_82CC6B14:
	// lis r23,-31975
	ctx.r23.s64 = -2095513600;
	// lbz r11,11508(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6b34
	if (!ctx.cr6.eq) goto loc_82CC6B34;
	// lwz r11,108(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82cc6b48
	if (ctx.cr6.eq) goto loc_82CC6B48;
loc_82CC6B34:
	// addi r5,r29,11032
	ctx.r5.s64 = ctx.r29.s64 + 11032;
	// lwz r4,108(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC6B48;
	sub_82CE4DB0(ctx, base);
loc_82CC6B48:
	// lbz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc6b6c
	if (ctx.cr6.eq) goto loc_82CC6B6C;
	// addi r5,r29,11044
	ctx.r5.s64 = ctx.r29.s64 + 11044;
	// lwz r4,112(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC6B68;
	sub_82CE4C50(ctx, base);
	// b 0x82cc6c24
	goto loc_82CC6C24;
loc_82CC6B6C:
	// lbz r11,11508(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6b88
	if (!ctx.cr6.eq) goto loc_82CC6B88;
	// lwz r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82cc6c24
	if (ctx.cr6.eq) goto loc_82CC6C24;
loc_82CC6B88:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC6B98;
	sub_82CE4700(ctx, base);
	// addi r5,r29,11056
	ctx.r5.s64 = ctx.r29.s64 + 11056;
	// addi r4,r29,11060
	ctx.r4.s64 = ctx.r29.s64 + 11060;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC6BAC;
	sub_82CE4DB0(ctx, base);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82CC6BB4:
	// slw r31,r26,r27
	ctx.r31.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r27.u8 & 0x3F));
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82cc6bd0
	if (ctx.cr6.eq) goto loc_82CC6BD0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x82cc6c1c
	if (!ctx.cr6.eq) goto loc_82CC6C1C;
	// addi r30,r29,124
	ctx.r30.s64 = ctx.r29.s64 + 124;
	// b 0x82cc6bd4
	goto loc_82CC6BD4;
loc_82CC6BD0:
	// addi r30,r29,88
	ctx.r30.s64 = ctx.r29.s64 + 88;
loc_82CC6BD4:
	// addi r4,r29,11072
	ctx.r4.s64 = ctx.r29.s64 + 11072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC6BE0;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc6c10
	if (!ctx.cr6.eq) goto loc_82CC6C10;
	// lwz r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc6c00
	if (ctx.cr6.eq) goto loc_82CC6C00;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82CC6C00:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC6C10;
	sub_82CE4BA0(ctx, base);
loc_82CC6C10:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x82cc6bb4
	if (ctx.cr6.lt) goto loc_82CC6BB4;
loc_82CC6C1C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC6C24;
	sub_82CE3628(ctx, base);
loc_82CC6C24:
	// lbz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc6c48
	if (ctx.cr6.eq) goto loc_82CC6C48;
	// addi r5,r29,11080
	ctx.r5.s64 = ctx.r29.s64 + 11080;
	// lwz r4,116(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC6C44;
	sub_82CE4C50(ctx, base);
	// b 0x82cc6ca4
	goto loc_82CC6CA4;
loc_82CC6C48:
	// lbz r11,11508(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6c64
	if (!ctx.cr6.eq) goto loc_82CC6C64;
	// lwz r11,116(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82cc6ca4
	if (ctx.cr6.eq) goto loc_82CC6CA4;
loc_82CC6C64:
	// lwz r11,116(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82cc6c90
	if (ctx.cr6.lt) goto loc_82CC6C90;
	// beq cr6,0x82cc6c88
	if (ctx.cr6.eq) goto loc_82CC6C88;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82cc6c94
	if (!ctx.cr6.lt) goto loc_82CC6C94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82cc6c94
	goto loc_82CC6C94;
loc_82CC6C88:
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// b 0x82cc6c94
	goto loc_82CC6C94;
loc_82CC6C90:
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
loc_82CC6C94:
	// addi r5,r29,11096
	ctx.r5.s64 = ctx.r29.s64 + 11096;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC6CA4;
	sub_82CE4DB0(ctx, base);
loc_82CC6CA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82cc5f00
	ctx.lr = 0x82CC6CB4;
	sub_82CC5F00(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC6CBC;
	sub_82CE3628(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC6CD0"))) PPC_WEAK_FUNC(sub_82CC6CD0);
PPC_FUNC_IMPL(__imp__sub_82CC6CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-304
	ctx.r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82cc5e10
	ctx.lr = 0x82CC6CE8;
	sub_82CC5E10(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,-13896(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lfs f12,17120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17120);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f12,136(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// lfs f11,-13884(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13884);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f11,140(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// lfs f10,-11424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11424);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f10,144(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lfs f9,32360(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32360);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,148(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stfs f13,156(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f12,160(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f11,164(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f10,168(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f9,172(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// li r10,37
	ctx.r10.s64 = 37;
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stfs f13,180(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// addi r1,r31,304
	ctx.r1.s64 = ctx.r31.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC6D98"))) PPC_WEAK_FUNC(sub_82CC6D98);
PPC_FUNC_IMPL(__imp__sub_82CC6D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82884e70
	ctx.lr = 0x82CC6DB0;
	sub_82884E70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC6DC0"))) PPC_WEAK_FUNC(sub_82CC6DC0);
PPC_FUNC_IMPL(__imp__sub_82CC6DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r3,r11,124
	ctx.r3.s64 = ctx.r11.s64 + 124;
	// bl 0x823bff80
	ctx.lr = 0x82CC6DDC;
	sub_823BFF80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC6DEC"))) PPC_WEAK_FUNC(sub_82CC6DEC);
PPC_FUNC_IMPL(__imp__sub_82CC6DEC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r3,r11,148
	ctx.r3.s64 = ctx.r11.s64 + 148;
	// bl 0x823bff80
	ctx.lr = 0x82CC6E08;
	sub_823BFF80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC6E18"))) PPC_WEAK_FUNC(sub_82CC6E18);
PPC_FUNC_IMPL(__imp__sub_82CC6E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC6E20;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82cc6cd0
	ctx.lr = 0x82CC6E38;
	sub_82CC6CD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC6E48;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,23408
	ctx.r27.s64 = ctx.r11.s64 + 23408;
	// beq cr6,0x82cc6e80
	if (ctx.cr6.eq) goto loc_82CC6E80;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6e80
	if (!ctx.cr6.eq) goto loc_82CC6E80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC6E6C;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r27,-180
	ctx.r5.s64 = ctx.r27.s64 + -180;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC6E80;
	sub_82CE4DB0(ctx, base);
loc_82CC6E80:
	// lis r24,-31975
	ctx.r24.s64 = -2095513600;
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6ea0
	if (!ctx.cr6.eq) goto loc_82CC6EA0;
	// lfs f0,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc6eb8
	if (ctx.cr6.eq) goto loc_82CC6EB8;
loc_82CC6EA0:
	// addi r5,r27,-176
	ctx.r5.s64 = ctx.r27.s64 + -176;
	// lfs f1,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC6EB4;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
loc_82CC6EB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6ed4
	if (!ctx.cr6.eq) goto loc_82CC6ED4;
	// lfs f0,112(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc6ee8
	if (ctx.cr6.eq) goto loc_82CC6EE8;
loc_82CC6ED4:
	// addi r5,r27,-168
	ctx.r5.s64 = ctx.r27.s64 + -168;
	// lfs f1,112(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC6EE8;
	sub_82CE4D00(ctx, base);
loc_82CC6EE8:
	// addi r5,r27,-148
	ctx.r5.s64 = ctx.r27.s64 + -148;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// bl 0x82cc5120
	ctx.lr = 0x82CC6EF8;
	sub_82CC5120(ctx, base);
	// addi r5,r27,-136
	ctx.r5.s64 = ctx.r27.s64 + -136;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,132
	ctx.r3.s64 = ctx.r28.s64 + 132;
	// bl 0x82cc5c88
	ctx.lr = 0x82CC6F08;
	sub_82CC5C88(ctx, base);
	// addi r5,r27,-108
	ctx.r5.s64 = ctx.r27.s64 + -108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,156
	ctx.r3.s64 = ctx.r28.s64 + 156;
	// bl 0x82cc5c88
	ctx.lr = 0x82CC6F18;
	sub_82CC5C88(ctx, base);
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6f34
	if (!ctx.cr6.eq) goto loc_82CC6F34;
	// lfs f0,180(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc6f48
	if (ctx.cr6.eq) goto loc_82CC6F48;
loc_82CC6F34:
	// addi r5,r27,-80
	ctx.r5.s64 = ctx.r27.s64 + -80;
	// lfs f1,180(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC6F48;
	sub_82CE4D00(ctx, base);
loc_82CC6F48:
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc6f6c
	if (ctx.cr6.eq) goto loc_82CC6F6C;
	// addi r5,r27,-60
	ctx.r5.s64 = ctx.r27.s64 + -60;
	// lwz r4,184(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC6F68;
	sub_82CE4C50(ctx, base);
	// b 0x82cc7018
	goto loc_82CC7018;
loc_82CC6F6C:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc6f88
	if (!ctx.cr6.eq) goto loc_82CC6F88;
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// lwz r10,264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82cc7018
	if (ctx.cr6.eq) goto loc_82CC7018;
loc_82CC6F88:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC6F98;
	sub_82CE4700(ctx, base);
	// addi r5,r27,-48
	ctx.r5.s64 = ctx.r27.s64 + -48;
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC6FAC;
	sub_82CE4DB0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82CC6FB4:
	// slw r30,r25,r26
	ctx.r30.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cbc770
	ctx.lr = 0x82CC6FC0;
	sub_82CBC770(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cc7010
	if (ctx.cr6.eq) goto loc_82CC7010;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// bl 0x82e2c390
	ctx.lr = 0x82CC6FD4;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc7004
	if (!ctx.cr6.eq) goto loc_82CC7004;
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc6ff4
	if (ctx.cr6.eq) goto loc_82CC6FF4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82CC6FF4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC7004;
	sub_82CE4BA0(ctx, base);
loc_82CC7004:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc6fb4
	if (ctx.cr6.lt) goto loc_82CC6FB4;
loc_82CC7010:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC7018;
	sub_82CE3628(ctx, base);
loc_82CC7018:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7034
	if (!ctx.cr6.eq) goto loc_82CC7034;
	// lfs f0,188(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc7048
	if (ctx.cr6.eq) goto loc_82CC7048;
loc_82CC7034:
	// addi r5,r27,-24
	ctx.r5.s64 = ctx.r27.s64 + -24;
	// lfs f1,188(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7048;
	sub_82CE4D00(ctx, base);
loc_82CC7048:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7064
	if (!ctx.cr6.eq) goto loc_82CC7064;
	// lfs f0,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc7078
	if (ctx.cr6.eq) goto loc_82CC7078;
loc_82CC7064:
	// addi r5,r27,-12
	ctx.r5.s64 = ctx.r27.s64 + -12;
	// lfs f1,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7078;
	sub_82CE4D00(ctx, base);
loc_82CC7078:
	// lbz r11,11508(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7094
	if (!ctx.cr6.eq) goto loc_82CC7094;
	// lfs f0,196(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc70a8
	if (ctx.cr6.eq) goto loc_82CC70A8;
loc_82CC7094:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,196(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC70A8;
	sub_82CE4D00(ctx, base);
loc_82CC70A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cc5f00
	ctx.lr = 0x82CC70B8;
	sub_82CC5F00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC70C0;
	sub_82CE3628(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC70C8"))) PPC_WEAK_FUNC(sub_82CC70C8);
PPC_FUNC_IMPL(__imp__sub_82CC70C8) {
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
	// bl 0x82cc5e10
	ctx.lr = 0x82CC70D8;
	sub_82CC5E10(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,-13896(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// li r10,38
	ctx.r10.s64 = 38;
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// sth r11,124(r3)
	PPC_STORE_U16(ctx.r3.u32 + 124, ctx.r11.u16);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// sth r11,126(r3)
	PPC_STORE_U16(ctx.r3.u32 + 126, ctx.r11.u16);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC7120"))) PPC_WEAK_FUNC(sub_82CC7120);
PPC_FUNC_IMPL(__imp__sub_82CC7120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CC7128;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82cc5e10
	ctx.lr = 0x82CC7140;
	sub_82CC5E10(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// li r11,38
	ctx.r11.s64 = 38;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// sth r24,204(r1)
	PPC_STORE_U16(ctx.r1.u32 + 204, ctx.r24.u16);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// sth r24,206(r1)
	PPC_STORE_U16(ctx.r1.u32 + 206, ctx.r24.u16);
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r24,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r24.u32);
	// bl 0x82ce4700
	ctx.lr = 0x82CC7184;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,12164
	ctx.r29.s64 = ctx.r11.s64 + 12164;
	// beq cr6,0x82cc71bc
	if (ctx.cr6.eq) goto loc_82CC71BC;
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc71bc
	if (!ctx.cr6.eq) goto loc_82CC71BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC71A8;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,11440
	ctx.r5.s64 = ctx.r29.s64 + 11440;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC71BC;
	sub_82CE4DB0(ctx, base);
loc_82CC71BC:
	// lis r31,-31975
	ctx.r31.s64 = -2095513600;
	// lbz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc71dc
	if (!ctx.cr6.eq) goto loc_82CC71DC;
	// lwz r10,108(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cc71f4
	if (ctx.cr6.eq) goto loc_82CC71F4;
loc_82CC71DC:
	// addi r5,r29,11444
	ctx.r5.s64 = ctx.r29.s64 + 11444;
	// lwz r4,108(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC71F0;
	sub_82CE4DB0(ctx, base);
	// lbz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11508);
loc_82CC71F4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7210
	if (!ctx.cr6.eq) goto loc_82CC7210;
	// lfs f0,112(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc7228
	if (ctx.cr6.eq) goto loc_82CC7228;
loc_82CC7210:
	// addi r5,r29,11460
	ctx.r5.s64 = ctx.r29.s64 + 11460;
	// lfs f1,112(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7224;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11508);
loc_82CC7228:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7244
	if (!ctx.cr6.eq) goto loc_82CC7244;
	// lfs f0,116(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc725c
	if (ctx.cr6.eq) goto loc_82CC725C;
loc_82CC7244:
	// addi r5,r29,11472
	ctx.r5.s64 = ctx.r29.s64 + 11472;
	// lfs f1,116(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7258;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11508);
loc_82CC725C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7278
	if (!ctx.cr6.eq) goto loc_82CC7278;
	// lfs f0,120(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc7290
	if (ctx.cr6.eq) goto loc_82CC7290;
loc_82CC7278:
	// addi r5,r29,11484
	ctx.r5.s64 = ctx.r29.s64 + 11484;
	// lfs f1,120(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC728C;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11508);
loc_82CC7290:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc72ac
	if (!ctx.cr6.eq) goto loc_82CC72AC;
	// lhz r10,124(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 124);
	// lhz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 204);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cc72c4
	if (ctx.cr6.eq) goto loc_82CC72C4;
loc_82CC72AC:
	// addi r5,r29,11496
	ctx.r5.s64 = ctx.r29.s64 + 11496;
	// lhz r4,124(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 124);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce5758
	ctx.lr = 0x82CC72C0;
	sub_82CE5758(ctx, base);
	// lbz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11508);
loc_82CC72C4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc72e0
	if (!ctx.cr6.eq) goto loc_82CC72E0;
	// lhz r10,126(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// lhz r9,206(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 206);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82cc72f8
	if (ctx.cr6.eq) goto loc_82CC72F8;
loc_82CC72E0:
	// addi r5,r29,11520
	ctx.r5.s64 = ctx.r29.s64 + 11520;
	// lhz r4,126(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce5758
	ctx.lr = 0x82CC72F4;
	sub_82CE5758(ctx, base);
	// lbz r11,11508(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11508);
loc_82CC72F8:
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc731c
	if (ctx.cr6.eq) goto loc_82CC731C;
	// addi r5,r29,11536
	ctx.r5.s64 = ctx.r29.s64 + 11536;
	// lwz r4,128(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC7318;
	sub_82CE4C50(ctx, base);
	// b 0x82cc73d4
	goto loc_82CC73D4;
loc_82CC731C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7338
	if (!ctx.cr6.eq) goto loc_82CC7338;
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82cc73d4
	if (ctx.cr6.eq) goto loc_82CC73D4;
loc_82CC7338:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC7348;
	sub_82CE4700(ctx, base);
	// addi r5,r29,11548
	ctx.r5.s64 = ctx.r29.s64 + 11548;
	// addi r4,r29,11552
	ctx.r4.s64 = ctx.r29.s64 + 11552;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC735C;
	sub_82CE4DB0(ctx, base);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82CC7364:
	// slw r31,r25,r26
	ctx.r31.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82cc7380
	if (ctx.cr6.eq) goto loc_82CC7380;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x82cc73cc
	if (!ctx.cr6.eq) goto loc_82CC73CC;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x82cc7384
	goto loc_82CC7384;
loc_82CC7380:
	// addi r28,r29,-36
	ctx.r28.s64 = ctx.r29.s64 + -36;
loc_82CC7384:
	// addi r4,r29,11564
	ctx.r4.s64 = ctx.r29.s64 + 11564;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC7390;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc73c0
	if (!ctx.cr6.eq) goto loc_82CC73C0;
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc73b0
	if (ctx.cr6.eq) goto loc_82CC73B0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82CC73B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC73C0;
	sub_82CE4BA0(ctx, base);
loc_82CC73C0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82cc7364
	if (ctx.cr6.lt) goto loc_82CC7364;
loc_82CC73CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC73D4;
	sub_82CE3628(ctx, base);
loc_82CC73D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cc5f00
	ctx.lr = 0x82CC73E4;
	sub_82CC5F00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC73EC;
	sub_82CE3628(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC73F8"))) PPC_WEAK_FUNC(sub_82CC73F8);
PPC_FUNC_IMPL(__imp__sub_82CC73F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82CC7420"))) PPC_WEAK_FUNC(sub_82CC7420);
PPC_FUNC_IMPL(__imp__sub_82CC7420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC7428;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC744C;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r29,r11,24628
	ctx.r29.s64 = ctx.r11.s64 + 24628;
	// beq cr6,0x82cc7484
	if (ctx.cr6.eq) goto loc_82CC7484;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7484
	if (!ctx.cr6.eq) goto loc_82CC7484;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC7470;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-32
	ctx.r5.s64 = ctx.r29.s64 + -32;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC7484;
	sub_82CE4DB0(ctx, base);
loc_82CC7484:
	// lis r28,-31975
	ctx.r28.s64 = -2095513600;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
	// lfs f31,-13892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc74a8
	if (!ctx.cr6.eq) goto loc_82CC74A8;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc74c0
	if (ctx.cr6.eq) goto loc_82CC74C0;
loc_82CC74A8:
	// addi r5,r29,-28
	ctx.r5.s64 = ctx.r29.s64 + -28;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC74BC;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC74C0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc74d8
	if (!ctx.cr6.eq) goto loc_82CC74D8;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc74f0
	if (ctx.cr6.eq) goto loc_82CC74F0;
loc_82CC74D8:
	// addi r5,r29,-20
	ctx.r5.s64 = ctx.r29.s64 + -20;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC74EC;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC74F0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7508
	if (!ctx.cr6.eq) goto loc_82CC7508;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc7520
	if (ctx.cr6.eq) goto loc_82CC7520;
loc_82CC7508:
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC751C;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 11508);
loc_82CC7520:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7538
	if (!ctx.cr6.eq) goto loc_82CC7538;
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc754c
	if (ctx.cr6.eq) goto loc_82CC754C;
loc_82CC7538:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC754C;
	sub_82CE4D00(ctx, base);
loc_82CC754C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC7554;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7560"))) PPC_WEAK_FUNC(sub_82CC7560);
PPC_FUNC_IMPL(__imp__sub_82CC7560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC75A0"))) PPC_WEAK_FUNC(sub_82CC75A0);
PPC_FUNC_IMPL(__imp__sub_82CC75A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC75A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC75C8;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,24680
	ctx.r30.s64 = ctx.r11.s64 + 24680;
	// beq cr6,0x82cc7600
	if (ctx.cr6.eq) goto loc_82CC7600;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7600
	if (!ctx.cr6.eq) goto loc_82CC7600;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC75EC;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC7600;
	sub_82CE4DB0(ctx, base);
loc_82CC7600:
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cc7420
	ctx.lr = 0x82CC7610;
	sub_82CC7420(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// bl 0x82cc7420
	ctx.lr = 0x82CC7620;
	sub_82CC7420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC7628;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7630"))) PPC_WEAK_FUNC(sub_82CC7630);
PPC_FUNC_IMPL(__imp__sub_82CC7630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC7658"))) PPC_WEAK_FUNC(sub_82CC7658);
PPC_FUNC_IMPL(__imp__sub_82CC7658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC7660;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC7684;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,25852
	ctx.r28.s64 = ctx.r11.s64 + 25852;
	// beq cr6,0x82cc76bc
	if (ctx.cr6.eq) goto loc_82CC76BC;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc76bc
	if (!ctx.cr6.eq) goto loc_82CC76BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC76A8;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,-24
	ctx.r5.s64 = ctx.r28.s64 + -24;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC76BC;
	sub_82CE4DB0(ctx, base);
loc_82CC76BC:
	// lis r30,-31975
	ctx.r30.s64 = -2095513600;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
	// lfs f31,-13892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc76e0
	if (!ctx.cr6.eq) goto loc_82CC76E0;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc76f8
	if (ctx.cr6.eq) goto loc_82CC76F8;
loc_82CC76E0:
	// addi r5,r28,-20
	ctx.r5.s64 = ctx.r28.s64 + -20;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC76F4;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
loc_82CC76F8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7710
	if (!ctx.cr6.eq) goto loc_82CC7710;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc7728
	if (ctx.cr6.eq) goto loc_82CC7728;
loc_82CC7710:
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7724;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11508);
loc_82CC7728:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7748
	if (!ctx.cr6.eq) goto loc_82CC7748;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc775c
	if (ctx.cr6.eq) goto loc_82CC775C;
loc_82CC7748:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC775C;
	sub_82CE4D00(ctx, base);
loc_82CC775C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC7764;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7770"))) PPC_WEAK_FUNC(sub_82CC7770);
PPC_FUNC_IMPL(__imp__sub_82CC7770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,-13896(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC77B0"))) PPC_WEAK_FUNC(sub_82CC77B0);
PPC_FUNC_IMPL(__imp__sub_82CC77B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC77B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC77D8;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,25904
	ctx.r30.s64 = ctx.r11.s64 + 25904;
	// beq cr6,0x82cc7810
	if (ctx.cr6.eq) goto loc_82CC7810;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7810
	if (!ctx.cr6.eq) goto loc_82CC7810;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC77FC;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC7810;
	sub_82CE4DB0(ctx, base);
loc_82CC7810:
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cc7658
	ctx.lr = 0x82CC7820;
	sub_82CC7658(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x82cc7658
	ctx.lr = 0x82CC7830;
	sub_82CC7658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC7838;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7840"))) PPC_WEAK_FUNC(sub_82CC7840);
PPC_FUNC_IMPL(__imp__sub_82CC7840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-18528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18528);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lfs f13,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC7868"))) PPC_WEAK_FUNC(sub_82CC7868);
PPC_FUNC_IMPL(__imp__sub_82CC7868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC7870;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC7890;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r28,r11,25952
	ctx.r28.s64 = ctx.r11.s64 + 25952;
	// beq cr6,0x82cc78c8
	if (ctx.cr6.eq) goto loc_82CC78C8;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc78c8
	if (!ctx.cr6.eq) goto loc_82CC78C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC78B4;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,-28
	ctx.r5.s64 = ctx.r28.s64 + -28;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC78C8;
	sub_82CE4DB0(ctx, base);
loc_82CC78C8:
	// lis r29,-31975
	ctx.r29.s64 = -2095513600;
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc78ec
	if (!ctx.cr6.eq) goto loc_82CC78EC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18528(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18528);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc7904
	if (ctx.cr6.eq) goto loc_82CC7904;
loc_82CC78EC:
	// addi r5,r28,-24
	ctx.r5.s64 = ctx.r28.s64 + -24;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7900;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7904:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7924
	if (!ctx.cr6.eq) goto loc_82CC7924;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cc793c
	if (ctx.cr6.eq) goto loc_82CC793C;
loc_82CC7924:
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7938;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC793C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7954
	if (!ctx.cr6.eq) goto loc_82CC7954;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc7968
	if (ctx.cr6.eq) goto loc_82CC7968;
loc_82CC7954:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC7968;
	sub_82CE4BA0(ctx, base);
loc_82CC7968:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC7970;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7978"))) PPC_WEAK_FUNC(sub_82CC7978);
PPC_FUNC_IMPL(__imp__sub_82CC7978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC79D8"))) PPC_WEAK_FUNC(sub_82CC79D8);
PPC_FUNC_IMPL(__imp__sub_82CC79D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC79E0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC7A00;
	sub_82CE4700(ctx, base);
	// lis r29,-31975
	ctx.r29.s64 = -2095513600;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r28,r10,28132
	ctx.r28.s64 = ctx.r10.s64 + 28132;
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7a24
	if (!ctx.cr6.eq) goto loc_82CC7A24;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc7a3c
	if (ctx.cr6.eq) goto loc_82CC7A3C;
loc_82CC7A24:
	// addi r5,r28,-256
	ctx.r5.s64 = ctx.r28.s64 + -256;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC7A38;
	sub_82CE4DB0(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7A3C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7a54
	if (!ctx.cr6.eq) goto loc_82CC7A54;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc7a6c
	if (ctx.cr6.eq) goto loc_82CC7A6C;
loc_82CC7A54:
	// addi r5,r28,-252
	ctx.r5.s64 = ctx.r28.s64 + -252;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC7A68;
	sub_82CE4DB0(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7A6C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7a84
	if (!ctx.cr6.eq) goto loc_82CC7A84;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc7a9c
	if (ctx.cr6.eq) goto loc_82CC7A9C;
loc_82CC7A84:
	// addi r5,r28,-236
	ctx.r5.s64 = ctx.r28.s64 + -236;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC7A98;
	sub_82CE4DB0(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7A9C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7ab4
	if (!ctx.cr6.eq) goto loc_82CC7AB4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc7acc
	if (ctx.cr6.eq) goto loc_82CC7ACC;
loc_82CC7AB4:
	// addi r5,r28,-228
	ctx.r5.s64 = ctx.r28.s64 + -228;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC7AC8;
	sub_82CE4DB0(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7ACC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f31,-13892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82cc7b18
	if (!ctx.cr6.eq) goto loc_82CC7B18;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82cc7b08
	if (!ctx.cr6.eq) goto loc_82CC7B08;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82cc7b08
	if (!ctx.cr6.eq) goto loc_82CC7B08;
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc7b0c
	if (ctx.cr6.eq) goto loc_82CC7B0C;
loc_82CC7B08:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82CC7B0C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc7b30
	if (ctx.cr6.eq) goto loc_82CC7B30;
loc_82CC7B18:
	// addi r5,r28,-220
	ctx.r5.s64 = ctx.r28.s64 + -220;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce5218
	ctx.lr = 0x82CC7B2C;
	sub_82CE5218(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7B30:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7b70
	if (!ctx.cr6.eq) goto loc_82CC7B70;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82cc7b60
	if (!ctx.cr6.eq) goto loc_82CC7B60;
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82cc7b60
	if (!ctx.cr6.eq) goto loc_82CC7B60;
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc7b64
	if (ctx.cr6.eq) goto loc_82CC7B64;
loc_82CC7B60:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82CC7B64:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc7b88
	if (ctx.cr6.eq) goto loc_82CC7B88;
loc_82CC7B70:
	// addi r5,r28,-212
	ctx.r5.s64 = ctx.r28.s64 + -212;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce5218
	ctx.lr = 0x82CC7B84;
	sub_82CE5218(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7B88:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7ba0
	if (!ctx.cr6.eq) goto loc_82CC7BA0;
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc7bb8
	if (ctx.cr6.eq) goto loc_82CC7BB8;
loc_82CC7BA0:
	// addi r5,r28,-204
	ctx.r5.s64 = ctx.r28.s64 + -204;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7BB4;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7BB8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7bd0
	if (!ctx.cr6.eq) goto loc_82CC7BD0;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc7be8
	if (ctx.cr6.eq) goto loc_82CC7BE8;
loc_82CC7BD0:
	// addi r5,r28,-176
	ctx.r5.s64 = ctx.r28.s64 + -176;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7BE4;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7BE8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7c00
	if (!ctx.cr6.eq) goto loc_82CC7C00;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc7c18
	if (ctx.cr6.eq) goto loc_82CC7C18;
loc_82CC7C00:
	// addi r5,r28,-156
	ctx.r5.s64 = ctx.r28.s64 + -156;
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7C14;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7C18:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7c30
	if (!ctx.cr6.eq) goto loc_82CC7C30;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc7c48
	if (ctx.cr6.eq) goto loc_82CC7C48;
loc_82CC7C30:
	// addi r5,r28,-128
	ctx.r5.s64 = ctx.r28.s64 + -128;
	// lfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7C44;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7C48:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7c60
	if (!ctx.cr6.eq) goto loc_82CC7C60;
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc7c78
	if (ctx.cr6.eq) goto loc_82CC7C78;
loc_82CC7C60:
	// addi r5,r28,-104
	ctx.r5.s64 = ctx.r28.s64 + -104;
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7C74;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7C78:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7c90
	if (!ctx.cr6.eq) goto loc_82CC7C90;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc7ca8
	if (ctx.cr6.eq) goto loc_82CC7CA8;
loc_82CC7C90:
	// addi r5,r28,-80
	ctx.r5.s64 = ctx.r28.s64 + -80;
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7CA4;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7CA8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7cc0
	if (!ctx.cr6.eq) goto loc_82CC7CC0;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc7cd8
	if (ctx.cr6.eq) goto loc_82CC7CD8;
loc_82CC7CC0:
	// addi r5,r28,-52
	ctx.r5.s64 = ctx.r28.s64 + -52;
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7CD4;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7CD8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cc7cf0
	if (!ctx.cr6.eq) goto loc_82CC7CF0;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc7d08
	if (ctx.cr6.eq) goto loc_82CC7D08;
loc_82CC7CF0:
	// addi r5,r28,-24
	ctx.r5.s64 = ctx.r28.s64 + -24;
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7D04;
	sub_82CE4D00(ctx, base);
	// lbz r11,11508(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11508);
loc_82CC7D08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7d20
	if (!ctx.cr6.eq) goto loc_82CC7D20;
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82cc7d34
	if (ctx.cr6.eq) goto loc_82CC7D34;
loc_82CC7D20:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce4d00
	ctx.lr = 0x82CC7D34;
	sub_82CE4D00(ctx, base);
loc_82CC7D34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC7D3C;
	sub_82CE3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7D48"))) PPC_WEAK_FUNC(sub_82CC7D48);
PPC_FUNC_IMPL(__imp__sub_82CC7D48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC7D90"))) PPC_WEAK_FUNC(sub_82CC7D90);
PPC_FUNC_IMPL(__imp__sub_82CC7D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CC7D98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r28,48
	ctx.r29.s64 = ctx.r28.s64 + 48;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cc7db4
	if (ctx.cr6.eq) goto loc_82CC7DB4;
	// bl 0x82e2af50
	ctx.lr = 0x82CC7DB4;
	sub_82E2AF50(ctx, base);
loc_82CC7DB4:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r28,24
	ctx.r30.s64 = ctx.r28.s64 + 24;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cc7dd8
	if (ctx.cr6.eq) goto loc_82CC7DD8;
	// bl 0x82e2af50
	ctx.lr = 0x82CC7DD8;
	sub_82E2AF50(ctx, base);
loc_82CC7DD8:
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cc7df8
	if (ctx.cr6.eq) goto loc_82CC7DF8;
	// bl 0x82e2af50
	ctx.lr = 0x82CC7DF8;
	sub_82E2AF50(ctx, base);
loc_82CC7DF8:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC7E18"))) PPC_WEAK_FUNC(sub_82CC7E18);
PPC_FUNC_IMPL(__imp__sub_82CC7E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e4c
	ctx.lr = 0x82CC7E20;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-304
	ctx.r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC7E80;
	sub_82CE4700(ctx, base);
	// lis r22,-31975
	ctx.r22.s64 = -2095513600;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r26,r10,19616
	ctx.r26.s64 = ctx.r10.s64 + 19616;
	// lbz r11,11508(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7ea4
	if (!ctx.cr6.eq) goto loc_82CC7EA4;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cc7ebc
	if (ctx.cr6.eq) goto loc_82CC7EBC;
loc_82CC7EA4:
	// addi r5,r26,-132
	ctx.r5.s64 = ctx.r26.s64 + -132;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC7EB8;
	sub_82CE4DB0(ctx, base);
	// lbz r11,11508(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 11508);
loc_82CC7EBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7ed4
	if (!ctx.cr6.eq) goto loc_82CC7ED4;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc7ee8
	if (ctx.cr6.eq) goto loc_82CC7EE8;
loc_82CC7ED4:
	// addi r5,r26,-128
	ctx.r5.s64 = ctx.r26.s64 + -128;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC7EE8;
	sub_82CE4DB0(ctx, base);
loc_82CC7EE8:
	// lis r21,-31966
	ctx.r21.s64 = -2094923776;
	// lbz r11,-32176(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + -32176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc7f38
	if (ctx.cr6.eq) goto loc_82CC7F38;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r5,r26,-112
	ctx.r5.s64 = ctx.r26.s64 + -112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce54b0
	ctx.lr = 0x82CC7F18;
	sub_82CE54B0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cc7f28
	if (ctx.cr6.eq) goto loc_82CC7F28;
	// bl 0x82e2af50
	ctx.lr = 0x82CC7F28;
	sub_82E2AF50(ctx, base);
loc_82CC7F28:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// b 0x82cc7f4c
	goto loc_82CC7F4C;
loc_82CC7F38:
	// addi r5,r26,-104
	ctx.r5.s64 = ctx.r26.s64 + -104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r24,8
	ctx.r4.s64 = ctx.r24.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce54b0
	ctx.lr = 0x82CC7F4C;
	sub_82CE54B0(ctx, base);
loc_82CC7F4C:
	// lbz r11,-32176(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + -32176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc7f98
	if (ctx.cr6.eq) goto loc_82CC7F98;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r5,r26,-96
	ctx.r5.s64 = ctx.r26.s64 + -96;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce55a0
	ctx.lr = 0x82CC7F78;
	sub_82CE55A0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cc7f88
	if (ctx.cr6.eq) goto loc_82CC7F88;
	// bl 0x82e2af50
	ctx.lr = 0x82CC7F88;
	sub_82E2AF50(ctx, base);
loc_82CC7F88:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x82cc7fac
	goto loc_82CC7FAC;
loc_82CC7F98:
	// addi r5,r26,-84
	ctx.r5.s64 = ctx.r26.s64 + -84;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r24,24
	ctx.r4.s64 = ctx.r24.s64 + 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce55a0
	ctx.lr = 0x82CC7FAC;
	sub_82CE55A0(ctx, base);
loc_82CC7FAC:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc7fd0
	if (ctx.cr6.eq) goto loc_82CC7FD0;
	// addi r5,r26,-72
	ctx.r5.s64 = ctx.r26.s64 + -72;
	// lwz r4,40(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC7FCC;
	sub_82CE4C50(ctx, base);
	// b 0x82cc8078
	goto loc_82CC8078;
loc_82CC7FD0:
	// lbz r11,11508(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc7fe8
	if (!ctx.cr6.eq) goto loc_82CC7FE8;
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc8078
	if (ctx.cr6.eq) goto loc_82CC8078;
loc_82CC7FE8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC7FF8;
	sub_82CE4700(ctx, base);
	// addi r5,r26,-64
	ctx.r5.s64 = ctx.r26.s64 + -64;
	// addi r4,r26,-60
	ctx.r4.s64 = ctx.r26.s64 + -60;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC800C;
	sub_82CE4DB0(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// li r23,1
	ctx.r23.s64 = 1;
loc_82CC8014:
	// slw r28,r23,r25
	ctx.r28.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r25.u8 & 0x3F));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb9dc8
	ctx.lr = 0x82CC8020;
	sub_82CB9DC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82cc8070
	if (ctx.cr6.eq) goto loc_82CC8070;
	// addi r4,r26,-52
	ctx.r4.s64 = ctx.r26.s64 + -52;
	// bl 0x82e2c390
	ctx.lr = 0x82CC8034;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc8064
	if (!ctx.cr6.eq) goto loc_82CC8064;
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc8054
	if (ctx.cr6.eq) goto loc_82CC8054;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82CC8054:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC8064;
	sub_82CE4BA0(ctx, base);
loc_82CC8064:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,32
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 32, ctx.xer);
	// blt cr6,0x82cc8014
	if (ctx.cr6.lt) goto loc_82CC8014;
loc_82CC8070:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC8078;
	sub_82CE3628(ctx, base);
loc_82CC8078:
	// lbz r11,-32176(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + -32176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc8090
	if (!ctx.cr6.eq) goto loc_82CC8090;
	// addi r5,r26,-44
	ctx.r5.s64 = ctx.r26.s64 + -44;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cc80b0
	goto loc_82CC80B0;
loc_82CC8090:
	// lbz r11,11508(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc80a8
	if (!ctx.cr6.eq) goto loc_82CC80A8;
	// lwz r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc80bc
	if (ctx.cr6.eq) goto loc_82CC80BC;
loc_82CC80A8:
	// lwz r4,44(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// addi r5,r26,-28
	ctx.r5.s64 = ctx.r26.s64 + -28;
loc_82CC80B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC80BC;
	sub_82CE4C50(ctx, base);
loc_82CC80BC:
	// lbz r11,-32176(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + -32176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc8108
	if (!ctx.cr6.eq) goto loc_82CC8108;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addi r5,r26,-12
	ctx.r5.s64 = ctx.r26.s64 + -12;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce5070
	ctx.lr = 0x82CC80E8;
	sub_82CE5070(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cc80f8
	if (ctx.cr6.eq) goto loc_82CC80F8;
	// bl 0x82e2af50
	ctx.lr = 0x82CC80F8;
	sub_82E2AF50(ctx, base);
loc_82CC80F8:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// b 0x82cc811c
	goto loc_82CC811C;
loc_82CC8108:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r24,48
	ctx.r4.s64 = ctx.r24.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce5070
	ctx.lr = 0x82CC811C;
	sub_82CE5070(ctx, base);
loc_82CC811C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC8124;
	sub_82CE3628(ctx, base);
	// addi r1,r31,304
	ctx.r1.s64 = ctx.r31.s64 + 304;
	// b 0x82e28e9c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC812C"))) PPC_WEAK_FUNC(sub_82CC812C);
PPC_FUNC_IMPL(__imp__sub_82CC812C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82cc7d90
	ctx.lr = 0x82CC8144;
	sub_82CC7D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC8154"))) PPC_WEAK_FUNC(sub_82CC8154);
PPC_FUNC_IMPL(__imp__sub_82CC8154) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd4490
	ctx.lr = 0x82CC816C;
	sub_82CD4490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC817C"))) PPC_WEAK_FUNC(sub_82CC817C);
PPC_FUNC_IMPL(__imp__sub_82CC817C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82cd4490
	ctx.lr = 0x82CC8194;
	sub_82CD4490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC81A4"))) PPC_WEAK_FUNC(sub_82CC81A4);
PPC_FUNC_IMPL(__imp__sub_82CC81A4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82cd4490
	ctx.lr = 0x82CC81BC;
	sub_82CD4490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC81D0"))) PPC_WEAK_FUNC(sub_82CC81D0);
PPC_FUNC_IMPL(__imp__sub_82CC81D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC81F8"))) PPC_WEAK_FUNC(sub_82CC81F8);
PPC_FUNC_IMPL(__imp__sub_82CC81F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CC8200;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cc821c
	if (ctx.cr6.eq) goto loc_82CC821C;
	// bl 0x82e2af50
	ctx.lr = 0x82CC821C;
	sub_82E2AF50(ctx, base);
loc_82CC821C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cc823c
	if (ctx.cr6.eq) goto loc_82CC823C;
	// bl 0x82e2af50
	ctx.lr = 0x82CC823C;
	sub_82E2AF50(ctx, base);
loc_82CC823C:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC8258"))) PPC_WEAK_FUNC(sub_82CC8258);
PPC_FUNC_IMPL(__imp__sub_82CC8258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x82CC8260;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-240
	ctx.r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC82A8;
	sub_82CE4700(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r28,r11,7428
	ctx.r28.s64 = ctx.r11.s64 + 7428;
	// beq cr6,0x82cc82e0
	if (ctx.cr6.eq) goto loc_82CC82E0;
	// lbz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc82e0
	if (!ctx.cr6.eq) goto loc_82CC82E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ce23e8
	ctx.lr = 0x82CC82CC;
	sub_82CE23E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,12292
	ctx.r5.s64 = ctx.r28.s64 + 12292;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC82E0;
	sub_82CE4DB0(ctx, base);
loc_82CC82E0:
	// lis r29,-31966
	ctx.r29.s64 = -2094923776;
	// lbz r11,-32176(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -32176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc8330
	if (ctx.cr6.eq) goto loc_82CC8330;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r5,r28,12296
	ctx.r5.s64 = ctx.r28.s64 + 12296;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce54b0
	ctx.lr = 0x82CC8310;
	sub_82CE54B0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cc8320
	if (ctx.cr6.eq) goto loc_82CC8320;
	// bl 0x82e2af50
	ctx.lr = 0x82CC8320;
	sub_82E2AF50(ctx, base);
loc_82CC8320:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// b 0x82cc8344
	goto loc_82CC8344;
loc_82CC8330:
	// addi r5,r28,12304
	ctx.r5.s64 = ctx.r28.s64 + 12304;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce54b0
	ctx.lr = 0x82CC8344;
	sub_82CE54B0(ctx, base);
loc_82CC8344:
	// lbz r11,-32176(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -32176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc8390
	if (ctx.cr6.eq) goto loc_82CC8390;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r5,r28,12312
	ctx.r5.s64 = ctx.r28.s64 + 12312;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce55a0
	ctx.lr = 0x82CC8370;
	sub_82CE55A0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cc8380
	if (ctx.cr6.eq) goto loc_82CC8380;
	// bl 0x82e2af50
	ctx.lr = 0x82CC8380;
	sub_82E2AF50(ctx, base);
loc_82CC8380:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x82cc83a4
	goto loc_82CC83A4;
loc_82CC8390:
	// addi r5,r28,12324
	ctx.r5.s64 = ctx.r28.s64 + 12324;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r23,16
	ctx.r4.s64 = ctx.r23.s64 + 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce55a0
	ctx.lr = 0x82CC83A4;
	sub_82CE55A0(ctx, base);
loc_82CC83A4:
	// lbz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cc83c8
	if (ctx.cr6.eq) goto loc_82CC83C8;
	// addi r5,r28,12336
	ctx.r5.s64 = ctx.r28.s64 + 12336;
	// lwz r4,32(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce4c50
	ctx.lr = 0x82CC83C4;
	sub_82CE4C50(ctx, base);
	// b 0x82cc8490
	goto loc_82CC8490;
loc_82CC83C8:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lbz r11,11508(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cc83e4
	if (!ctx.cr6.eq) goto loc_82CC83E4;
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc8490
	if (ctx.cr6.eq) goto loc_82CC8490;
loc_82CC83E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce4700
	ctx.lr = 0x82CC83F4;
	sub_82CE4700(ctx, base);
	// addi r5,r28,12344
	ctx.r5.s64 = ctx.r28.s64 + 12344;
	// addi r4,r28,12348
	ctx.r4.s64 = ctx.r28.s64 + 12348;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce4db0
	ctx.lr = 0x82CC8408;
	sub_82CE4DB0(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82CC8410:
	// slw r27,r24,r25
	ctx.r27.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r25.u8 & 0x3F));
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82cc843c
	if (ctx.cr6.eq) goto loc_82CC843C;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x82cc8434
	if (ctx.cr6.eq) goto loc_82CC8434;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bne cr6,0x82cc8488
	if (!ctx.cr6.eq) goto loc_82CC8488;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x82cc8440
	goto loc_82CC8440;
loc_82CC8434:
	// addi r29,r28,-24
	ctx.r29.s64 = ctx.r28.s64 + -24;
	// b 0x82cc8440
	goto loc_82CC8440;
loc_82CC843C:
	// addi r29,r28,-44
	ctx.r29.s64 = ctx.r28.s64 + -44;
loc_82CC8440:
	// addi r4,r28,12356
	ctx.r4.s64 = ctx.r28.s64 + 12356;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e2c390
	ctx.lr = 0x82CC844C;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cc847c
	if (!ctx.cr6.eq) goto loc_82CC847C;
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cc846c
	if (ctx.cr6.eq) goto loc_82CC846C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82CC846C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce4ba0
	ctx.lr = 0x82CC847C;
	sub_82CE4BA0(ctx, base);
loc_82CC847C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,32
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 32, ctx.xer);
	// blt cr6,0x82cc8410
	if (ctx.cr6.lt) goto loc_82CC8410;
loc_82CC8488:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC8490;
	sub_82CE3628(ctx, base);
loc_82CC8490:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ce3628
	ctx.lr = 0x82CC8498;
	sub_82CE3628(ctx, base);
	// addi r1,r31,240
	ctx.r1.s64 = ctx.r31.s64 + 240;
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CC84A0"))) PPC_WEAK_FUNC(sub_82CC84A0);
PPC_FUNC_IMPL(__imp__sub_82CC84A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82cc81f8
	ctx.lr = 0x82CC84B8;
	sub_82CC81F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC84C8"))) PPC_WEAK_FUNC(sub_82CC84C8);
PPC_FUNC_IMPL(__imp__sub_82CC84C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd4490
	ctx.lr = 0x82CC84E0;
	sub_82CD4490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CC84F0"))) PPC_WEAK_FUNC(sub_82CC84F0);
PPC_FUNC_IMPL(__imp__sub_82CC84F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82cd4490
	ctx.lr = 0x82CC8508;
	sub_82CD4490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

