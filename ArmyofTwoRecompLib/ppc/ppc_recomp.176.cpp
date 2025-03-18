#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C4E710"))) PPC_WEAK_FUNC(sub_82C4E710);
PPC_FUNC_IMPL(__imp__sub_82C4E710) {
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
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82c3fc78
	ctx.lr = 0x82C4E734;
	sub_82C3FC78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82c3fc78
	ctx.lr = 0x82C4E740;
	sub_82C3FC78(ctx, base);
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

__attribute__((alias("__imp__sub_82C4E758"))) PPC_WEAK_FUNC(sub_82C4E758);
PPC_FUNC_IMPL(__imp__sub_82C4E758) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31988
	ctx.r10.s64 = -2096365568;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,13536
	ctx.r4.s64 = ctx.r10.s64 + 13536;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r6,68(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C4E788"))) PPC_WEAK_FUNC(sub_82C4E788);
PPC_FUNC_IMPL(__imp__sub_82C4E788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C4E790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c4e888
	if (ctx.cr6.eq) goto loc_82C4E888;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c4e888
	if (!ctx.cr6.gt) goto loc_82C4E888;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c4e7e4
	if (!ctx.cr6.eq) goto loc_82C4E7E4;
	// bl 0x82c55450
	ctx.lr = 0x82C4E7DC;
	sub_82C55450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c4e880
	if (ctx.cr0.eq) goto loc_82C4E880;
loc_82C4E7E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c4e838
	if (ctx.cr6.eq) goto loc_82C4E838;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r11,r11,-6600
	ctx.r11.s64 = ctx.r11.s64 + -6600;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c4e838
	if (!ctx.cr6.eq) goto loc_82C4E838;
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c4e838
	if (!ctx.cr0.eq) goto loc_82C4E838;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c552c0
	ctx.lr = 0x82C4E820;
	sub_82C552C0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x82c4e838
	if (ctx.cr6.gt) goto loc_82C4E838;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c55340
	ctx.lr = 0x82C4E830;
	sub_82C55340(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x82c4e880
	if (ctx.cr6.gt) goto loc_82C4E880;
loc_82C4E838:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c4e888
	if (ctx.cr6.eq) goto loc_82C4E888;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r11,r11,-6776
	ctx.r11.s64 = ctx.r11.s64 + -6776;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c4e888
	if (!ctx.cr6.eq) goto loc_82C4E888;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c55340
	ctx.lr = 0x82C4E868;
	sub_82C55340(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x82c4e888
	if (ctx.cr6.gt) goto loc_82C4E888;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c552c0
	ctx.lr = 0x82C4E878;
	sub_82C552C0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82c4e888
	if (!ctx.cr6.gt) goto loc_82C4E888;
loc_82C4E880:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c4e88c
	goto loc_82C4E88C;
loc_82C4E888:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C4E88C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4E898"))) PPC_WEAK_FUNC(sub_82C4E898);
PPC_FUNC_IMPL(__imp__sub_82C4E898) {
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
	// bl 0x82c4e788
	ctx.lr = 0x82C4E8B8;
	sub_82C4E788(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c4e8e4
	if (ctx.cr0.eq) goto loc_82C4E8E4;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c4e8e0
	if (ctx.cr0.eq) goto loc_82C4E8E0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c4e8e4
	if (!ctx.cr6.eq) goto loc_82C4E8E4;
loc_82C4E8E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C4E8E4:
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

__attribute__((alias("__imp__sub_82C4E900"))) PPC_WEAK_FUNC(sub_82C4E900);
PPC_FUNC_IMPL(__imp__sub_82C4E900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82C4E908;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82c4e898
	ctx.lr = 0x82C4E920;
	sub_82C4E898(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c4e930
	if (!ctx.cr0.eq) goto loc_82C4E930;
loc_82C4E928:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c4e9e8
	goto loc_82C4E9E8;
loc_82C4E930:
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r26,12(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c52df8
	ctx.lr = 0x82C4E944;
	sub_82C52DF8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82c53a10
	ctx.lr = 0x82C4E950;
	sub_82C53A10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c41a30
	ctx.lr = 0x82C4E95C;
	sub_82C41A30(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82c4e998
	if (ctx.cr0.eq) goto loc_82C4E998;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C4E978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82c41a80
	ctx.lr = 0x82C4E990;
	sub_82C41A80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82c4e9ac
	if (!ctx.cr0.eq) goto loc_82C4E9AC;
loc_82C4E998:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C4E9A0;
	sub_82C3FC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C4E9A8;
	sub_82C3FC28(ctx, base);
	// b 0x82c4e928
	goto loc_82C4E928;
loc_82C4E9AC:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r4,r11,25372
	ctx.r4.s64 = ctx.r11.s64 + 25372;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82c53a60
	ctx.lr = 0x82C4E9C4;
	sub_82C53A60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// bl 0x82c40078
	ctx.lr = 0x82C4E9E4;
	sub_82C40078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C4E9E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4E9F0"))) PPC_WEAK_FUNC(sub_82C4E9F0);
PPC_FUNC_IMPL(__imp__sub_82C4E9F0) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,25388
	ctx.r4.s64 = ctx.r11.s64 + 25388;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82c41f78
	ctx.lr = 0x82C4EA14;
	sub_82C41F78(ctx, base);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82C4EA30"))) PPC_WEAK_FUNC(sub_82C4EA30);
PPC_FUNC_IMPL(__imp__sub_82C4EA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82C4EA38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,25388
	ctx.r29.s64 = ctx.r11.s64 + 25388;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
loc_82C4EA50:
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c41f78
	ctx.lr = 0x82C4EA60;
	sub_82C41F78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r28.u32);
	// bl 0x82c42018
	ctx.lr = 0x82C4EA70;
	sub_82C42018(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82c4ea50
	if (!ctx.cr0.eq) goto loc_82C4EA50;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4EA88"))) PPC_WEAK_FUNC(sub_82C4EA88);
PPC_FUNC_IMPL(__imp__sub_82C4EA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c490
	ctx.lr = 0x82C4EA90;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,64(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// lwz r18,76(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lwz r14,104(r3)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi r26,0
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble 0x82c4eb54
	if (!ctx.cr0.gt) goto loc_82C4EB54;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
loc_82C4EAD0:
	// cmpw cr6,r27,r16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x82c4eb38
	if (!ctx.cr6.lt) goto loc_82C4EB38;
	// mullw r11,r18,r27
	ctx.r11.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r27.s32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r10,r26,16
	ctx.r10.s64 = ctx.r26.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// rlwinm r25,r18,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r10,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r19
	ctx.r31.u64 = ctx.r11.u64 + ctx.r19.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// subf r23,r19,r15
	ctx.r23.s64 = ctx.r15.s64 - ctx.r19.s64;
	// subf r30,r27,r16
	ctx.r30.s64 = ctx.r16.s64 - ctx.r27.s64;
loc_82C4EB04:
	// lfsx f2,r23,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,8(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C4EB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r29,r24,r29
	ctx.r29.u64 = ctx.r24.u64 + ctx.r29.u64;
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r28,r28,r17
	ctx.r28.u64 = ctx.r28.u64 + ctx.r17.u64;
	// bne 0x82c4eb04
	if (!ctx.cr0.eq) goto loc_82C4EB04;
loc_82C4EB38:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// add r22,r22,r27
	ctx.r22.u64 = ctx.r22.u64 + ctx.r27.u64;
	// add r21,r21,r11
	ctx.r21.u64 = ctx.r21.u64 + ctx.r11.u64;
	// addi r20,r20,8
	ctx.r20.s64 = ctx.r20.s64 + 8;
	// cmpw cr6,r17,r26
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82c4ead0
	if (ctx.cr6.lt) goto loc_82C4EAD0;
loc_82C4EB54:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82d5c4e0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4EB60"))) PPC_WEAK_FUNC(sub_82C4EB60);
PPC_FUNC_IMPL(__imp__sub_82C4EB60) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82c4ebb4
	if (!ctx.cr6.eq) goto loc_82C4EBB4;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82c4ebb4
	if (!ctx.cr6.eq) goto loc_82C4EBB4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c4ebb4
	if (ctx.cr6.lt) goto loc_82C4EBB4;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// twllei r11,0
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// subf. r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// twlgei r11,-1
	// bne 0x82c4ebb4
	if (!ctx.cr0.eq) goto loc_82C4EBB4;
	// cmpwi cr6,r4,64
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 64, ctx.xer);
	// blt cr6,0x82c4ebb4
	if (ctx.cr6.lt) goto loc_82C4EBB4;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82C4EBB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C4EBC0"))) PPC_WEAK_FUNC(sub_82C4EBC0);
PPC_FUNC_IMPL(__imp__sub_82C4EBC0) {
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
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// bl 0x82c4eb60
	ctx.lr = 0x82C4EBD8;
	sub_82C4EB60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c4ec04
	if (ctx.cr0.eq) goto loc_82C4EC04;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c4ec00
	if (ctx.cr0.eq) goto loc_82C4EC00;
	// mullw r11,r4,r7
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82c4ec04
	if (ctx.cr6.lt) goto loc_82C4EC04;
loc_82C4EC00:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C4EC04:
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

__attribute__((alias("__imp__sub_82C4EC18"))) PPC_WEAK_FUNC(sub_82C4EC18);
PPC_FUNC_IMPL(__imp__sub_82C4EC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82C4EC20;
	__savegprlr_24(ctx, base);
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r24,76(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82c4ea88
	ctx.lr = 0x82C4EC44;
	sub_82C4EA88(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C4EC68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mullw r11,r24,r29
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r29.s32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// subf r7,r29,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r29.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r25
	ctx.r6.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82c92d70
	ctx.lr = 0x82C4ECA8;
	sub_82C92D70(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4ECB0"))) PPC_WEAK_FUNC(sub_82C4ECB0);
PPC_FUNC_IMPL(__imp__sub_82C4ECB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82C4ECB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82c3fd60
	ctx.lr = 0x82C4ECE0;
	sub_82C3FD60(ctx, base);
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82c4ed28
	if (!ctx.cr6.lt) goto loc_82C4ED28;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
loc_82C4ECF8:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c4ec18
	ctx.lr = 0x82C4ED14;
	sub_82C4EC18(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82c4ecf8
	if (ctx.cr6.lt) goto loc_82C4ECF8;
loc_82C4ED28:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c3fdb8
	ctx.lr = 0x82C4ED30;
	sub_82C3FDB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4ED38"))) PPC_WEAK_FUNC(sub_82C4ED38);
PPC_FUNC_IMPL(__imp__sub_82C4ED38) {
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
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82c3fc78
	ctx.lr = 0x82C4ED5C;
	sub_82C3FC78(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82c4ed80
	if (ctx.cr6.eq) goto loc_82C4ED80;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82c55ae0
	ctx.lr = 0x82C4ED78;
	sub_82C55AE0(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// b 0x82c4ed90
	goto loc_82C4ED90;
loc_82C4ED80:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82c55c90
	ctx.lr = 0x82C4ED88;
	sub_82C55C90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82C4ED90:
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

__attribute__((alias("__imp__sub_82C4EDA8"))) PPC_WEAK_FUNC(sub_82C4EDA8);
PPC_FUNC_IMPL(__imp__sub_82C4EDA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// b 0x82c3fc28
	sub_82C3FC28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4EDB0"))) PPC_WEAK_FUNC(sub_82C4EDB0);
PPC_FUNC_IMPL(__imp__sub_82C4EDB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r10,-31988
	ctx.r10.s64 = -2096365568;
	// addi r4,r10,17116
	ctx.r4.s64 = ctx.r10.s64 + 17116;
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C4EDE0"))) PPC_WEAK_FUNC(sub_82C4EDE0);
PPC_FUNC_IMPL(__imp__sub_82C4EDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x82C4EDE8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,276(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82c4eb60
	ctx.lr = 0x82C4EE10;
	sub_82C4EB60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c4ee38
	if (ctx.cr0.eq) goto loc_82C4EE38;
	// lwz r23,300(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r11,152(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 152);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c4ee40
	if (ctx.cr0.eq) goto loc_82C4EE40;
	// mullw r11,r31,r26
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r26.s32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82c4ee40
	if (!ctx.cr6.lt) goto loc_82C4EE40;
loc_82C4EE38:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c4ef88
	goto loc_82C4EF88;
loc_82C4EE40:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82c3fd60
	ctx.lr = 0x82C4EE54;
	sub_82C3FD60(ctx, base);
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// bl 0x82c42a78
	ctx.lr = 0x82C4EE6C;
	sub_82C42A78(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42a78
	ctx.lr = 0x82C4EE80;
	sub_82C42A78(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C4EE98;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c41a30
	ctx.lr = 0x82C4EEA4;
	sub_82C41A30(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c3fdb8
	ctx.lr = 0x82C4EEB0;
	sub_82C3FDB8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82c4eec4
	if (!ctx.cr6.eq) goto loc_82C4EEC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c3fc28
	ctx.lr = 0x82C4EEC0;
	sub_82C3FC28(ctx, base);
	// b 0x82c4ee38
	goto loc_82C4EE38;
loc_82C4EEC4:
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r11,-4944
	ctx.r5.s64 = ctx.r11.s64 + -4944;
	// addi r4,r10,26624
	ctx.r4.s64 = ctx.r10.s64 + 26624;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82c933f0
	ctx.lr = 0x82C4EEDC;
	sub_82C933F0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// stw r30,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r30.u32);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// stw r29,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r29.u32);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// stw r26,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r26.u32);
	// lfd f12,6424(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6424);
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// stw r24,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r24.u32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r25,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r25.u32);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r8,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r8.u32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f13,20664(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20664);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// lfd f11,8(r3)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fmadd f0,f0,f12,f11
	ctx.f0.f64 = ctx.f0.f64 * ctx.f12.f64 + ctx.f11.f64;
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f0.u64);
	// lfd f12,16(r3)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// lfd f0,32(r3)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// fadd f12,f13,f12
	ctx.f12.f64 = ctx.f13.f64 + ctx.f12.f64;
	// stfd f12,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.f12.u64);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// stfd f0,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.f0.u64);
loc_82C4EF88:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4EF90"))) PPC_WEAK_FUNC(sub_82C4EF90);
PPC_FUNC_IMPL(__imp__sub_82C4EF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C4EF98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-4640
	ctx.r6.s64 = ctx.r11.s64 + -4640;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c933b0
	ctx.lr = 0x82C4EFC0;
	sub_82C933B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r29.u32);
	// bl 0x82c42018
	ctx.lr = 0x82C4EFD0;
	sub_82C42018(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r10,-27216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c4f014
	if (ctx.cr6.eq) goto loc_82C4F014;
	// lis r10,-32059
	ctx.r10.s64 = -2101018624;
	// lwz r11,-27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27216);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r10,-4640
	ctx.r6.s64 = ctx.r10.s64 + -4640;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C4F004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r29.u32);
	// bl 0x82c42018
	ctx.lr = 0x82C4F014;
	sub_82C42018(ctx, base);
loc_82C4F014:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4F020"))) PPC_WEAK_FUNC(sub_82C4F020);
PPC_FUNC_IMPL(__imp__sub_82C4F020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82C4F028;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r28,r11,26640
	ctx.r28.s64 = ctx.r11.s64 + 26640;
	// li r27,7
	ctx.r27.s64 = 7;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82C4F040:
	// addi r30,r28,28
	ctx.r30.s64 = ctx.r28.s64 + 28;
	// li r31,5
	ctx.r31.s64 = 5;
loc_82C4F048:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82c4ef90
	ctx.lr = 0x82C4F058;
	sub_82C4EF90(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82c4f048
	if (!ctx.cr0.eq) goto loc_82C4F048;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82c4f040
	if (!ctx.cr0.eq) goto loc_82C4F040;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4F078"))) PPC_WEAK_FUNC(sub_82C4F078);
PPC_FUNC_IMPL(__imp__sub_82C4F078) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r10,26688
	ctx.r5.s64 = ctx.r10.s64 + 26688;
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// b 0x82c540c0
	sub_82C540C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4F0A0"))) PPC_WEAK_FUNC(sub_82C4F0A0);
PPC_FUNC_IMPL(__imp__sub_82C4F0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x82C4F0A8;
	__savegprlr_23(ctx, base);
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r26,64(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r25,68(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r28,72(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r29,80(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r6,84(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ble 0x82c4f190
	if (!ctx.cr0.gt) goto loc_82C4F190;
	// rlwinm r23,r8,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_82C4F0EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// ble cr6,0x82c4f180
	if (!ctx.cr6.gt) goto loc_82C4F180;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82C4F0FC:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82c4f170
	if (!ctx.cr6.lt) goto loc_82C4F170;
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// subf r7,r5,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r8,r11,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_82C4F138:
	// lfs f13,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfsx f11,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// fmadds f12,f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfsx f12,r7,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// fmsubs f0,f13,f0,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// bne 0x82c4f138
	if (!ctx.cr0.eq) goto loc_82C4F138;
loc_82C4F170:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82c4f0fc
	if (ctx.cr6.lt) goto loc_82C4F0FC;
loc_82C4F180:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r4,r23,r4
	ctx.r4.u64 = ctx.r23.u64 + ctx.r4.u64;
	// add r5,r23,r5
	ctx.r5.u64 = ctx.r23.u64 + ctx.r5.u64;
	// bne 0x82c4f0ec
	if (!ctx.cr0.eq) goto loc_82C4F0EC;
loc_82C4F190:
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4F198"))) PPC_WEAK_FUNC(sub_82C4F198);
PPC_FUNC_IMPL(__imp__sub_82C4F198) {
	PPC_FUNC_PROLOGUE();
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82c4f1b8
	if (!ctx.cr6.eq) goto loc_82C4F1B8;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82c4f1b8
	if (!ctx.cr6.eq) goto loc_82C4F1B8;
	// lwz r11,152(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 152);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82C4F1B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C4F1C0"))) PPC_WEAK_FUNC(sub_82C4F1C0);
PPC_FUNC_IMPL(__imp__sub_82C4F1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82C4F1C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mullw r28,r11,r10
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82c4f0a0
	ctx.lr = 0x82C4F1E8;
	sub_82C4F0A0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4F20C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4F218"))) PPC_WEAK_FUNC(sub_82C4F218);
PPC_FUNC_IMPL(__imp__sub_82C4F218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C4F220;
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
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4F260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c4f0a0
	ctx.lr = 0x82C4F270;
	sub_82C4F0A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4F278"))) PPC_WEAK_FUNC(sub_82C4F278);
PPC_FUNC_IMPL(__imp__sub_82C4F278) {
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
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82c3fc78
	ctx.lr = 0x82C4F29C;
	sub_82C3FC78(ctx, base);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// addi r5,r11,26688
	ctx.r5.s64 = ctx.r11.s64 + 26688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// bl 0x82c540c0
	ctx.lr = 0x82C4F2BC;
	sub_82C540C0(ctx, base);
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

__attribute__((alias("__imp__sub_82C4F2D8"))) PPC_WEAK_FUNC(sub_82C4F2D8);
PPC_FUNC_IMPL(__imp__sub_82C4F2D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x82c3fc28
	sub_82C3FC28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4F2E0"))) PPC_WEAK_FUNC(sub_82C4F2E0);
PPC_FUNC_IMPL(__imp__sub_82C4F2E0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// addi r11,r11,17152
	ctx.r11.s64 = ctx.r11.s64 + 17152;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// beq cr6,0x82c4f304
	if (ctx.cr6.eq) goto loc_82C4F304;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
loc_82C4F304:
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r8,88(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r7,72(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r6,64(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C4F328"))) PPC_WEAK_FUNC(sub_82C4F328);
PPC_FUNC_IMPL(__imp__sub_82C4F328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x82C4F330;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82c4f374
	if (!ctx.cr6.eq) goto loc_82C4F374;
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c4f374
	if (!ctx.cr6.eq) goto loc_82C4F374;
	// lwz r31,300(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c4f37c
	if (ctx.cr0.eq) goto loc_82C4F37C;
loc_82C4F374:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c4f4d8
	goto loc_82C4F4D8;
loc_82C4F37C:
	// lwz r26,276(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c54660
	ctx.lr = 0x82C4F39C;
	sub_82C54660(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c42a78
	ctx.lr = 0x82C4F3B0;
	sub_82C42A78(ctx, base);
	// lwz r7,284(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r8,292(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C4F3C8;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c41a30
	ctx.lr = 0x82C4F3D4;
	sub_82C41A30(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82c4f3e8
	if (!ctx.cr0.eq) goto loc_82C4F3E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c3fc28
	ctx.lr = 0x82C4F3E4;
	sub_82C3FC28(ctx, base);
	// b 0x82c4f374
	goto loc_82C4F374;
loc_82C4F3E8:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c4f400
	if (!ctx.cr6.eq) goto loc_82C4F400;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r5,r11,-3648
	ctx.r5.s64 = ctx.r11.s64 + -3648;
	// b 0x82c4f408
	goto loc_82C4F408;
loc_82C4F400:
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r5,r11,-3560
	ctx.r5.s64 = ctx.r11.s64 + -3560;
loc_82C4F408:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r3,112
	ctx.r3.s64 = 112;
	// addi r4,r11,26696
	ctx.r4.s64 = ctx.r11.s64 + 26696;
	// bl 0x82c933f0
	ctx.lr = 0x82C4F418;
	sub_82C933F0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// stw r24,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r24.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// stw r29,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r30.u32);
	// lfd f12,6424(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6424);
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// stw r23,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r23.u32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r25,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r25.u32);
	// stw r28,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r28.u32);
	// stw r27,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r27.u32);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// stw r8,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f13,20664(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20664);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// lfd f11,8(r3)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fmadd f0,f0,f12,f11
	ctx.f0.f64 = ctx.f0.f64 * ctx.f12.f64 + ctx.f11.f64;
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f0.u64);
	// lfd f12,16(r3)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// lfd f0,32(r3)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// fadd f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 + ctx.f13.f64;
	// stfd f12,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.f12.u64);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// stfd f0,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.f0.u64);
loc_82C4F4D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4F4E0"))) PPC_WEAK_FUNC(sub_82C4F4E0);
PPC_FUNC_IMPL(__imp__sub_82C4F4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C4F4E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-3288
	ctx.r6.s64 = ctx.r11.s64 + -3288;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c933b0
	ctx.lr = 0x82C4F50C;
	sub_82C933B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42018
	ctx.lr = 0x82C4F518;
	sub_82C42018(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r10,-27216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c4f558
	if (ctx.cr6.eq) goto loc_82C4F558;
	// lis r10,-32059
	ctx.r10.s64 = -2101018624;
	// lwz r11,-27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27216);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r10,-3288
	ctx.r6.s64 = ctx.r10.s64 + -3288;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C4F54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42018
	ctx.lr = 0x82C4F558;
	sub_82C42018(ctx, base);
loc_82C4F558:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4F560"))) PPC_WEAK_FUNC(sub_82C4F560);
PPC_FUNC_IMPL(__imp__sub_82C4F560) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c4f4e0
	ctx.lr = 0x82C4F580;
	sub_82C4F4E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c4f4e0
	ctx.lr = 0x82C4F590;
	sub_82C4F4E0(ctx, base);
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

__attribute__((alias("__imp__sub_82C4F5A8"))) PPC_WEAK_FUNC(sub_82C4F5A8);
PPC_FUNC_IMPL(__imp__sub_82C4F5A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C4F5B0"))) PPC_WEAK_FUNC(sub_82C4F5B0);
PPC_FUNC_IMPL(__imp__sub_82C4F5B0) {
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
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c4f608
	if (ctx.cr6.eq) goto loc_82C4F608;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c4f600
	if (!ctx.cr6.eq) goto loc_82C4F600;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c4f600
	if (!ctx.cr6.eq) goto loc_82C4F600;
	// bl 0x82c55408
	ctx.lr = 0x82C4F5F8;
	sub_82C55408(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c4f608
	if (!ctx.cr0.eq) goto loc_82C4F608;
loc_82C4F600:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c4f60c
	goto loc_82C4F60C;
loc_82C4F608:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C4F60C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C4F620"))) PPC_WEAK_FUNC(sub_82C4F620);
PPC_FUNC_IMPL(__imp__sub_82C4F620) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// addi r4,r11,17192
	ctx.r4.s64 = ctx.r11.s64 + 17192;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C4F638"))) PPC_WEAK_FUNC(sub_82C4F638);
PPC_FUNC_IMPL(__imp__sub_82C4F638) {
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
	// bl 0x82c4f5b0
	ctx.lr = 0x82C4F64C;
	sub_82C4F5B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c4f67c
	if (ctx.cr0.eq) goto loc_82C4F67C;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r11,-2648
	ctx.r5.s64 = ctx.r11.s64 + -2648;
	// addi r4,r10,26712
	ctx.r4.s64 = ctx.r10.s64 + 26712;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82c55cf0
	ctx.lr = 0x82C4F66C;
	sub_82C55CF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82c3ffa8
	ctx.lr = 0x82C4F678;
	sub_82C3FFA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C4F67C:
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

__attribute__((alias("__imp__sub_82C4F690"))) PPC_WEAK_FUNC(sub_82C4F690);
PPC_FUNC_IMPL(__imp__sub_82C4F690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,26728
	ctx.r4.s64 = ctx.r11.s64 + 26728;
	// b 0x82c41f78
	sub_82C41F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4F6A0"))) PPC_WEAK_FUNC(sub_82C4F6A0);
PPC_FUNC_IMPL(__imp__sub_82C4F6A0) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,26728
	ctx.r4.s64 = ctx.r11.s64 + 26728;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82c41f78
	ctx.lr = 0x82C4F6C4;
	sub_82C41F78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42018
	ctx.lr = 0x82C4F6D0;
	sub_82C42018(ctx, base);
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

__attribute__((alias("__imp__sub_82C4F6E8"))) PPC_WEAK_FUNC(sub_82C4F6E8);
PPC_FUNC_IMPL(__imp__sub_82C4F6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82C4F6F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r27,r30,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82c55ae0
	ctx.lr = 0x82C4F708;
	sub_82C55AE0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82c4f75c
	if (!ctx.cr6.gt) goto loc_82C4F75C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82C4F71C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C4F734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// b 0x82c4f744
	goto loc_82C4F744;
loc_82C4F740:
	// subf r31,r27,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r27.s64;
loc_82C4F744:
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x82c4f740
	if (ctx.cr6.gt) goto loc_82C4F740;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// bne 0x82c4f71c
	if (!ctx.cr0.eq) goto loc_82C4F71C;
loc_82C4F75C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c55c90
	ctx.lr = 0x82C4F764;
	sub_82C55C90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4F770"))) PPC_WEAK_FUNC(sub_82C4F770);
PPC_FUNC_IMPL(__imp__sub_82C4F770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82C4F778;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r29,68(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// lwz r28,64(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// rlwinm r3,r28,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// bl 0x82c3fd60
	ctx.lr = 0x82C4F7AC;
	sub_82C3FD60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r25,r29,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r30,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r30.u32);
	// bl 0x82c3fd60
	ctx.lr = 0x82C4F7C0;
	sub_82C3FD60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r31.u32);
	// bl 0x82c4f6e8
	ctx.lr = 0x82C4F7D8;
	sub_82C4F6E8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82c4f800
	if (!ctx.cr6.gt) goto loc_82C4F800;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lfs f0,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
loc_82C4F7EC:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82c4f7ec
	if (!ctx.cr0.eq) goto loc_82C4F7EC;
loc_82C4F800:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// lfs f0,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// ble cr6,0x82c4f87c
	if (!ctx.cr6.gt) goto loc_82C4F87C;
	// add r10,r25,r31
	ctx.r10.u64 = ctx.r25.u64 + ctx.r31.u64;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// subf r6,r31,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
loc_82C4F848:
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lfsx f13,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82c4f848
	if (!ctx.cr0.eq) goto loc_82C4F848;
loc_82C4F87C:
	// lwz r3,80(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C4F898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4F8A8"))) PPC_WEAK_FUNC(sub_82C4F8A8);
PPC_FUNC_IMPL(__imp__sub_82C4F8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4a8
	ctx.lr = 0x82C4F8B0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r24,68(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r28,64(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm r3,r24,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r26,84(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r20,88(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r25,72(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r23,76(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x82c3fd60
	ctx.lr = 0x82C4F8E8;
	sub_82C3FD60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82c4f954
	if (!ctx.cr6.gt) goto loc_82C4F954;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// rlwinm r6,r26,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// subf r5,r29,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r29.s64;
	// subf r4,r31,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r31.s64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_82C4F918:
	// lfsx f0,r5,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lfsx f11,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// fmadds f11,f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f11,-4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82c4f918
	if (!ctx.cr0.eq) goto loc_82C4F918;
loc_82C4F954:
	// cmpw cr6,r7,r24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x82c4f984
	if (!ctx.cr6.lt) goto loc_82C4F984;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r7,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r7.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,21348(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
loc_82C4F970:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82c4f970
	if (!ctx.cr0.eq) goto loc_82C4F970;
loc_82C4F984:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C4F9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82c4f9fc
	if (!ctx.cr6.gt) goto loc_82C4F9FC;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subf r7,r31,r23
	ctx.r7.s64 = ctx.r23.s64 - ctx.r31.s64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82C4F9C0:
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// lfsx f13,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmsubs f11,f0,f11,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f10.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// bne 0x82c4f9c0
	if (!ctx.cr0.eq) goto loc_82C4F9C0;
loc_82C4F9FC:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C4FA1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82c4fa78
	if (!ctx.cr6.gt) goto loc_82C4FA78;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// rlwinm r8,r20,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// subf r7,r25,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r25.s64;
	// subf r6,r22,r21
	ctx.r6.s64 = ctx.r21.s64 - ctx.r22.s64;
loc_82C4FA3C:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfsx f13,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// fmadds f13,f12,f13,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfsx f13,r6,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// fmsubs f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bne 0x82c4fa3c
	if (!ctx.cr0.eq) goto loc_82C4FA3C;
loc_82C4FA78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3fdb8
	ctx.lr = 0x82C4FA80;
	sub_82C3FDB8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82d5c4f8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4FA88"))) PPC_WEAK_FUNC(sub_82C4FA88);
PPC_FUNC_IMPL(__imp__sub_82C4FA88) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82c3fc78
	ctx.lr = 0x82C4FAAC;
	sub_82C3FC78(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82c4fac4
	if (ctx.cr6.eq) goto loc_82C4FAC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c4f770
	ctx.lr = 0x82C4FAC0;
	sub_82C4F770(ctx, base);
	// b 0x82c4fae0
	goto loc_82C4FAE0;
loc_82C4FAC4:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82c3fdc0
	ctx.lr = 0x82C4FACC;
	sub_82C3FDC0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// bl 0x82c3fdc0
	ctx.lr = 0x82C4FADC;
	sub_82C3FDC0(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_82C4FAE0:
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

__attribute__((alias("__imp__sub_82C4FAF8"))) PPC_WEAK_FUNC(sub_82C4FAF8);
PPC_FUNC_IMPL(__imp__sub_82C4FAF8) {
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
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82c4fb50
	if (!ctx.cr6.eq) goto loc_82C4FB50;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c4fb50
	if (!ctx.cr6.eq) goto loc_82C4FB50;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82c42370
	ctx.lr = 0x82C4FB34;
	sub_82C42370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c4fb50
	if (ctx.cr0.eq) goto loc_82C4FB50;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x82c4fb54
	if (ctx.cr6.gt) goto loc_82C4FB54;
loc_82C4FB50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C4FB54:
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

__attribute__((alias("__imp__sub_82C4FB68"))) PPC_WEAK_FUNC(sub_82C4FB68);
PPC_FUNC_IMPL(__imp__sub_82C4FB68) {
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
	// lwz r11,152(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 152);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c4fb88
	if (ctx.cr0.eq) goto loc_82C4FB88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c4fb9c
	goto loc_82C4FB9C;
loc_82C4FB88:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82c4faf8
	ctx.lr = 0x82C4FB90;
	sub_82C4FAF8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82C4FB9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C4FBB0"))) PPC_WEAK_FUNC(sub_82C4FBB0);
PPC_FUNC_IMPL(__imp__sub_82C4FBB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82c3fc28
	sub_82C3FC28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4FBB8"))) PPC_WEAK_FUNC(sub_82C4FBB8);
PPC_FUNC_IMPL(__imp__sub_82C4FBB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r10,-31988
	ctx.r10.s64 = -2096365568;
	// addi r4,r10,17204
	ctx.r4.s64 = ctx.r10.s64 + 17204;
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r6,68(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C4FBE0"))) PPC_WEAK_FUNC(sub_82C4FBE0);
PPC_FUNC_IMPL(__imp__sub_82C4FBE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26740
	ctx.r30.s64 = ctx.r11.s64 + 26740;
	// b 0x82c4fc08
	goto loc_82C4FC08;
loc_82C4FC04:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82C4FC08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c423f8
	ctx.lr = 0x82C4FC14;
	sub_82C423F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c4fc04
	if (ctx.cr0.eq) goto loc_82C4FC04;
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

__attribute__((alias("__imp__sub_82C4FC38"))) PPC_WEAK_FUNC(sub_82C4FC38);
PPC_FUNC_IMPL(__imp__sub_82C4FC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82C4FC40;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c4fc68
	if (!ctx.cr0.eq) goto loc_82C4FC68;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c4faf8
	ctx.lr = 0x82C4FC60;
	sub_82C4FAF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c4fc70
	if (!ctx.cr0.eq) goto loc_82C4FC70;
loc_82C4FC68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c4fdd8
	goto loc_82C4FDD8;
loc_82C4FC70:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r25,r28,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r25,-1
	ctx.r3.s64 = ctx.r25.s64 + -1;
	// bl 0x82c4fbe0
	ctx.lr = 0x82C4FC84;
	sub_82C4FBE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82c3fd60
	ctx.lr = 0x82C4FC90;
	sub_82C3FD60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// bl 0x82c42a78
	ctx.lr = 0x82C4FCA8;
	sub_82C42A78(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c42a78
	ctx.lr = 0x82C4FCBC;
	sub_82C42A78(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C4FCD4;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82c41a80
	ctx.lr = 0x82C4FCEC;
	sub_82C41A80(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82c4fd08
	if (!ctx.cr0.eq) goto loc_82C4FD08;
	// bl 0x82c3fdc0
	ctx.lr = 0x82C4FCFC;
	sub_82C3FDC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82c3fc28
	ctx.lr = 0x82C4FD04;
	sub_82C3FC28(ctx, base);
	// b 0x82c4fc68
	goto loc_82C4FC68;
loc_82C4FD08:
	// bl 0x82c3fdb8
	ctx.lr = 0x82C4FD0C;
	sub_82C3FDB8(ctx, base);
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r11,-1880
	ctx.r5.s64 = ctx.r11.s64 + -1880;
	// addi r4,r10,26756
	ctx.r4.s64 = ctx.r10.s64 + 26756;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82c55cf0
	ctx.lr = 0x82C4FD24;
	sub_82C55CF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82c40078
	ctx.lr = 0x82C4FD6C;
	sub_82C40078(ctx, base);
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lfd f12,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// add r11,r25,r30
	ctx.r11.u64 = ctx.r25.u64 + ctx.r30.u64;
	// lfd f0,0(r29)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mulli r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 * 6;
	// lfd f13,16(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fadd f12,f11,f12
	ctx.f12.f64 = ctx.f11.f64 + ctx.f12.f64;
	// stfd f12,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.f12.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fadd f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 + ctx.f0.f64;
	// stfd f0,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f0.u64);
	// fadd f0,f11,f13
	ctx.f0.f64 = ctx.f11.f64 + ctx.f13.f64;
	// stfd f0,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.f0.u64);
loc_82C4FDD8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4FDE0"))) PPC_WEAK_FUNC(sub_82C4FDE0);
PPC_FUNC_IMPL(__imp__sub_82C4FDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,26772
	ctx.r4.s64 = ctx.r11.s64 + 26772;
	// b 0x82c41f78
	sub_82C41F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4FDF0"))) PPC_WEAK_FUNC(sub_82C4FDF0);
PPC_FUNC_IMPL(__imp__sub_82C4FDF0) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,26772
	ctx.r4.s64 = ctx.r11.s64 + 26772;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82c41f78
	ctx.lr = 0x82C4FE14;
	sub_82C41F78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42018
	ctx.lr = 0x82C4FE20;
	sub_82C42018(ctx, base);
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

__attribute__((alias("__imp__sub_82C4FE38"))) PPC_WEAK_FUNC(sub_82C4FE38);
PPC_FUNC_IMPL(__imp__sub_82C4FE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x82C4FE40;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r23,r11,-27668
	ctx.r23.s64 = ctx.r11.s64 + -27668;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c556b0
	ctx.lr = 0x82C4FE78;
	sub_82C556B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c4ffb8
	if (!ctx.cr0.eq) goto loc_82C4FFB8;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82c3fd60
	ctx.lr = 0x82C4FE8C;
	sub_82C3FD60(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f31,-29008(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29008);
	// fsub f30,f0,f31
	ctx.f30.f64 = ctx.f0.f64 - ctx.f31.f64;
	// bl 0x82c55ae0
	ctx.lr = 0x82C4FEB8;
	sub_82C55AE0(ctx, base);
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// ble 0x82c4ff74
	if (!ctx.cr0.gt) goto loc_82C4FF74;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// fdiv f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 / ctx.f30.f64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// ori r10,r10,27145
	ctx.r10.u64 = ctx.r10.u64 | 27145;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// subf r25,r29,r10
	ctx.r25.s64 = ctx.r10.s64 - ctx.r29.s64;
	// lfd f30,-12176(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + -12176);
loc_82C4FEE8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C4FF00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fmul f0,f31,f0
	ctx.f0.f64 = ctx.f31.f64 * ctx.f0.f64;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmul f13,f31,f13
	ctx.f13.f64 = ctx.f31.f64 * ctx.f13.f64;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// fmul f0,f0,f30
	ctx.f0.f64 = ctx.f0.f64 * ctx.f30.f64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bgt cr6,0x82c4ff58
	if (ctx.cr6.gt) goto loc_82C4FF58;
	// mullw r10,r28,r29
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r9,r10,r31
	ctx.r9.s32 = ctx.r10.s32 / ctx.r31.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// andc r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// twllei r31,0
	// subf r28,r9,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r9.s64;
	// twlgei r11,-1
	// b 0x82c4ff6c
	goto loc_82C4FF6C;
loc_82C4FF58:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c42028
	ctx.lr = 0x82C4FF68;
	sub_82C42028(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82C4FF6C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82c4fee8
	if (!ctx.cr0.eq) goto loc_82C4FEE8;
loc_82C4FF74:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c55c90
	ctx.lr = 0x82C4FF7C;
	sub_82C55C90(ctx, base);
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// lwz r11,56(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 56);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C4FF9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c55658
	ctx.lr = 0x82C4FFB4;
	sub_82C55658(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82C4FFB8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4FFC8"))) PPC_WEAK_FUNC(sub_82C4FFC8);
PPC_FUNC_IMPL(__imp__sub_82C4FFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r4,r11,-27668
	ctx.r4.s64 = ctx.r11.s64 + -27668;
	// b 0x82c55710
	sub_82C55710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4FFD8"))) PPC_WEAK_FUNC(sub_82C4FFD8);
PPC_FUNC_IMPL(__imp__sub_82C4FFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c49c
	ctx.lr = 0x82C4FFE0;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// lwz r23,76(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lfs f31,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lwz r22,88(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r11,r23,-1
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// lfs f30,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lwz r17,92(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r26,80(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82c3fd60
	ctx.lr = 0x82C50024;
	sub_82C3FD60(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addic. r29,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r29.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r18,r11,27145
	ctx.r18.u64 = ctx.r11.u64 | 27145;
	// ble 0x82c500a8
	if (!ctx.cr0.gt) goto loc_82C500A8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// subf r24,r26,r18
	ctx.r24.s64 = ctx.r18.s64 - ctx.r26.s64;
	// mr r19,r29
	ctx.r19.u64 = ctx.r29.u64;
loc_82C50048:
	// mullw r11,r3,r22
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r22.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// lfsx f0,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r28
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bgt cr6,0x82c50094
	if (ctx.cr6.gt) goto loc_82C50094;
	// mullw r10,r3,r26
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r26.s32);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r9,r10,r23
	ctx.r9.s32 = ctx.r10.s32 / ctx.r23.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r23
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r23.s32);
	// andc r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 & ~ctx.r11.u64;
	// twllei r23,0
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// twlgei r11,-1
	// b 0x82c500a0
	goto loc_82C500A0;
loc_82C50094:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82c42028
	ctx.lr = 0x82C500A0;
	sub_82C42028(ctx, base);
loc_82C500A0:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne 0x82c50048
	if (!ctx.cr0.eq) goto loc_82C50048;
loc_82C500A8:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r27,r17,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r25,4
	ctx.r26.s64 = ctx.r25.s64 + 4;
	// add r30,r27,r20
	ctx.r30.u64 = ctx.r27.u64 + ctx.r20.u64;
	// add r28,r27,r21
	ctx.r28.u64 = ctx.r27.u64 + ctx.r21.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C500D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// stfs f0,0(r20)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + 0, temp.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ble cr6,0x82c50140
	if (!ctx.cr6.gt) goto loc_82C50140;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r8,r20,r21
	ctx.r8.s64 = ctx.r21.s64 - ctx.r20.s64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82C50108:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfsx f11,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// fmsubs f0,f11,f0,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f10.f64));
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// fnmadds f0,f11,f13,f12
	ctx.f0.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bne 0x82c50108
	if (!ctx.cr0.eq) goto loc_82C50108;
loc_82C50140:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C50178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82c501f4
	if (!ctx.cr6.gt) goto loc_82C501F4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// subf r28,r30,r18
	ctx.r28.s64 = ctx.r18.s64 - ctx.r30.s64;
loc_82C50190:
	// mullw r11,r3,r17
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r17.s32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// stfsx f0,r11,r21
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r11,r20
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, temp.u32);
	// bgt cr6,0x82c501e0
	if (ctx.cr6.gt) goto loc_82C501E0;
	// mullw r10,r30,r3
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r3.s32);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r9,r10,r23
	ctx.r9.s32 = ctx.r10.s32 / ctx.r23.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r23
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r23.s32);
	// andc r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 & ~ctx.r11.u64;
	// twllei r23,0
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// twlgei r11,-1
	// b 0x82c501ec
	goto loc_82C501EC;
loc_82C501E0:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c42028
	ctx.lr = 0x82C501EC;
	sub_82C42028(ctx, base);
loc_82C501EC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82c50190
	if (!ctx.cr0.eq) goto loc_82C50190;
loc_82C501F4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c3fdb8
	ctx.lr = 0x82C501FC;
	sub_82C3FDB8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82d5c4ec
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C50210"))) PPC_WEAK_FUNC(sub_82C50210);
PPC_FUNC_IMPL(__imp__sub_82C50210) {
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
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82c3fc78
	ctx.lr = 0x82C50234;
	sub_82C3FC78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82c3fc78
	ctx.lr = 0x82C50240;
	sub_82C3FC78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82c3fc78
	ctx.lr = 0x82C5024C;
	sub_82C3FC78(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82c50270
	if (ctx.cr6.eq) goto loc_82C50270;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82c4fe38
	ctx.lr = 0x82C50268;
	sub_82C4FE38(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// b 0x82c50288
	goto loc_82C50288;
loc_82C50270:
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r11,-27668
	ctx.r4.s64 = ctx.r11.s64 + -27668;
	// bl 0x82c55710
	ctx.lr = 0x82C50280;
	sub_82C55710(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82C50288:
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

__attribute__((alias("__imp__sub_82C502A0"))) PPC_WEAK_FUNC(sub_82C502A0);
PPC_FUNC_IMPL(__imp__sub_82C502A0) {
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
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82c3fc28
	ctx.lr = 0x82C502BC;
	sub_82C3FC28(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82c3fc28
	ctx.lr = 0x82C502C4;
	sub_82C3FC28(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82c3fc28
	ctx.lr = 0x82C502CC;
	sub_82C3FC28(ctx, base);
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

__attribute__((alias("__imp__sub_82C502E0"))) PPC_WEAK_FUNC(sub_82C502E0);
PPC_FUNC_IMPL(__imp__sub_82C502E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C502E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,17232
	ctx.r29.s64 = ctx.r11.s64 + 17232;
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C50320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c50344
	if (ctx.cr6.eq) goto loc_82C50344;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C50344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C50344:
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c50374
	if (ctx.cr6.eq) goto loc_82C50374;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c50374
	if (ctx.cr6.eq) goto loc_82C50374;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C50374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C50374:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C50388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C50390"))) PPC_WEAK_FUNC(sub_82C50390);
PPC_FUNC_IMPL(__imp__sub_82C50390) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82c503d0
	if (!ctx.cr6.eq) goto loc_82C503D0;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c503d0
	if (!ctx.cr6.eq) goto loc_82C503D0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82c42370
	ctx.lr = 0x82C503C4;
	sub_82C42370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82c503d4
	if (!ctx.cr0.eq) goto loc_82C503D4;
loc_82C503D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C503D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C503E8"))) PPC_WEAK_FUNC(sub_82C503E8);
PPC_FUNC_IMPL(__imp__sub_82C503E8) {
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
	// lwz r11,152(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 152);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c50410
	if (!ctx.cr0.eq) goto loc_82C50410;
	// bl 0x82c50390
	ctx.lr = 0x82C50404;
	sub_82C50390(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82c50414
	if (!ctx.cr0.eq) goto loc_82C50414;
loc_82C50410:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C50414:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C50428"))) PPC_WEAK_FUNC(sub_82C50428);
PPC_FUNC_IMPL(__imp__sub_82C50428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4a4
	ctx.lr = 0x82C50430;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// bl 0x82c3fd60
	ctx.lr = 0x82C50464;
	sub_82C3FD60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r23,r30,-1
	ctx.r23.s64 = ctx.r30.s64 + -1;
	// addi r26,r29,4
	ctx.r26.s64 = ctx.r29.s64 + 4;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r21,r11,r25
	ctx.r21.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82c42a78
	ctx.lr = 0x82C5048C;
	sub_82C42A78(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c42a78
	ctx.lr = 0x82C504A0;
	sub_82C42A78(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C504B8;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82c41a80
	ctx.lr = 0x82C504D0;
	sub_82C41A80(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82c50590
	if (ctx.cr0.eq) goto loc_82C50590;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82c42a78
	ctx.lr = 0x82C504E8;
	sub_82C42A78(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c42a78
	ctx.lr = 0x82C504FC;
	sub_82C42A78(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C50514;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82c41a80
	ctx.lr = 0x82C5052C;
	sub_82C41A80(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82c50590
	if (ctx.cr0.eq) goto loc_82C50590;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82c42a78
	ctx.lr = 0x82C50544;
	sub_82C42A78(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c42a78
	ctx.lr = 0x82C50558;
	sub_82C42A78(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C50570;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82c41a80
	ctx.lr = 0x82C50588;
	sub_82C41A80(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne 0x82c505b8
	if (!ctx.cr0.eq) goto loc_82C505B8;
loc_82C50590:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c3fdc0
	ctx.lr = 0x82C50598;
	sub_82C3FDC0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C505A0;
	sub_82C3FC28(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C505A8;
	sub_82C3FC28(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C505B0;
	sub_82C3FC28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c50684
	goto loc_82C50684;
loc_82C505B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c3fdb8
	ctx.lr = 0x82C505C0;
	sub_82C3FDB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// stw r20,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r20.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r19,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r19.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// bl 0x82c42250
	ctx.lr = 0x82C505E8;
	sub_82C42250(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addi r4,r30,-2
	ctx.r4.s64 = ctx.r30.s64 + -2;
	// bl 0x82c42090
	ctx.lr = 0x82C505F8;
	sub_82C42090(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82c40078
	ctx.lr = 0x82C50614;
	sub_82C40078(ctx, base);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// mulli r10,r30,14
	ctx.r10.s64 = ctx.r30.s64 * 14;
	// lfd f0,0(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// lfd f13,32(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// lfd f12,16(r31)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fadd f0,f10,f0
	ctx.f0.f64 = ctx.f10.f64 + ctx.f0.f64;
	// stfd f0,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f0.u64);
	// fadd f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 + ctx.f13.f64;
	// stfd f13,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.f13.u64);
	// fadd f0,f9,f12
	ctx.f0.f64 = ctx.f9.f64 + ctx.f12.f64;
	// stfd f0,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.f0.u64);
loc_82C50684:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82d5c4f4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C50690"))) PPC_WEAK_FUNC(sub_82C50690);
PPC_FUNC_IMPL(__imp__sub_82C50690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82C50698;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,152(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c50714
	if (!ctx.cr0.eq) goto loc_82C50714;
	// bl 0x82c50390
	ctx.lr = 0x82C506B4;
	sub_82C50390(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c50714
	if (ctx.cr0.eq) goto loc_82C50714;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32059
	ctx.r10.s64 = -2101018624;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r5,r10,-40
	ctx.r5.s64 = ctx.r10.s64 + -40;
	// addi r4,r9,26784
	ctx.r4.s64 = ctx.r9.s64 + 26784;
	// li r3,104
	ctx.r3.s64 = 104;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82c55cf0
	ctx.lr = 0x82C506E4;
	sub_82C55CF0(ctx, base);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c50428
	ctx.lr = 0x82C50704;
	sub_82C50428(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x82c50718
	if (!ctx.cr0.eq) goto loc_82C50718;
	// bl 0x82c3fdb8
	ctx.lr = 0x82C50714;
	sub_82C3FDB8(ctx, base);
loc_82C50714:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C50718:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C50720"))) PPC_WEAK_FUNC(sub_82C50720);
PPC_FUNC_IMPL(__imp__sub_82C50720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,26800
	ctx.r4.s64 = ctx.r11.s64 + 26800;
	// b 0x82c41f78
	sub_82C41F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C50730"))) PPC_WEAK_FUNC(sub_82C50730);
PPC_FUNC_IMPL(__imp__sub_82C50730) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,26800
	ctx.r4.s64 = ctx.r11.s64 + 26800;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82c41f78
	ctx.lr = 0x82C50754;
	sub_82C41F78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42018
	ctx.lr = 0x82C50760;
	sub_82C42018(ctx, base);
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

__attribute__((alias("__imp__sub_82C50778"))) PPC_WEAK_FUNC(sub_82C50778);
PPC_FUNC_IMPL(__imp__sub_82C50778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lfs f0,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// ble cr6,0x82c507d8
	if (!ctx.cr6.gt) goto loc_82C507D8;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82C5079C:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f13,f8,f10,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f13.f64));
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f12,f7,f10,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f12.f64));
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f0,f6,f9,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f0.f64));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmadds f11,f5,f9,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f11.f64));
	// blt cr6,0x82c5079c
	if (ctx.cr6.lt) goto loc_82C5079C;
loc_82C507D8:
	// fadds f10,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f10,0(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C50800"))) PPC_WEAK_FUNC(sub_82C50800);
PPC_FUNC_IMPL(__imp__sub_82C50800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C50808;
	__savegprlr_29(ctx, base);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// ble cr6,0x82c508ac
	if (!ctx.cr6.gt) goto loc_82C508AC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r10,r6
	ctx.r10.s64 = -ctx.r6.s64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r30,r6,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// subf r6,r5,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r5.s64;
	// add r11,r30,r5
	ctx.r11.u64 = ctx.r30.u64 + ctx.r5.u64;
loc_82C5084C:
	// lfsx f11,r6,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lfsx f12,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfsx f11,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfsx f12,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f12,12(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// blt cr6,0x82c5084c
	if (ctx.cr6.lt) goto loc_82C5084C;
loc_82C508AC:
	// stfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C508B8"))) PPC_WEAK_FUNC(sub_82C508B8);
PPC_FUNC_IMPL(__imp__sub_82C508B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x82C508C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r26,72(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r29,76(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82c3fd60
	ctx.lr = 0x82C508F0;
	sub_82C3FD60(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// bl 0x82c50800
	ctx.lr = 0x82C50914;
	sub_82C50800(ctx, base);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// ble cr6,0x82c50974
	if (!ctx.cr6.gt) goto loc_82C50974;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,-4
	ctx.r26.s64 = ctx.r11.s64 + -4;
	// neg r11,r29
	ctx.r11.s64 = -ctx.r29.s64;
	// li r28,2
	ctx.r28.s64 = 2;
	// rlwinm r23,r11,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r11,r26,r29
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// subf r25,r30,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r30.s64;
	// add r6,r27,r30
	ctx.r6.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82C50944:
	// add r9,r25,r8
	ctx.r9.u64 = ctx.r25.u64 + ctx.r8.u64;
	// add r7,r25,r6
	ctx.r7.u64 = ctx.r25.u64 + ctx.r6.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c50778
	ctx.lr = 0x82C5095C;
	sub_82C50778(ctx, base);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// add r24,r26,r24
	ctx.r24.u64 = ctx.r26.u64 + ctx.r24.u64;
	// add r8,r23,r8
	ctx.r8.u64 = ctx.r23.u64 + ctx.r8.u64;
	// add r6,r27,r6
	ctx.r6.u64 = ctx.r27.u64 + ctx.r6.u64;
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82c50944
	if (ctx.cr6.lt) goto loc_82C50944;
loc_82C50974:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c3fdb8
	ctx.lr = 0x82C5097C;
	sub_82C3FDB8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C50988"))) PPC_WEAK_FUNC(sub_82C50988);
PPC_FUNC_IMPL(__imp__sub_82C50988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r7,68(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r5,r10,26812
	ctx.r5.s64 = ctx.r10.s64 + 26812;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// b 0x82c540c0
	sub_82C540C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C509B8"))) PPC_WEAK_FUNC(sub_82C509B8);
PPC_FUNC_IMPL(__imp__sub_82C509B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r5,68(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,-31988
	ctx.r10.s64 = -2096365568;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r10,17280
	ctx.r4.s64 = ctx.r10.s64 + 17280;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C509D8"))) PPC_WEAK_FUNC(sub_82C509D8);
PPC_FUNC_IMPL(__imp__sub_82C509D8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82c50a30
	if (!ctx.cr6.eq) goto loc_82C50A30;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c50a30
	if (!ctx.cr6.eq) goto loc_82C50A30;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c50a30
	if (!ctx.cr6.eq) goto loc_82C50A30;
	// bl 0x82c42370
	ctx.lr = 0x82C50A24;
	sub_82C42370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82c50a34
	if (!ctx.cr0.eq) goto loc_82C50A34;
loc_82C50A30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C50A34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C50A48"))) PPC_WEAK_FUNC(sub_82C50A48);
PPC_FUNC_IMPL(__imp__sub_82C50A48) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c50a78
	if (ctx.cr0.eq) goto loc_82C50A78;
loc_82C50A70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c50aac
	goto loc_82C50AAC;
loc_82C50A78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c509d8
	ctx.lr = 0x82C50A80;
	sub_82C509D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c50a70
	if (ctx.cr0.eq) goto loc_82C50A70;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c50aa8
	if (ctx.cr0.eq) goto loc_82C50AA8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,173
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 173, ctx.xer);
	// bge cr6,0x82c50aac
	if (!ctx.cr6.lt) goto loc_82C50AAC;
loc_82C50AA8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C50AAC:
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

__attribute__((alias("__imp__sub_82C50AC8"))) PPC_WEAK_FUNC(sub_82C50AC8);
PPC_FUNC_IMPL(__imp__sub_82C50AC8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c50a48
	ctx.lr = 0x82C50AE0;
	sub_82C50A48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c50b70
	if (ctx.cr0.eq) goto loc_82C50B70;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r11,2232
	ctx.r5.s64 = ctx.r11.s64 + 2232;
	// addi r4,r10,26820
	ctx.r4.s64 = ctx.r10.s64 + 26820;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82c55cf0
	ctx.lr = 0x82C50B00;
	sub_82C55CF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfd f0,-11920(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11920);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 * 5;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r9,-5
	ctx.r9.s64 = ctx.r9.s64 + -5;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfd f0,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.f0.u64);
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// mullw r11,r10,r10
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f0.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.f0.u64);
loc_82C50B70:
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

__attribute__((alias("__imp__sub_82C50B88"))) PPC_WEAK_FUNC(sub_82C50B88);
PPC_FUNC_IMPL(__imp__sub_82C50B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,26836
	ctx.r4.s64 = ctx.r11.s64 + 26836;
	// b 0x82c41f78
	sub_82C41F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C50B98"))) PPC_WEAK_FUNC(sub_82C50B98);
PPC_FUNC_IMPL(__imp__sub_82C50B98) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,26836
	ctx.r4.s64 = ctx.r11.s64 + 26836;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82c41f78
	ctx.lr = 0x82C50BBC;
	sub_82C41F78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42018
	ctx.lr = 0x82C50BC8;
	sub_82C42018(ctx, base);
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

__attribute__((alias("__imp__sub_82C50BE0"))) PPC_WEAK_FUNC(sub_82C50BE0);
PPC_FUNC_IMPL(__imp__sub_82C50BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c49c
	ctx.lr = 0x82C50BE8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82c3fd60
	ctx.lr = 0x82C50C14;
	sub_82C3FD60(ctx, base);
	// lwz r20,80(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r18,64(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r17,68(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bgt cr6,0x82c50cb4
	if (ctx.cr6.gt) goto loc_82C50CB4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r8,r19
	ctx.r23.u64 = ctx.r8.u64 + ctx.r19.u64;
	// add r22,r9,r19
	ctx.r22.u64 = ctx.r9.u64 + ctx.r19.u64;
	// rlwinm r21,r10,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C50C58:
	// lwz r11,56(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 56);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C50C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 56);
	// add r29,r24,r29
	ctx.r29.u64 = ctx.r24.u64 + ctx.r29.u64;
	// add r28,r24,r28
	ctx.r28.u64 = ctx.r24.u64 + ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C50CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r27,r21,r27
	ctx.r27.u64 = ctx.r21.u64 + ctx.r27.u64;
	// add r26,r21,r26
	ctx.r26.u64 = ctx.r21.u64 + ctx.r26.u64;
	// cmpw cr6,r25,r20
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x82c50c58
	if (!ctx.cr6.gt) goto loc_82C50C58;
loc_82C50CB4:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82c3fdb8
	ctx.lr = 0x82C50CBC;
	sub_82C3FDB8(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C50CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82d5c4ec
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C50CE8"))) PPC_WEAK_FUNC(sub_82C50CE8);
PPC_FUNC_IMPL(__imp__sub_82C50CE8) {
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
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82c3fc78
	ctx.lr = 0x82C50D0C;
	sub_82C3FC78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82c3fc78
	ctx.lr = 0x82C50D18;
	sub_82C3FC78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82c3fc78
	ctx.lr = 0x82C50D24;
	sub_82C3FC78(ctx, base);
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

__attribute__((alias("__imp__sub_82C50D40"))) PPC_WEAK_FUNC(sub_82C50D40);
PPC_FUNC_IMPL(__imp__sub_82C50D40) {
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
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82c3fc28
	ctx.lr = 0x82C50D5C;
	sub_82C3FC28(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82c3fc28
	ctx.lr = 0x82C50D64;
	sub_82C3FC28(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82c3fc28
	ctx.lr = 0x82C50D6C;
	sub_82C3FC28(ctx, base);
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

__attribute__((alias("__imp__sub_82C50D80"))) PPC_WEAK_FUNC(sub_82C50D80);
PPC_FUNC_IMPL(__imp__sub_82C50D80) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r10,-31988
	ctx.r10.s64 = -2096365568;
	// addi r4,r10,17300
	ctx.r4.s64 = ctx.r10.s64 + 17300;
	// lwz r31,88(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r30,72(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r8,r31,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// twllei r5,0
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// divw r30,r31,r5
	ctx.r30.s32 = ctx.r31.s32 / ctx.r5.s32;
	// andc r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// lwz r6,84(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mullw r30,r30,r5
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r5.s32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// twlgei r8,-1
	// subf r8,r30,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C50DF0;
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

__attribute__((alias("__imp__sub_82C50E08"))) PPC_WEAK_FUNC(sub_82C50E08);
PPC_FUNC_IMPL(__imp__sub_82C50E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C50E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82c50ec4
	if (ctx.cr6.gt) goto loc_82C50EC4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c50ec4
	if (!ctx.cr6.eq) goto loc_82C50EC4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c54a50
	ctx.lr = 0x82C50E44;
	sub_82C54A50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c50e58
	if (ctx.cr0.eq) goto loc_82C50E58;
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c50ec4
	if (!ctx.cr0.eq) goto loc_82C50EC4;
loc_82C50E58:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c50e7c
	if (ctx.cr6.eq) goto loc_82C50E7C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82c50ec8
	if (ctx.cr6.gt) goto loc_82C50EC8;
	// b 0x82c50ec4
	goto loc_82C50EC4;
loc_82C50E7C:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c55450
	ctx.lr = 0x82C50E88;
	sub_82C55450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c50e98
	if (ctx.cr0.eq) goto loc_82C50E98;
loc_82C50E90:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c50ec8
	goto loc_82C50EC8;
loc_82C50E98:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c50e90
	if (ctx.cr6.eq) goto loc_82C50E90;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c54948
	ctx.lr = 0x82C50EB4;
	sub_82C54948(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c50e90
	if (ctx.cr6.eq) goto loc_82C50E90;
loc_82C50EC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C50EC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C50ED0"))) PPC_WEAK_FUNC(sub_82C50ED0);
PPC_FUNC_IMPL(__imp__sub_82C50ED0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c50f00
	if (ctx.cr0.eq) goto loc_82C50F00;
loc_82C50EF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c50f4c
	goto loc_82C50F4C;
loc_82C50F00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c50e08
	ctx.lr = 0x82C50F0C;
	sub_82C50E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c50ef8
	if (ctx.cr0.eq) goto loc_82C50EF8;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c50f48
	if (ctx.cr0.eq) goto loc_82C50F48;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c50ef8
	if (!ctx.cr6.eq) goto loc_82C50EF8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82c54a50
	ctx.lr = 0x82C50F3C;
	sub_82C54A50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x82c50f4c
	if (!ctx.cr0.eq) goto loc_82C50F4C;
loc_82C50F48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C50F4C:
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

__attribute__((alias("__imp__sub_82C50F68"))) PPC_WEAK_FUNC(sub_82C50F68);
PPC_FUNC_IMPL(__imp__sub_82C50F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c494
	ctx.lr = 0x82C50F70;
	__savegprlr_15(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82c50ed0
	ctx.lr = 0x82C50F98;
	sub_82C50ED0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c511b8
	if (ctx.cr0.eq) goto loc_82C511B8;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c52930
	ctx.lr = 0x82C50FA8;
	sub_82C52930(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82c529f8
	ctx.lr = 0x82C50FC0;
	sub_82C529F8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c54948
	ctx.lr = 0x82C50FCC;
	sub_82C54948(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c54a08
	ctx.lr = 0x82C50FDC;
	sub_82C54A08(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82c50ffc
	if (ctx.cr0.gt) goto loc_82C50FFC;
	// li r21,0
	ctx.r21.s64 = 0;
loc_82C50FFC:
	// mullw r11,r20,r31
	ctx.r11.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r31.s32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subfic r19,r21,1
	ctx.xer.ca = ctx.r21.u32 <= 1;
	ctx.r19.s64 = 1 - ctx.r21.s64;
	// bl 0x82c3fd60
	ctx.lr = 0x82C5100C;
	sub_82C3FD60(ctx, base);
	// lwz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r25,r20,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r17,16(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r26,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r26.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r24,r10,r29
	ctx.r24.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r23,r11,r29
	ctx.r23.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cntlzw r16,r9
	ctx.r16.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// bl 0x82c42a78
	ctx.lr = 0x82C51048;
	sub_82C42A78(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82c42a78
	ctx.lr = 0x82C51060;
	sub_82C42A78(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C51078;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r7,r16,7,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 7) & 0x1000;
	// bl 0x82c41a80
	ctx.lr = 0x82C51090;
	sub_82C41A80(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82c511b8
	if (ctx.cr0.eq) goto loc_82C511B8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r18,20(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,24(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82c54660
	ctx.lr = 0x82C510C0;
	sub_82C54660(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x82c42a70
	ctx.lr = 0x82C510C8;
	sub_82C42A70(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C510E0;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c41a30
	ctx.lr = 0x82C510EC;
	sub_82C41A30(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq 0x82c511b8
	if (ctx.cr0.eq) goto loc_82C511B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c3fdb8
	ctx.lr = 0x82C510FC;
	sub_82C3FDB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// twllei r31,0
	// rotlwi r5,r11,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rotlwi r7,r11,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// divw r4,r11,r31
	ctx.r4.s32 = ctx.r11.s32 / ctx.r31.s32;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mullw r29,r4,r31
	ctx.r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divw r10,r11,r31
	ctx.r10.s32 = ctx.r11.s32 / ctx.r31.s32;
	// andc r25,r31,r5
	ctx.r25.u64 = ctx.r31.u64 & ~ctx.r5.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// andc r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 & ~ctx.r3.u64;
	// subf r3,r29,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r27,-1
	// twlgei r25,-1
	// twllei r31,0
	// li r29,0
	ctx.r29.s64 = 0;
	// add r27,r6,r11
	ctx.r27.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r25,r11,r7
	ctx.r25.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r24,r10,r8
	ctx.r24.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r23,r10,r9
	ctx.r23.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82c42a78
	ctx.lr = 0x82C51180;
	sub_82C42A78(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c52c50
	ctx.lr = 0x82C5118C;
	sub_82C52C50(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C511A4;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c41a30
	ctx.lr = 0x82C511B0;
	sub_82C41A30(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82c511e0
	if (!ctx.cr0.eq) goto loc_82C511E0;
loc_82C511B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c3fdc0
	ctx.lr = 0x82C511C0;
	sub_82C3FDC0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C511C8;
	sub_82C3FC28(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C511D0;
	sub_82C3FC28(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C511D8;
	sub_82C3FC28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c5127c
	goto loc_82C5127C;
loc_82C511E0:
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r11,3040
	ctx.r5.s64 = ctx.r11.s64 + 3040;
	// addi r4,r10,26848
	ctx.r4.s64 = ctx.r10.s64 + 26848;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82c55cf0
	ctx.lr = 0x82C511F8;
	sub_82C55CF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r18,8
	ctx.r4.s64 = ctx.r18.s64 + 8;
	// addi r3,r26,8
	ctx.r3.s64 = ctx.r26.s64 + 8;
	// stw r26,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r26.u32);
	// stw r18,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r18.u32);
	// stw r27,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r27.u32);
	// stw r22,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r22.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r21,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r21.u32);
	// stw r19,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r19.u32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// stw r20,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r20.u32);
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// bl 0x82c40078
	ctx.lr = 0x82C5124C;
	sub_82C40078(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r5,r27,8
	ctx.r5.s64 = ctx.r27.s64 + 8;
	// andc r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r10.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// divw r3,r11,r31
	ctx.r3.s32 = ctx.r11.s32 / ctx.r31.s32;
	// twllei r31,0
	// twlgei r10,-1
	// bl 0x82c40020
	ctx.lr = 0x82C51278;
	sub_82C40020(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82C5127C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82d5c4e4
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51288"))) PPC_WEAK_FUNC(sub_82C51288);
PPC_FUNC_IMPL(__imp__sub_82C51288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,26864
	ctx.r4.s64 = ctx.r11.s64 + 26864;
	// b 0x82c41f78
	sub_82C41F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51298"))) PPC_WEAK_FUNC(sub_82C51298);
PPC_FUNC_IMPL(__imp__sub_82C51298) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,26864
	ctx.r4.s64 = ctx.r11.s64 + 26864;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82c41f78
	ctx.lr = 0x82C512BC;
	sub_82C41F78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42018
	ctx.lr = 0x82C512C8;
	sub_82C42018(ctx, base);
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

__attribute__((alias("__imp__sub_82C512E0"))) PPC_WEAK_FUNC(sub_82C512E0);
PPC_FUNC_IMPL(__imp__sub_82C512E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x82C512E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r9,64(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// lwz r29,68(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// lwz r10,76(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r23,56(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// ble 0x82c51350
	if (!ctx.cr0.gt) goto loc_82C51350;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// subf r25,r6,r7
	ctx.r25.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subf r24,r4,r5
	ctx.r24.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_82C51324:
	// lwz r3,64(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// add r7,r25,r31
	ctx.r7.u64 = ctx.r25.u64 + ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r24,r30
	ctx.r5.u64 = ctx.r24.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x82C51340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// bne 0x82c51324
	if (!ctx.cr0.eq) goto loc_82C51324;
loc_82C51350:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51358"))) PPC_WEAK_FUNC(sub_82C51358);
PPC_FUNC_IMPL(__imp__sub_82C51358) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// b 0x82c3fc78
	sub_82C3FC78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51360"))) PPC_WEAK_FUNC(sub_82C51360);
PPC_FUNC_IMPL(__imp__sub_82C51360) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// b 0x82c3fc28
	sub_82C3FC28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51368"))) PPC_WEAK_FUNC(sub_82C51368);
PPC_FUNC_IMPL(__imp__sub_82C51368) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r10,-31988
	ctx.r10.s64 = -2096365568;
	// addi r4,r10,17344
	ctx.r4.s64 = ctx.r10.s64 + 17344;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C51398"))) PPC_WEAK_FUNC(sub_82C51398);
PPC_FUNC_IMPL(__imp__sub_82C51398) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x82c551a0
	sub_82C551A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C513B8"))) PPC_WEAK_FUNC(sub_82C513B8);
PPC_FUNC_IMPL(__imp__sub_82C513B8) {
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
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82c5142c
	if (ctx.cr6.eq) goto loc_82C5142C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c5142c
	if (!ctx.cr6.gt) goto loc_82C5142C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c5142c
	if (!ctx.cr6.gt) goto loc_82C5142C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82c551a0
	ctx.lr = 0x82C51420;
	sub_82C551A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82c51430
	if (!ctx.cr0.eq) goto loc_82C51430;
loc_82C5142C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C51430:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C51440"))) PPC_WEAK_FUNC(sub_82C51440);
PPC_FUNC_IMPL(__imp__sub_82C51440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82C51448;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c513b8
	ctx.lr = 0x82C51464;
	sub_82C513B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c51474
	if (!ctx.cr0.eq) goto loc_82C51474;
loc_82C5146C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c51510
	goto loc_82C51510;
loc_82C51474:
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82c51498
	if (ctx.cr0.eq) goto loc_82C51498;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82c5146c
	if (!ctx.cr6.eq) goto loc_82C5146C;
loc_82C51498:
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c5150c
	if (ctx.cr0.eq) goto loc_82C5150C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82c514f0
	if (!ctx.cr6.gt) goto loc_82C514F0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82c54758
	ctx.lr = 0x82C514C8;
	sub_82C54758(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82c54758
	ctx.lr = 0x82C514D4;
	sub_82C54758(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c54748
	ctx.lr = 0x82C514DC;
	sub_82C54748(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c55238
	ctx.lr = 0x82C514E8;
	sub_82C55238(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82c5146c
	if (ctx.cr6.lt) goto loc_82C5146C;
loc_82C514F0:
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c5150c
	if (ctx.cr0.eq) goto loc_82C5150C;
	// lwz r11,148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82c51510
	if (ctx.cr6.gt) goto loc_82C51510;
loc_82C5150C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C51510:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51518"))) PPC_WEAK_FUNC(sub_82C51518);
PPC_FUNC_IMPL(__imp__sub_82C51518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x82C51520;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c51440
	ctx.lr = 0x82C51538;
	sub_82C51440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c51548
	if (!ctx.cr0.eq) goto loc_82C51548;
loc_82C51540:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c51644
	goto loc_82C51644;
loc_82C51548:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// lwz r28,24(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r27,20(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r25,16(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r24,12(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82c52d38
	ctx.lr = 0x82C5156C;
	sub_82C52D38(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c52c50
	ctx.lr = 0x82C51578;
	sub_82C52C50(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C51590;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c41a30
	ctx.lr = 0x82C5159C;
	sub_82C41A30(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82c51540
	if (ctx.cr0.eq) goto loc_82C51540;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r11,4832
	ctx.r5.s64 = ctx.r11.s64 + 4832;
	// addi r4,r10,26876
	ctx.r4.s64 = ctx.r10.s64 + 26876;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82c55cf0
	ctx.lr = 0x82C515BC;
	sub_82C55CF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x82c3ffa8
	ctx.lr = 0x82C515EC;
	sub_82C3FFA8(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// lfd f0,24928(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24928);
	// stfd f0,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.f0.u64);
	// bl 0x82c40108
	ctx.lr = 0x82C51608;
	sub_82C40108(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82c51624
	if (!ctx.cr6.eq) goto loc_82C51624;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// ble cr6,0x82c51640
	if (!ctx.cr6.gt) goto loc_82C51640;
loc_82C51624:
	// lwa r11,68(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 68));
	// lfd f0,40(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r28.u32 + 40);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stfd f0,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.f0.u64);
loc_82C51640:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C51644:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51650"))) PPC_WEAK_FUNC(sub_82C51650);
PPC_FUNC_IMPL(__imp__sub_82C51650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C51658;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,26892
	ctx.r4.s64 = ctx.r11.s64 + 26892;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c41f78
	ctx.lr = 0x82C51678;
	sub_82C41F78(ctx, base);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51690"))) PPC_WEAK_FUNC(sub_82C51690);
PPC_FUNC_IMPL(__imp__sub_82C51690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82C51698;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,26892
	ctx.r30.s64 = ctx.r11.s64 + 26892;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
loc_82C516AC:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c41f78
	ctx.lr = 0x82C516BC;
	sub_82C41F78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r29.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// bl 0x82c42018
	ctx.lr = 0x82C516DC;
	sub_82C42018(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c516ac
	if (ctx.cr6.lt) goto loc_82C516AC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C516F8"))) PPC_WEAK_FUNC(sub_82C516F8);
PPC_FUNC_IMPL(__imp__sub_82C516F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C51700;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C51720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C51740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51748"))) PPC_WEAK_FUNC(sub_82C51748);
PPC_FUNC_IMPL(__imp__sub_82C51748) {
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
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82c3fc78
	ctx.lr = 0x82C5176C;
	sub_82C3FC78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82c3fc78
	ctx.lr = 0x82C51778;
	sub_82C3FC78(ctx, base);
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

__attribute__((alias("__imp__sub_82C51790"))) PPC_WEAK_FUNC(sub_82C51790);
PPC_FUNC_IMPL(__imp__sub_82C51790) {
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
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82c3fc28
	ctx.lr = 0x82C517AC;
	sub_82C3FC28(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82c3fc28
	ctx.lr = 0x82C517B4;
	sub_82C3FC28(ctx, base);
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

__attribute__((alias("__imp__sub_82C517C8"))) PPC_WEAK_FUNC(sub_82C517C8);
PPC_FUNC_IMPL(__imp__sub_82C517C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r10,-31988
	ctx.r10.s64 = -2096365568;
	// addi r4,r10,17372
	ctx.r4.s64 = ctx.r10.s64 + 17372;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r7,68(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C517F8"))) PPC_WEAK_FUNC(sub_82C517F8);
PPC_FUNC_IMPL(__imp__sub_82C517F8) {
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
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82c551a0
	ctx.lr = 0x82C51830;
	sub_82C551A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82c51858
	if (ctx.cr0.eq) goto loc_82C51858;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82c51858
	if (!ctx.cr6.lt) goto loc_82C51858;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C51858:
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

__attribute__((alias("__imp__sub_82C51870"))) PPC_WEAK_FUNC(sub_82C51870);
PPC_FUNC_IMPL(__imp__sub_82C51870) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c518c0
	if (ctx.cr6.eq) goto loc_82C518C0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c518c0
	if (ctx.cr6.eq) goto loc_82C518C0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x82c518c0
	if (ctx.cr6.lt) goto loc_82C518C0;
	// bl 0x82c517f8
	ctx.lr = 0x82C518B4;
	sub_82C517F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82c518c4
	if (!ctx.cr0.eq) goto loc_82C518C4;
loc_82C518C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C518C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C518D8"))) PPC_WEAK_FUNC(sub_82C518D8);
PPC_FUNC_IMPL(__imp__sub_82C518D8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c51870
	ctx.lr = 0x82C518FC;
	sub_82C51870(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c5192c
	if (ctx.cr0.eq) goto loc_82C5192C;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c51928
	if (ctx.cr0.eq) goto loc_82C51928;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c5192c
	if (!ctx.cr6.eq) goto loc_82C5192C;
loc_82C51928:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C5192C:
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

__attribute__((alias("__imp__sub_82C51948"))) PPC_WEAK_FUNC(sub_82C51948);
PPC_FUNC_IMPL(__imp__sub_82C51948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4ac
	ctx.lr = 0x82C51950;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82c518d8
	ctx.lr = 0x82C5196C;
	sub_82C518D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c5197c
	if (!ctx.cr0.eq) goto loc_82C5197C;
loc_82C51974:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c51acc
	goto loc_82C51ACC;
loc_82C5197C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82c53208
	ctx.lr = 0x82C51990;
	sub_82C53208(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c52c98
	ctx.lr = 0x82C5199C;
	sub_82C52C98(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c52c98
	ctx.lr = 0x82C519AC;
	sub_82C52C98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r24,12(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r23,24(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r22,20(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82c52df8
	ctx.lr = 0x82C519CC;
	sub_82C52DF8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c52c50
	ctx.lr = 0x82C519D8;
	sub_82C52C50(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C519F0;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c41a30
	ctx.lr = 0x82C519FC;
	sub_82C41A30(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82c51a54
	if (ctx.cr0.eq) goto loc_82C51A54;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82c52df8
	ctx.lr = 0x82C51A18;
	sub_82C52DF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82c52c98
	ctx.lr = 0x82C51A28;
	sub_82C52C98(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C51A40;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c41a30
	ctx.lr = 0x82C51A4C;
	sub_82C41A30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82c51a7c
	if (!ctx.cr0.eq) goto loc_82C51A7C;
loc_82C51A54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C51A5C;
	sub_82C3FC28(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C51A64;
	sub_82C3FC28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82c52888
	ctx.lr = 0x82C51A78;
	sub_82C52888(ctx, base);
	// b 0x82c51974
	goto loc_82C51974;
loc_82C51A7C:
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r11,5880
	ctx.r5.s64 = ctx.r11.s64 + 5880;
	// addi r4,r10,26912
	ctx.r4.s64 = ctx.r10.s64 + 26912;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82c55cf0
	ctx.lr = 0x82C51A94;
	sub_82C55CF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r25,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r25.u32);
	// bl 0x82c40078
	ctx.lr = 0x82C51AB4;
	sub_82C40078(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82c52888
	ctx.lr = 0x82C51AC8;
	sub_82C52888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C51ACC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82d5c4fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51AD8"))) PPC_WEAK_FUNC(sub_82C51AD8);
PPC_FUNC_IMPL(__imp__sub_82C51AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C51AE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,26928
	ctx.r4.s64 = ctx.r11.s64 + 26928;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c41f78
	ctx.lr = 0x82C51B00;
	sub_82C41F78(ctx, base);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51B18"))) PPC_WEAK_FUNC(sub_82C51B18);
PPC_FUNC_IMPL(__imp__sub_82C51B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82C51B20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,26928
	ctx.r30.s64 = ctx.r11.s64 + 26928;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
loc_82C51B34:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c41f78
	ctx.lr = 0x82C51B44;
	sub_82C41F78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r29.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// bl 0x82c42018
	ctx.lr = 0x82C51B64;
	sub_82C42018(ctx, base);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c51b34
	if (ctx.cr6.lt) goto loc_82C51B34;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51B80"))) PPC_WEAK_FUNC(sub_82C51B80);
PPC_FUNC_IMPL(__imp__sub_82C51B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82C51B88;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r26,64(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi r26,0
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble 0x82c51c14
	if (!ctx.cr0.gt) goto loc_82C51C14;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r10,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C51BBC:
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C51BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C51BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r27,r25,r27
	ctx.r27.u64 = ctx.r25.u64 + ctx.r27.u64;
	// add r31,r24,r31
	ctx.r31.u64 = ctx.r24.u64 + ctx.r31.u64;
	// add r30,r24,r30
	ctx.r30.u64 = ctx.r24.u64 + ctx.r30.u64;
	// bne 0x82c51bbc
	if (!ctx.cr0.eq) goto loc_82C51BBC;
loc_82C51C14:
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C51C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51C40"))) PPC_WEAK_FUNC(sub_82C51C40);
PPC_FUNC_IMPL(__imp__sub_82C51C40) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82c3fc28
	ctx.lr = 0x82C51C5C;
	sub_82C3FC28(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82c3fc28
	ctx.lr = 0x82C51C64;
	sub_82C3FC28(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82c3fc28
	ctx.lr = 0x82C51C6C;
	sub_82C3FC28(ctx, base);
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

__attribute__((alias("__imp__sub_82C51C80"))) PPC_WEAK_FUNC(sub_82C51C80);
PPC_FUNC_IMPL(__imp__sub_82C51C80) {
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
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82c3fc78
	ctx.lr = 0x82C51CA4;
	sub_82C3FC78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82c3fc78
	ctx.lr = 0x82C51CB0;
	sub_82C3FC78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82c3fc78
	ctx.lr = 0x82C51CBC;
	sub_82C3FC78(ctx, base);
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

__attribute__((alias("__imp__sub_82C51CD8"))) PPC_WEAK_FUNC(sub_82C51CD8);
PPC_FUNC_IMPL(__imp__sub_82C51CD8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r10,-31988
	ctx.r10.s64 = -2096365568;
	// addi r4,r10,17404
	ctx.r4.s64 = ctx.r10.s64 + 17404;
	// lwz r8,84(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C51D08"))) PPC_WEAK_FUNC(sub_82C51D08);
PPC_FUNC_IMPL(__imp__sub_82C51D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x82C51D10;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c51e30
	if (!ctx.cr6.gt) goto loc_82C51E30;
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
loc_82C51D44:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c51e00
	if (!ctx.cr6.gt) goto loc_82C51E00;
	// addi r31,r26,8
	ctx.r31.s64 = ctx.r26.s64 + 8;
loc_82C51D58:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82c54758
	ctx.lr = 0x82C51D60;
	sub_82C54758(ctx, base);
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r30,r10,r11
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82c54758
	ctx.lr = 0x82C51D74;
	sub_82C54758(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x82c51dec
	if (ctx.cr6.gt) goto loc_82C51DEC;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82c51dec
	if (ctx.cr6.lt) goto loc_82C51DEC;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c51de4
	if (ctx.cr6.eq) goto loc_82C51DE4;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82c54758
	ctx.lr = 0x82C51DA8;
	sub_82C54758(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82c54758
	ctx.lr = 0x82C51DB4;
	sub_82C54758(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x82c51dec
	if (ctx.cr6.gt) goto loc_82C51DEC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82c54758
	ctx.lr = 0x82C51DD0;
	sub_82C54758(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c54758
	ctx.lr = 0x82C51DDC;
	sub_82C54758(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82c51dec
	if (ctx.cr6.lt) goto loc_82C51DEC;
loc_82C51DE4:
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
loc_82C51DEC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c51d58
	if (ctx.cr6.lt) goto loc_82C51D58;
loc_82C51E00:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c51d44
	if (ctx.cr6.lt) goto loc_82C51D44;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c51e30
	if (ctx.cr6.eq) goto loc_82C51E30;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82c51e34
	if (!ctx.cr6.eq) goto loc_82C51E34;
loc_82C51E30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C51E34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51E40"))) PPC_WEAK_FUNC(sub_82C51E40);
PPC_FUNC_IMPL(__imp__sub_82C51E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C51E48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c51edc
	if (ctx.cr6.eq) goto loc_82C51EDC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c51edc
	if (ctx.cr6.eq) goto loc_82C51EDC;
	// bl 0x82c55450
	ctx.lr = 0x82C51E84;
	sub_82C55450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c51edc
	if (ctx.cr0.eq) goto loc_82C51EDC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c51d08
	ctx.lr = 0x82C51EA0;
	sub_82C51D08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c51edc
	if (ctx.cr0.eq) goto loc_82C51EDC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 * 12;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c51ee0
	if (!ctx.cr6.eq) goto loc_82C51EE0;
loc_82C51EDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C51EE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51EE8"))) PPC_WEAK_FUNC(sub_82C51EE8);
PPC_FUNC_IMPL(__imp__sub_82C51EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C51EF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82c51e40
	ctx.lr = 0x82C51F04;
	sub_82C51E40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c51f14
	if (!ctx.cr0.eq) goto loc_82C51F14;
loc_82C51F0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c51fc0
	goto loc_82C51FC0;
loc_82C51F14:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c51f38
	if (ctx.cr6.eq) goto loc_82C51F38;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c51f3c
	if (!ctx.cr6.eq) goto loc_82C51F3C;
loc_82C51F38:
	// li r9,2
	ctx.r9.s64 = 2;
loc_82C51F3C:
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// rlwinm r8,r11,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// rlwinm. r11,r8,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c51fa4
	if (ctx.cr0.eq) goto loc_82C51FA4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82c51fa4
	if (ctx.cr6.eq) goto loc_82C51FA4;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82c51f0c
	if (!ctx.cr6.eq) goto loc_82C51F0C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82c51f0c
	if (!ctx.cr6.eq) goto loc_82C51F0C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82c51f0c
	if (!ctx.cr6.eq) goto loc_82C51F0C;
loc_82C51FA4:
	// rlwinm. r11,r8,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c51fbc
	if (ctx.cr0.eq) goto loc_82C51FBC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c51fc0
	if (!ctx.cr6.eq) goto loc_82C51FC0;
loc_82C51FBC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C51FC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C51FC8"))) PPC_WEAK_FUNC(sub_82C51FC8);
PPC_FUNC_IMPL(__imp__sub_82C51FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c498
	ctx.lr = 0x82C51FD0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// bl 0x82c51ee8
	ctx.lr = 0x82C51FF0;
	sub_82C51EE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c52000
	if (!ctx.cr0.eq) goto loc_82C52000;
loc_82C51FF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c52290
	goto loc_82C52290;
loc_82C52000:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 * 12;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,12(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r21,16(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r25,20(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r24,24(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 * 12;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// divw r28,r8,r11
	ctx.r28.s32 = ctx.r8.s32 / ctx.r11.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r11,0
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// mullw r20,r7,r11
	ctx.r20.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// twlgei r9,-1
	// mullw r19,r10,r11
	ctx.r19.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82c52c98
	ctx.lr = 0x82C52068;
	sub_82C52C98(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r10,r30,r27
	ctx.r10.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c52c98
	ctx.lr = 0x82C5208C;
	sub_82C52C98(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82c52df8
	ctx.lr = 0x82C520BC;
	sub_82C52DF8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// bl 0x82c42a70
	ctx.lr = 0x82C520C4;
	sub_82C42A70(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C520DC;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c41a30
	ctx.lr = 0x82C520E8;
	sub_82C41A30(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c52850
	ctx.lr = 0x82C520F8;
	sub_82C52850(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82c5220c
	if (ctx.cr6.eq) goto loc_82C5220C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c52c50
	ctx.lr = 0x82C52108;
	sub_82C52C50(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r30,r27
	ctx.r10.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c52c50
	ctx.lr = 0x82C52128;
	sub_82C52C50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r29,r4
	ctx.r11.u64 = ctx.r29.u64 + ctx.r4.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82c428e0
	ctx.lr = 0x82C52168;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c41a30
	ctx.lr = 0x82C52174;
	sub_82C41A30(ctx, base);
	// mr. r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq 0x82c5220c
	if (ctx.cr0.eq) goto loc_82C5220C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c52c50
	ctx.lr = 0x82C52184;
	sub_82C52C50(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mullw r11,r19,r28
	ctx.r11.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r28.s32);
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r10,r20,r28
	ctx.r10.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r28.s32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r9,r28
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// add r9,r29,r27
	ctx.r9.u64 = ctx.r29.u64 + ctx.r27.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r29,r7,r11
	ctx.r29.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r26,r9,r10
	ctx.r26.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r31,r10,r8
	ctx.r31.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bl 0x82c52c50
	ctx.lr = 0x82C521E0;
	sub_82C52C50(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C521F8;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c41a30
	ctx.lr = 0x82C52204;
	sub_82C41A30(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne 0x82c52228
	if (!ctx.cr0.eq) goto loc_82C52228;
loc_82C5220C:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C52214;
	sub_82C3FC28(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C5221C;
	sub_82C3FC28(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C52224;
	sub_82C3FC28(ctx, base);
	// b 0x82c51ff8
	goto loc_82C51FF8;
loc_82C52228:
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r5,r11,7040
	ctx.r5.s64 = ctx.r11.s64 + 7040;
	// addi r4,r10,26952
	ctx.r4.s64 = ctx.r10.s64 + 26952;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82c55cf0
	ctx.lr = 0x82C52240;
	sub_82C55CF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r18,8
	ctx.r3.s64 = ctx.r18.s64 + 8;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r22,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
	// stw r17,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r17.u32);
	// stw r18,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r18.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r20,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r20.u32);
	// stw r19,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r19.u32);
	// bl 0x82c3ffc8
	ctx.lr = 0x82C5226C;
	sub_82C3FFC8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r17,8
	ctx.r4.s64 = ctx.r17.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c40108
	ctx.lr = 0x82C5227C;
	sub_82C40108(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r22,8
	ctx.r4.s64 = ctx.r22.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c40108
	ctx.lr = 0x82C5228C;
	sub_82C40108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C52290:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82d5c4e8
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C52298"))) PPC_WEAK_FUNC(sub_82C52298);
PPC_FUNC_IMPL(__imp__sub_82C52298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,26968
	ctx.r4.s64 = ctx.r11.s64 + 26968;
	// b 0x82c41f78
	sub_82C41F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C522A8"))) PPC_WEAK_FUNC(sub_82C522A8);
PPC_FUNC_IMPL(__imp__sub_82C522A8) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,26968
	ctx.r4.s64 = ctx.r11.s64 + 26968;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82c41f78
	ctx.lr = 0x82C522CC;
	sub_82C41F78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42018
	ctx.lr = 0x82C522D8;
	sub_82C42018(ctx, base);
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

__attribute__((alias("__imp__sub_82C522F0"))) PPC_WEAK_FUNC(sub_82C522F0);
PPC_FUNC_IMPL(__imp__sub_82C522F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C522F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C52318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C52338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C52340"))) PPC_WEAK_FUNC(sub_82C52340);
PPC_FUNC_IMPL(__imp__sub_82C52340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82C52348;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c52c98
	ctx.lr = 0x82C52364;
	sub_82C52C98(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c52c98
	ctx.lr = 0x82C52374;
	sub_82C52C98(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C5238C;
	sub_82C428E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C52398"))) PPC_WEAK_FUNC(sub_82C52398);
PPC_FUNC_IMPL(__imp__sub_82C52398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82C523A0;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C523D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C523F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C523F8"))) PPC_WEAK_FUNC(sub_82C523F8);
PPC_FUNC_IMPL(__imp__sub_82C523F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82C52400;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c52c98
	ctx.lr = 0x82C5241C;
	sub_82C52C98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c52c98
	ctx.lr = 0x82C5242C;
	sub_82C52C98(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C52444;
	sub_82C428E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C52450"))) PPC_WEAK_FUNC(sub_82C52450);
PPC_FUNC_IMPL(__imp__sub_82C52450) {
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
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82c3fc28
	ctx.lr = 0x82C5246C;
	sub_82C3FC28(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82c3fc28
	ctx.lr = 0x82C52474;
	sub_82C3FC28(ctx, base);
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

__attribute__((alias("__imp__sub_82C52488"))) PPC_WEAK_FUNC(sub_82C52488);
PPC_FUNC_IMPL(__imp__sub_82C52488) {
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
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82c3fc78
	ctx.lr = 0x82C524AC;
	sub_82C3FC78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82c3fc78
	ctx.lr = 0x82C524B8;
	sub_82C3FC78(ctx, base);
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

__attribute__((alias("__imp__sub_82C524D0"))) PPC_WEAK_FUNC(sub_82C524D0);
PPC_FUNC_IMPL(__imp__sub_82C524D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31988
	ctx.r10.s64 = -2096365568;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,17488
	ctx.r4.s64 = ctx.r10.s64 + 17488;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r6,68(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C52500"))) PPC_WEAK_FUNC(sub_82C52500);
PPC_FUNC_IMPL(__imp__sub_82C52500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C52508;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c52634
	if (ctx.cr6.eq) goto loc_82C52634;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c52634
	if (!ctx.cr6.gt) goto loc_82C52634;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c52590
	if (!ctx.cr6.eq) goto loc_82C52590;
	// bl 0x82c55450
	ctx.lr = 0x82C52554;
	sub_82C55450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c52590
	if (!ctx.cr0.eq) goto loc_82C52590;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,9112
	ctx.r11.s64 = ctx.r11.s64 + 9112;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82c554f8
	ctx.lr = 0x82C52588;
	sub_82C554F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c5262c
	if (!ctx.cr0.eq) goto loc_82C5262C;
loc_82C52590:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c525e4
	if (ctx.cr6.eq) goto loc_82C525E4;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r11,r11,9112
	ctx.r11.s64 = ctx.r11.s64 + 9112;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c525e4
	if (!ctx.cr6.eq) goto loc_82C525E4;
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c525e4
	if (!ctx.cr0.eq) goto loc_82C525E4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c552c0
	ctx.lr = 0x82C525CC;
	sub_82C552C0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x82c525e4
	if (ctx.cr6.gt) goto loc_82C525E4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c55340
	ctx.lr = 0x82C525DC;
	sub_82C55340(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x82c5262c
	if (ctx.cr6.gt) goto loc_82C5262C;
loc_82C525E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c52634
	if (ctx.cr6.eq) goto loc_82C52634;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r11,r11,8944
	ctx.r11.s64 = ctx.r11.s64 + 8944;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c52634
	if (!ctx.cr6.eq) goto loc_82C52634;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c55340
	ctx.lr = 0x82C52614;
	sub_82C55340(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x82c52634
	if (ctx.cr6.gt) goto loc_82C52634;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c552c0
	ctx.lr = 0x82C52624;
	sub_82C552C0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82c52634
	if (!ctx.cr6.gt) goto loc_82C52634;
loc_82C5262C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c52638
	goto loc_82C52638;
loc_82C52634:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C52638:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C52640"))) PPC_WEAK_FUNC(sub_82C52640);
PPC_FUNC_IMPL(__imp__sub_82C52640) {
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
	// bl 0x82c52500
	ctx.lr = 0x82C52660;
	sub_82C52500(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c5268c
	if (ctx.cr0.eq) goto loc_82C5268C;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c52688
	if (ctx.cr0.eq) goto loc_82C52688;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c5268c
	if (!ctx.cr6.eq) goto loc_82C5268C;
loc_82C52688:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C5268C:
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

__attribute__((alias("__imp__sub_82C526A8"))) PPC_WEAK_FUNC(sub_82C526A8);
PPC_FUNC_IMPL(__imp__sub_82C526A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x82C526B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82c52640
	ctx.lr = 0x82C526C8;
	sub_82C52640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c526d8
	if (!ctx.cr0.eq) goto loc_82C526D8;
loc_82C526D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c527ac
	goto loc_82C527AC;
loc_82C526D8:
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r26,20(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r25,16(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r24,12(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c52df8
	ctx.lr = 0x82C526F4;
	sub_82C52DF8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82c42a70
	ctx.lr = 0x82C526FC;
	sub_82C42A70(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x82c428e0
	ctx.lr = 0x82C52714;
	sub_82C428E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c41a30
	ctx.lr = 0x82C52720;
	sub_82C41A30(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82c5275c
	if (ctx.cr0.eq) goto loc_82C5275C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C5273C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82c41a80
	ctx.lr = 0x82C52754;
	sub_82C41A80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82c52770
	if (!ctx.cr0.eq) goto loc_82C52770;
loc_82C5275C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C52764;
	sub_82C3FC28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C5276C;
	sub_82C3FC28(ctx, base);
	// b 0x82c526d0
	goto loc_82C526D0;
loc_82C52770:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r4,r11,27004
	ctx.r4.s64 = ctx.r11.s64 + 27004;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82c55cf0
	ctx.lr = 0x82C52788;
	sub_82C55CF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// bl 0x82c40078
	ctx.lr = 0x82C527A8;
	sub_82C40078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C527AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C527B8"))) PPC_WEAK_FUNC(sub_82C527B8);
PPC_FUNC_IMPL(__imp__sub_82C527B8) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,27020
	ctx.r4.s64 = ctx.r11.s64 + 27020;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82c41f78
	ctx.lr = 0x82C527DC;
	sub_82C41F78(ctx, base);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82C527F8"))) PPC_WEAK_FUNC(sub_82C527F8);
PPC_FUNC_IMPL(__imp__sub_82C527F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82C52800;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,27020
	ctx.r29.s64 = ctx.r11.s64 + 27020;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
loc_82C52818:
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c41f78
	ctx.lr = 0x82C52828;
	sub_82C41F78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r28.u32);
	// bl 0x82c42018
	ctx.lr = 0x82C52838;
	sub_82C42018(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82c52818
	if (!ctx.cr0.eq) goto loc_82C52818;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C52850"))) PPC_WEAK_FUNC(sub_82C52850);
PPC_FUNC_IMPL(__imp__sub_82C52850) {
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
	// bl 0x82c52928
	ctx.lr = 0x82C52868;
	sub_82C52928(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c52928
	ctx.lr = 0x82C52870;
	sub_82C52928(ctx, base);
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

__attribute__((alias("__imp__sub_82C52888"))) PPC_WEAK_FUNC(sub_82C52888);
PPC_FUNC_IMPL(__imp__sub_82C52888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C52890;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82c52928
	ctx.lr = 0x82C528A4;
	sub_82C52928(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c52928
	ctx.lr = 0x82C528AC;
	sub_82C52928(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c52928
	ctx.lr = 0x82C528B4;
	sub_82C52928(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c52928
	ctx.lr = 0x82C528BC;
	sub_82C52928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C528C8"))) PPC_WEAK_FUNC(sub_82C528C8);
PPC_FUNC_IMPL(__imp__sub_82C528C8) {
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
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c52904
	if (ctx.cr6.eq) goto loc_82C52904;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// ble cr6,0x82c52904
	if (!ctx.cr6.gt) goto loc_82C52904;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82c52908
	goto loc_82C52908;
loc_82C52904:
	// li r3,16
	ctx.r3.s64 = 16;
loc_82C52908:
	// bl 0x82c3fd60
	ctx.lr = 0x82C5290C;
	sub_82C3FD60(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82C52928"))) PPC_WEAK_FUNC(sub_82C52928);
PPC_FUNC_IMPL(__imp__sub_82C52928) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c3fdb8
	sub_82C3FDB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C52930"))) PPC_WEAK_FUNC(sub_82C52930);
PPC_FUNC_IMPL(__imp__sub_82C52930) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82c52954
	if (!ctx.cr6.eq) goto loc_82C52954;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C52954:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82C52960:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mullw r3,r9,r3
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// bne 0x82c52960
	if (!ctx.cr0.eq) goto loc_82C52960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C52978"))) PPC_WEAK_FUNC(sub_82C52978);
PPC_FUNC_IMPL(__imp__sub_82C52978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82C52980;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82c401f8
	ctx.lr = 0x82C52994;
	sub_82C401F8(ctx, base);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82c529f0
	if (ctx.cr6.eq) goto loc_82C529F0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c529f0
	if (!ctx.cr6.gt) goto loc_82C529F0;
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
loc_82C529B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x82c40250
	ctx.lr = 0x82C529C4;
	sub_82C40250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x82c40250
	ctx.lr = 0x82C529D0;
	sub_82C40250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c40250
	ctx.lr = 0x82C529DC;
	sub_82C40250(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c529b8
	if (ctx.cr6.lt) goto loc_82C529B8;
loc_82C529F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C529F8"))) PPC_WEAK_FUNC(sub_82C529F8);
PPC_FUNC_IMPL(__imp__sub_82C529F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c52a20
	if (!ctx.cr6.eq) goto loc_82C52A20;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x82c52a34
	goto loc_82C52A34;
loc_82C52A20:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82C52A34:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C52A40"))) PPC_WEAK_FUNC(sub_82C52A40);
PPC_FUNC_IMPL(__imp__sub_82C52A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82C52A48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// beq cr6,0x82c52af8
	if (ctx.cr6.eq) goto loc_82C52AF8;
	// addi r28,r11,18348
	ctx.r28.s64 = ctx.r11.s64 + 18348;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C52A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c52aec
	if (!ctx.cr6.gt) goto loc_82C52AEC;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r31,r27,8
	ctx.r31.s64 = ctx.r27.s64 + 8;
	// addi r25,r11,-27664
	ctx.r25.s64 = ctx.r11.s64 + -27664;
loc_82C52AA4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bne cr6,0x82c52ab4
	if (!ctx.cr6.eq) goto loc_82C52AB4;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
loc_82C52AB4:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C52AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c52aa4
	if (ctx.cr6.lt) goto loc_82C52AA4;
loc_82C52AEC:
	// addi r4,r28,24
	ctx.r4.s64 = ctx.r28.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82c52b00
	goto loc_82C52B00;
loc_82C52AF8:
	// addi r11,r11,18348
	ctx.r11.s64 = ctx.r11.s64 + 18348;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
loc_82C52B00:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C52B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C52B18"))) PPC_WEAK_FUNC(sub_82C52B18);
PPC_FUNC_IMPL(__imp__sub_82C52B18) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C52B20"))) PPC_WEAK_FUNC(sub_82C52B20);
PPC_FUNC_IMPL(__imp__sub_82C52B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82C52B28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c52bdc
	if (ctx.cr6.eq) goto loc_82C52BDC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82c52b58
	if (!ctx.cr6.eq) goto loc_82C52B58;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x82c52bdc
	goto loc_82C52BDC;
loc_82C52B58:
	// ble cr6,0x82c52bdc
	if (!ctx.cr6.gt) goto loc_82C52BDC;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bne cr6,0x82c52ba0
	if (!ctx.cr6.eq) goto loc_82C52BA0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82c52bdc
	if (!ctx.cr6.gt) goto loc_82C52BDC;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lfs f0,21348(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
loc_82C52B88:
	// stfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne 0x82c52b88
	if (!ctx.cr0.eq) goto loc_82C52B88;
	// b 0x82c52bdc
	goto loc_82C52BDC;
loc_82C52BA0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82c52bdc
	if (!ctx.cr6.gt) goto loc_82C52BDC;
	// addi r29,r4,-1
	ctx.r29.s64 = ctx.r4.s64 + -1;
	// addi r28,r3,12
	ctx.r28.s64 = ctx.r3.s64 + 12;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r26,r5,r6
	ctx.r26.s64 = ctx.r6.s64 - ctx.r5.s64;
loc_82C52BBC:
	// add r6,r31,r26
	ctx.r6.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c52b20
	ctx.lr = 0x82C52BD0;
	sub_82C52B20(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x82c52bbc
	if (!ctx.cr0.eq) goto loc_82C52BBC;
loc_82C52BDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C52BE8"))) PPC_WEAK_FUNC(sub_82C52BE8);
PPC_FUNC_IMPL(__imp__sub_82C52BE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82c52b20
	sub_82C52B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C52C00"))) PPC_WEAK_FUNC(sub_82C52C00);
PPC_FUNC_IMPL(__imp__sub_82C52C00) {
	PPC_FUNC_PROLOGUE();
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82C52C24:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x82c52c24
	if (!ctx.cr0.eq) goto loc_82C52C24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C52C50"))) PPC_WEAK_FUNC(sub_82C52C50);
PPC_FUNC_IMPL(__imp__sub_82C52C50) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c528c8
	ctx.lr = 0x82C52C6C;
	sub_82C528C8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r6,4
	ctx.r3.s64 = ctx.r6.s64 + 4;
	// bl 0x82c52c00
	ctx.lr = 0x82C52C80;
	sub_82C52C00(ctx, base);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
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

__attribute__((alias("__imp__sub_82C52C98"))) PPC_WEAK_FUNC(sub_82C52C98);
PPC_FUNC_IMPL(__imp__sub_82C52C98) {
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
	// bl 0x82c52c50
	ctx.lr = 0x82C52CB0;
	sub_82C52C50(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82c52d24
	if (ctx.cr6.eq) goto loc_82C52D24;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82c52cfc
	if (!ctx.cr6.eq) goto loc_82C52CFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c52d24
	if (!ctx.cr6.gt) goto loc_82C52D24;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82C52CDC:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82c52cdc
	if (ctx.cr6.lt) goto loc_82C52CDC;
	// b 0x82c52d24
	goto loc_82C52D24;
loc_82C52CFC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c52d24
	if (!ctx.cr6.gt) goto loc_82C52D24;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_82C52D08:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82c52d08
	if (ctx.cr6.lt) goto loc_82C52D08;
loc_82C52D24:
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

__attribute__((alias("__imp__sub_82C52D38"))) PPC_WEAK_FUNC(sub_82C52D38);
PPC_FUNC_IMPL(__imp__sub_82C52D38) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x82c528c8
	ctx.lr = 0x82C52D60;
	sub_82C528C8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r6,4
	ctx.r3.s64 = ctx.r6.s64 + 4;
	// bl 0x82c52c00
	ctx.lr = 0x82C52D74;
	sub_82C52C00(ctx, base);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mulli r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 * 12;
	// subf r5,r30,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82c52c00
	ctx.lr = 0x82C52D94;
	sub_82C52C00(ctx, base);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
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

__attribute__((alias("__imp__sub_82C52DB0"))) PPC_WEAK_FUNC(sub_82C52DB0);
PPC_FUNC_IMPL(__imp__sub_82C52DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C52DB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82c528c8
	ctx.lr = 0x82C52DD0;
	sub_82C528C8(ctx, base);
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r6,4
	ctx.r3.s64 = ctx.r6.s64 + 4;
	// bl 0x82c52c00
	ctx.lr = 0x82C52DEC;
	sub_82C52C00(ctx, base);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C52DF8"))) PPC_WEAK_FUNC(sub_82C52DF8);
PPC_FUNC_IMPL(__imp__sub_82C52DF8) {
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
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r3,r11,65535
	ctx.r3.u64 = ctx.r11.u64 | 65535;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82c52e74
	if (ctx.cr6.eq) goto loc_82C52E74;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82c52e74
	if (ctx.cr6.eq) goto loc_82C52E74;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82c528c8
	ctx.lr = 0x82C52E3C;
	sub_82C528C8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r6,4
	ctx.r3.s64 = ctx.r6.s64 + 4;
	// bl 0x82c52c00
	ctx.lr = 0x82C52E50;
	sub_82C52C00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82c52c00
	ctx.lr = 0x82C52E6C;
	sub_82C52C00(ctx, base);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x82c52e78
	goto loc_82C52E78;
loc_82C52E74:
	// bl 0x82c528c8
	ctx.lr = 0x82C52E78;
	sub_82C528C8(ctx, base);
loc_82C52E78:
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

__attribute__((alias("__imp__sub_82C52E90"))) PPC_WEAK_FUNC(sub_82C52E90);
PPC_FUNC_IMPL(__imp__sub_82C52E90) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82c52ea0
	if (!ctx.cr6.lt) goto loc_82C52EA0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82C52EA0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C52EB0"))) PPC_WEAK_FUNC(sub_82C52EB0);
PPC_FUNC_IMPL(__imp__sub_82C52EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82C52EB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c54758
	ctx.lr = 0x82C52ECC;
	sub_82C54758(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c54758
	ctx.lr = 0x82C52ED8;
	sub_82C54758(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c54758
	ctx.lr = 0x82C52EE4;
	sub_82C54758(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82c54758
	ctx.lr = 0x82C52EF0;
	sub_82C54758(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c54748
	ctx.lr = 0x82C52F00;
	sub_82C54748(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c54748
	ctx.lr = 0x82C52F10;
	sub_82C54748(ctx, base);
	// cmpw cr6,r25,r3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82c52f28
	if (ctx.cr6.eq) goto loc_82C52F28;
	// subf. r11,r25,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r25.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82C52F1C:
	// bge 0x82c52f58
	if (!ctx.cr0.lt) goto loc_82C52F58;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82c52f64
	goto loc_82C52F64;
loc_82C52F28:
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82c52f38
	if (ctx.cr6.eq) goto loc_82C52F38;
	// subf. r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82c52f1c
	goto loc_82C52F1C;
loc_82C52F38:
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82c52f48
	if (ctx.cr6.eq) goto loc_82C52F48;
	// subf. r11,r27,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r27.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82c52f1c
	goto loc_82C52F1C;
loc_82C52F48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82c52f1c
	goto loc_82C52F1C;
loc_82C52F58:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82C52F64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C52F70"))) PPC_WEAK_FUNC(sub_82C52F70);
PPC_FUNC_IMPL(__imp__sub_82C52F70) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82c52fb8
	if (!ctx.cr0.gt) goto loc_82C52FB8;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
loc_82C52F9C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82c52fac
	if (ctx.cr6.eq) goto loc_82C52FAC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82C52FAC:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82c52f9c
	if (!ctx.cr0.eq) goto loc_82C52F9C;
loc_82C52FB8:
	// bl 0x82c528c8
	ctx.lr = 0x82C52FBC;
	sub_82C528C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c5303c
	if (!ctx.cr6.gt) goto loc_82C5303C;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82C52FE0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82c5300c
	if (ctx.cr6.eq) goto loc_82C5300C;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82C5300C:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82c52fe0
	if (ctx.cr6.lt) goto loc_82C52FE0;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82c5303c
	if (!ctx.cr6.gt) goto loc_82C5303C;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r6,r11,11952
	ctx.r6.s64 = ctx.r11.s64 + 11952;
	// bl 0x82d5e1e8
	ctx.lr = 0x82C5303C;
	sub_82D5E1E8(ctx, base);
loc_82C5303C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82C53058"))) PPC_WEAK_FUNC(sub_82C53058);
PPC_FUNC_IMPL(__imp__sub_82C53058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82c53088
	if (!ctx.cr6.eq) goto loc_82C53088;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82C53088:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C53090"))) PPC_WEAK_FUNC(sub_82C53090);
PPC_FUNC_IMPL(__imp__sub_82C53090) {
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
	// bl 0x82c52930
	ctx.lr = 0x82C530AC;
	sub_82C52930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c530c4
	if (!ctx.cr0.eq) goto loc_82C530C4;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// bl 0x82c528c8
	ctx.lr = 0x82C530C0;
	sub_82C528C8(ctx, base);
	// b 0x82c531ec
	goto loc_82C531EC;
loc_82C530C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c52f70
	ctx.lr = 0x82C530CC;
	sub_82C52F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x82c530e0
	if (!ctx.cr6.lt) goto loc_82C530E0;
	// b 0x82c531ec
	goto loc_82C531EC;
loc_82C530E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82c53134
	if (!ctx.cr6.gt) goto loc_82C53134;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
loc_82C530F4:
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82c53124
	if (!ctx.cr6.eq) goto loc_82C53124;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82c53128
	if (ctx.cr6.eq) goto loc_82C53128;
loc_82C53124:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82C53128:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne 0x82c530f4
	if (!ctx.cr0.eq) goto loc_82C530F4;
loc_82C53134:
	// bl 0x82c528c8
	ctx.lr = 0x82C53138;
	sub_82C528C8(ctx, base);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82c531e0
	if (!ctx.cr6.gt) goto loc_82C531E0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_82C53174:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82c531b0
	if (!ctx.cr6.eq) goto loc_82C531B0;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82c531b0
	if (!ctx.cr6.eq) goto loc_82C531B0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// b 0x82c531b8
	goto loc_82C531B8;
loc_82C531B0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82C531B8:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82c53174
	if (ctx.cr6.lt) goto loc_82C53174;
loc_82C531E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c52928
	ctx.lr = 0x82C531E8;
	sub_82C52928(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82C531EC:
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

__attribute__((alias("__imp__sub_82C53208"))) PPC_WEAK_FUNC(sub_82C53208);
PPC_FUNC_IMPL(__imp__sub_82C53208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82C53210;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c52db0
	ctx.lr = 0x82C5322C;
	sub_82C52DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r5,r30,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bl 0x82c52db0
	ctx.lr = 0x82C53248;
	sub_82C52DB0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C53258"))) PPC_WEAK_FUNC(sub_82C53258);
PPC_FUNC_IMPL(__imp__sub_82C53258) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c53270
	if (ctx.cr6.eq) goto loc_82C53270;
loc_82C53268:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C53270:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c532dc
	if (ctx.cr6.eq) goto loc_82C532DC;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82c532dc
	if (!ctx.cr6.gt) goto loc_82C532DC;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82C53298:
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82c53268
	if (!ctx.cr6.eq) goto loc_82C53268;
	// lwz r6,-4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82c53268
	if (!ctx.cr6.eq) goto loc_82C53268;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82c53268
	if (!ctx.cr6.eq) goto loc_82C53268;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82c53298
	if (ctx.cr6.lt) goto loc_82C53298;
loc_82C532DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C532E8"))) PPC_WEAK_FUNC(sub_82C532E8);
PPC_FUNC_IMPL(__imp__sub_82C532E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82C532F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82c52df8
	ctx.lr = 0x82C532F8;
	sub_82C52DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c52c98
	ctx.lr = 0x82C53304;
	sub_82C52C98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c52c98
	ctx.lr = 0x82C53314;
	sub_82C52C98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c53090
	ctx.lr = 0x82C53320;
	sub_82C53090(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c53090
	ctx.lr = 0x82C5332C;
	sub_82C53090(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82c53258
	ctx.lr = 0x82C5333C;
	sub_82C53258(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c52928
	ctx.lr = 0x82C53348;
	sub_82C52928(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c52888
	ctx.lr = 0x82C5335C;
	sub_82C52888(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C53368"))) PPC_WEAK_FUNC(sub_82C53368);
PPC_FUNC_IMPL(__imp__sub_82C53368) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C53380"))) PPC_WEAK_FUNC(sub_82C53380);
PPC_FUNC_IMPL(__imp__sub_82C53380) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c52850
	ctx.lr = 0x82C533A0;
	sub_82C52850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3fdb8
	ctx.lr = 0x82C533A8;
	sub_82C3FDB8(ctx, base);
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

__attribute__((alias("__imp__sub_82C533C0"))) PPC_WEAK_FUNC(sub_82C533C0);
PPC_FUNC_IMPL(__imp__sub_82C533C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C533C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82c533f8
	if (!ctx.cr6.gt) goto loc_82C533F8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_82C533E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c401f8
	ctx.lr = 0x82C533EC;
	sub_82C401F8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82c533e0
	if (!ctx.cr0.eq) goto loc_82C533E0;
loc_82C533F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C53400"))) PPC_WEAK_FUNC(sub_82C53400);
PPC_FUNC_IMPL(__imp__sub_82C53400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82C53408;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,18388
	ctx.r4.s64 = ctx.r11.s64 + 18388;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c401a8
	ctx.lr = 0x82C53424;
	sub_82C401A8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82c401f8
	ctx.lr = 0x82C53440;
	sub_82C401F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82c53470
	if (!ctx.cr0.gt) goto loc_82C53470;
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82C53458:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82c401f8
	ctx.lr = 0x82C53464;
	sub_82C401F8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82c53458
	if (!ctx.cr0.eq) goto loc_82C53458;
loc_82C53470:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82c52b18
	ctx.lr = 0x82C53478;
	sub_82C52B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c401f8
	ctx.lr = 0x82C53484;
	sub_82C401F8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82c52b18
	ctx.lr = 0x82C5348C;
	sub_82C52B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c401f8
	ctx.lr = 0x82C53498;
	sub_82C401F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c52978
	ctx.lr = 0x82C534A4;
	sub_82C52978(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c52978
	ctx.lr = 0x82C534B0;
	sub_82C52978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C534B8"))) PPC_WEAK_FUNC(sub_82C534B8);
PPC_FUNC_IMPL(__imp__sub_82C534B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82C534C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c53560
	if (ctx.cr6.eq) goto loc_82C53560;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82c534ec
	if (!ctx.cr6.eq) goto loc_82C534EC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x82c53560
	goto loc_82C53560;
loc_82C534EC:
	// ble cr6,0x82c53560
	if (!ctx.cr6.gt) goto loc_82C53560;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bne cr6,0x82c5352c
	if (!ctx.cr6.eq) goto loc_82C5352C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82c53560
	if (!ctx.cr6.gt) goto loc_82C53560;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lfs f0,21348(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
loc_82C53518:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne 0x82c53518
	if (!ctx.cr0.eq) goto loc_82C53518;
	// b 0x82c53560
	goto loc_82C53560;
loc_82C5352C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82c53560
	if (!ctx.cr6.gt) goto loc_82C53560;
	// addi r29,r4,-1
	ctx.r29.s64 = ctx.r4.s64 + -1;
	// addi r28,r3,12
	ctx.r28.s64 = ctx.r3.s64 + 12;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_82C53544:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c534b8
	ctx.lr = 0x82C53554;
	sub_82C534B8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// bne 0x82c53544
	if (!ctx.cr0.eq) goto loc_82C53544;
loc_82C53560:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C53568"))) PPC_WEAK_FUNC(sub_82C53568);
PPC_FUNC_IMPL(__imp__sub_82C53568) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82c534b8
	sub_82C534B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C53578"))) PPC_WEAK_FUNC(sub_82C53578);
PPC_FUNC_IMPL(__imp__sub_82C53578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,27384
	ctx.r11.s64 = ctx.r11.s64 + 27384;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C53590"))) PPC_WEAK_FUNC(sub_82C53590);
PPC_FUNC_IMPL(__imp__sub_82C53590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82C53598;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// srawi r26,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 2;
	// bl 0x82c52b18
	ctx.lr = 0x82C535C0;
	sub_82C52B18(ctx, base);
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r27,r11,18420
	ctx.r27.s64 = ctx.r11.s64 + 18420;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C535EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c53634
	if (!ctx.cr6.gt) goto loc_82C53634;
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
loc_82C53604:
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C5361C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c53604
	if (ctx.cr6.lt) goto loc_82C53604;
loc_82C53634:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C53648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C53650"))) PPC_WEAK_FUNC(sub_82C53650);
PPC_FUNC_IMPL(__imp__sub_82C53650) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c52df8
	ctx.lr = 0x82C53670;
	sub_82C52DF8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82c534b8
	ctx.lr = 0x82C53684;
	sub_82C534B8(ctx, base);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82c52928
	ctx.lr = 0x82C5368C;
	sub_82C52928(ctx, base);
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

__attribute__((alias("__imp__sub_82C536A0"))) PPC_WEAK_FUNC(sub_82C536A0);
PPC_FUNC_IMPL(__imp__sub_82C536A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82c536e0
	if (ctx.cr6.gt) goto loc_82C536E0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82c536e0
	if (ctx.cr6.eq) goto loc_82C536E0;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// beq cr6,0x82c536e0
	if (ctx.cr6.eq) goto loc_82C536E0;
	// addi r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -9;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82c536d8
	if (ctx.cr6.gt) goto loc_82C536D8;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// beq cr6,0x82c536d8
	if (ctx.cr6.eq) goto loc_82C536D8;
	// cmpwi cr6,r4,14
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 14, ctx.xer);
	// bne cr6,0x82c536e0
	if (!ctx.cr6.eq) goto loc_82C536E0;
loc_82C536D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C536E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C536E8"))) PPC_WEAK_FUNC(sub_82C536E8);
PPC_FUNC_IMPL(__imp__sub_82C536E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4ac
	ctx.lr = 0x82C536F0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82c53728
	if (!ctx.cr6.eq) goto loc_82C53728;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// bl 0x82c532e8
	ctx.lr = 0x82C53718;
	sub_82C532E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c53728
	if (!ctx.cr0.eq) goto loc_82C53728;
	// bl 0x82c3fd50
	ctx.lr = 0x82C53724;
	sub_82C3FD50(ctx, base);
	// b 0x82c53964
	goto loc_82C53964;
loc_82C53728:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82c53778
	if (!ctx.cr0.gt) goto loc_82C53778;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82C53744:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82c536a0
	ctx.lr = 0x82C53750;
	sub_82C536A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c5375c
	if (ctx.cr0.eq) goto loc_82C5375C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82C5375C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// bne 0x82c53744
	if (!ctx.cr0.eq) goto loc_82C53744;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// bgt cr6,0x82c5377c
	if (ctx.cr6.gt) goto loc_82C5377C;
loc_82C53778:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C5377C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,27520
	ctx.r4.s64 = ctx.r11.s64 + 27520;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c3fcc8
	ctx.lr = 0x82C53790;
	sub_82C3FCC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c528c8
	ctx.lr = 0x82C5379C;
	sub_82C528C8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c53824
	if (!ctx.cr6.gt) goto loc_82C53824;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
loc_82C537C4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82c536a0
	ctx.lr = 0x82C537D0;
	sub_82C536A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c5380c
	if (ctx.cr0.eq) goto loc_82C5380C;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
loc_82C5380C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c537c4
	if (ctx.cr6.lt) goto loc_82C537C4;
loc_82C53824:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// ble cr6,0x82c538ec
	if (!ctx.cr6.gt) goto loc_82C538EC;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x82c538d8
	if (!ctx.cr6.lt) goto loc_82C538D8;
loc_82C53840:
	// addi r30,r28,12
	ctx.r30.s64 = ctx.r28.s64 + 12;
	// addi r27,r29,4
	ctx.r27.s64 = ctx.r29.s64 + 4;
	// subf r24,r26,r25
	ctx.r24.s64 = ctx.r25.s64 - ctx.r26.s64;
loc_82C5384C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82c52eb0
	ctx.lr = 0x82C53864;
	sub_82C52EB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82c538c8
	if (!ctx.cr0.gt) goto loc_82C538C8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r28,r10
	ctx.r11.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82C538C8:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82c5384c
	if (!ctx.cr0.eq) goto loc_82C5384C;
loc_82C538D8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82c53840
	if (ctx.cr6.lt) goto loc_82C53840;
loc_82C538EC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82c53948
	if (!ctx.cr6.gt) goto loc_82C53948;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_82C53900:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x82c53938
	if (!ctx.cr6.eq) goto loc_82C53938;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x82c53930
	if (ctx.cr6.eq) goto loc_82C53930;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// beq cr6,0x82c53930
	if (ctx.cr6.eq) goto loc_82C53930;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x82c53938
	if (!ctx.cr6.eq) goto loc_82C53938;
loc_82C53930:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82C53938:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82c53900
	if (!ctx.cr0.eq) goto loc_82C53900;
loc_82C53948:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82c53090
	ctx.lr = 0x82C53950;
	sub_82C53090(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82C53964:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c4fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C53970"))) PPC_WEAK_FUNC(sub_82C53970);
PPC_FUNC_IMPL(__imp__sub_82C53970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C53978;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c536e8
	ctx.lr = 0x82C53988;
	sub_82C536E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c52850
	ctx.lr = 0x82C53998;
	sub_82C52850(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C539A8"))) PPC_WEAK_FUNC(sub_82C539A8);
PPC_FUNC_IMPL(__imp__sub_82C539A8) {
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
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// bl 0x82c536e8
	ctx.lr = 0x82C539C0;
	sub_82C536E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C539D0"))) PPC_WEAK_FUNC(sub_82C539D0);
PPC_FUNC_IMPL(__imp__sub_82C539D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C539D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c536e8
	ctx.lr = 0x82C539F0;
	sub_82C536E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c52850
	ctx.lr = 0x82C53A00;
	sub_82C52850(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C53A10"))) PPC_WEAK_FUNC(sub_82C53A10);
PPC_FUNC_IMPL(__imp__sub_82C53A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82C53A18;
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
	// bl 0x82c42a70
	ctx.lr = 0x82C53A2C;
	sub_82C42A70(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c536e8
	ctx.lr = 0x82C53A44;
	sub_82C536E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c52850
	ctx.lr = 0x82C53A54;
	sub_82C52850(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C53A60"))) PPC_WEAK_FUNC(sub_82C53A60);
PPC_FUNC_IMPL(__imp__sub_82C53A60) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c3fbc8
	ctx.lr = 0x82C53A78;
	sub_82C3FBC8(ctx, base);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82C53A90"))) PPC_WEAK_FUNC(sub_82C53A90);
PPC_FUNC_IMPL(__imp__sub_82C53A90) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r3,17
	ctx.r11.s64 = ctx.r3.s64 * 17;
	// add. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c53aa0
	if (!ctx.cr0.lt) goto loc_82C53AA0;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82C53AA0:
	// li r10,109
	ctx.r10.s64 = 109;
	// divw r10,r11,r10
	ctx.r10.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r10,r10,109
	ctx.r10.s64 = ctx.r10.s64 * 109;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C53AB8"))) PPC_WEAK_FUNC(sub_82C53AB8);
PPC_FUNC_IMPL(__imp__sub_82C53AB8) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82c53b0c
	if (!ctx.cr6.eq) goto loc_82C53B0C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C53AC8:
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82c53b24
	if (ctx.cr6.eq) goto loc_82C53B24;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// bgt cr6,0x82c53aec
	if (ctx.cr6.gt) goto loc_82C53AEC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// b 0x82c53b00
	goto loc_82C53B00;
loc_82C53AEC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c53b1c
	if (!ctx.cr6.eq) goto loc_82C53B1C;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82C53B00:
	// bne cr6,0x82c53b1c
	if (!ctx.cr6.eq) goto loc_82C53B1C;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_82C53B0C:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c53ac8
	if (ctx.cr6.eq) goto loc_82C53AC8;
loc_82C53B1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C53B24:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C53B40"))) PPC_WEAK_FUNC(sub_82C53B40);
PPC_FUNC_IMPL(__imp__sub_82C53B40) {
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
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82c53b98
	if (!ctx.cr6.eq) goto loc_82C53B98;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c53b98
	if (!ctx.cr6.eq) goto loc_82C53B98;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c53b98
	if (!ctx.cr6.eq) goto loc_82C53B98;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82c53b98
	if (ctx.cr6.gt) goto loc_82C53B98;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82c53ab8
	ctx.lr = 0x82C53B8C;
	sub_82C53AB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82c53b9c
	if (!ctx.cr0.eq) goto loc_82C53B9C;
loc_82C53B98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C53B9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C53BB0"))) PPC_WEAK_FUNC(sub_82C53BB0);
PPC_FUNC_IMPL(__imp__sub_82C53BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82C53BB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mulli r11,r31,17
	ctx.r11.s64 = ctx.r31.s64 * 17;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// add. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c53be0
	if (!ctx.cr0.lt) goto loc_82C53BE0;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82C53BE0:
	// li r9,109
	ctx.r9.s64 = 109;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r10,r10,-27656
	ctx.r10.s64 = ctx.r10.s64 + -27656;
	// mulli r9,r9,109
	ctx.r9.s64 = ctx.r9.s64 * 109;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82c53c28
	goto loc_82C53C28;
loc_82C53C04:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82c53b40
	ctx.lr = 0x82C53C1C;
	sub_82C53B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c53c30
	if (!ctx.cr0.eq) goto loc_82C53C30;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_82C53C28:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82c53c04
	if (!ctx.cr0.eq) goto loc_82C53C04;
loc_82C53C30:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C53C40"))) PPC_WEAK_FUNC(sub_82C53C40);
PPC_FUNC_IMPL(__imp__sub_82C53C40) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c53c90
	goto loc_82C53C90;
loc_82C53C48:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82c53c88
	if (ctx.cr6.lt) goto loc_82C53C88;
	// beq cr6,0x82c53c80
	if (ctx.cr6.eq) goto loc_82C53C80;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82c53c70
	if (ctx.cr6.eq) goto loc_82C53C70;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x82c53c8c
	if (!ctx.cr6.eq) goto loc_82C53C8C;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82c53c8c
	goto loc_82C53C8C;
loc_82C53C70:
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x82c53c8c
	goto loc_82C53C8C;
loc_82C53C80:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82c53c8c
	goto loc_82C53C8C;
loc_82C53C88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82C53C8C:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_82C53C90:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82c53c48
	if (!ctx.cr6.eq) goto loc_82C53C48;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C53CB0"))) PPC_WEAK_FUNC(sub_82C53CB0);
PPC_FUNC_IMPL(__imp__sub_82C53CB0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82c53c40
	ctx.lr = 0x82C53CC4;
	sub_82C53C40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C53CD8"))) PPC_WEAK_FUNC(sub_82C53CD8);
PPC_FUNC_IMPL(__imp__sub_82C53CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4a8
	ctx.lr = 0x82C53CE0;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// bl 0x82c55ae0
	ctx.lr = 0x82C53CFC;
	sub_82C55AE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c53c40
	ctx.lr = 0x82C53D10;
	sub_82C53C40(ctx, base);
	// rotlwi r11,r23,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r23.u32, 1);
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divw r10,r23,r21
	ctx.r10.s32 = ctx.r23.s32 / ctx.r21.s32;
	// andc r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 & ~ctx.r11.u64;
	// twllei r21,0
	// twlgei r11,-1
	// mullw r11,r10,r3
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c3fd60
	ctx.lr = 0x82C53D38;
	sub_82C3FD60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// ble cr6,0x82c53f14
	if (!ctx.cr6.gt) goto loc_82C53F14;
loc_82C53D4C:
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82c53f08
	if (ctx.cr6.eq) goto loc_82C53F08;
	// addi r27,r22,1
	ctx.r27.s64 = ctx.r22.s64 + 1;
loc_82C53D5C:
	// lbz r11,-1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + -1);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82c53ec4
	if (ctx.cr6.lt) goto loc_82C53EC4;
	// beq cr6,0x82c53e94
	if (ctx.cr6.eq) goto loc_82C53E94;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82c53e64
	if (ctx.cr6.lt) goto loc_82C53E64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82c53e20
	if (ctx.cr6.eq) goto loc_82C53E20;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82c53ef8
	if (!ctx.cr6.eq) goto loc_82C53EF8;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// ble cr6,0x82c53ef8
	if (!ctx.cr6.gt) goto loc_82C53EF8;
	// li r26,2
	ctx.r26.s64 = 2;
loc_82C53D94:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,27145
	ctx.r10.u64 = ctx.r10.u64 | 27145;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82c53de0
	if (ctx.cr6.gt) goto loc_82C53DE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// twllei r24,0
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r9,r10,r24
	ctx.r9.s32 = ctx.r10.s32 / ctx.r24.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r24
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32);
	// andc r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 & ~ctx.r11.u64;
	// subf r4,r9,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r9.s64;
	// twlgei r11,-1
	// b 0x82c53df4
	goto loc_82C53DF4;
loc_82C53DE0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c42028
	ctx.lr = 0x82C53DF0;
	sub_82C42028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82C53DF4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C53E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82c53d94
	if (ctx.cr6.lt) goto loc_82C53D94;
	// b 0x82c53ef8
	goto loc_82C53EF8;
loc_82C53E20:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// ble cr6,0x82c53ef8
	if (!ctx.cr6.gt) goto loc_82C53EF8;
loc_82C53E2C:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r4,r11,r28
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C53E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82c53e2c
	if (ctx.cr6.lt) goto loc_82C53E2C;
	// b 0x82c53ef8
	goto loc_82C53EF8;
loc_82C53E64:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lha r10,1(r27)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r27.u32 + 1));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C53E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x82c53ef8
	goto loc_82C53EF8;
loc_82C53E94:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lha r10,1(r27)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r27.u32 + 1));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C53EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82c53ef0
	goto loc_82C53EF0;
loc_82C53EC4:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lha r10,1(r27)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r27.u32 + 1));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C53EEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_82C53EF0:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82C53EF8:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lbz r11,-1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + -1);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82c53d5c
	if (!ctx.cr6.eq) goto loc_82C53D5C;
loc_82C53F08:
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82c53d4c
	if (ctx.cr6.lt) goto loc_82C53D4C;
loc_82C53F14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c55c90
	ctx.lr = 0x82C53F1C;
	sub_82C55C90(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82d5c4f8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C53F28"))) PPC_WEAK_FUNC(sub_82C53F28);
PPC_FUNC_IMPL(__imp__sub_82C53F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82C53F30;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82c53bb0
	ctx.lr = 0x82C53F60;
	sub_82C53BB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c53f78
	if (ctx.cr0.eq) goto loc_82C53F78;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82c53ff4
	goto loc_82C53FF4;
loc_82C53F78:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82c3fd60
	ctx.lr = 0x82C53F80;
	sub_82C3FD60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// bl 0x82c53cd8
	ctx.lr = 0x82C53FB8;
	sub_82C53CD8(ctx, base);
	// mulli r11,r30,17
	ctx.r11.s64 = ctx.r30.s64 * 17;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// add. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c53fcc
	if (!ctx.cr0.lt) goto loc_82C53FCC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82C53FCC:
	// li r9,109
	ctx.r9.s64 = 109;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r10,r10,-27656
	ctx.r10.s64 = ctx.r10.s64 + -27656;
	// mulli r9,r9,109
	ctx.r9.s64 = ctx.r9.s64 * 109;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
loc_82C53FF4:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C54000"))) PPC_WEAK_FUNC(sub_82C54000);
PPC_FUNC_IMPL(__imp__sub_82C54000) {
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
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x82c540a8
	if (!ctx.cr0.eq) goto loc_82C540A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 * 17;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c54044
	if (!ctx.cr0.lt) goto loc_82C54044;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82C54044:
	// li r9,109
	ctx.r9.s64 = 109;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r10,r10,-27656
	ctx.r10.s64 = ctx.r10.s64 + -27656;
	// mulli r9,r9,109
	ctx.r9.s64 = ctx.r9.s64 * 109;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82c54078
	goto loc_82C54078;
loc_82C54068:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82c54088
	if (ctx.cr6.eq) goto loc_82C54088;
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
loc_82C54078:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c54068
	if (!ctx.cr6.eq) goto loc_82C54068;
	// b 0x82c540a8
	goto loc_82C540A8;
loc_82C54088:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c3fdb8
	ctx.lr = 0x82C54098;
	sub_82C3FDB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3fdb8
	ctx.lr = 0x82C540A0;
	sub_82C3FDB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82C540A8:
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

__attribute__((alias("__imp__sub_82C540C0"))) PPC_WEAK_FUNC(sub_82C540C0);
PPC_FUNC_IMPL(__imp__sub_82C540C0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c540cc
	if (ctx.cr6.eq) goto loc_82C540CC;
	// b 0x82c53f28
	sub_82C53F28(ctx, base);
	return;
loc_82C540CC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82c54000
	sub_82C54000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C540D8"))) PPC_WEAK_FUNC(sub_82C540D8);
PPC_FUNC_IMPL(__imp__sub_82C540D8) {
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
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C54104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C54118;
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

__attribute__((alias("__imp__sub_82C54130"))) PPC_WEAK_FUNC(sub_82C54130);
PPC_FUNC_IMPL(__imp__sub_82C54130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C54138;
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
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C54158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C54170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C54178"))) PPC_WEAK_FUNC(sub_82C54178);
PPC_FUNC_IMPL(__imp__sub_82C54178) {
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
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82c3fc78
	ctx.lr = 0x82C5419C;
	sub_82C3FC78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82c3fc78
	ctx.lr = 0x82C541A8;
	sub_82C3FC78(ctx, base);
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

__attribute__((alias("__imp__sub_82C541C0"))) PPC_WEAK_FUNC(sub_82C541C0);
PPC_FUNC_IMPL(__imp__sub_82C541C0) {
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
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x82c3fc28
	ctx.lr = 0x82C541DC;
	sub_82C3FC28(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82c3fc28
	ctx.lr = 0x82C541E4;
	sub_82C3FC28(ctx, base);
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

__attribute__((alias("__imp__sub_82C541F8"))) PPC_WEAK_FUNC(sub_82C541F8);
PPC_FUNC_IMPL(__imp__sub_82C541F8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,16600
	ctx.r11.s64 = ctx.r11.s64 + 16600;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// addi r11,r11,18424
	ctx.r11.s64 = ctx.r11.s64 + 18424;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// beq cr6,0x82c54224
	if (ctx.cr6.eq) goto loc_82C54224;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
loc_82C54224:
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r7,68(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r6,72(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C54240"))) PPC_WEAK_FUNC(sub_82C54240);
PPC_FUNC_IMPL(__imp__sub_82C54240) {
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
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c542cc
	if (!ctx.cr6.eq) goto loc_82C542CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82c542cc
	if (ctx.cr6.gt) goto loc_82C542CC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c542a4
	if (ctx.cr0.eq) goto loc_82C542A4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82c542cc
	if (!ctx.cr6.eq) goto loc_82C542CC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82c542a4
	if (ctx.cr6.eq) goto loc_82C542A4;
	// lwz r11,152(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 152);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c542cc
	if (!ctx.cr0.eq) goto loc_82C542CC;
loc_82C542A4:
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82c424e0
	ctx.lr = 0x82C542B0;
	sub_82C424E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82c542cc
	if (!ctx.cr0.gt) goto loc_82C542CC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x82c542d0
	if (ctx.cr6.gt) goto loc_82C542D0;
loc_82C542CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C542D0:
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

__attribute__((alias("__imp__sub_82C542E8"))) PPC_WEAK_FUNC(sub_82C542E8);
PPC_FUNC_IMPL(__imp__sub_82C542E8) {
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
	// bl 0x82c54240
	ctx.lr = 0x82C54308;
	sub_82C54240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c54334
	if (ctx.cr0.eq) goto loc_82C54334;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c54330
	if (ctx.cr6.eq) goto loc_82C54330;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c54334
	if (!ctx.cr0.eq) goto loc_82C54334;
loc_82C54330:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C54334:
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

__attribute__((alias("__imp__sub_82C54350"))) PPC_WEAK_FUNC(sub_82C54350);
PPC_FUNC_IMPL(__imp__sub_82C54350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x82C54358;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,152(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// li r23,0
	ctx.r23.s64 = 0;
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c5438c
	if (ctx.cr0.eq) goto loc_82C5438C;
	// lwz r11,148(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82c543a4
	if (ctx.cr6.gt) goto loc_82C543A4;
loc_82C5438C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c542e8
	ctx.lr = 0x82C5439C;
	sub_82C542E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c543ac
	if (!ctx.cr0.eq) goto loc_82C543AC;
loc_82C543A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c545e0
	goto loc_82C545E0;
loc_82C543AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82c424e0
	ctx.lr = 0x82C543C4;
	sub_82C424E0(ctx, base);
	// rotlwi r11,r28,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// andc r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ~ctx.r11.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// divw r28,r28,r29
	ctx.r28.s32 = ctx.r28.s32 / ctx.r29.s32;
	// twllei r29,0
	// twlgei r11,-1
	// bl 0x82c529f8
	ctx.lr = 0x82C543F4;
	sub_82C529F8(ctx, base);
	// addi r24,r30,20
	ctx.r24.s64 = ctx.r30.s64 + 20;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c544d0
	if (ctx.cr0.eq) goto loc_82C544D0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82c545b8
	if (!ctx.cr6.eq) goto loc_82C545B8;
	// addi r9,r28,2
	ctx.r9.s64 = ctx.r28.s64 + 2;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r27,12(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C54454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x82c54588
	if (ctx.cr0.eq) goto loc_82C54588;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,16(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mullw r4,r11,r28
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c54660
	ctx.lr = 0x82C54484;
	sub_82C54660(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mullw r5,r29,r11
	ctx.r5.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// bl 0x82c42a78
	ctx.lr = 0x82C5449C;
	sub_82C42A78(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bl 0x82c53970
	ctx.lr = 0x82C544B0;
	sub_82C53970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c41a30
	ctx.lr = 0x82C544BC;
	sub_82C41A30(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x82c54588
	if (ctx.cr0.eq) goto loc_82C54588;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r5,r11,16688
	ctx.r5.s64 = ctx.r11.s64 + 16688;
	// b 0x82c545a4
	goto loc_82C545A4;
loc_82C544D0:
	// addi r9,r28,2
	ctx.r9.s64 = ctx.r28.s64 + 2;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r27,16(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C54518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x82c54588
	if (ctx.cr0.eq) goto loc_82C54588;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,16(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mullw r5,r28,r11
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c54660
	ctx.lr = 0x82C54548;
	sub_82C54660(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mullw r4,r11,r29
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// bl 0x82c42a78
	ctx.lr = 0x82C54560;
	sub_82C42A78(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bl 0x82c53970
	ctx.lr = 0x82C54574;
	sub_82C53970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c41a30
	ctx.lr = 0x82C54580;
	sub_82C41A30(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne 0x82c5459c
	if (!ctx.cr0.eq) goto loc_82C5459C;
loc_82C54588:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C54590;
	sub_82C3FC28(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c3fc28
	ctx.lr = 0x82C54598;
	sub_82C3FC28(ctx, base);
	// b 0x82c543a4
	goto loc_82C543A4;
loc_82C5459C:
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r5,r11,16600
	ctx.r5.s64 = ctx.r11.s64 + 16600;
loc_82C545A4:
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r4,r10,27540
	ctx.r4.s64 = ctx.r10.s64 + 27540;
	// bl 0x82c53a60
	ctx.lr = 0x82C545B4;
	sub_82C53A60(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82C545B8:
	// addi r5,r25,8
	ctx.r5.s64 = ctx.r25.s64 + 8;
	// stw r22,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r22.u32);
	// addi r4,r23,8
	ctx.r4.s64 = ctx.r23.s64 + 8;
	// stw r23,68(r25)
	PPC_STORE_U32(ctx.r25.u32 + 68, ctx.r23.u32);
	// addi r3,r22,8
	ctx.r3.s64 = ctx.r22.s64 + 8;
	// stw r29,72(r25)
	PPC_STORE_U32(ctx.r25.u32 + 72, ctx.r29.u32);
	// bl 0x82c40078
	ctx.lr = 0x82C545D4;
	sub_82C40078(ctx, base);
	// lwz r11,52(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 52);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r11.u32);
loc_82C545E0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C545E8"))) PPC_WEAK_FUNC(sub_82C545E8);
PPC_FUNC_IMPL(__imp__sub_82C545E8) {
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
	// addi r4,r11,27556
	ctx.r4.s64 = ctx.r11.s64 + 27556;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82c41f78
	ctx.lr = 0x82C54610;
	sub_82C41F78(ctx, base);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82C54630"))) PPC_WEAK_FUNC(sub_82C54630);
PPC_FUNC_IMPL(__imp__sub_82C54630) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c3fbc8
	ctx.lr = 0x82C54648;
	sub_82C3FBC8(ctx, base);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82C54660"))) PPC_WEAK_FUNC(sub_82C54660);
PPC_FUNC_IMPL(__imp__sub_82C54660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82C54668;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82c528c8
	ctx.lr = 0x82C5468C;
	sub_82C528C8(ctx, base);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// stw r26,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C546B0"))) PPC_WEAK_FUNC(sub_82C546B0);
PPC_FUNC_IMPL(__imp__sub_82C546B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82C546B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82c528c8
	ctx.lr = 0x82C546E4;
	sub_82C528C8(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// stw r26,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r26.u32);
	// stw r25,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r25.u32);
	// stw r24,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r24.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C54718"))) PPC_WEAK_FUNC(sub_82C54718);
PPC_FUNC_IMPL(__imp__sub_82C54718) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,24(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C54738"))) PPC_WEAK_FUNC(sub_82C54738);
PPC_FUNC_IMPL(__imp__sub_82C54738) {
	PPC_FUNC_PROLOGUE();
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C54748"))) PPC_WEAK_FUNC(sub_82C54748);
PPC_FUNC_IMPL(__imp__sub_82C54748) {
	PPC_FUNC_PROLOGUE();
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C54758"))) PPC_WEAK_FUNC(sub_82C54758);
PPC_FUNC_IMPL(__imp__sub_82C54758) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C54768"))) PPC_WEAK_FUNC(sub_82C54768);
PPC_FUNC_IMPL(__imp__sub_82C54768) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c54780
	if (!ctx.cr6.eq) goto loc_82C54780;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x82c5478c
	goto loc_82C5478C;
loc_82C54780:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82C5478C:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C54798"))) PPC_WEAK_FUNC(sub_82C54798);
PPC_FUNC_IMPL(__imp__sub_82C54798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82C547A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82c547e8
	if (!ctx.cr6.gt) goto loc_82C547E8;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82C547C8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82c54850
	if (!ctx.cr6.eq) goto loc_82C54850;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82c547c8
	if (ctx.cr6.lt) goto loc_82C547C8;
loc_82C547E8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c54844
	if (ctx.cr6.eq) goto loc_82C54844;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c54844
	if (ctx.cr6.eq) goto loc_82C54844;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c54858
	if (!ctx.cr6.eq) goto loc_82C54858;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82c54844
	if (!ctx.cr6.gt) goto loc_82C54844;
loc_82C5481C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c54798
	ctx.lr = 0x82C54828;
	sub_82C54798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c54850
	if (ctx.cr0.eq) goto loc_82C54850;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c5481c
	if (ctx.cr6.lt) goto loc_82C5481C;
loc_82C54844:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C54848:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82C54850:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c54848
	goto loc_82C54848;
loc_82C54858:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c54884
	if (!ctx.cr6.eq) goto loc_82C54884;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82c54848
	goto loc_82C54848;
loc_82C54884:
	// bl 0x82c52930
	ctx.lr = 0x82C54888;
	sub_82C52930(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// divw r8,r30,r11
	ctx.r8.s32 = ctx.r30.s32 / ctx.r11.s32;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// twllei r11,0
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// twlgei r11,-1
	// mullw r28,r8,r10
	ctx.r28.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// bl 0x82c54768
	ctx.lr = 0x82C548DC;
	sub_82C54768(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 * 12;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c54850
	if (!ctx.cr6.eq) goto loc_82C54850;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c54758
	ctx.lr = 0x82C54900;
	sub_82C54758(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r30,r11,r30
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// bl 0x82c54758
	ctx.lr = 0x82C54910;
	sub_82C54758(ctx, base);
	// mullw r11,r3,r28
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r28.s32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82c54738
	ctx.lr = 0x82C54920;
	sub_82C54738(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82c54758
	ctx.lr = 0x82C54938;
	sub_82C54758(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x82c54848
	if (!ctx.cr6.lt) goto loc_82C54848;
	// b 0x82c54850
	goto loc_82C54850;
}

__attribute__((alias("__imp__sub_82C54948"))) PPC_WEAK_FUNC(sub_82C54948);
PPC_FUNC_IMPL(__imp__sub_82C54948) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// divw r4,r10,r11
	ctx.r4.s32 = ctx.r10.s32 / ctx.r11.s32;
	// twllei r11,0
	// bl 0x82c54738
	ctx.lr = 0x82C54978;
	sub_82C54738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c54748
	ctx.lr = 0x82C54984;
	sub_82C54748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82c54748
	ctx.lr = 0x82C54990;
	sub_82C54748(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// addze r4,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x82c54738
	ctx.lr = 0x82C549A4;
	sub_82C54738(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82c549e0
	if (ctx.cr6.lt) goto loc_82C549E0;
loc_82C549B0:
	// rotlwi r10,r31,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// divw r9,r31,r11
	ctx.r9.s32 = ctx.r31.s32 / ctx.r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twllei r11,0
	// subf. r9,r9,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// twlgei r10,-1
	// beq 0x82c549fc
	if (ctx.cr0.eq) goto loc_82C549FC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82c549b0
	if (!ctx.cr6.lt) goto loc_82C549B0;
loc_82C549E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82C549E4:
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
loc_82C549FC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82c549e4
	goto loc_82C549E4;
}

__attribute__((alias("__imp__sub_82C54A08"))) PPC_WEAK_FUNC(sub_82C54A08);
PPC_FUNC_IMPL(__imp__sub_82C54A08) {
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82c54a28
	if (!ctx.cr6.eq) goto loc_82C54A28;
	// b 0x82c54a38
	goto loc_82C54A38;
loc_82C54A28:
	// li r4,8
	ctx.r4.s64 = 8;
	// subfic r3,r31,6
	ctx.xer.ca = ctx.r31.u32 <= 6;
	ctx.r3.s64 = 6 - ctx.r31.s64;
	// bl 0x82c425a0
	ctx.lr = 0x82C54A34;
	sub_82C425A0(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_82C54A38:
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

__attribute__((alias("__imp__sub_82C54A50"))) PPC_WEAK_FUNC(sub_82C54A50);
PPC_FUNC_IMPL(__imp__sub_82C54A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C54A68"))) PPC_WEAK_FUNC(sub_82C54A68);
PPC_FUNC_IMPL(__imp__sub_82C54A68) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c3fbc8
	ctx.lr = 0x82C54A80;
	sub_82C3FBC8(ctx, base);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82C54A98"))) PPC_WEAK_FUNC(sub_82C54A98);
PPC_FUNC_IMPL(__imp__sub_82C54A98) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c52850
	ctx.lr = 0x82C54AB8;
	sub_82C52850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3fdb8
	ctx.lr = 0x82C54AC0;
	sub_82C3FDB8(ctx, base);
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

__attribute__((alias("__imp__sub_82C54AD8"))) PPC_WEAK_FUNC(sub_82C54AD8);
PPC_FUNC_IMPL(__imp__sub_82C54AD8) {
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
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,18460
	ctx.r4.s64 = ctx.r11.s64 + 18460;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c401a8
	ctx.lr = 0x82C54B04;
	sub_82C401A8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82c401f8
	ctx.lr = 0x82C54B20;
	sub_82C401F8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x82c40250
	ctx.lr = 0x82C54B38;
	sub_82C40250(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// bl 0x82c40250
	ctx.lr = 0x82C54B50;
	sub_82C40250(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82c52b18
	ctx.lr = 0x82C54B58;
	sub_82C52B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c401f8
	ctx.lr = 0x82C54B64;
	sub_82C401F8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82c52b18
	ctx.lr = 0x82C54B6C;
	sub_82C52B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c401f8
	ctx.lr = 0x82C54B78;
	sub_82C401F8(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82c52b18
	ctx.lr = 0x82C54B80;
	sub_82C52B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c401f8
	ctx.lr = 0x82C54B8C;
	sub_82C401F8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82c52b18
	ctx.lr = 0x82C54B94;
	sub_82C52B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c401f8
	ctx.lr = 0x82C54BA0;
	sub_82C401F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82c401f8
	ctx.lr = 0x82C54BAC;
	sub_82C401F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c52978
	ctx.lr = 0x82C54BB8;
	sub_82C52978(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c52978
	ctx.lr = 0x82C54BC4;
	sub_82C52978(ctx, base);
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

__attribute__((alias("__imp__sub_82C54BE0"))) PPC_WEAK_FUNC(sub_82C54BE0);
PPC_FUNC_IMPL(__imp__sub_82C54BE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31988
	ctx.r10.s64 = -2096365568;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,18468
	ctx.r4.s64 = ctx.r10.s64 + 18468;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C54C20"))) PPC_WEAK_FUNC(sub_82C54C20);
PPC_FUNC_IMPL(__imp__sub_82C54C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82C54C28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c54cf0
	if (ctx.cr6.eq) goto loc_82C54CF0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82c54c50
	if (!ctx.cr6.eq) goto loc_82C54C50;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82c54cac
	goto loc_82C54CAC;
loc_82C54C50:
	// ble cr6,0x82c54cf0
	if (!ctx.cr6.gt) goto loc_82C54CF0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bne cr6,0x82c54cb4
	if (!ctx.cr6.eq) goto loc_82C54CB4;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addic. r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,21348(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// ble 0x82c54ca4
	if (!ctx.cr0.gt) goto loc_82C54CA4;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82C54C8C:
	// stfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bne 0x82c54c8c
	if (!ctx.cr0.eq) goto loc_82C54C8C;
loc_82C54CA4:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82c54cf0
	if (!ctx.cr6.lt) goto loc_82C54CF0;
loc_82C54CAC:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x82c54cf0
	goto loc_82C54CF0;
loc_82C54CB4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82c54cf0
	if (!ctx.cr6.gt) goto loc_82C54CF0;
	// addi r29,r4,-1
	ctx.r29.s64 = ctx.r4.s64 + -1;
	// addi r28,r3,12
	ctx.r28.s64 = ctx.r3.s64 + 12;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r26,r5,r6
	ctx.r26.s64 = ctx.r6.s64 - ctx.r5.s64;
loc_82C54CD0:
	// add r6,r26,r31
	ctx.r6.u64 = ctx.r26.u64 + ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c54c20
	ctx.lr = 0x82C54CE4;
	sub_82C54C20(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x82c54cd0
	if (!ctx.cr0.eq) goto loc_82C54CD0;
loc_82C54CF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C54CF8"))) PPC_WEAK_FUNC(sub_82C54CF8);
PPC_FUNC_IMPL(__imp__sub_82C54CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82C54D00;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c54d8c
	if (ctx.cr6.eq) goto loc_82C54D8C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82c54d3c
	if (!ctx.cr6.eq) goto loc_82C54D3C;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c54c20
	ctx.lr = 0x82C54D38;
	sub_82C54C20(ctx, base);
	// b 0x82c54d8c
	goto loc_82C54D8C;
loc_82C54D3C:
	// ble cr6,0x82c54d8c
	if (!ctx.cr6.gt) goto loc_82C54D8C;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x82c54d8c
	if (!ctx.cr0.gt) goto loc_82C54D8C;
	// addi r29,r4,-1
	ctx.r29.s64 = ctx.r4.s64 + -1;
	// addi r28,r3,12
	ctx.r28.s64 = ctx.r3.s64 + 12;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// subf r26,r7,r8
	ctx.r26.s64 = ctx.r8.s64 - ctx.r7.s64;
loc_82C54D64:
	// add r8,r26,r31
	ctx.r8.u64 = ctx.r26.u64 + ctx.r31.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c54cf8
	ctx.lr = 0x82C54D80;
	sub_82C54CF8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// bne 0x82c54d64
	if (!ctx.cr0.eq) goto loc_82C54D64;
loc_82C54D8C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C54D98"))) PPC_WEAK_FUNC(sub_82C54D98);
PPC_FUNC_IMPL(__imp__sub_82C54D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82c54dcc
	if (ctx.cr6.lt) goto loc_82C54DCC;
	// beq cr6,0x82c54dbc
	if (ctx.cr6.eq) goto loc_82C54DBC;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// beq cr6,0x82c54dcc
	if (ctx.cr6.eq) goto loc_82C54DCC;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// beq cr6,0x82c54dbc
	if (ctx.cr6.eq) goto loc_82C54DBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C54DBC:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// blr 
	return;
loc_82C54DCC:
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C54DE0"))) PPC_WEAK_FUNC(sub_82C54DE0);
PPC_FUNC_IMPL(__imp__sub_82C54DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C54DE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82c54e2c
	if (ctx.cr0.lt) goto loc_82C54E2C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x82c54e2c
	if (ctx.cr6.gt) goto loc_82C54E2C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82c54cf8
	ctx.lr = 0x82C54E28;
	sub_82C54CF8(ctx, base);
	// b 0x82c54ec8
	goto loc_82C54EC8;
loc_82C54E2C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c52c50
	ctx.lr = 0x82C54E34;
	sub_82C52C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82c54e98
	if (!ctx.cr0.gt) goto loc_82C54E98;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r10,-8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// blt cr6,0x82c54e88
	if (ctx.cr6.lt) goto loc_82C54E88;
	// beq cr6,0x82c54e78
	if (ctx.cr6.eq) goto loc_82C54E78;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82c54e88
	if (ctx.cr6.eq) goto loc_82C54E88;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82c54e78
	if (ctx.cr6.eq) goto loc_82C54E78;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c54e94
	goto loc_82C54E94;
loc_82C54E78:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x82c54e94
	goto loc_82C54E94;
loc_82C54E88:
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82C54E94:
	// stw r11,-8(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8, ctx.r11.u32);
loc_82C54E98:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c52df8
	ctx.lr = 0x82C54EA4;
	sub_82C52DF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c52928
	ctx.lr = 0x82C54EB0;
	sub_82C52928(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82c52be8
	ctx.lr = 0x82C54EC0;
	sub_82C52BE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c52928
	ctx.lr = 0x82C54EC8;
	sub_82C52928(ctx, base);
loc_82C54EC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C54ED0"))) PPC_WEAK_FUNC(sub_82C54ED0);
PPC_FUNC_IMPL(__imp__sub_82C54ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x82C54ED8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82c54f08
	if (!ctx.cr6.eq) goto loc_82C54F08;
	// bl 0x82c3fd50
	ctx.lr = 0x82C54F04;
	sub_82C3FD50(ctx, base);
	// b 0x82c54fd0
	goto loc_82C54FD0;
loc_82C54F08:
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82c54f14
	if (!ctx.cr6.eq) goto loc_82C54F14;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82C54F14:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r4,r11,27568
	ctx.r4.s64 = ctx.r11.s64 + 27568;
	// bl 0x82c3fcc8
	ctx.lr = 0x82C54F24;
	sub_82C3FCC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ble cr6,0x82c54fa4
	if (!ctx.cr6.gt) goto loc_82C54FA4;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82c52d38
	ctx.lr = 0x82C54F40;
	sub_82C52D38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c52db0
	ctx.lr = 0x82C54F58;
	sub_82C52DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c52f70
	ctx.lr = 0x82C54F64;
	sub_82C52F70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c54f80
	if (!ctx.cr6.gt) goto loc_82C54F80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c52df8
	ctx.lr = 0x82C54F7C;
	sub_82C52DF8(ctx, base);
	// b 0x82c54f88
	goto loc_82C54F88;
loc_82C54F80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c52f70
	ctx.lr = 0x82C54F88;
	sub_82C52F70(ctx, base);
loc_82C54F88:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c52850
	ctx.lr = 0x82C54F98;
	sub_82C52850(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c52928
	ctx.lr = 0x82C54FA0;
	sub_82C52928(ctx, base);
	// b 0x82c54fac
	goto loc_82C54FAC;
loc_82C54FA4:
	// bl 0x82c52f70
	ctx.lr = 0x82C54FA8;
	sub_82C52F70(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82C54FAC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82c53090
	ctx.lr = 0x82C54FB4;
	sub_82C53090(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// stw r22,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r22.u32);
loc_82C54FD0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C54FD8"))) PPC_WEAK_FUNC(sub_82C54FD8);
PPC_FUNC_IMPL(__imp__sub_82C54FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C54FE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c54ed0
	ctx.lr = 0x82C54FF0;
	sub_82C54ED0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c52850
	ctx.lr = 0x82C55000;
	sub_82C52850(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C55010"))) PPC_WEAK_FUNC(sub_82C55010);
PPC_FUNC_IMPL(__imp__sub_82C55010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82C55018;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c5503c
	if (!ctx.cr0.eq) goto loc_82C5503C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82c55074
	goto loc_82C55074;
loc_82C5503C:
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x82c5505c
	if (ctx.cr6.gt) goto loc_82C5505C;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// b 0x82c5506c
	goto loc_82C5506C;
loc_82C5505C:
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r8,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
loc_82C5506C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82C55074:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c54ed0
	ctx.lr = 0x82C5508C;
	sub_82C54ED0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c52850
	ctx.lr = 0x82C5509C;
	sub_82C52850(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C550A8"))) PPC_WEAK_FUNC(sub_82C550A8);
PPC_FUNC_IMPL(__imp__sub_82C550A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82c55110
	if (!ctx.cr6.gt) goto loc_82C55110;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82c550fc
	if (!ctx.cr0.gt) goto loc_82C550FC;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
loc_82C550C8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82c550e0
	if (!ctx.cr6.eq) goto loc_82C550E0;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82c550ec
	if (!ctx.cr6.eq) goto loc_82C550EC;
loc_82C550E0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82c55104
	if (ctx.cr6.eq) goto loc_82C55104;
loc_82C550EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82c550c8
	if (ctx.cr6.lt) goto loc_82C550C8;
loc_82C550FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C55104:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82C55110:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bge cr6,0x82c55164
	if (!ctx.cr6.lt) goto loc_82C55164;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82c550fc
	if (ctx.cr0.lt) goto loc_82C550FC;
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82C5512C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82c55144
	if (!ctx.cr6.eq) goto loc_82C55144;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82c55154
	if (!ctx.cr6.eq) goto loc_82C55154;
loc_82C55144:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// neg r9,r3
	ctx.r9.s64 = -ctx.r3.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82c55104
	if (ctx.cr6.eq) goto loc_82C55104;
loc_82C55154:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// bge 0x82c5512c
	if (!ctx.cr0.lt) goto loc_82C5512C;
	// b 0x82c550fc
	goto loc_82C550FC;
loc_82C55164:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze. r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82c550fc
	if (ctx.cr0.lt) goto loc_82C550FC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82c55194
	if (!ctx.cr6.eq) goto loc_82C55194;
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c550fc
	if (!ctx.cr6.eq) goto loc_82C550FC;
loc_82C55194:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C551A0"))) PPC_WEAK_FUNC(sub_82C551A0);
PPC_FUNC_IMPL(__imp__sub_82C551A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82C551A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c550a8
	ctx.lr = 0x82C551D0;
	sub_82C550A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c551e0
	if (!ctx.cr0.eq) goto loc_82C551E0;
loc_82C551D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c55230
	goto loc_82C55230;
loc_82C551E0:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82c5522c
	if (!ctx.cr6.gt) goto loc_82C5522C;
loc_82C551EC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82c5522c
	if (ctx.cr6.eq) goto loc_82C5522C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c550a8
	ctx.lr = 0x82C55204;
	sub_82C550A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c5521c
	if (ctx.cr0.eq) goto loc_82C5521C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82c551d8
	if (ctx.cr6.eq) goto loc_82C551D8;
loc_82C5521C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82c551ec
	if (ctx.cr6.lt) goto loc_82C551EC;
loc_82C5522C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C55230:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C55238"))) PPC_WEAK_FUNC(sub_82C55238);
PPC_FUNC_IMPL(__imp__sub_82C55238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82C55240;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c552ac
	if (!ctx.cr6.gt) goto loc_82C552AC;
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
loc_82C55264:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c54758
	ctx.lr = 0x82C5526C;
	sub_82C54758(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82c54758
	ctx.lr = 0x82C55288;
	sub_82C54758(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82c55264
	if (ctx.cr6.lt) goto loc_82C55264;
loc_82C552AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c54738
	ctx.lr = 0x82C552B8;
	sub_82C54738(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C552C0"))) PPC_WEAK_FUNC(sub_82C552C0);
PPC_FUNC_IMPL(__imp__sub_82C552C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82C552C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c552e4
	if (!ctx.cr6.eq) goto loc_82C552E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c55334
	goto loc_82C55334;
loc_82C552E4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82c54758
	ctx.lr = 0x82C552EC;
	sub_82C54758(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82c55330
	if (!ctx.cr6.gt) goto loc_82C55330;
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
loc_82C55304:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c54758
	ctx.lr = 0x82C5530C;
	sub_82C54758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c54748
	ctx.lr = 0x82C55318;
	sub_82C54748(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c55304
	if (ctx.cr6.lt) goto loc_82C55304;
loc_82C55330:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82C55334:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C55340"))) PPC_WEAK_FUNC(sub_82C55340);
PPC_FUNC_IMPL(__imp__sub_82C55340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82C55348;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c55364
	if (!ctx.cr6.eq) goto loc_82C55364;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c553b4
	goto loc_82C553B4;
loc_82C55364:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82c54758
	ctx.lr = 0x82C5536C;
	sub_82C54758(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82c553b0
	if (!ctx.cr6.gt) goto loc_82C553B0;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
loc_82C55384:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c54758
	ctx.lr = 0x82C5538C;
	sub_82C54758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c54748
	ctx.lr = 0x82C55398;
	sub_82C54748(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c55384
	if (ctx.cr6.lt) goto loc_82C55384;
loc_82C553B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82C553B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C553C0"))) PPC_WEAK_FUNC(sub_82C553C0);
PPC_FUNC_IMPL(__imp__sub_82C553C0) {
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
	// bl 0x82c55340
	ctx.lr = 0x82C553DC;
	sub_82C55340(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c552c0
	ctx.lr = 0x82C553E8;
	sub_82C552C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c54748
	ctx.lr = 0x82C553F0;
	sub_82C54748(ctx, base);
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

__attribute__((alias("__imp__sub_82C55408"))) PPC_WEAK_FUNC(sub_82C55408);
PPC_FUNC_IMPL(__imp__sub_82C55408) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82c5543c
	if (!ctx.cr0.gt) goto loc_82C5543C;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82C5541C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82c55444
	if (!ctx.cr6.eq) goto loc_82C55444;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82c5541c
	if (ctx.cr6.lt) goto loc_82C5541C;
loc_82C5543C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C55444:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C55450"))) PPC_WEAK_FUNC(sub_82C55450);
PPC_FUNC_IMPL(__imp__sub_82C55450) {
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
	// bl 0x82c55408
	ctx.lr = 0x82C55460;
	sub_82C55408(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c5547c
	if (ctx.cr0.eq) goto loc_82C5547C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82c55408
	ctx.lr = 0x82C55470;
	sub_82C55408(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82c55480
	if (!ctx.cr0.eq) goto loc_82C55480;
loc_82C5547C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C55480:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C55490"))) PPC_WEAK_FUNC(sub_82C55490);
PPC_FUNC_IMPL(__imp__sub_82C55490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c554e8
	if (ctx.cr6.eq) goto loc_82C554E8;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82c554e8
	if (!ctx.cr6.gt) goto loc_82C554E8;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82C554B4:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x82c554c4
	if (ctx.cr6.eq) goto loc_82C554C4;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82C554C4:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	// mullw. r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x82c554f0
	if (ctx.cr0.lt) goto loc_82C554F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82c554b4
	if (ctx.cr6.lt) goto loc_82C554B4;
loc_82C554E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C554F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C554F8"))) PPC_WEAK_FUNC(sub_82C554F8);
PPC_FUNC_IMPL(__imp__sub_82C554F8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c55490
	ctx.lr = 0x82C5551C;
	sub_82C55490(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c5554c
	if (!ctx.cr0.eq) goto loc_82C5554C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c55408
	ctx.lr = 0x82C5552C;
	sub_82C55408(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c55544
	if (ctx.cr0.eq) goto loc_82C55544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c55490
	ctx.lr = 0x82C5553C;
	sub_82C55490(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c5554c
	if (!ctx.cr0.eq) goto loc_82C5554C;
loc_82C55544:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c55550
	goto loc_82C55550;
loc_82C5554C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C55550:
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

__attribute__((alias("__imp__sub_82C55568"))) PPC_WEAK_FUNC(sub_82C55568);
PPC_FUNC_IMPL(__imp__sub_82C55568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82C55570;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82c555dc
	if (!ctx.cr6.gt) goto loc_82C555DC;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
loc_82C55598:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c54758
	ctx.lr = 0x82C555A0;
	sub_82C54758(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c54758
	ctx.lr = 0x82C555AC;
	sub_82C54758(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82c54738
	ctx.lr = 0x82C555B4;
	sub_82C54738(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82c55598
	if (ctx.cr6.lt) goto loc_82C55598;
loc_82C555DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82c55644
	if (!ctx.cr6.lt) goto loc_82C55644;
	// mulli r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 * 12;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c54768
	ctx.lr = 0x82C55608;
	sub_82C54768(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c54758
	ctx.lr = 0x82C55610;
	sub_82C54758(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r29,r10,r11
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82c54758
	ctx.lr = 0x82C5562C;
	sub_82C54758(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mullw r3,r3,r11
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// bl 0x82c54738
	ctx.lr = 0x82C55640;
	sub_82C54738(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82C55644:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C55650"))) PPC_WEAK_FUNC(sub_82C55650);
PPC_FUNC_IMPL(__imp__sub_82C55650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C55658"))) PPC_WEAK_FUNC(sub_82C55658);
PPC_FUNC_IMPL(__imp__sub_82C55658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82C55660;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x82c3fd60
	ctx.lr = 0x82C55680;
	sub_82C3FD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C556B0"))) PPC_WEAK_FUNC(sub_82C556B0);
PPC_FUNC_IMPL(__imp__sub_82C556B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c55704
	if (ctx.cr6.eq) goto loc_82C55704;
loc_82C556B8:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82c556dc
	if (!ctx.cr6.eq) goto loc_82C556DC;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82c556dc
	if (!ctx.cr6.eq) goto loc_82C556DC;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82c556e8
	if (ctx.cr6.eq) goto loc_82C556E8;
loc_82C556DC:
	// lwz r6,20(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne 0x82c556b8
	if (!ctx.cr0.eq) goto loc_82C556B8;
loc_82C556E8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c55704
	if (ctx.cr6.eq) goto loc_82C55704;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// blr 
	return;
loc_82C55704:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C55710"))) PPC_WEAK_FUNC(sub_82C55710);
PPC_FUNC_IMPL(__imp__sub_82C55710) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c55780
	if (ctx.cr6.eq) goto loc_82C55780;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82c55780
	if (ctx.cr0.eq) goto loc_82C55780;
loc_82C55734:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82c55750
	if (ctx.cr6.eq) goto loc_82C55750;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82c55734
	if (!ctx.cr0.eq) goto loc_82C55734;
loc_82C55750:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c55780
	if (ctx.cr6.eq) goto loc_82C55780;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bgt 0x82c55780
	if (ctx.cr0.gt) goto loc_82C55780;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82c3fdb8
	ctx.lr = 0x82C55778;
	sub_82C3FDB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3fdb8
	ctx.lr = 0x82C55780;
	sub_82C3FDB8(ctx, base);
loc_82C55780:
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

__attribute__((alias("__imp__sub_82C55798"))) PPC_WEAK_FUNC(sub_82C55798);
PPC_FUNC_IMPL(__imp__sub_82C55798) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm. r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// bge 0x82c557d0
	if (!ctx.cr0.lt) goto loc_82C557D0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82C557D0:
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82c557e4
	if (!ctx.cr6.gt) goto loc_82C557E4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r31,4
	ctx.r31.s64 = 4;
loc_82C557E4:
	// subf. r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82c557f4
	if (!ctx.cr0.gt) goto loc_82C557F4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
loc_82C557F4:
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82c55808
	if (!ctx.cr6.gt) goto loc_82C55808;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
loc_82C55808:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f0,27592(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 27592);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fdiv f30,f0,f12
	ctx.f30.f64 = ctx.f0.f64 / ctx.f12.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82d5b588
	ctx.lr = 0x82C55840;
	sub_82D5B588(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82d5b4b8
	ctx.lr = 0x82C5584C;
	sub_82D5B4B8(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c55860
	if (ctx.cr0.eq) goto loc_82C55860;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82C55860:
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c55874
	if (ctx.cr0.eq) goto loc_82C55874;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// fneg f31,f1
	ctx.f31.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82C55874:
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c55880
	if (ctx.cr0.eq) goto loc_82C55880;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_82C55880:
	// stfd f31,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f31.u64);
	// stfd f1,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.f1.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C558A8"))) PPC_WEAK_FUNC(sub_82C558A8);
PPC_FUNC_IMPL(__imp__sub_82C558A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82C558B8:
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82c558b8
	if (ctx.cr0.gt) goto loc_82C558B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C558D0"))) PPC_WEAK_FUNC(sub_82C558D0);
PPC_FUNC_IMPL(__imp__sub_82C558D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// and r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 & ctx.r11.u64;
	// sraw r9,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r9.s64 = ctx.r11.s32 >> temp.u32;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfd f13,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f11,8(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfd f0,0(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmul f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64;
	// lfd f12,0(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmsub f0,f12,f0,f10
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64 - ctx.f10.f64;
	// stfd f0,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// fmadd f0,f12,f13,f11
	ctx.f0.f64 = ctx.f12.f64 * ctx.f13.f64 + ctx.f11.f64;
	// stfd f0,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.f0.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C55940"))) PPC_WEAK_FUNC(sub_82C55940);
PPC_FUNC_IMPL(__imp__sub_82C55940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// and r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 & ctx.r11.u64;
	// sraw r9,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r9.s64 = ctx.r11.s32 >> temp.u32;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfd f13,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f11,8(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfd f0,0(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmul f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64;
	// lfd f12,0(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmsub f0,f12,f0,f10
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64 - ctx.f10.f64;
	// fmadd f13,f12,f13,f11
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64 + ctx.f11.f64;
	// fmul f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmul f11,f1,f13
	ctx.f11.f64 = ctx.f1.f64 * ctx.f13.f64;
	// fmadd f13,f2,f13,f12
	ctx.f13.f64 = ctx.f2.f64 * ctx.f13.f64 + ctx.f12.f64;
	// fmsub f0,f2,f0,f11
	ctx.f0.f64 = ctx.f2.f64 * ctx.f0.f64 - ctx.f11.f64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C559C8"))) PPC_WEAK_FUNC(sub_82C559C8);
PPC_FUNC_IMPL(__imp__sub_82C559C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x82c55798
	sub_82C55798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C559D8"))) PPC_WEAK_FUNC(sub_82C559D8);
PPC_FUNC_IMPL(__imp__sub_82C559D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C559F0"))) PPC_WEAK_FUNC(sub_82C559F0);
PPC_FUNC_IMPL(__imp__sub_82C559F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-11920(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11920);
	// stfd f0,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// stfd f0,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.f0.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C55A08"))) PPC_WEAK_FUNC(sub_82C55A08);
PPC_FUNC_IMPL(__imp__sub_82C55A08) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C55A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
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

__attribute__((alias("__imp__sub_82C55A58"))) PPC_WEAK_FUNC(sub_82C55A58);
PPC_FUNC_IMPL(__imp__sub_82C55A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C55A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f0,-12176(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -12176);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmul f12,f30,f13
	ctx.f12.f64 = ctx.f30.f64 * ctx.f13.f64;
	// fmul f11,f30,f0
	ctx.f11.f64 = ctx.f30.f64 * ctx.f0.f64;
	// fmadd f0,f31,f0,f12
	ctx.f0.f64 = ctx.f31.f64 * ctx.f0.f64 + ctx.f12.f64;
	// fmsub f13,f31,f13,f11
	ctx.f13.f64 = ctx.f31.f64 * ctx.f13.f64 - ctx.f11.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C55AE0"))) PPC_WEAK_FUNC(sub_82C55AE0);
PPC_FUNC_IMPL(__imp__sub_82C55AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82C55AE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82c3fd60
	ctx.lr = 0x82C55AFC;
	sub_82C3FD60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// beq cr6,0x82c55c3c
	if (ctx.cr6.eq) goto loc_82C55C3C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82c55b40
	if (ctx.cr6.eq) goto loc_82C55B40;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x82c55c60
	if (!ctx.cr6.eq) goto loc_82C55C60;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r11,r11,22984
	ctx.r11.s64 = ctx.r11.s64 + 22984;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82c55c60
	goto loc_82C55C60;
loc_82C55B40:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82c55b60
	if (!ctx.cr6.gt) goto loc_82C55B60;
loc_82C55B50:
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addze. r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x82c55b50
	if (ctx.cr0.gt) goto loc_82C55B50;
loc_82C55B60:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// slw r30,r10,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// twllei r30,0
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r26,r10,r30
	ctx.r26.s32 = ctx.r10.s32 / ctx.r30.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	// bl 0x82c3fd60
	ctx.lr = 0x82C55BA0;
	sub_82C3FD60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r3,r26,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82c3fd60
	ctx.lr = 0x82C55BB0;
	sub_82C3FD60(ctx, base);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82c55be8
	if (!ctx.cr6.gt) goto loc_82C55BE8;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82C55BC4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r5,r27,r11
	ctx.r5.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x82c55798
	ctx.lr = 0x82C55BD8;
	sub_82C55798(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82c55bc4
	if (ctx.cr6.lt) goto loc_82C55BC4;
loc_82C55BE8:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82c55c20
	if (!ctx.cr6.gt) goto loc_82C55C20;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82C55BF8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mullw r3,r10,r30
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// bl 0x82c55798
	ctx.lr = 0x82C55C10;
	sub_82C55798(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82c55bf8
	if (ctx.cr6.lt) goto loc_82C55BF8;
loc_82C55C20:
	// lis r10,-32059
	ctx.r10.s64 = -2101018624;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r10,r10,22736
	ctx.r10.s64 = ctx.r10.s64 + 22736;
	// addi r11,r11,22848
	ctx.r11.s64 = ctx.r11.s64 + 22848;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82c55c54
	goto loc_82C55C54;
loc_82C55C3C:
	// lis r10,-32059
	ctx.r10.s64 = -2101018624;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r10,r10,23000
	ctx.r10.s64 = ctx.r10.s64 + 23000;
	// addi r11,r11,23024
	ctx.r11.s64 = ctx.r11.s64 + 23024;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82C55C54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c55c6c
	if (!ctx.cr6.eq) goto loc_82C55C6C;
loc_82C55C60:
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r11,r11,23048
	ctx.r11.s64 = ctx.r11.s64 + 23048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82C55C6C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c55c84
	if (!ctx.cr6.eq) goto loc_82C55C84;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r11,r11,23128
	ctx.r11.s64 = ctx.r11.s64 + 23128;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82C55C84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C55C90"))) PPC_WEAK_FUNC(sub_82C55C90);
PPC_FUNC_IMPL(__imp__sub_82C55C90) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82c3fdc0
	ctx.lr = 0x82C55CAC;
	sub_82C3FDC0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82c3fdc0
	ctx.lr = 0x82C55CB4;
	sub_82C3FDC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3fdb8
	ctx.lr = 0x82C55CBC;
	sub_82C3FDB8(ctx, base);
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

__attribute__((alias("__imp__sub_82C55CD0"))) PPC_WEAK_FUNC(sub_82C55CD0);
PPC_FUNC_IMPL(__imp__sub_82C55CD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,24(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C55CF0"))) PPC_WEAK_FUNC(sub_82C55CF0);
PPC_FUNC_IMPL(__imp__sub_82C55CF0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c3fbc8
	ctx.lr = 0x82C55D08;
	sub_82C3FBC8(ctx, base);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82C55D20"))) PPC_WEAK_FUNC(sub_82C55D20);
PPC_FUNC_IMPL(__imp__sub_82C55D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82c55d88
	if (ctx.cr6.eq) goto loc_82C55D88;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82c55db0
	if (ctx.cr6.eq) goto loc_82C55DB0;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x82c55dd8
	if (ctx.cr6.eq) goto loc_82C55DD8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C55D48:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82c55d74
	if (!ctx.cr6.gt) goto loc_82C55D74;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82C55D5C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82c55d5c
	if (!ctx.cr0.eq) goto loc_82C55D5C;
loc_82C55D74:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// bne 0x82c55d48
	if (!ctx.cr0.eq) goto loc_82C55D48;
	// blr 
	return;
loc_82C55D88:
	// clrlwi. r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c55e50
	if (!ctx.cr0.eq) goto loc_82C55E50;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82c55e50
	if (!ctx.cr6.eq) goto loc_82C55E50;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82c55e50
	if (!ctx.cr6.eq) goto loc_82C55E50;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// li r7,2
	ctx.r7.s64 = 2;
loc_82C55DB0:
	// clrlwi. r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c55e1c
	if (!ctx.cr0.eq) goto loc_82C55E1C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82c55e1c
	if (!ctx.cr6.eq) goto loc_82C55E1C;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82c55e1c
	if (!ctx.cr6.eq) goto loc_82C55E1C;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// li r7,4
	ctx.r7.s64 = 4;
loc_82C55DD8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C55DE8:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f12,12(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bgt 0x82c55de8
	if (ctx.cr0.gt) goto loc_82C55DE8;
	// blr 
	return;
loc_82C55E1C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C55E2C:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bgt 0x82c55e2c
	if (ctx.cr0.gt) goto loc_82C55E2C;
	// blr 
	return;
loc_82C55E50:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C55E60:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bgt 0x82c55e60
	if (ctx.cr0.gt) goto loc_82C55E60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C55E80"))) PPC_WEAK_FUNC(sub_82C55E80);
PPC_FUNC_IMPL(__imp__sub_82C55E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82C55E88;
	__savegprlr_24(ctx, base);
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x82c55f80
	if (ctx.cr6.eq) goto loc_82C55F80;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x82c55f20
	if (ctx.cr6.eq) goto loc_82C55F20;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82c55fd4
	if (!ctx.cr6.gt) goto loc_82C55FD4;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82C55EAC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82c55f0c
	if (!ctx.cr6.gt) goto loc_82C55F0C;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
loc_82C55EC0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82c55efc
	if (!ctx.cr6.gt) goto loc_82C55EFC;
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r28,r26,r29
	ctx.r28.u64 = ctx.r26.u64 + ctx.r29.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r31,r4
	ctx.r28.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82C55EE4:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82c55ee4
	if (!ctx.cr0.eq) goto loc_82C55EE4;
loc_82C55EFC:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r30,r30,r7
	ctx.r30.u64 = ctx.r30.u64 + ctx.r7.u64;
	// add r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 + ctx.r6.u64;
	// bne 0x82c55ec0
	if (!ctx.cr0.eq) goto loc_82C55EC0;
loc_82C55F0C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r27,r27,r10
	ctx.r27.u64 = ctx.r27.u64 + ctx.r10.u64;
	// add r26,r26,r9
	ctx.r26.u64 = ctx.r26.u64 + ctx.r9.u64;
	// bne 0x82c55eac
	if (!ctx.cr0.eq) goto loc_82C55EAC;
	// b 0x82c55fd4
	goto loc_82C55FD4;
loc_82C55F20:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82c55fd4
	if (!ctx.cr6.gt) goto loc_82C55FD4;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C55F30:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82c55f6c
	if (!ctx.cr6.gt) goto loc_82C55F6C;
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r6,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_82C55F4C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// bne 0x82c55f4c
	if (!ctx.cr0.eq) goto loc_82C55F4C;
loc_82C55F6C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 + ctx.r4.u64;
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// bne 0x82c55f30
	if (!ctx.cr0.eq) goto loc_82C55F30;
	// b 0x82c55fd4
	goto loc_82C55FD4;
loc_82C55F80:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82c55fd4
	if (!ctx.cr6.gt) goto loc_82C55FD4;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C55F90:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82c55fc4
	if (!ctx.cr6.gt) goto loc_82C55FC4;
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r6,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82C55FAC:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// bne 0x82c55fac
	if (!ctx.cr0.eq) goto loc_82C55FAC;
loc_82C55FC4:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 + ctx.r4.u64;
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// bne 0x82c55f90
	if (!ctx.cr0.eq) goto loc_82C55F90;
loc_82C55FD4:
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C55FD8"))) PPC_WEAK_FUNC(sub_82C55FD8);
PPC_FUNC_IMPL(__imp__sub_82C55FD8) {
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
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// neg r9,r6
	ctx.r9.s64 = -ctx.r6.s64;
	// blt cr6,0x82c56008
	if (ctx.cr6.lt) goto loc_82C56008;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82C56008:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// blt cr6,0x82c56018
	if (ctx.cr6.lt) goto loc_82C56018;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82C56018:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82c5603c
	if (!ctx.cr6.lt) goto loc_82C5603C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82c55e80
	ctx.lr = 0x82C56038;
	sub_82C55E80(ctx, base);
	// b 0x82c56060
	goto loc_82C56060;
loc_82C5603C:
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bl 0x82c55e80
	ctx.lr = 0x82C56060;
	sub_82C55E80(ctx, base);
loc_82C56060:
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

__attribute__((alias("__imp__sub_82C56078"))) PPC_WEAK_FUNC(sub_82C56078);
PPC_FUNC_IMPL(__imp__sub_82C56078) {
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
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// neg r9,r7
	ctx.r9.s64 = -ctx.r7.s64;
	// blt cr6,0x82c560a8
	if (ctx.cr6.lt) goto loc_82C560A8;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82C560A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// blt cr6,0x82c560b8
	if (ctx.cr6.lt) goto loc_82C560B8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82C560B8:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82c560dc
	if (!ctx.cr6.lt) goto loc_82C560DC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82c55e80
	ctx.lr = 0x82C560D8;
	sub_82C55E80(ctx, base);
	// b 0x82c56100
	goto loc_82C56100;
loc_82C560DC:
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82c55e80
	ctx.lr = 0x82C56100;
	sub_82C55E80(ctx, base);
loc_82C56100:
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

__attribute__((alias("__imp__sub_82C56118"))) PPC_WEAK_FUNC(sub_82C56118);
PPC_FUNC_IMPL(__imp__sub_82C56118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82C56120;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r5,r3,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r8,r31,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r31.s64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mullw r27,r10,r31
	ctx.r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mullw r11,r6,r3
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// mullw r28,r7,r3
	ctx.r28.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// mullw r4,r9,r31
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r3,r28,r27
	ctx.r3.u64 = ctx.r28.u64 + ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// bl 0x82c55e80
	ctx.lr = 0x82C56180;
	sub_82C55E80(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C56188"))) PPC_WEAK_FUNC(sub_82C56188);
PPC_FUNC_IMPL(__imp__sub_82C56188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82C56190;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// subf r30,r29,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r29.s64;
	// subf r27,r28,r6
	ctx.r27.s64 = ctx.r6.s64 - ctx.r28.s64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mullw r8,r9,r28
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mullw r10,r7,r30
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// bl 0x82c55fd8
	ctx.lr = 0x82C561E8;
	sub_82C55FD8(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mullw r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mullw r11,r7,r29
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r6,r30
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82c56078
	ctx.lr = 0x82C56224;
	sub_82C56078(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C56230"))) PPC_WEAK_FUNC(sub_82C56230);
PPC_FUNC_IMPL(__imp__sub_82C56230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x82C56238;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,276(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82c56418
	ctx.lr = 0x82C5626C;
	sub_82C56418(ctx, base);
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r8,r11,24856
	ctx.r8.s64 = ctx.r11.s64 + 24856;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x82c56350
	ctx.lr = 0x82C562B4;
	sub_82C56350(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C562C0"))) PPC_WEAK_FUNC(sub_82C562C0);
PPC_FUNC_IMPL(__imp__sub_82C562C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x82C562C8;
	__savegprlr_23(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4288(r1)
	ea = -4288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,4372(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82c56418
	ctx.lr = 0x82C56300;
	sub_82C56418(ctx, base);
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r8,r11,24968
	ctx.r8.s64 = ctx.r11.s64 + 24968;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x82c56350
	ctx.lr = 0x82C56348;
	sub_82C56350(ctx, base);
	// addi r1,r1,4288
	ctx.r1.s64 = ctx.r1.s64 + 4288;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C56350"))) PPC_WEAK_FUNC(sub_82C56350);
PPC_FUNC_IMPL(__imp__sub_82C56350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82C56358;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
loc_82C56378:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// subf r10,r31,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82c563c4
	if (ctx.cr6.lt) goto loc_82C563C4;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x82c563c4
	if (!ctx.cr6.gt) goto loc_82C563C4;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addze r27,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r27.s64 = temp.s64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82c56350
	ctx.lr = 0x82C563BC;
	sub_82C56350(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82c56378
	goto loc_82C56378;
loc_82C563C4:
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ble cr6,0x82c56400
	if (!ctx.cr6.gt) goto loc_82C56400;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addze r27,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r27.s64 = temp.s64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82c56350
	ctx.lr = 0x82C563F8;
	sub_82C56350(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x82c56378
	goto loc_82C56378;
loc_82C56400:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82C56410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C56418"))) PPC_WEAK_FUNC(sub_82C56418);
PPC_FUNC_IMPL(__imp__sub_82C56418) {
	PPC_FUNC_PROLOGUE();
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,8192
	ctx.r10.s64 = 8192;
	// twllei r11,0
	// divw r3,r10,r11
	ctx.r3.s32 = ctx.r10.s32 / ctx.r11.s32;
	// b 0x82c42460
	sub_82C42460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C56430"))) PPC_WEAK_FUNC(sub_82C56430);
PPC_FUNC_IMPL(__imp__sub_82C56430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82C56438;
	__savegprlr_27(ctx, base);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82c56558
	if (ctx.cr6.eq) goto loc_82C56558;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82c564dc
	if (ctx.cr6.eq) goto loc_82C564DC;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x82c565bc
	if (!ctx.cr6.gt) goto loc_82C565BC;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_82C5645C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82c564c4
	if (!ctx.cr6.gt) goto loc_82C564C4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82C56470:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82c564b4
	if (!ctx.cr6.gt) goto loc_82C564B4;
	// add r11,r30,r9
	ctx.r11.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r31,r29,r8
	ctx.r31.u64 = ctx.r29.u64 + ctx.r8.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_82C56494:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82c56494
	if (!ctx.cr0.eq) goto loc_82C56494;
loc_82C564B4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bne 0x82c56470
	if (!ctx.cr0.eq) goto loc_82C56470;
loc_82C564C4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// add r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 + ctx.r6.u64;
	// cmpw cr6,r27,r4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82c5645c
	if (ctx.cr6.lt) goto loc_82C5645C;
	// b 0x82c565bc
	goto loc_82C565BC;
loc_82C564DC:
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x82c565bc
	if (!ctx.cr6.gt) goto loc_82C565BC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r3
	ctx.r5.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
loc_82C564F8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82c56540
	if (!ctx.cr6.gt) goto loc_82C56540;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82C5650C:
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bne 0x82c5650c
	if (!ctx.cr0.eq) goto loc_82C5650C;
loc_82C56540:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82c564f8
	if (ctx.cr6.lt) goto loc_82C564F8;
	// b 0x82c565bc
	goto loc_82C565BC;
loc_82C56558:
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x82c565bc
	if (!ctx.cr6.gt) goto loc_82C565BC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r6,r3
	ctx.r7.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r8,r5,r3
	ctx.r8.u64 = ctx.r5.u64 + ctx.r3.u64;
loc_82C56574:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82c565a8
	if (!ctx.cr6.gt) goto loc_82C565A8;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82C56588:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bne 0x82c56588
	if (!ctx.cr0.eq) goto loc_82C56588;
loc_82C565A8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82c56574
	if (ctx.cr6.lt) goto loc_82C56574;
loc_82C565BC:
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C565C0"))) PPC_WEAK_FUNC(sub_82C565C0);
PPC_FUNC_IMPL(__imp__sub_82C565C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82C565C8;
	__savegprlr_26(ctx, base);
	// lwz r27,12(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// beq cr6,0x82c56708
	if (ctx.cr6.eq) goto loc_82C56708;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x82c56678
	if (ctx.cr6.eq) goto loc_82C56678;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82c56780
	if (!ctx.cr6.lt) goto loc_82C56780;
	// mullw r30,r10,r5
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r31,r11,r5
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// subf r26,r5,r6
	ctx.r26.s64 = ctx.r6.s64 - ctx.r5.s64;
loc_82C565FC:
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82c56664
	if (!ctx.cr6.lt) goto loc_82C56664;
	// mullw r8,r11,r3
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// mullw r9,r10,r3
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// subf r28,r3,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82C56610:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82c56654
	if (!ctx.cr6.gt) goto loc_82C56654;
	// add r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r5,r30,r8
	ctx.r5.u64 = ctx.r30.u64 + ctx.r8.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + ctx.r29.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_82C56634:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82c56634
	if (!ctx.cr0.eq) goto loc_82C56634;
loc_82C56654:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bne 0x82c56610
	if (!ctx.cr0.eq) goto loc_82C56610;
loc_82C56664:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bne 0x82c565fc
	if (!ctx.cr0.eq) goto loc_82C565FC;
	// b 0x82c56780
	goto loc_82C56780;
loc_82C56678:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82c56780
	if (!ctx.cr6.lt) goto loc_82C56780;
	// mullw r30,r10,r5
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r31,r11,r5
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// subf r27,r5,r6
	ctx.r27.s64 = ctx.r6.s64 - ctx.r5.s64;
loc_82C5668C:
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82c566f4
	if (!ctx.cr6.lt) goto loc_82C566F4;
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// mullw r9,r11,r3
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82C566C0:
	// addi r28,r8,4
	ctx.r28.s64 = ctx.r8.s64 + 4;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// bne 0x82c566c0
	if (!ctx.cr0.eq) goto loc_82C566C0;
loc_82C566F4:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bne 0x82c5668c
	if (!ctx.cr0.eq) goto loc_82C5668C;
	// b 0x82c56780
	goto loc_82C56780;
loc_82C56708:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82c56780
	if (!ctx.cr6.lt) goto loc_82C56780;
	// mullw r30,r10,r5
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r31,r11,r5
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// subf r28,r5,r6
	ctx.r28.s64 = ctx.r6.s64 - ctx.r5.s64;
loc_82C5671C:
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82c56770
	if (!ctx.cr6.lt) goto loc_82C56770;
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// mullw r9,r11,r3
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82C56750:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// bne 0x82c56750
	if (!ctx.cr0.eq) goto loc_82C56750;
loc_82C56770:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bne 0x82c5671c
	if (!ctx.cr0.eq) goto loc_82C5671C;
loc_82C56780:
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C56788"))) PPC_WEAK_FUNC(sub_82C56788);
PPC_FUNC_IMPL(__imp__sub_82C56788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82C56790;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r27,r28,r6
	ctx.r27.s64 = ctx.r6.s64 - ctx.r28.s64;
	// subf r30,r29,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r29.s64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r10,r9,r28
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mullw r11,r6,r29
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r7,r30
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82c55fd8
	ctx.lr = 0x82C567E4;
	sub_82C55FD8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mullw r10,r9,r28
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mullw r11,r6,r29
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r10,r7,r30
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82c55fd8
	ctx.lr = 0x82C56820;
	sub_82C55FD8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mullw r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mullw r11,r7,r29
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r9,r6,r30
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82c56078
	ctx.lr = 0x82C5685C;
	sub_82C56078(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mullw r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mullw r11,r7,r29
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r9,r6,r30
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82c56078
	ctx.lr = 0x82C56898;
	sub_82C56078(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C568A0"))) PPC_WEAK_FUNC(sub_82C568A0);
PPC_FUNC_IMPL(__imp__sub_82C568A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82C568A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// b 0x82c5691c
	goto loc_82C5691C;
loc_82C568C0:
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c56350
	ctx.lr = 0x82C568EC;
	sub_82C56350(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c568a0
	ctx.lr = 0x82C56900;
	sub_82C568A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82C5691C:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bgt cr6,0x82c568c0
	if (ctx.cr6.gt) goto loc_82C568C0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C56930"))) PPC_WEAK_FUNC(sub_82C56930);
PPC_FUNC_IMPL(__imp__sub_82C56930) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82c56418
	ctx.lr = 0x82C56964;
	sub_82C56418(ctx, base);
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,26048
	ctx.r5.s64 = ctx.r11.s64 + 26048;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82c568a0
	ctx.lr = 0x82C5698C;
	sub_82C568A0(ctx, base);
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

__attribute__((alias("__imp__sub_82C569A8"))) PPC_WEAK_FUNC(sub_82C569A8);
PPC_FUNC_IMPL(__imp__sub_82C569A8) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8336(r1)
	ea = -8336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82c56418
	ctx.lr = 0x82C569E4;
	sub_82C56418(ctx, base);
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,26504
	ctx.r5.s64 = ctx.r11.s64 + 26504;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r11,r1,4208
	ctx.r11.s64 = ctx.r1.s64 + 4208;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82c568a0
	ctx.lr = 0x82C56A10;
	sub_82C568A0(ctx, base);
	// addi r1,r1,8336
	ctx.r1.s64 = ctx.r1.s64 + 8336;
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

__attribute__((alias("__imp__sub_82C56A28"))) PPC_WEAK_FUNC(sub_82C56A28);
PPC_FUNC_IMPL(__imp__sub_82C56A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82C56A30;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82d5c570
	ctx.lr = 0x82C56A38;
	__savefpr_26(ctx, base);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82c56bb8
	if (!ctx.cr6.gt) goto loc_82C56BB8;
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r9,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r28,-32235
	ctx.r28.s64 = -2112552960;
	// lis r29,-32236
	ctx.r29.s64 = -2112618496;
	// lis r30,-32235
	ctx.r30.s64 = -2112552960;
	// lis r31,-32235
	ctx.r31.s64 = -2112552960;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lfs f29,27664(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 27664);
	ctx.f29.f64 = double(temp.f32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lfs f30,-29668(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -29668);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lfs f31,27660(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 27660);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lfs f1,27656(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 27656);
	ctx.f1.f64 = double(temp.f32);
	// lfs f27,21356(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21356);
	ctx.f27.f64 = double(temp.f32);
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// lfs f28,-29672(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29672);
	ctx.f28.f64 = double(temp.f32);
	// lfs f2,27652(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27652);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,27648(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27648);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,-29652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29652);
	ctx.f4.f64 = double(temp.f32);
loc_82C56A98:
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r5,20
	ctx.r10.s64 = ctx.r5.s64 * 20;
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// mulli r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 * 24;
	// lfsx f11,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// mulli r11,r5,28
	ctx.r11.s64 = ctx.r5.s64 * 28;
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfsx f9,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f0,f9
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// mulli r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 * 12;
	// lfsx f8,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f9,f8,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fadds f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// mulli r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 * 12;
	// fadds f7,f12,f6
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fadds f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// mulli r10,r6,20
	ctx.r10.s64 = ctx.r6.s64 * 20;
	// fmuls f11,f7,f4
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f7,f6,f4
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fadds f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f26,f13,f29
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r7,r6,28
	ctx.r7.s64 = ctx.r6.s64 * 28;
	// fsubs f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fsubs f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fadds f10,f7,f9
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fmuls f7,f0,f29
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fsubs f9,f6,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// rlwinm r31,r6,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// mulli r30,r6,24
	ctx.r30.s64 = ctx.r6.s64 * 24;
	// fmsubs f0,f0,f30,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f26.f64));
	// fmuls f26,f11,f31
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f6,f5,f3
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmadds f13,f13,f30,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f7.f64));
	// add r3,r26,r3
	ctx.r3.u64 = ctx.r26.u64 + ctx.r3.u64;
	// fmuls f7,f5,f2
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f5,f10,f31
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f9,f9,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fmsubs f7,f8,f3,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 - ctx.f7.f64));
	// stfsx f7,r11,r4
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// fmadds f8,f8,f2,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f6.f64));
	// stfsx f8,r10,r4
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// stfsx f9,r9,r4
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmsubs f12,f11,f1,f5
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 - ctx.f5.f64));
	// stfsx f12,r8,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, temp.u32);
	// fmadds f12,f10,f1,f26
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f26.f64));
	// stfsx f12,r7,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// stfsx f0,r31,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// stfsx f13,r30,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// lwz r11,-26212(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26212);
	// add r4,r25,r4
	ctx.r4.u64 = ctx.r25.u64 + ctx.r4.u64;
	// xor r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// xor r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// bdnz 0x82c56a98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C56A98;
loc_82C56BB8:
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82d5c5bc
	ctx.lr = 0x82C56BC0;
	__restfpr_26(ctx, base);
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C56BC8"))) PPC_WEAK_FUNC(sub_82C56BC8);
PPC_FUNC_IMPL(__imp__sub_82C56BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r11,27600
	ctx.r5.s64 = ctx.r11.s64 + 27600;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r11,27176
	ctx.r4.s64 = ctx.r11.s64 + 27176;
	// b 0x82cab780
	sub_82CAB780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C56BE0"))) PPC_WEAK_FUNC(sub_82C56BE0);
PPC_FUNC_IMPL(__imp__sub_82C56BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82C56BE8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82d5c570
	ctx.lr = 0x82C56BF0;
	__savefpr_26(ctx, base);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82c56d64
	if (!ctx.cr6.gt) goto loc_82C56D64;
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r9,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r29,-32235
	ctx.r29.s64 = -2112552960;
	// lis r30,-32235
	ctx.r30.s64 = -2112552960;
	// lis r31,-32235
	ctx.r31.s64 = -2112552960;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lfs f29,27648(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 27648);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lfs f30,27652(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 27652);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lfs f31,27660(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 27660);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,27656(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 27656);
	ctx.f1.f64 = double(temp.f32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// lfs f2,-29652(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29652);
	ctx.f2.f64 = double(temp.f32);
	// lfs f28,-29672(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29672);
	ctx.f28.f64 = double(temp.f32);
	// lfs f3,27664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27664);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,-29668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29668);
	ctx.f4.f64 = double(temp.f32);
loc_82C56C48:
	// mulli r11,r5,20
	ctx.r11.s64 = ctx.r5.s64 * 20;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 * 12;
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// mulli r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 * 24;
	// lfsx f11,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f10,f3
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f13,f6,f2
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f6,f10,f4
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// mulli r10,r5,28
	ctx.r10.s64 = ctx.r5.s64 * 28;
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfsx f9,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// fmadds f10,f11,f4,f5
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f5.f64));
	// mulli r10,r6,28
	ctx.r10.s64 = ctx.r6.s64 * 28;
	// fmsubs f11,f11,f3,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 - ctx.f6.f64));
	// fsubs f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// lfsx f7,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f7,f7,f28
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// mulli r11,r6,20
	ctx.r11.s64 = ctx.r6.s64 * 20;
	// fmuls f26,f12,f30
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// fsubs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// fadds f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// mulli r7,r6,12
	ctx.r7.s64 = ctx.r6.s64 * 12;
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fadds f9,f6,f10
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// mulli r31,r6,24
	ctx.r31.s64 = ctx.r6.s64 * 24;
	// fsubs f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fmuls f11,f5,f31
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fsubs f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fmuls f6,f12,f29
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f27,f7,f31
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// rlwinm r30,r6,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r27,r3
	ctx.r3.u64 = ctx.r27.u64 + ctx.r3.u64;
	// fmsubs f12,f7,f1,f11
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 - ctx.f11.f64));
	// fmadds f11,f13,f30,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f6.f64));
	// fmadds f7,f5,f1,f27
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f27.f64));
	// fmsubs f13,f13,f29,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 - ctx.f26.f64));
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfsx f6,r10,r4
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// stfsx f12,r11,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// fadds f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfsx f12,r9,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
	// fsubs f12,f10,f7
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// stfsx f12,r8,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, temp.u32);
	// fadds f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfsx f12,r7,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f12,r31,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f0,r30,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// lwz r11,-26212(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26212);
	// add r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 + ctx.r4.u64;
	// xor r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// xor r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// bdnz 0x82c56c48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C56C48;
loc_82C56D64:
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82d5c5bc
	ctx.lr = 0x82C56D6C;
	__restfpr_26(ctx, base);
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C56D70"))) PPC_WEAK_FUNC(sub_82C56D70);
PPC_FUNC_IMPL(__imp__sub_82C56D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r11,27672
	ctx.r5.s64 = ctx.r11.s64 + 27672;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r11,27616
	ctx.r4.s64 = ctx.r11.s64 + 27616;
	// b 0x82cab780
	sub_82CAB780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C56D88"))) PPC_WEAK_FUNC(sub_82C56D88);
PPC_FUNC_IMPL(__imp__sub_82C56D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c490
	ctx.lr = 0x82C56D90;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82d5c540
	ctx.lr = 0x82C56D98;
	__savefpr_14(ctx, base);
	// mulli r11,r9,248
	ctx.r11.s64 = ctx.r9.s64 * 248;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// addi r11,r11,-248
	ctx.r11.s64 = ctx.r11.s64 + -248;
	// bge cr6,0x82c583d0
	if (!ctx.cr6.lt) goto loc_82C583D0;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r15,r9,r10
	ctx.r15.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lis r28,-32235
	ctx.r28.s64 = -2112552960;
	// rlwinm r19,r7,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r29,-32235
	ctx.r29.s64 = -2112552960;
	// lis r30,-32235
	ctx.r30.s64 = -2112552960;
	// lis r31,-32235
	ctx.r31.s64 = -2112552960;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lfs f8,27792(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 27792);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lfs f9,27788(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 27788);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,27784(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 27784);
	ctx.f10.f64 = double(temp.f32);
	// lis r14,-32234
	ctx.r14.s64 = -2112487424;
	// lfs f11,27780(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 27780);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-29656(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29656);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,27776(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27776);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-29652(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29652);
	ctx.f0.f64 = double(temp.f32);
loc_82C56DF4:
	// mulli r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 * 12;
	// lfs f7,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// mulli r9,r8,48
	ctx.r9.s64 = ctx.r8.s64 * 48;
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f18,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f18.f64 = double(temp.f32);
	// lfsx f3,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f22,f5,f3
	ctx.f22.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// fadds f21,f2,f4
	ctx.f21.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// mulli r31,r8,44
	ctx.r31.s64 = ctx.r8.s64 * 44;
	// fadds f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fsubs f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// lfsx f17,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f17.f64 = double(temp.f32);
	// lfsx f1,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f31,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f31.f64 = double(temp.f32);
	// lfsx f30,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f30.f64 = double(temp.f32);
	// fadds f2,f31,f1
	ctx.f2.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// lfsx f29,r31,r6
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	ctx.f29.f64 = double(temp.f32);
	// mulli r30,r8,60
	ctx.r30.s64 = ctx.r8.s64 * 60;
	// fsubs f3,f1,f31
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lfsx f15,r7,r5
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f15.f64 = double(temp.f32);
	// fadds f1,f29,f30
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fsubs f31,f30,f29
	ctx.f31.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// lfsx f28,r30,r5
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	ctx.f28.f64 = double(temp.f32);
	// lfsx f27,r30,r6
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f30,f7,f28
	ctx.f30.f64 = double(float(ctx.f7.f64 - ctx.f28.f64));
	// rlwinm r29,r8,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// fadds f29,f27,f6
	ctx.f29.f64 = double(float(ctx.f27.f64 + ctx.f6.f64));
	// mulli r28,r8,28
	ctx.r28.s64 = ctx.r8.s64 * 28;
	// fadds f7,f28,f7
	ctx.f7.f64 = double(float(ctx.f28.f64 + ctx.f7.f64));
	// fsubs f6,f6,f27
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f27.f64));
	// lfsx f26,r29,r3
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	ctx.f26.f64 = double(temp.f32);
	// lfsx f25,r28,r5
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	ctx.f25.f64 = double(temp.f32);
	// lfsx f24,r29,r4
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f28,f26,f25
	ctx.f28.f64 = double(float(ctx.f26.f64 - ctx.f25.f64));
	// lfsx f23,r28,r6
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	ctx.f23.f64 = double(temp.f32);
	// fadds f27,f25,f26
	ctx.f27.f64 = double(float(ctx.f25.f64 + ctx.f26.f64));
	// fadds f26,f23,f24
	ctx.f26.f64 = double(float(ctx.f23.f64 + ctx.f24.f64));
	// fsubs f25,f24,f23
	ctx.f25.f64 = double(float(ctx.f24.f64 - ctx.f23.f64));
	// fadds f24,f21,f22
	ctx.f24.f64 = double(float(ctx.f21.f64 + ctx.f22.f64));
	// fsubs f23,f22,f21
	ctx.f23.f64 = double(float(ctx.f22.f64 - ctx.f21.f64));
	// fadds f21,f1,f3
	ctx.f21.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fsubs f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fadds f22,f2,f5
	ctx.f22.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fsubs f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// fsubs f1,f29,f28
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// fadds f29,f28,f29
	ctx.f29.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// fadds f19,f26,f30
	ctx.f19.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// fsubs f30,f30,f26
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f26.f64));
	// fadds f20,f27,f7
	ctx.f20.f64 = double(float(ctx.f27.f64 + ctx.f7.f64));
	// fsubs f7,f7,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f27.f64));
	// fadds f28,f21,f24
	ctx.f28.f64 = double(float(ctx.f21.f64 + ctx.f24.f64));
	// fsubs f26,f3,f23
	ctx.f26.f64 = double(float(ctx.f3.f64 - ctx.f23.f64));
	// fsubs f24,f21,f24
	ctx.f24.f64 = double(float(ctx.f21.f64 - ctx.f24.f64));
	// fadds f23,f3,f23
	ctx.f23.f64 = double(float(ctx.f3.f64 + ctx.f23.f64));
	// fsubs f27,f4,f31
	ctx.f27.f64 = double(float(ctx.f4.f64 - ctx.f31.f64));
	// fsubs f2,f6,f25
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f25.f64));
	// fadds f4,f31,f4
	ctx.f4.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// lfsx f31,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f31.f64 = double(temp.f32);
	// fadds f6,f25,f6
	ctx.f6.f64 = double(float(ctx.f25.f64 + ctx.f6.f64));
	// lfsx f25,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f3,f28,f0
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f28,f26,f0
	ctx.f28.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f26,f24,f0
	ctx.f26.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// fmuls f24,f23,f0
	ctx.f24.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// fadds f23,f22,f20
	ctx.f23.f64 = double(float(ctx.f22.f64 + ctx.f20.f64));
	// fsubs f22,f20,f22
	ctx.f22.f64 = double(float(ctx.f20.f64 - ctx.f22.f64));
	// fadds f16,f27,f7
	ctx.f16.f64 = double(float(ctx.f27.f64 + ctx.f7.f64));
	// fsubs f21,f19,f3
	ctx.f21.f64 = double(float(ctx.f19.f64 - ctx.f3.f64));
	// fadds f20,f28,f1
	ctx.f20.f64 = double(float(ctx.f28.f64 + ctx.f1.f64));
	// fsubs f1,f1,f28
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f28.f64));
	// fadds f28,f26,f29
	ctx.f28.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// fsubs f29,f29,f26
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f26.f64));
	// fadds f26,f30,f24
	ctx.f26.f64 = double(float(ctx.f30.f64 + ctx.f24.f64));
	// fadds f3,f3,f19
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f19.f64));
	// lfs f19,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f30,f30,f24
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f24.f64));
	// lfs f24,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// fadds f14,f2,f5
	ctx.f14.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// stfs f14,-300(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// fsubs f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// lfsx f2,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,-420(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -420, temp.u32);
	// fadds f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fsubs f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfsx f4,r28,r4
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,-460(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -460, temp.u32);
	// fsubs f7,f7,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f27.f64));
	// lfsx f4,r29,r6
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,-456(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -456, temp.u32);
	// lfsx f4,r30,r3
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,-444(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -444, temp.u32);
	// lfsx f4,r28,r3
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,-484(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -484, temp.u32);
	// lfsx f4,r29,r5
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,-428(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -428, temp.u32);
	// fsubs f4,f31,f25
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f25.f64));
	// fadds f31,f25,f31
	ctx.f31.f64 = double(float(ctx.f25.f64 + ctx.f31.f64));
	// lfsx f27,r31,r3
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	ctx.f27.f64 = double(temp.f32);
	// fadds f25,f17,f18
	ctx.f25.f64 = double(float(ctx.f17.f64 + ctx.f18.f64));
	// lfsx f14,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f18,f18,f17
	ctx.f18.f64 = double(float(ctx.f18.f64 - ctx.f17.f64));
	// stfs f2,-480(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -480, temp.u32);
	// fsubs f17,f15,f27
	ctx.f17.f64 = double(float(ctx.f15.f64 - ctx.f27.f64));
	// lfsx f2,r30,r4
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// fadds f27,f27,f15
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f15.f64));
	// lfs f15,-420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -420);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f15,f14
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f14.f64));
	// stfs f15,-496(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -496, temp.u32);
	// fsubs f15,f2,f24
	ctx.f15.f64 = double(float(ctx.f2.f64 - ctx.f24.f64));
	// stfs f15,-472(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -472, temp.u32);
	// lfs f15,-420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -420);
	ctx.f15.f64 = double(temp.f32);
	// fadds f2,f2,f24
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f24.f64));
	// fsubs f15,f15,f14
	ctx.f15.f64 = double(float(ctx.f15.f64 - ctx.f14.f64));
	// stfs f15,-420(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -420, temp.u32);
	// stfs f2,-492(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -492, temp.u32);
	// lfs f14,-456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	ctx.f14.f64 = double(temp.f32);
	// lfs f15,-460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	ctx.f15.f64 = double(temp.f32);
	// lfs f2,-484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -484);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f15,f15,f14
	ctx.f15.f64 = double(float(ctx.f15.f64 - ctx.f14.f64));
	// lfs f14,-444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -444);
	ctx.f14.f64 = double(temp.f32);
	// lfs f24,-428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	ctx.f24.f64 = double(temp.f32);
	// fadds f14,f14,f19
	ctx.f14.f64 = double(float(ctx.f14.f64 + ctx.f19.f64));
	// fadds f24,f24,f2
	ctx.f24.f64 = double(float(ctx.f24.f64 + ctx.f2.f64));
	// stfs f24,-488(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -488, temp.u32);
	// lfs f24,-428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f2,f2,f24
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f24.f64));
	// lfs f24,-444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -444);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f24,f19,f24
	ctx.f24.f64 = double(float(ctx.f19.f64 - ctx.f24.f64));
	// stfs f24,-428(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -428, temp.u32);
	// lfs f19,-456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	ctx.f19.f64 = double(temp.f32);
	// lfs f24,-460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	ctx.f24.f64 = double(temp.f32);
	// fadds f24,f19,f24
	ctx.f24.f64 = double(float(ctx.f19.f64 + ctx.f24.f64));
	// fadds f19,f25,f4
	ctx.f19.f64 = double(float(ctx.f25.f64 + ctx.f4.f64));
	// fsubs f4,f4,f25
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f25.f64));
	// fsubs f25,f31,f27
	ctx.f25.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// stfs f25,-460(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -460, temp.u32);
	// fadds f31,f27,f31
	ctx.f31.f64 = double(float(ctx.f27.f64 + ctx.f31.f64));
	// lfs f25,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f25.f64 = double(temp.f32);
	// fadds f25,f25,f17
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f17.f64));
	// lfs f27,-420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -420);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f27,f27,f18
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f18.f64));
	// stfs f27,-456(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + -456, temp.u32);
	// lfs f27,-472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -472);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f27,f27,f15
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f15.f64));
	// stfs f27,-444(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + -444, temp.u32);
	// lfs f27,-472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -472);
	ctx.f27.f64 = double(temp.f32);
	// fadds f27,f15,f27
	ctx.f27.f64 = double(float(ctx.f15.f64 + ctx.f27.f64));
	// lfs f15,-420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -420);
	ctx.f15.f64 = double(temp.f32);
	// fadds f18,f15,f18
	ctx.f18.f64 = double(float(ctx.f15.f64 + ctx.f18.f64));
	// lfs f15,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f15,f14
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f14.f64));
	// stfs f15,-472(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -472, temp.u32);
	// lfs f15,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f15,f14,f15
	ctx.f15.f64 = double(float(ctx.f14.f64 - ctx.f15.f64));
	// stfs f15,-488(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -488, temp.u32);
	// lfs f15,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f17,f17,f15
	ctx.f17.f64 = double(float(ctx.f17.f64 - ctx.f15.f64));
	// stfs f17,-496(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -496, temp.u32);
	// lfs f14,-460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f15,f19,f25
	ctx.f15.f64 = double(float(ctx.f19.f64 - ctx.f25.f64));
	// lfs f17,-444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -444);
	ctx.f17.f64 = double(temp.f32);
	// fadds f19,f25,f19
	ctx.f19.f64 = double(float(ctx.f25.f64 + ctx.f19.f64));
	// fsubs f17,f17,f14
	ctx.f17.f64 = double(float(ctx.f17.f64 - ctx.f14.f64));
	// stfs f17,-380(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -380, temp.u32);
	// fadds f17,f18,f27
	ctx.f17.f64 = double(float(ctx.f18.f64 + ctx.f27.f64));
	// stfs f17,-412(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// lfs f17,-472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -472);
	ctx.f17.f64 = double(temp.f32);
	// fsubs f27,f27,f18
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f18.f64));
	// fadds f17,f31,f17
	ctx.f17.f64 = double(float(ctx.f31.f64 + ctx.f17.f64));
	// stfs f17,-388(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -388, temp.u32);
	// lfs f14,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f14.f64 = double(temp.f32);
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f17,-456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	ctx.f17.f64 = double(temp.f32);
	// mulli r26,r8,56
	ctx.r26.s64 = ctx.r8.s64 * 56;
	// fsubs f17,f14,f17
	ctx.f17.f64 = double(float(ctx.f14.f64 - ctx.f17.f64));
	// lfs f14,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f14,f2,f14
	ctx.f14.f64 = double(float(ctx.f2.f64 - ctx.f14.f64));
	// stfs f14,-484(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -484, temp.u32);
	// fmuls f15,f15,f0
	ctx.f15.f64 = double(float(ctx.f15.f64 * ctx.f0.f64));
	// lfs f25,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f25.f64 = double(temp.f32);
	// mulli r25,r8,36
	ctx.r25.s64 = ctx.r8.s64 * 36;
	// fadds f14,f15,f14
	ctx.f14.f64 = double(float(ctx.f15.f64 + ctx.f14.f64));
	// stfs f14,-364(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -364, temp.u32);
	// mulli r24,r8,24
	ctx.r24.s64 = ctx.r8.s64 * 24;
	// mulli r20,r8,20
	ctx.r20.s64 = ctx.r8.s64 * 20;
	// mulli r23,r8,40
	ctx.r23.s64 = ctx.r8.s64 * 40;
	// lfs f18,-380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -380);
	ctx.f18.f64 = double(temp.f32);
	// lfs f14,-484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -484);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f15,f14,f15
	ctx.f15.f64 = double(float(ctx.f14.f64 - ctx.f15.f64));
	// stfs f15,-360(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -360, temp.u32);
	// lfs f14,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f14.f64 = double(temp.f32);
	// lfs f15,-456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f15,f14
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f14.f64));
	// stfs f15,-488(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -488, temp.u32);
	// lfs f14,-444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -444);
	ctx.f14.f64 = double(temp.f32);
	// lfs f15,-460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f15,f14
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f14.f64));
	// lfs f14,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f14.f64 = double(temp.f32);
	// fadds f14,f4,f14
	ctx.f14.f64 = double(float(ctx.f4.f64 + ctx.f14.f64));
	// fsubs f4,f4,f25
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f25.f64));
	// lfs f25,-428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f25,f25,f24
	ctx.f25.f64 = double(float(ctx.f25.f64 - ctx.f24.f64));
	// stfs f25,-496(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -496, temp.u32);
	// lfs f25,-428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	ctx.f25.f64 = double(temp.f32);
	// stfs f4,-484(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -484, temp.u32);
	// fadds f4,f24,f25
	ctx.f4.f64 = double(float(ctx.f24.f64 + ctx.f25.f64));
	// lfs f25,-472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -472);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f24,f19,f0
	ctx.f24.f64 = double(float(ctx.f19.f64 * ctx.f0.f64));
	// fsubs f31,f25,f31
	ctx.f31.f64 = double(float(ctx.f25.f64 - ctx.f31.f64));
	// lfs f25,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f25.f64 = double(temp.f32);
	// fadds f2,f25,f2
	ctx.f2.f64 = double(float(ctx.f25.f64 + ctx.f2.f64));
	// fmuls f25,f17,f12
	ctx.f25.f64 = double(float(ctx.f17.f64 * ctx.f12.f64));
	// stfs f25,-448(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -448, temp.u32);
	// fmuls f17,f17,f13
	ctx.f17.f64 = double(float(ctx.f17.f64 * ctx.f13.f64));
	// fmuls f25,f14,f0
	ctx.f25.f64 = double(float(ctx.f14.f64 * ctx.f0.f64));
	// lfs f19,-484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -484);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f19,f19,f0
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f0.f64));
	// lfs f14,-448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -448);
	ctx.f14.f64 = double(temp.f32);
	// fmadds f14,f18,f13,f14
	ctx.f14.f64 = double(float(ctx.f18.f64 * ctx.f13.f64 + ctx.f14.f64));
	// stfs f14,-384(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -384, temp.u32);
	// fmsubs f18,f18,f12,f17
	ctx.f18.f64 = double(float(ctx.f18.f64 * ctx.f12.f64 - ctx.f17.f64));
	// stfs f18,-396(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// fmuls f17,f15,f12
	ctx.f17.f64 = double(float(ctx.f15.f64 * ctx.f12.f64));
	// lfs f18,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f14,f18,f12
	ctx.f14.f64 = double(float(ctx.f18.f64 * ctx.f12.f64));
	// fadds f18,f27,f31
	ctx.f18.f64 = double(float(ctx.f27.f64 + ctx.f31.f64));
	// fsubs f31,f27,f31
	ctx.f31.f64 = double(float(ctx.f27.f64 - ctx.f31.f64));
	// lfs f27,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f27,f27,f13,f17
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f13.f64 + ctx.f17.f64));
	// lfs f17,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f17.f64 = double(temp.f32);
	// fadds f17,f17,f25
	ctx.f17.f64 = double(float(ctx.f17.f64 + ctx.f25.f64));
	// stfs f17,-348(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -348, temp.u32);
	// lfs f17,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f17.f64 = double(temp.f32);
	// fsubs f25,f17,f25
	ctx.f25.f64 = double(float(ctx.f17.f64 - ctx.f25.f64));
	// fmsubs f17,f15,f13,f14
	ctx.f17.f64 = double(float(ctx.f15.f64 * ctx.f13.f64 - ctx.f14.f64));
	// stfs f17,-308(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -308, temp.u32);
	// fsubs f17,f4,f24
	ctx.f17.f64 = double(float(ctx.f4.f64 - ctx.f24.f64));
	// stfs f17,-304(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// fadds f4,f24,f4
	ctx.f4.f64 = double(float(ctx.f24.f64 + ctx.f4.f64));
	// lfsx f14,r24,r5
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r5.u32);
	ctx.f14.f64 = double(temp.f32);
	// add r18,r20,r3
	ctx.r18.u64 = ctx.r20.u64 + ctx.r3.u64;
	// stfs f14,-492(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -492, temp.u32);
	// add r17,r20,r4
	ctx.r17.u64 = ctx.r20.u64 + ctx.r4.u64;
	// lfsx f14,r24,r6
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r6.u32);
	ctx.f14.f64 = double(temp.f32);
	// rlwinm r22,r8,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stfs f14,-496(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -496, temp.u32);
	// mulli r21,r8,52
	ctx.r21.s64 = ctx.r8.s64 * 52;
	// lfsx f14,r23,r5
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r5.u32);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,-488(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -488, temp.u32);
	// lfsx f14,r23,r6
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r6.u32);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,-472(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -472, temp.u32);
	// stfs f4,-336(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -336, temp.u32);
	// fsubs f4,f19,f2
	ctx.f4.f64 = double(float(ctx.f19.f64 - ctx.f2.f64));
	// stfs f4,-320(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -320, temp.u32);
	// fadds f4,f2,f19
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f19.f64));
	// stfs f4,-400(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -400, temp.u32);
	// lfsx f2,r26,r5
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f4,r27,r3
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r3.u32);
	ctx.f4.f64 = double(temp.f32);
	// fadds f14,f2,f4
	ctx.f14.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// lfsx f19,r26,r6
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r6.u32);
	ctx.f19.f64 = double(temp.f32);
	// lfsx f24,r27,r4
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r4.u32);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f4,f4,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fsubs f2,f24,f19
	ctx.f2.f64 = double(float(ctx.f24.f64 - ctx.f19.f64));
	// lfsx f17,r25,r3
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r3.u32);
	ctx.f17.f64 = double(temp.f32);
	// fadds f24,f19,f24
	ctx.f24.f64 = double(float(ctx.f19.f64 + ctx.f24.f64));
	// lfsx f15,r25,r4
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r4.u32);
	ctx.f15.f64 = double(temp.f32);
	// lfs f19,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f19.f64 = double(temp.f32);
	// fadds f19,f19,f17
	ctx.f19.f64 = double(float(ctx.f19.f64 + ctx.f17.f64));
	// stfs f19,-456(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -456, temp.u32);
	// lfs f19,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f19,f15,f19
	ctx.f19.f64 = double(float(ctx.f15.f64 - ctx.f19.f64));
	// stfs f19,-460(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -460, temp.u32);
	// lfs f19,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f19,f17,f19
	ctx.f19.f64 = double(float(ctx.f17.f64 - ctx.f19.f64));
	// lfs f17,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f17.f64 = double(temp.f32);
	// fadds f17,f17,f15
	ctx.f17.f64 = double(float(ctx.f17.f64 + ctx.f15.f64));
	// stfs f17,-496(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -496, temp.u32);
	// lfs f17,0(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	ctx.f17.f64 = double(temp.f32);
	// lfs f15,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f15,f17
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f17.f64));
	// stfs f15,-328(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// lfs f15,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f17,f17,f15
	ctx.f17.f64 = double(float(ctx.f17.f64 - ctx.f15.f64));
	// stfs f17,-484(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -484, temp.u32);
	// lfs f17,0(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	ctx.f17.f64 = double(temp.f32);
	// lfs f15,-472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -472);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f15,f17
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f17.f64));
	// stfs f15,-492(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -492, temp.u32);
	// lfs f15,-472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -472);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f17,f17,f15
	ctx.f17.f64 = double(float(ctx.f17.f64 - ctx.f15.f64));
	// lfs f15,-456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f15,f14
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f14.f64));
	// stfs f15,-444(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -444, temp.u32);
	// lfs f15,-456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f15,f14,f15
	ctx.f15.f64 = double(float(ctx.f14.f64 - ctx.f15.f64));
	// lfs f14,-460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f14,f2,f14
	ctx.f14.f64 = double(float(ctx.f2.f64 - ctx.f14.f64));
	// stfs f14,-468(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -468, temp.u32);
	// lfs f14,-460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	ctx.f14.f64 = double(temp.f32);
	// fadds f2,f14,f2
	ctx.f2.f64 = double(float(ctx.f14.f64 + ctx.f2.f64));
	// stfs f2,-460(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -460, temp.u32);
	// lfs f2,-484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -484);
	ctx.f2.f64 = double(temp.f32);
	// lfs f14,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f14.f64 = double(temp.f32);
	// fadds f14,f14,f2
	ctx.f14.f64 = double(float(ctx.f14.f64 + ctx.f2.f64));
	// stfs f14,-452(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -452, temp.u32);
	// lfs f14,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f2,f2,f14
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f14.f64));
	// fadds f14,f24,f19
	ctx.f14.f64 = double(float(ctx.f24.f64 + ctx.f19.f64));
	// stfs f14,-428(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -428, temp.u32);
	// lfs f14,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f24,f24,f19
	ctx.f24.f64 = double(float(ctx.f24.f64 - ctx.f19.f64));
	// fsubs f14,f4,f14
	ctx.f14.f64 = double(float(ctx.f4.f64 - ctx.f14.f64));
	// stfs f14,-368(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -368, temp.u32);
	// lfs f14,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f14.f64 = double(temp.f32);
	// fadds f4,f14,f4
	ctx.f4.f64 = double(float(ctx.f14.f64 + ctx.f4.f64));
	// lfsx f14,r22,r6
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r6.u32);
	ctx.f14.f64 = double(temp.f32);
	// stfs f24,-416(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// lfsx f24,r22,r5
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r5.u32);
	ctx.f24.f64 = double(temp.f32);
	// lfsx f19,r21,r3
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r3.u32);
	ctx.f19.f64 = double(temp.f32);
	// stfs f14,-484(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -484, temp.u32);
	// lfsx f14,r21,r4
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r4.u32);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,-492(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -492, temp.u32);
	// lfsx f14,r22,r3
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r3.u32);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,-380(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -380, temp.u32);
	// lfsx f14,r21,r5
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r5.u32);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,-496(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -496, temp.u32);
	// lfsx f14,r22,r4
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r4.u32);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,-448(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -448, temp.u32);
	// lfsx f14,r21,r6
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r6.u32);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,-488(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -488, temp.u32);
	// fadds f14,f19,f24
	ctx.f14.f64 = double(float(ctx.f19.f64 + ctx.f24.f64));
	// fsubs f24,f24,f19
	ctx.f24.f64 = double(float(ctx.f24.f64 - ctx.f19.f64));
	// stfs f24,-332(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -332, temp.u32);
	// lfs f24,-484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -484);
	ctx.f24.f64 = double(temp.f32);
	// lfs f19,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f19.f64 = double(temp.f32);
	// fadds f19,f19,f24
	ctx.f19.f64 = double(float(ctx.f19.f64 + ctx.f24.f64));
	// stfs f19,-472(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -472, temp.u32);
	// lfs f19,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f24,f19,f24
	ctx.f24.f64 = double(float(ctx.f19.f64 - ctx.f24.f64));
	// stfs f24,-492(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -492, temp.u32);
	// lfs f24,-380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -380);
	ctx.f24.f64 = double(temp.f32);
	// lfs f19,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f19.f64 = double(temp.f32);
	// fadds f19,f19,f24
	ctx.f19.f64 = double(float(ctx.f19.f64 + ctx.f24.f64));
	// stfs f19,-432(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -432, temp.u32);
	// lfs f19,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f24,f24,f19
	ctx.f24.f64 = double(float(ctx.f24.f64 - ctx.f19.f64));
	// stfs f24,-440(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -440, temp.u32);
	// lfs f24,-448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -448);
	ctx.f24.f64 = double(temp.f32);
	// lfs f19,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f19.f64 = double(temp.f32);
	// fadds f19,f19,f24
	ctx.f19.f64 = double(float(ctx.f19.f64 + ctx.f24.f64));
	// stfs f19,-404(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -404, temp.u32);
	// lfs f19,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f24,f24,f19
	ctx.f24.f64 = double(float(ctx.f24.f64 - ctx.f19.f64));
	// lfs f19,-328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	ctx.f19.f64 = double(temp.f32);
	// stfs f24,-376(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -376, temp.u32);
	// fsubs f24,f19,f14
	ctx.f24.f64 = double(float(ctx.f19.f64 - ctx.f14.f64));
	// fadds f19,f14,f19
	ctx.f19.f64 = double(float(ctx.f14.f64 + ctx.f19.f64));
	// stfs f19,-456(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -456, temp.u32);
	// lfs f19,-332(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -332);
	ctx.f19.f64 = double(temp.f32);
	// lfs f14,-472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -472);
	ctx.f14.f64 = double(temp.f32);
	// fadds f14,f14,f19
	ctx.f14.f64 = double(float(ctx.f14.f64 + ctx.f19.f64));
	// stfs f14,-488(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -488, temp.u32);
	// lfs f14,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f14,f14,f17
	ctx.f14.f64 = double(float(ctx.f14.f64 - ctx.f17.f64));
	// stfs f14,-496(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -496, temp.u32);
	// lfs f14,-472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -472);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f19,f19,f14
	ctx.f19.f64 = double(float(ctx.f19.f64 - ctx.f14.f64));
	// lfs f14,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f14.f64 = double(temp.f32);
	// fadds f17,f14,f17
	ctx.f17.f64 = double(float(ctx.f14.f64 + ctx.f17.f64));
	// stfs f17,-492(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -492, temp.u32);
	// lfs f17,-468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -468);
	ctx.f17.f64 = double(temp.f32);
	// fsubs f14,f17,f24
	ctx.f14.f64 = double(float(ctx.f17.f64 - ctx.f24.f64));
	// stfs f14,-484(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -484, temp.u32);
	// fadds f24,f24,f17
	ctx.f24.f64 = double(float(ctx.f24.f64 + ctx.f17.f64));
	// stfs f24,-420(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -420, temp.u32);
	// lfs f24,-452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -452);
	ctx.f24.f64 = double(temp.f32);
	// lfs f17,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f17.f64 = double(temp.f32);
	// fsubs f17,f24,f17
	ctx.f17.f64 = double(float(ctx.f24.f64 - ctx.f17.f64));
	// lfs f14,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f14,f15,f14
	ctx.f14.f64 = double(float(ctx.f15.f64 - ctx.f14.f64));
	// stfs f14,-468(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -468, temp.u32);
	// lfs f14,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f14.f64 = double(temp.f32);
	// fadds f15,f14,f15
	ctx.f15.f64 = double(float(ctx.f14.f64 + ctx.f15.f64));
	// lfs f14,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f14.f64 = double(temp.f32);
	// stfs f15,-472(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -472, temp.u32);
	// fadds f15,f2,f19
	ctx.f15.f64 = double(float(ctx.f2.f64 + ctx.f19.f64));
	// fsubs f2,f2,f19
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f19.f64));
	// lfs f19,-444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -444);
	ctx.f19.f64 = double(temp.f32);
	// fadds f24,f14,f24
	ctx.f24.f64 = double(float(ctx.f14.f64 + ctx.f24.f64));
	// lfs f14,-456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f19,f19,f14
	ctx.f19.f64 = double(float(ctx.f19.f64 - ctx.f14.f64));
	// stfs f19,-496(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -496, temp.u32);
	// lfs f14,-460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	ctx.f14.f64 = double(temp.f32);
	// lfs f19,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f19,f14,f19
	ctx.f19.f64 = double(float(ctx.f14.f64 - ctx.f19.f64));
	// stfs f19,-380(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -380, temp.u32);
	// lfs f19,-456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	ctx.f19.f64 = double(temp.f32);
	// lfs f14,-444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -444);
	ctx.f14.f64 = double(temp.f32);
	// fadds f19,f19,f14
	ctx.f19.f64 = double(float(ctx.f19.f64 + ctx.f14.f64));
	// stfs f19,-392(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// lfs f19,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f19.f64 = double(temp.f32);
	// lfs f14,-460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f24,f24,f0
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// fadds f19,f19,f14
	ctx.f19.f64 = double(float(ctx.f19.f64 + ctx.f14.f64));
	// stfs f19,-424(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -424, temp.u32);
	// fmuls f19,f17,f0
	ctx.f19.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// stfs f19,-448(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -448, temp.u32);
	// fmuls f19,f15,f0
	ctx.f19.f64 = double(float(ctx.f15.f64 * ctx.f0.f64));
	// stfs f19,-452(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -452, temp.u32);
	// stfs f24,-436(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -436, temp.u32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f2,-408(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// add r16,r20,r5
	ctx.r16.u64 = ctx.r20.u64 + ctx.r5.u64;
	// lfs f2,-484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -484);
	ctx.f2.f64 = double(temp.f32);
	// add r20,r20,r6
	ctx.r20.u64 = ctx.r20.u64 + ctx.r6.u64;
	// fmuls f24,f2,f13
	ctx.f24.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f14,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f19,f2,f12
	ctx.f19.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f2,-420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -420);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f17,f2,f12
	ctx.f17.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f2,-472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -472);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f15,f2,f12
	ctx.f15.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f2,-380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -380);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f14,f14,f2
	ctx.f14.f64 = double(float(ctx.f14.f64 - ctx.f2.f64));
	// stfs f14,-332(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -332, temp.u32);
	// lfs f14,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f14.f64 = double(temp.f32);
	// fadds f2,f2,f14
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f14.f64));
	// stfs f2,-328(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// lfs f14,-428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	ctx.f14.f64 = double(temp.f32);
	// lfs f2,-448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -448);
	ctx.f2.f64 = double(temp.f32);
	// fadds f14,f2,f14
	ctx.f14.f64 = double(float(ctx.f2.f64 + ctx.f14.f64));
	// stfs f14,-456(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -456, temp.u32);
	// lfs f14,-428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f2,f14,f2
	ctx.f2.f64 = double(float(ctx.f14.f64 - ctx.f2.f64));
	// stfs f2,-340(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -340, temp.u32);
	// lfs f2,-468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -468);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f24,f2,f12,f24
	ctx.f24.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 - ctx.f24.f64));
	// stfs f24,-344(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -344, temp.u32);
	// fmadds f2,f2,f13,f19
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f19.f64));
	// stfs f2,-352(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -352, temp.u32);
	// lfs f2,-368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	ctx.f2.f64 = double(temp.f32);
	// lfs f24,-452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -452);
	ctx.f24.f64 = double(temp.f32);
	// fadds f19,f2,f24
	ctx.f19.f64 = double(float(ctx.f2.f64 + ctx.f24.f64));
	// lfsx f14,r27,r6
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r6.u32);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f2,f2,f24
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f24.f64));
	// stfs f2,-356(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -356, temp.u32);
	// lfs f2,-472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -472);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f2,f2,f13,f17
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 - ctx.f17.f64));
	// stfs f2,-316(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// lfs f2,-420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -420);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f2,f13,f15
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f15.f64));
	// stfs f2,-380(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -380, temp.u32);
	// lfs f2,-436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -436);
	ctx.f2.f64 = double(temp.f32);
	// stfs f14,-484(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -484, temp.u32);
	// fsubs f24,f4,f2
	ctx.f24.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// lfsx f14,r26,r4
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r4.u32);
	ctx.f14.f64 = double(temp.f32);
	// fadds f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f14,-492(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -492, temp.u32);
	// lfsx f14,r24,r3
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r3.u32);
	ctx.f14.f64 = double(temp.f32);
	// stfs f4,-464(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -464, temp.u32);
	// lfs f2,-408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,-416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -416);
	ctx.f4.f64 = double(temp.f32);
	// stfs f14,-496(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -496, temp.u32);
	// lfsx f14,r25,r5
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	ctx.f14.f64 = double(temp.f32);
	// stfs f24,-312(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -312, temp.u32);
	// fadds f24,f2,f4
	ctx.f24.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f14,-448(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -448, temp.u32);
	// fsubs f4,f4,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// lfsx f14,r24,r4
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r4.u32);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,-468(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -468, temp.u32);
	// stfs f4,-368(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -368, temp.u32);
	// lfsx f14,r25,r6
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r6.u32);
	ctx.f14.f64 = double(temp.f32);
	// lfsx f4,r23,r3
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r3.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,0(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f19,-372(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -372, temp.u32);
	// stfs f24,-324(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -324, temp.u32);
	// stfs f14,-488(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -488, temp.u32);
	// fsubs f14,f4,f2
	ctx.f14.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// lfsx f24,r23,r4
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r4.u32);
	ctx.f24.f64 = double(temp.f32);
	// lfs f19,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f19.f64 = double(temp.f32);
	// lfsx f17,r27,r5
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	ctx.f17.f64 = double(temp.f32);
	// lfsx f15,r26,r3
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r3.u32);
	ctx.f15.f64 = double(temp.f32);
	// fadds f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fadds f2,f19,f24
	ctx.f2.f64 = double(float(ctx.f19.f64 + ctx.f24.f64));
	// fsubs f24,f24,f19
	ctx.f24.f64 = double(float(ctx.f24.f64 - ctx.f19.f64));
	// stfs f24,-460(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -460, temp.u32);
	// fsubs f24,f17,f15
	ctx.f24.f64 = double(float(ctx.f17.f64 - ctx.f15.f64));
	// lfs f19,-484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -484);
	ctx.f19.f64 = double(temp.f32);
	// fadds f17,f15,f17
	ctx.f17.f64 = double(float(ctx.f15.f64 + ctx.f17.f64));
	// lfs f15,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f15,f19
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f19.f64));
	// stfs f15,-452(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -452, temp.u32);
	// lfs f15,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f19,f15,f19
	ctx.f19.f64 = double(float(ctx.f15.f64 - ctx.f19.f64));
	// stfs f19,-428(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -428, temp.u32);
	// lfs f19,-448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -448);
	ctx.f19.f64 = double(temp.f32);
	// lfs f15,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f15,f15,f19
	ctx.f15.f64 = double(float(ctx.f15.f64 - ctx.f19.f64));
	// stfs f15,-484(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -484, temp.u32);
	// lfs f15,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f15.f64 = double(temp.f32);
	// fadds f19,f19,f15
	ctx.f19.f64 = double(float(ctx.f19.f64 + ctx.f15.f64));
	// stfs f19,-492(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -492, temp.u32);
	// lfs f19,-468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -468);
	ctx.f19.f64 = double(temp.f32);
	// lfs f15,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f15,f19
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f19.f64));
	// stfs f15,-448(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -448, temp.u32);
	// lfs f15,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f19,f19,f15
	ctx.f19.f64 = double(float(ctx.f19.f64 - ctx.f15.f64));
	// lfs f15,-404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -404);
	ctx.f15.f64 = double(temp.f32);
	// stfs f19,-444(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -444, temp.u32);
	// fsubs f19,f15,f14
	ctx.f19.f64 = double(float(ctx.f15.f64 - ctx.f14.f64));
	// fadds f15,f14,f15
	ctx.f15.f64 = double(float(ctx.f14.f64 + ctx.f15.f64));
	// lfs f14,-440(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -440);
	ctx.f14.f64 = double(temp.f32);
	// stfs f15,-496(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -496, temp.u32);
	// fadds f15,f2,f14
	ctx.f15.f64 = double(float(ctx.f2.f64 + ctx.f14.f64));
	// fsubs f2,f14,f2
	ctx.f2.f64 = double(float(ctx.f14.f64 - ctx.f2.f64));
	// stfs f2,-472(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -472, temp.u32);
	// lfs f2,-432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -432);
	ctx.f2.f64 = double(temp.f32);
	// fadds f2,f4,f2
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// stfs f2,-440(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -440, temp.u32);
	// lfs f2,-376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -376);
	ctx.f2.f64 = double(temp.f32);
	// lfs f14,-460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f2,f2,f14
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f14.f64));
	// stfs f2,-404(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -404, temp.u32);
	// lfs f2,-432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -432);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// lfs f2,-452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -452);
	ctx.f2.f64 = double(temp.f32);
	// stfs f4,-420(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -420, temp.u32);
	// lfs f14,-484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -484);
	ctx.f14.f64 = double(temp.f32);
	// fadds f4,f14,f2
	ctx.f4.f64 = double(float(ctx.f14.f64 + ctx.f2.f64));
	// fsubs f2,f14,f2
	ctx.f2.f64 = double(float(ctx.f14.f64 - ctx.f2.f64));
	// stfs f2,-488(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -488, temp.u32);
	// lfs f2,-448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -448);
	ctx.f2.f64 = double(temp.f32);
	// fadds f14,f2,f24
	ctx.f14.f64 = double(float(ctx.f2.f64 + ctx.f24.f64));
	// stfs f14,-484(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -484, temp.u32);
	// fsubs f2,f24,f2
	ctx.f2.f64 = double(float(ctx.f24.f64 - ctx.f2.f64));
	// lfs f24,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f24.f64 = double(temp.f32);
	// fadds f24,f24,f17
	ctx.f24.f64 = double(float(ctx.f24.f64 + ctx.f17.f64));
	// stfs f24,-432(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -432, temp.u32);
	// lfs f14,-444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -444);
	ctx.f14.f64 = double(temp.f32);
	// lfs f24,-428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f24,f24,f14
	ctx.f24.f64 = double(float(ctx.f24.f64 - ctx.f14.f64));
	// stfs f24,-416(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// lfs f24,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f14,f4,f12
	ctx.f14.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fsubs f24,f17,f24
	ctx.f24.f64 = double(float(ctx.f17.f64 - ctx.f24.f64));
	// stfs f24,-492(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -492, temp.u32);
	// fmuls f24,f19,f12
	ctx.f24.f64 = double(float(ctx.f19.f64 * ctx.f12.f64));
	// lfs f17,-472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -472);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f17,f17,f12
	ctx.f17.f64 = double(float(ctx.f17.f64 * ctx.f12.f64));
	// stfs f2,-476(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -476, temp.u32);
	// fmuls f19,f19,f13
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f13.f64));
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f4,-448(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -448, temp.u32);
	// fmuls f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// stfs f2,-468(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -468, temp.u32);
	// fmadds f4,f15,f13,f24
	ctx.f4.f64 = double(float(ctx.f15.f64 * ctx.f13.f64 + ctx.f24.f64));
	// lfs f24,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f24,f24,f13,f17
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f13.f64 + ctx.f17.f64));
	// stfs f24,-436(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -436, temp.u32);
	// fmsubs f2,f15,f12,f19
	ctx.f2.f64 = double(float(ctx.f15.f64 * ctx.f12.f64 - ctx.f19.f64));
	// lfs f24,-440(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -440);
	ctx.f24.f64 = double(temp.f32);
	// lfs f19,-432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -432);
	ctx.f19.f64 = double(temp.f32);
	// fadds f19,f19,f24
	ctx.f19.f64 = double(float(ctx.f19.f64 + ctx.f24.f64));
	// stfs f19,-408(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// lfs f19,-432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -432);
	ctx.f19.f64 = double(temp.f32);
	// lfs f17,-484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -484);
	ctx.f17.f64 = double(temp.f32);
	// fsubs f24,f24,f19
	ctx.f24.f64 = double(float(ctx.f24.f64 - ctx.f19.f64));
	// fmadds f19,f17,f13,f14
	ctx.f19.f64 = double(float(ctx.f17.f64 * ctx.f13.f64 + ctx.f14.f64));
	// lfs f14,-448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -448);
	ctx.f14.f64 = double(temp.f32);
	// fmsubs f17,f17,f12,f14
	ctx.f17.f64 = double(float(ctx.f17.f64 * ctx.f12.f64 - ctx.f14.f64));
	// lfs f14,-468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -468);
	ctx.f14.f64 = double(temp.f32);
	// lfs f15,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f15.f64 = double(temp.f32);
	// fmsubs f15,f15,f13,f14
	ctx.f15.f64 = double(float(ctx.f15.f64 * ctx.f13.f64 - ctx.f14.f64));
	// fsubs f14,f4,f19
	ctx.f14.f64 = double(float(ctx.f4.f64 - ctx.f19.f64));
	// fadds f4,f19,f4
	ctx.f4.f64 = double(float(ctx.f19.f64 + ctx.f4.f64));
	// stfs f4,-468(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -468, temp.u32);
	// fadds f4,f17,f2
	ctx.f4.f64 = double(float(ctx.f17.f64 + ctx.f2.f64));
	// stfs f4,-484(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -484, temp.u32);
	// fsubs f4,f2,f17
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f17.f64));
	// stfs f4,-452(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -452, temp.u32);
	// lfs f4,-436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -436);
	ctx.f4.f64 = double(temp.f32);
	// fadds f2,f15,f4
	ctx.f2.f64 = double(float(ctx.f15.f64 + ctx.f4.f64));
	// stfs f2,-432(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -432, temp.u32);
	// fsubs f4,f15,f4
	ctx.f4.f64 = double(float(ctx.f15.f64 - ctx.f4.f64));
	// stfs f4,-448(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -448, temp.u32);
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,-436(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -436, temp.u32);
	// lfs f4,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfs f2,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f15,-472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -472);
	ctx.f15.f64 = double(temp.f32);
	// lfs f19,-456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f19,f19,f10
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f10.f64));
	// lfs f17,-364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f17,f17,f10
	ctx.f17.f64 = double(float(ctx.f17.f64 * ctx.f10.f64));
	// fmsubs f4,f15,f13,f4
	ctx.f4.f64 = double(float(ctx.f15.f64 * ctx.f13.f64 - ctx.f4.f64));
	// stfs f4,-496(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -496, temp.u32);
	// lfs f4,-476(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -476);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f4,f13,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f2.f64));
	// stfs f4,-440(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -440, temp.u32);
	// lfs f4,-456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f15,f4,f11
	ctx.f15.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lfs f4,-348(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -348);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// stfs f4,-476(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -476, temp.u32);
	// lfs f2,-372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -372);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f4,f2,f11,f19
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 - ctx.f19.f64));
	// lfs f2,-348(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -348);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f2,f11,f17
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f17.f64));
	// stfs f2,-488(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -488, temp.u32);
	// lfs f19,-376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -376);
	ctx.f19.f64 = double(temp.f32);
	// lfs f2,-460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	ctx.f2.f64 = double(temp.f32);
	// fadds f2,f2,f19
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f19.f64));
	// stfs f2,-472(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -472, temp.u32);
	// lfs f19,-428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	ctx.f19.f64 = double(temp.f32);
	// lfs f2,-444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -444);
	ctx.f2.f64 = double(temp.f32);
	// fadds f2,f2,f19
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f19.f64));
	// stfs f2,-376(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -376, temp.u32);
	// lfs f19,-404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -404);
	ctx.f19.f64 = double(temp.f32);
	// lfs f17,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f17.f64 = double(temp.f32);
	// lfs f2,-432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -432);
	ctx.f2.f64 = double(temp.f32);
	// fadds f2,f2,f28
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f28.f64));
	// stfs f2,-460(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -460, temp.u32);
	// lfs f2,-420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -420);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f2,f2,f19
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f19.f64));
	// lfs f19,-372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -372);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f19,f19,f10,f15
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f10.f64 + ctx.f15.f64));
	// stfs f19,-456(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -456, temp.u32);
	// lfs f19,-416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -416);
	ctx.f19.f64 = double(temp.f32);
	// fadds f19,f17,f19
	ctx.f19.f64 = double(float(ctx.f17.f64 + ctx.f19.f64));
	// stfs f19,-372(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -372, temp.u32);
	// lfs f17,-404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -404);
	ctx.f17.f64 = double(temp.f32);
	// lfs f19,-420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -420);
	ctx.f19.f64 = double(temp.f32);
	// fadds f19,f19,f17
	ctx.f19.f64 = double(float(ctx.f19.f64 + ctx.f17.f64));
	// lfs f17,-364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	ctx.f17.f64 = double(temp.f32);
	// lfs f15,-476(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -476);
	ctx.f15.f64 = double(temp.f32);
	// fmsubs f17,f17,f11,f15
	ctx.f17.f64 = double(float(ctx.f17.f64 * ctx.f11.f64 - ctx.f15.f64));
	// stfs f17,-476(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -476, temp.u32);
	// lfs f17,-416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -416);
	ctx.f17.f64 = double(temp.f32);
	// lfs f15,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f17,f17,f15
	ctx.f17.f64 = double(float(ctx.f17.f64 - ctx.f15.f64));
	// stfs f17,-364(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -364, temp.u32);
	// lfs f17,-408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f17.f64 = double(temp.f32);
	// fadds f17,f17,f23
	ctx.f17.f64 = double(float(ctx.f17.f64 + ctx.f23.f64));
	// stfs f17,-404(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -404, temp.u32);
	// lfs f15,-388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -388);
	ctx.f15.f64 = double(temp.f32);
	// lfs f17,-392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -392);
	ctx.f17.f64 = double(temp.f32);
	// fadds f17,f17,f15
	ctx.f17.f64 = double(float(ctx.f17.f64 + ctx.f15.f64));
	// stfs f17,-416(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// lfs f15,-412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f15.f64 = double(temp.f32);
	// lfs f17,-424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -424);
	ctx.f17.f64 = double(temp.f32);
	// fadds f17,f17,f15
	ctx.f17.f64 = double(float(ctx.f17.f64 + ctx.f15.f64));
	// stfs f17,-444(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -444, temp.u32);
	// lfs f15,-388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -388);
	ctx.f15.f64 = double(temp.f32);
	// lfs f17,-392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -392);
	ctx.f17.f64 = double(temp.f32);
	// fsubs f17,f17,f15
	ctx.f17.f64 = double(float(ctx.f17.f64 - ctx.f15.f64));
	// lfs f15,-408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f23,f23,f15
	ctx.f23.f64 = double(float(ctx.f23.f64 - ctx.f15.f64));
	// stfs f23,-492(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -492, temp.u32);
	// lfs f15,-424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -424);
	ctx.f15.f64 = double(temp.f32);
	// lfs f23,-412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f23.f64 = double(temp.f32);
	// fsubs f23,f23,f15
	ctx.f23.f64 = double(float(ctx.f23.f64 - ctx.f15.f64));
	// stfs f23,-424(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -424, temp.u32);
	// lfs f23,-432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -432);
	ctx.f23.f64 = double(temp.f32);
	// fsubs f28,f28,f23
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f23.f64));
	// stfs f28,-388(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -388, temp.u32);
	// lfs f23,-440(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -440);
	ctx.f23.f64 = double(temp.f32);
	// lfs f28,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f28.f64 = double(temp.f32);
	// fadds f15,f23,f28
	ctx.f15.f64 = double(float(ctx.f23.f64 + ctx.f28.f64));
	// stfs f15,-440(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -440, temp.u32);
	// fsubs f28,f28,f23
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f23.f64));
	// stfs f28,-348(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -348, temp.u32);
	// lfs f28,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f28.f64 = double(temp.f32);
	// fadds f23,f28,f4
	ctx.f23.f64 = double(float(ctx.f28.f64 + ctx.f4.f64));
	// stfs f23,-496(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -496, temp.u32);
	// fsubs f4,f4,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f28.f64));
	// stfs f4,-408(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// lfs f28,-376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -376);
	ctx.f28.f64 = double(temp.f32);
	// lfs f4,-472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -472);
	ctx.f4.f64 = double(temp.f32);
	// fadds f23,f28,f4
	ctx.f23.f64 = double(float(ctx.f28.f64 + ctx.f4.f64));
	// stfs f23,-412(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// fsubs f4,f28,f4
	ctx.f4.f64 = double(float(ctx.f28.f64 - ctx.f4.f64));
	// stfs f4,-376(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -376, temp.u32);
	// lfs f4,-372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -372);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f15,f2,f4
	ctx.f15.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fadds f23,f4,f2
	ctx.f23.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// lfs f2,-476(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -476);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,-456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	ctx.f4.f64 = double(temp.f32);
	// fadds f28,f2,f4
	ctx.f28.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f28,-392(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// fsubs f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// stfs f4,-488(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -488, temp.u32);
	// lfs f4,-364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	ctx.f4.f64 = double(temp.f32);
	// fadds f2,f4,f19
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f19.f64));
	// stfs f2,-476(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -476, temp.u32);
	// fsubs f19,f4,f19
	ctx.f19.f64 = double(float(ctx.f4.f64 - ctx.f19.f64));
	// fmuls f2,f23,f0
	ctx.f2.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// fmuls f23,f15,f0
	ctx.f23.f64 = double(float(ctx.f15.f64 * ctx.f0.f64));
	// lfs f4,-404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -404);
	ctx.f4.f64 = double(temp.f32);
	// stfs f23,-404(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -404, temp.u32);
	// lfs f28,-416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -416);
	ctx.f28.f64 = double(temp.f32);
	// fadds f28,f28,f4
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f4.f64));
	// stfs f28,-364(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -364, temp.u32);
	// lfs f28,-416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -416);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f4,f4,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f28.f64));
	// stfs f4,-416(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// lfs f28,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f28.f64 = double(temp.f32);
	// lfs f4,-424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -424);
	ctx.f4.f64 = double(temp.f32);
	// lfs f23,-424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -424);
	ctx.f23.f64 = double(temp.f32);
	// fadds f4,f4,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f28.f64));
	// fsubs f28,f28,f23
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f23.f64));
	// lfs f15,-388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -388);
	ctx.f15.f64 = double(temp.f32);
	// lfs f23,-476(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -476);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f23,f23,f0
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// stfs f23,-432(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -432, temp.u32);
	// fmuls f23,f19,f0
	ctx.f23.f64 = double(float(ctx.f19.f64 * ctx.f0.f64));
	// lfs f19,-440(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -440);
	ctx.f19.f64 = double(temp.f32);
	// stfs f23,-372(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -372, temp.u32);
	// fadds f23,f19,f26
	ctx.f23.f64 = double(float(ctx.f19.f64 + ctx.f26.f64));
	// fsubs f26,f26,f19
	ctx.f26.f64 = double(float(ctx.f26.f64 - ctx.f19.f64));
	// lfs f19,-408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f19,f15,f19
	ctx.f19.f64 = double(float(ctx.f15.f64 - ctx.f19.f64));
	// stfs f19,-492(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -492, temp.u32);
	// lfs f19,-480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -480);
	ctx.f19.f64 = double(temp.f32);
	// lfs f15,-412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f15,f19
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f19.f64));
	// stfs f15,-480(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -480, temp.u32);
	// lfs f15,-412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f19,f19,f15
	ctx.f19.f64 = double(float(ctx.f19.f64 - ctx.f15.f64));
	// stfs f19,-476(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -476, temp.u32);
	// lfs f15,-388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -388);
	ctx.f15.f64 = double(temp.f32);
	// lfs f19,-408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f19.f64 = double(temp.f32);
	// fadds f19,f19,f15
	ctx.f19.f64 = double(float(ctx.f19.f64 + ctx.f15.f64));
	// stfs f19,-388(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -388, temp.u32);
	// lfs f19,-460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	ctx.f19.f64 = double(temp.f32);
	// lfs f15,-392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -392);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f15,f19
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f19.f64));
	// stfs f15,-440(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -440, temp.u32);
	// lfs f15,-392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -392);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f19,f19,f15
	ctx.f19.f64 = double(float(ctx.f19.f64 - ctx.f15.f64));
	// lfs f15,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f15.f64 = double(temp.f32);
	// stfs f19,-424(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -424, temp.u32);
	// fadds f19,f15,f23
	ctx.f19.f64 = double(float(ctx.f15.f64 + ctx.f23.f64));
	// fsubs f23,f23,f15
	ctx.f23.f64 = double(float(ctx.f23.f64 - ctx.f15.f64));
	// stfs f23,-408(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// lfs f23,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f23.f64 = double(temp.f32);
	// fsubs f15,f26,f23
	ctx.f15.f64 = double(float(ctx.f26.f64 - ctx.f23.f64));
	// stfs f15,-496(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -496, temp.u32);
	// fadds f26,f23,f26
	ctx.f26.f64 = double(float(ctx.f23.f64 + ctx.f26.f64));
	// lfs f23,-444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -444);
	ctx.f23.f64 = double(temp.f32);
	// stfs f26,-392(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// lfs f15,-480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -480);
	ctx.f15.f64 = double(temp.f32);
	// fadds f26,f15,f23
	ctx.f26.f64 = double(float(ctx.f15.f64 + ctx.f23.f64));
	// fsubs f23,f15,f23
	ctx.f23.f64 = double(float(ctx.f15.f64 - ctx.f23.f64));
	// stfs f23,-412(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// lfs f23,-476(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -476);
	ctx.f23.f64 = double(temp.f32);
	// fadds f15,f23,f17
	ctx.f15.f64 = double(float(ctx.f23.f64 + ctx.f17.f64));
	// stfs f15,-488(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -488, temp.u32);
	// fsubs f23,f23,f17
	ctx.f23.f64 = double(float(ctx.f23.f64 - ctx.f17.f64));
	// stfs f23,-476(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -476, temp.u32);
	// lfs f23,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f23.f64 = double(temp.f32);
	// stfs f23,-480(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -480, temp.u32);
	// fmuls f23,f23,f19
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f19.f64));
	// lfs f15,-436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -436);
	ctx.f15.f64 = double(temp.f32);
	// lfs f17,-440(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -440);
	ctx.f17.f64 = double(temp.f32);
	// fmadds f23,f15,f17,f23
	ctx.f23.f64 = double(float(ctx.f15.f64 * ctx.f17.f64 + ctx.f23.f64));
	// lfs f15,-480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -480);
	ctx.f15.f64 = double(temp.f32);
	// fmuls f17,f15,f17
	ctx.f17.f64 = double(float(ctx.f15.f64 * ctx.f17.f64));
	// lfs f15,-364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f15,f15,f23
	ctx.f15.f64 = double(float(ctx.f15.f64 - ctx.f23.f64));
	// stfs f15,0(r3)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f15,-364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f23,f15
	ctx.f15.f64 = double(float(ctx.f23.f64 + ctx.f15.f64));
	// lfs f23,-436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -436);
	ctx.f23.f64 = double(temp.f32);
	// fmsubs f23,f23,f19,f17
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f19.f64 - ctx.f17.f64));
	// fadds f19,f23,f26
	ctx.f19.f64 = double(float(ctx.f23.f64 + ctx.f26.f64));
	// stfs f19,0(r4)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f26,f23,f26
	ctx.f26.f64 = double(float(ctx.f23.f64 - ctx.f26.f64));
	// stfs f15,0(r5)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f26,0(r6)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f17,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f17.f64 = double(temp.f32);
	// stfs f17,-436(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -436, temp.u32);
	// lfs f23,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f23.f64 = double(temp.f32);
	// stfs f23,-480(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -480, temp.u32);
	// lfs f17,-476(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -476);
	ctx.f17.f64 = double(temp.f32);
	// lfs f26,188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f15,f26,f17
	ctx.f15.f64 = double(float(ctx.f26.f64 * ctx.f17.f64));
	// lfs f26,-492(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f17,f23,f17
	ctx.f17.f64 = double(float(ctx.f23.f64 * ctx.f17.f64));
	// lfs f19,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f19,f19,f26
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f26.f64));
	// lfs f23,-436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -436);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f26,f23,f26
	ctx.f26.f64 = double(float(ctx.f23.f64 * ctx.f26.f64));
	// lfs f23,-480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -480);
	ctx.f23.f64 = double(temp.f32);
	// stfs f26,-480(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -480, temp.u32);
	// fmsubs f23,f23,f28,f15
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f28.f64 - ctx.f15.f64));
	// stfs f23,-476(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -476, temp.u32);
	// lfs f15,-436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -436);
	ctx.f15.f64 = double(temp.f32);
	// lfs f23,-496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	ctx.f23.f64 = double(temp.f32);
	// fmadds f26,f15,f23,f19
	ctx.f26.f64 = double(float(ctx.f15.f64 * ctx.f23.f64 + ctx.f19.f64));
	// lfs f19,188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f28,f19,f28,f17
	ctx.f28.f64 = double(float(ctx.f19.f64 * ctx.f28.f64 + ctx.f17.f64));
	// lfs f19,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f19.f64 = double(temp.f32);
	// lfs f17,-480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -480);
	ctx.f17.f64 = double(temp.f32);
	// fmsubs f23,f19,f23,f17
	ctx.f23.f64 = double(float(ctx.f19.f64 * ctx.f23.f64 - ctx.f17.f64));
	// lfs f19,-476(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -476);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f17,f19,f26
	ctx.f17.f64 = double(float(ctx.f19.f64 - ctx.f26.f64));
	// stfsx f17,r9,r3
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// fadds f26,f26,f19
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f19.f64));
	// lfs f15,-416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -416);
	ctx.f15.f64 = double(temp.f32);
	// lfs f17,-408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f17.f64 = double(temp.f32);
	// fadds f19,f23,f28
	ctx.f19.f64 = double(float(ctx.f23.f64 + ctx.f28.f64));
	// stfsx f19,r9,r4
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
	// stfsx f26,r9,r5
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// fsubs f28,f23,f28
	ctx.f28.f64 = double(float(ctx.f23.f64 - ctx.f28.f64));
	// stfsx f28,r9,r6
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfs f23,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f23.f64 = double(temp.f32);
	// stfs f23,-480(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -480, temp.u32);
	// lfs f26,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f26.f64 = double(temp.f32);
	// lfs f19,-412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f15,f26,f15
	ctx.f15.f64 = double(float(ctx.f26.f64 * ctx.f15.f64));
	// fmuls f19,f26,f19
	ctx.f19.f64 = double(float(ctx.f26.f64 * ctx.f19.f64));
	// lfs f23,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f23.f64 = double(temp.f32);
	// lfs f26,-424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -424);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f17,f23,f17
	ctx.f17.f64 = double(float(ctx.f23.f64 * ctx.f17.f64));
	// fmuls f26,f23,f26
	ctx.f26.f64 = double(float(ctx.f23.f64 * ctx.f26.f64));
	// lfs f28,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f28.f64 = double(temp.f32);
	// lfs f23,-416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -416);
	ctx.f23.f64 = double(temp.f32);
	// fmsubs f23,f28,f23,f19
	ctx.f23.f64 = double(float(ctx.f28.f64 * ctx.f23.f64 - ctx.f19.f64));
	// stfs f23,-476(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -476, temp.u32);
	// lfs f19,-424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -424);
	ctx.f19.f64 = double(temp.f32);
	// lfs f23,-480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -480);
	ctx.f23.f64 = double(temp.f32);
	// stfs f26,-480(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -480, temp.u32);
	// fmadds f26,f23,f19,f17
	ctx.f26.f64 = double(float(ctx.f23.f64 * ctx.f19.f64 + ctx.f17.f64));
	// lfs f19,-412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f28,f28,f19,f15
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f19.f64 + ctx.f15.f64));
	// lfs f19,-408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f19.f64 = double(temp.f32);
	// lfs f17,-480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -480);
	ctx.f17.f64 = double(temp.f32);
	// fmsubs f23,f23,f19,f17
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f19.f64 - ctx.f17.f64));
	// lfs f19,-476(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -476);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f17,f19,f26
	ctx.f17.f64 = double(float(ctx.f19.f64 - ctx.f26.f64));
	// stfsx f17,r29,r3
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r3.u32, temp.u32);
	// fadds f26,f26,f19
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f19.f64));
	// lfs f17,-488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f17.f64 = double(temp.f32);
	// fadds f19,f23,f28
	ctx.f19.f64 = double(float(ctx.f23.f64 + ctx.f28.f64));
	// stfsx f19,r29,r4
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r4.u32, temp.u32);
	// stfsx f26,r29,r5
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r5.u32, temp.u32);
	// fsubs f28,f23,f28
	ctx.f28.f64 = double(float(ctx.f23.f64 - ctx.f28.f64));
	// stfsx f28,r29,r6
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r6.u32, temp.u32);
	// lfs f26,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f26.f64 = double(temp.f32);
	// lfs f28,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f15,f26,f17
	ctx.f15.f64 = double(float(ctx.f26.f64 * ctx.f17.f64));
	// fmuls f17,f28,f17
	ctx.f17.f64 = double(float(ctx.f28.f64 * ctx.f17.f64));
	// lfs f19,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f19.f64 = double(temp.f32);
	// lfs f23,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f23.f64 = double(temp.f32);
	// fmsubs f28,f28,f4,f15
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f4.f64 - ctx.f15.f64));
	// stfs f28,-436(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -436, temp.u32);
	// fmadds f4,f26,f4,f17
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f4.f64 + ctx.f17.f64));
	// stfs f4,-424(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -424, temp.u32);
	// lfs f4,-368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f28,f4,f11
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lfs f4,-400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -400);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f26,f4,f11
	ctx.f26.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lfs f4,-464(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -464);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f17,f4,f11
	ctx.f17.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lfs f15,-336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	ctx.f15.f64 = double(temp.f32);
	// fmuls f15,f15,f11
	ctx.f15.f64 = double(float(ctx.f15.f64 * ctx.f11.f64));
	// fmsubs f4,f4,f10,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 - ctx.f28.f64));
	// lfs f28,-336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	ctx.f28.f64 = double(temp.f32);
	// fmsubs f28,f28,f10,f26
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 - ctx.f26.f64));
	// lfs f26,-368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f26,f26,f10,f17
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f10.f64 + ctx.f17.f64));
	// stfs f26,-440(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -440, temp.u32);
	// lfs f26,-372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -372);
	ctx.f26.f64 = double(temp.f32);
	// stfs f4,-476(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -476, temp.u32);
	// fadds f26,f26,f7
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f7.f64));
	// lfs f4,-388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -388);
	ctx.f4.f64 = double(temp.f32);
	// stfs f28,-336(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -336, temp.u32);
	// fmuls f4,f19,f4
	ctx.f4.f64 = double(float(ctx.f19.f64 * ctx.f4.f64));
	// lfs f28,-388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -388);
	ctx.f28.f64 = double(temp.f32);
	// stfs f26,-368(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -368, temp.u32);
	// fmuls f28,f23,f28
	ctx.f28.f64 = double(float(ctx.f23.f64 * ctx.f28.f64));
	// lfs f26,-344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -344);
	ctx.f26.f64 = double(temp.f32);
	// lfs f17,-384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -384);
	ctx.f17.f64 = double(temp.f32);
	// stfs f4,-464(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -464, temp.u32);
	// stfs f28,-480(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -480, temp.u32);
	// fadds f4,f26,f17
	ctx.f4.f64 = double(float(ctx.f26.f64 + ctx.f17.f64));
	// lfs f26,-400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -400);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f26,f26,f10,f15
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f10.f64 + ctx.f15.f64));
	// stfs f26,-400(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -400, temp.u32);
	// lfs f26,-352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -352);
	ctx.f26.f64 = double(temp.f32);
	// lfs f17,-396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -396);
	ctx.f17.f64 = double(temp.f32);
	// fadds f28,f26,f17
	ctx.f28.f64 = double(float(ctx.f26.f64 + ctx.f17.f64));
	// lfs f17,-464(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -464);
	ctx.f17.f64 = double(temp.f32);
	// lfs f26,-392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -392);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f26,f23,f26,f17
	ctx.f26.f64 = double(float(ctx.f23.f64 * ctx.f26.f64 + ctx.f17.f64));
	// lfs f17,-468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -468);
	ctx.f17.f64 = double(temp.f32);
	// fsubs f17,f3,f17
	ctx.f17.f64 = double(float(ctx.f3.f64 - ctx.f17.f64));
	// stfs f17,-464(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -464, temp.u32);
	// lfs f17,-452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -452);
	ctx.f17.f64 = double(temp.f32);
	// fadds f17,f17,f1
	ctx.f17.f64 = double(float(ctx.f17.f64 + ctx.f1.f64));
	// stfs f17,-412(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// lfs f17,-392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -392);
	ctx.f17.f64 = double(temp.f32);
	// lfs f23,-404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -404);
	ctx.f23.f64 = double(temp.f32);
	// fadds f23,f23,f5
	ctx.f23.f64 = double(float(ctx.f23.f64 + ctx.f5.f64));
	// lfs f15,-480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -480);
	ctx.f15.f64 = double(temp.f32);
	// fmsubs f19,f19,f17,f15
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f17.f64 - ctx.f15.f64));
	// lfs f15,-384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -384);
	ctx.f15.f64 = double(temp.f32);
	// lfs f17,-344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -344);
	ctx.f17.f64 = double(temp.f32);
	// fsubs f17,f17,f15
	ctx.f17.f64 = double(float(ctx.f17.f64 - ctx.f15.f64));
	// lfs f15,-404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -404);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f5,f5,f15
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f15.f64));
	// lfs f15,-372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -372);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f7,f7,f15
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f15.f64));
	// stfs f7,-384(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -384, temp.u32);
	// lfs f15,-396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -396);
	ctx.f15.f64 = double(temp.f32);
	// lfs f7,-352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -352);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f15,f7
	ctx.f7.f64 = double(float(ctx.f15.f64 - ctx.f7.f64));
	// lfs f15,-452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -452);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f1,f1,f15
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f15.f64));
	// lfs f15,-468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -468);
	ctx.f15.f64 = double(temp.f32);
	// fadds f3,f15,f3
	ctx.f3.f64 = double(float(ctx.f15.f64 + ctx.f3.f64));
	// stfs f3,-352(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -352, temp.u32);
	// lfs f3,-476(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -476);
	ctx.f3.f64 = double(temp.f32);
	// lfs f15,-336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f15,f3
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f3.f64));
	// stfs f15,-468(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -468, temp.u32);
	// lfs f15,-336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f3,f3,f15
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f15.f64));
	// stfs f3,-452(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -452, temp.u32);
	// lfs f3,-368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	ctx.f3.f64 = double(temp.f32);
	// fadds f3,f4,f3
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfs f3,-480(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -480, temp.u32);
	// lfs f3,-440(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -440);
	ctx.f3.f64 = double(temp.f32);
	// lfs f15,-400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -400);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f15,f3,f15
	ctx.f15.f64 = double(float(ctx.f3.f64 - ctx.f15.f64));
	// stfs f15,-396(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// lfs f15,-400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -400);
	ctx.f15.f64 = double(temp.f32);
	// fadds f3,f15,f3
	ctx.f3.f64 = double(float(ctx.f15.f64 + ctx.f3.f64));
	// lfs f15,-436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -436);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f15,f15,f26
	ctx.f15.f64 = double(float(ctx.f15.f64 - ctx.f26.f64));
	// stfsx f15,r7,r3
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// lfs f15,-436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -436);
	ctx.f15.f64 = double(temp.f32);
	// fadds f26,f26,f15
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f15.f64));
	// fadds f15,f23,f28
	ctx.f15.f64 = double(float(ctx.f23.f64 + ctx.f28.f64));
	// stfs f15,-344(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -344, temp.u32);
	// lfs f15,-368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f28,f23,f28
	ctx.f28.f64 = double(float(ctx.f23.f64 - ctx.f28.f64));
	// fsubs f4,f15,f4
	ctx.f4.f64 = double(float(ctx.f15.f64 - ctx.f4.f64));
	// lfs f15,-424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -424);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f19,f15
	ctx.f15.f64 = double(float(ctx.f19.f64 + ctx.f15.f64));
	// stfsx f15,r7,r4
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// stfsx f26,r7,r5
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// fadds f23,f5,f17
	ctx.f23.f64 = double(float(ctx.f5.f64 + ctx.f17.f64));
	// lfs f26,-424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -424);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f5,f5,f17
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f17.f64));
	// fsubs f26,f19,f26
	ctx.f26.f64 = double(float(ctx.f19.f64 - ctx.f26.f64));
	// stfsx f26,r7,r6
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// lfs f26,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f26.f64 = double(temp.f32);
	// lfs f19,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f19.f64 = double(temp.f32);
	// lfs f17,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f17.f64 = double(temp.f32);
	// lfs f15,-384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -384);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f7,f15
	ctx.f15.f64 = double(float(ctx.f7.f64 + ctx.f15.f64));
	// stfs f15,-440(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -440, temp.u32);
	// lfs f15,-384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -384);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f7,f15,f7
	ctx.f7.f64 = double(float(ctx.f15.f64 - ctx.f7.f64));
	// stfs f7,-400(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -400, temp.u32);
	// lfs f7,-464(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -464);
	ctx.f7.f64 = double(temp.f32);
	// lfs f15,-468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -468);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f15,f7
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f7.f64));
	// stfs f15,-384(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -384, temp.u32);
	// lfs f15,-452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -452);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f15,f1,f15
	ctx.f15.f64 = double(float(ctx.f1.f64 - ctx.f15.f64));
	// stfs f15,-476(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -476, temp.u32);
	// lfs f15,-468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -468);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f7,f7,f15
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f15.f64));
	// lfs f15,-452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -452);
	ctx.f15.f64 = double(temp.f32);
	// fadds f1,f15,f1
	ctx.f1.f64 = double(float(ctx.f15.f64 + ctx.f1.f64));
	// stfs f1,-452(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -452, temp.u32);
	// lfs f1,-412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f1.f64 = double(temp.f32);
	// lfs f15,-396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -396);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f15,f1
	ctx.f15.f64 = double(float(ctx.f15.f64 + ctx.f1.f64));
	// stfs f15,-464(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -464, temp.u32);
	// lfs f15,-352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -352);
	ctx.f15.f64 = double(temp.f32);
	// fadds f15,f3,f15
	ctx.f15.f64 = double(float(ctx.f3.f64 + ctx.f15.f64));
	// stfs f15,-468(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -468, temp.u32);
	// lfs f15,-396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -396);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f1,f1,f15
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f15.f64));
	// lfs f15,-352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -352);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f3,f15,f3
	ctx.f3.f64 = double(float(ctx.f15.f64 - ctx.f3.f64));
	// stfs f3,-396(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// lfs f3,-344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -344);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f15,f19,f3
	ctx.f15.f64 = double(float(ctx.f19.f64 * ctx.f3.f64));
	// lfs f3,-480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -480);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f19,f19,f3
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f3.f64));
	// fmsubs f3,f26,f3,f15
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f3.f64 - ctx.f15.f64));
	// lfs f15,-344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -344);
	ctx.f15.f64 = double(temp.f32);
	// fmadds f26,f26,f15,f19
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f15.f64 + ctx.f19.f64));
	// stfs f26,-480(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -480, temp.u32);
	// lfs f26,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f26.f64 = double(temp.f32);
	// lfs f19,-384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -384);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f15,f26,f19
	ctx.f15.f64 = double(float(ctx.f26.f64 * ctx.f19.f64));
	// lfs f19,-464(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -464);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f26,f26,f19
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f19.f64));
	// stfs f26,-464(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -464, temp.u32);
	// fmadds f26,f17,f19,f15
	ctx.f26.f64 = double(float(ctx.f17.f64 * ctx.f19.f64 + ctx.f15.f64));
	// lfs f19,-384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -384);
	ctx.f19.f64 = double(temp.f32);
	// lfs f15,-464(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -464);
	ctx.f15.f64 = double(temp.f32);
	// fmsubs f19,f17,f19,f15
	ctx.f19.f64 = double(float(ctx.f17.f64 * ctx.f19.f64 - ctx.f15.f64));
	// fsubs f17,f3,f26
	ctx.f17.f64 = double(float(ctx.f3.f64 - ctx.f26.f64));
	// stfsx f17,r10,r3
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// fadds f26,f26,f3
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f3.f64));
	// lfs f3,-480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -480);
	ctx.f3.f64 = double(temp.f32);
	// fadds f17,f19,f3
	ctx.f17.f64 = double(float(ctx.f19.f64 + ctx.f3.f64));
	// stfsx f17,r10,r4
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// stfsx f26,r10,r5
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fsubs f3,f19,f3
	ctx.f3.f64 = double(float(ctx.f19.f64 - ctx.f3.f64));
	// stfsx f3,r10,r6
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// lfs f26,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f26.f64 = double(temp.f32);
	// lfs f3,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f15,f26,f5
	ctx.f15.f64 = double(float(ctx.f26.f64 * ctx.f5.f64));
	// fmuls f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// stfs f5,-464(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -464, temp.u32);
	// lfs f19,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f19.f64 = double(temp.f32);
	// lfs f26,-476(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -476);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f19,f19,f26
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f26.f64));
	// lfs f17,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f17,f17,f26
	ctx.f17.f64 = double(float(ctx.f17.f64 * ctx.f26.f64));
	// lfs f26,-400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -400);
	ctx.f26.f64 = double(temp.f32);
	// fmsubs f5,f3,f26,f15
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f26.f64 - ctx.f15.f64));
	// lfs f3,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f3.f64 = double(temp.f32);
	// lfs f26,-468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -468);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f3,f3,f26,f19
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f26.f64 + ctx.f19.f64));
	// lfs f26,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f26.f64 = double(temp.f32);
	// lfs f19,-400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -400);
	ctx.f19.f64 = double(temp.f32);
	// lfs f15,-464(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -464);
	ctx.f15.f64 = double(temp.f32);
	// fmadds f26,f26,f19,f15
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f19.f64 + ctx.f15.f64));
	// lfs f19,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f19.f64 = double(temp.f32);
	// lfs f15,-468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -468);
	ctx.f15.f64 = double(temp.f32);
	// fmsubs f19,f19,f15,f17
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f15.f64 - ctx.f17.f64));
	// fsubs f17,f5,f3
	ctx.f17.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// stfsx f17,r30,r3
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, temp.u32);
	// fadds f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fadds f3,f19,f26
	ctx.f3.f64 = double(float(ctx.f19.f64 + ctx.f26.f64));
	// stfsx f3,r30,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// stfsx f5,r30,r5
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// fsubs f5,f19,f26
	ctx.f5.f64 = double(float(ctx.f19.f64 - ctx.f26.f64));
	// stfsx f5,r30,r6
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// lfs f3,172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f17,f3,f28
	ctx.f17.f64 = double(float(ctx.f3.f64 * ctx.f28.f64));
	// lfs f19,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f3,f3,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// stfs f3,-464(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -464, temp.u32);
	// fmuls f15,f19,f7
	ctx.f15.f64 = double(float(ctx.f19.f64 * ctx.f7.f64));
	// lfs f5,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f19,f19,f1
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f1.f64));
	// lfs f26,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f26.f64 = double(temp.f32);
	// fmsubs f4,f5,f4,f17
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 - ctx.f17.f64));
	// fmadds f3,f26,f1,f15
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f1.f64 + ctx.f15.f64));
	// fmsubs f7,f26,f7,f19
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f7.f64 - ctx.f19.f64));
	// fmuls f15,f25,f8
	ctx.f15.f64 = double(float(ctx.f25.f64 * ctx.f8.f64));
	// fsubs f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// stfsx f1,r31,r3
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, temp.u32);
	// fadds f4,f3,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// lfs f1,-452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -452);
	ctx.f1.f64 = double(temp.f32);
	// lfs f17,-464(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -464);
	ctx.f17.f64 = double(temp.f32);
	// fmadds f5,f5,f28,f17
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f28.f64 + ctx.f17.f64));
	// fadds f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfsx f3,r31,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// stfsx f4,r31,r5
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, temp.u32);
	// fsubs f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// stfsx f7,r31,r6
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// lfs f7,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f26,f7,f23
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f23.f64));
	// fmuls f28,f5,f23
	ctx.f28.f64 = double(float(ctx.f5.f64 * ctx.f23.f64));
	// lfs f4,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f23,f4,f1
	ctx.f23.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// lfs f1,-440(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -440);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f5,f5,f1,f26
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f26.f64));
	// fmsubs f7,f7,f1,f28
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 - ctx.f28.f64));
	// lfs f1,-396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -396);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f1,f3,f1,f23
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f23.f64));
	// lfs f23,-340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -340);
	ctx.f23.f64 = double(temp.f32);
	// lfs f28,-360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -360);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f26,f23,f8
	ctx.f26.f64 = double(float(ctx.f23.f64 * ctx.f8.f64));
	// fmuls f19,f28,f8
	ctx.f19.f64 = double(float(ctx.f28.f64 * ctx.f8.f64));
	// lfs f28,-356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -356);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f17,f28,f8
	ctx.f17.f64 = double(float(ctx.f28.f64 * ctx.f8.f64));
	// fmsubs f28,f28,f9,f26
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f9.f64 - ctx.f26.f64));
	// fmadds f26,f25,f9,f19
	ctx.f26.f64 = double(float(ctx.f25.f64 * ctx.f9.f64 + ctx.f19.f64));
	// lfs f25,-452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -452);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f19,f3,f25
	ctx.f19.f64 = double(float(ctx.f3.f64 * ctx.f25.f64));
	// lfs f3,-332(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -332);
	ctx.f3.f64 = double(temp.f32);
	// fadds f3,f3,f18
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f18.f64));
	// stfs f3,-356(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -356, temp.u32);
	// lfs f25,-328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f3,f23,f9,f17
	ctx.f3.f64 = double(float(ctx.f23.f64 * ctx.f9.f64 + ctx.f17.f64));
	// fadds f17,f25,f31
	ctx.f17.f64 = double(float(ctx.f25.f64 + ctx.f31.f64));
	// lfs f25,-376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -376);
	ctx.f25.f64 = double(temp.f32);
	// fadds f23,f24,f6
	ctx.f23.f64 = double(float(ctx.f24.f64 + ctx.f6.f64));
	// stfs f23,-464(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -464, temp.u32);
	// lfs f23,-448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -448);
	ctx.f23.f64 = double(temp.f32);
	// fadds f25,f25,f22
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f22.f64));
	// stfs f25,-340(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -340, temp.u32);
	// fadds f23,f23,f30
	ctx.f23.f64 = double(float(ctx.f23.f64 + ctx.f30.f64));
	// lfs f25,-360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -360);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f6,f6,f24
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f24.f64));
	// stfs f23,-360(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -360, temp.u32);
	// fmsubs f25,f25,f9,f15
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f9.f64 - ctx.f15.f64));
	// lfs f23,-348(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -348);
	ctx.f23.f64 = double(temp.f32);
	// fadds f23,f23,f29
	ctx.f23.f64 = double(float(ctx.f23.f64 + ctx.f29.f64));
	// stfs f23,-468(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -468, temp.u32);
	// fsubs f23,f7,f1
	ctx.f23.f64 = double(float(ctx.f7.f64 - ctx.f1.f64));
	// stfsx f23,r28,r3
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r3.u32, temp.u32);
	// lfs f23,-396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -396);
	ctx.f23.f64 = double(temp.f32);
	// fmsubs f4,f4,f23,f19
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f23.f64 - ctx.f19.f64));
	// lfs f19,-356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -356);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f23,f19,f0
	ctx.f23.f64 = double(float(ctx.f19.f64 * ctx.f0.f64));
	// fadds f19,f1,f7
	ctx.f19.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// lfs f1,-332(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -332);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f18,f1,f18
	ctx.f18.f64 = double(float(ctx.f1.f64 - ctx.f18.f64));
	// lfs f1,-328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f17,f0
	ctx.f7.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// fsubs f17,f31,f1
	ctx.f17.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lfs f1,-376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -376);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f1,f22,f1
	ctx.f1.f64 = double(float(ctx.f22.f64 - ctx.f1.f64));
	// lfs f31,-348(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -348);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f24,f17,f0
	ctx.f24.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// fsubs f31,f29,f31
	ctx.f31.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// lfs f29,-448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -448);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f30,f30,f29
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// lfs f17,-464(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -464);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f29,f18,f0
	ctx.f29.f64 = double(float(ctx.f18.f64 * ctx.f0.f64));
	// lfs f18,-340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -340);
	ctx.f18.f64 = double(temp.f32);
	// fadds f22,f26,f28
	ctx.f22.f64 = double(float(ctx.f26.f64 + ctx.f28.f64));
	// fsubs f28,f28,f26
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f26.f64));
	// fadds f26,f25,f3
	ctx.f26.f64 = double(float(ctx.f25.f64 + ctx.f3.f64));
	// fsubs f3,f25,f3
	ctx.f3.f64 = double(float(ctx.f25.f64 - ctx.f3.f64));
	// fadds f25,f4,f5
	ctx.f25.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfsx f25,r28,r4
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r4.u32, temp.u32);
	// stfsx f19,r28,r5
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r5.u32, temp.u32);
	// fsubs f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// stfsx f5,r28,r6
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r6.u32, temp.u32);
	// fadds f25,f17,f7
	ctx.f25.f64 = double(float(ctx.f17.f64 + ctx.f7.f64));
	// fadds f5,f23,f18
	ctx.f5.f64 = double(float(ctx.f23.f64 + ctx.f18.f64));
	// lfs f19,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f19.f64 = double(temp.f32);
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f7,f17,f7
	ctx.f7.f64 = double(float(ctx.f17.f64 - ctx.f7.f64));
	// fadds f15,f6,f29
	ctx.f15.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// lfs f17,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f17.f64 = double(temp.f32);
	// fsubs f6,f6,f29
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f29.f64));
	// fadds f29,f24,f1
	ctx.f29.f64 = double(float(ctx.f24.f64 + ctx.f1.f64));
	// fsubs f1,f1,f24
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f24.f64));
	// lfs f24,-360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -360);
	ctx.f24.f64 = double(temp.f32);
	// fadds f24,f22,f24
	ctx.f24.f64 = double(float(ctx.f22.f64 + ctx.f24.f64));
	// stfs f24,-356(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -356, temp.u32);
	// fsubs f24,f31,f28
	ctx.f24.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// stfs f24,-340(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -340, temp.u32);
	// lfs f24,-360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -360);
	ctx.f24.f64 = double(temp.f32);
	// fadds f31,f28,f31
	ctx.f31.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// fsubs f24,f24,f22
	ctx.f24.f64 = double(float(ctx.f24.f64 - ctx.f22.f64));
	// lfs f28,-468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -468);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f22,f30,f3
	ctx.f22.f64 = double(float(ctx.f30.f64 - ctx.f3.f64));
	// stfs f22,-464(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -464, temp.u32);
	// lfs f22,-468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -468);
	ctx.f22.f64 = double(temp.f32);
	// fadds f3,f3,f30
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f30.f64));
	// fadds f28,f26,f28
	ctx.f28.f64 = double(float(ctx.f26.f64 + ctx.f28.f64));
	// fmuls f30,f19,f25
	ctx.f30.f64 = double(float(ctx.f19.f64 * ctx.f25.f64));
	// fsubs f26,f22,f26
	ctx.f26.f64 = double(float(ctx.f22.f64 - ctx.f26.f64));
	// fmuls f22,f19,f5
	ctx.f22.f64 = double(float(ctx.f19.f64 * ctx.f5.f64));
	// fsubs f23,f18,f23
	ctx.f23.f64 = double(float(ctx.f18.f64 - ctx.f23.f64));
	// lfs f18,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f18.f64 = double(temp.f32);
	// fmsubs f5,f4,f5,f30
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 - ctx.f30.f64));
	// fmadds f4,f4,f25,f22
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f25.f64 + ctx.f22.f64));
	// lfs f25,-356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -356);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f30,f17,f25
	ctx.f30.f64 = double(float(ctx.f17.f64 * ctx.f25.f64));
	// fmadds f30,f18,f28,f30
	ctx.f30.f64 = double(float(ctx.f18.f64 * ctx.f28.f64 + ctx.f30.f64));
	// fmuls f28,f17,f28
	ctx.f28.f64 = double(float(ctx.f17.f64 * ctx.f28.f64));
	// fsubs f22,f5,f30
	ctx.f22.f64 = double(float(ctx.f5.f64 - ctx.f30.f64));
	// stfsx f22,r22,r3
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r22.u32 + ctx.r3.u32, temp.u32);
	// fadds f30,f30,f5
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f5.f64));
	// fmsubs f5,f18,f25,f28
	ctx.f5.f64 = double(float(ctx.f18.f64 * ctx.f25.f64 - ctx.f28.f64));
	// lfs f25,-340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -340);
	ctx.f25.f64 = double(temp.f32);
	// fadds f28,f5,f4
	ctx.f28.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfsx f28,r22,r4
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r22.u32 + ctx.r4.u32, temp.u32);
	// stfsx f30,r22,r5
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r22.u32 + ctx.r5.u32, temp.u32);
	// fsubs f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfsx f5,r22,r6
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r22.u32 + ctx.r6.u32, temp.u32);
	// lfs f4,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// lfs f30,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f22,f4,f6
	ctx.f22.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// lfs f5,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f19,f30,f25
	ctx.f19.f64 = double(float(ctx.f30.f64 * ctx.f25.f64));
	// lfs f28,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f18,f5,f6
	ctx.f18.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f17,f28,f25
	ctx.f17.f64 = double(float(ctx.f28.f64 * ctx.f25.f64));
	// lfs f25,-464(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -464);
	ctx.f25.f64 = double(temp.f32);
	// fmsubs f6,f5,f1,f22
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 - ctx.f22.f64));
	// fmadds f5,f28,f25,f19
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f25.f64 + ctx.f19.f64));
	// fmadds f4,f4,f1,f18
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f18.f64));
	// fmsubs f1,f30,f25,f17
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f25.f64 - ctx.f17.f64));
	// fsubs f30,f6,f5
	ctx.f30.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// stfsx f30,r26,r3
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r3.u32, temp.u32);
	// fadds f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f5,f1,f4
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// stfsx f5,r26,r4
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r4.u32, temp.u32);
	// stfsx f6,r26,r5
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r5.u32, temp.u32);
	// fsubs f6,f1,f4
	ctx.f6.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// stfsx f6,r26,r6
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r6.u32, temp.u32);
	// lfs f5,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f30,f5,f7
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f28,f1,f24
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f24.f64));
	// lfs f6,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f25,f5,f23
	ctx.f25.f64 = double(float(ctx.f5.f64 * ctx.f23.f64));
	// lfs f4,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f22,f1,f26
	ctx.f22.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
	// lfs f17,-316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -316);
	ctx.f17.f64 = double(temp.f32);
	// lfs f19,-300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,-308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -308);
	ctx.f18.f64 = double(temp.f32);
	// fmsubs f5,f6,f23,f30
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f23.f64 - ctx.f30.f64));
	// fmadds f1,f4,f26,f28
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f26.f64 + ctx.f28.f64));
	// lfs f26,-320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f7,f6,f7,f25
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f25.f64));
	// fmsubs f6,f4,f24,f22
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f24.f64 - ctx.f22.f64));
	// fsubs f4,f5,f1
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// stfsx f4,r23,r3
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r3.u32, temp.u32);
	// fadds f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fadds f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfsx f4,r23,r4
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r4.u32, temp.u32);
	// stfsx f5,r23,r5
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r5.u32, temp.u32);
	// fsubs f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// stfsx f7,r23,r6
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r6.u32, temp.u32);
	// lfs f6,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f1,f6,f15
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f15.f64));
	// fmuls f30,f7,f15
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f15.f64));
	// lfs f4,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f22,f4,f31
	ctx.f22.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f15,f5,f31
	ctx.f15.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmsubs f7,f7,f29,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 - ctx.f1.f64));
	// lfs f1,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f6,f6,f29,f30
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f30.f64));
	// lfs f30,-324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -324);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f25,f1,f8
	ctx.f25.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// lfs f29,-312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -312);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f24,f30,f8
	ctx.f24.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// fmuls f23,f1,f9
	ctx.f23.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f28,f30,f9
	ctx.f28.f64 = double(float(ctx.f30.f64 * ctx.f9.f64));
	// fmadds f5,f5,f3,f22
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f22.f64));
	// fmsubs f4,f4,f3,f15
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 - ctx.f15.f64));
	// fsubs f3,f17,f27
	ctx.f3.f64 = double(float(ctx.f17.f64 - ctx.f27.f64));
	// fadds f22,f14,f20
	ctx.f22.f64 = double(float(ctx.f14.f64 + ctx.f20.f64));
	// fsubs f20,f20,f14
	ctx.f20.f64 = double(float(ctx.f20.f64 - ctx.f14.f64));
	// fmadds f30,f26,f9,f25
	ctx.f30.f64 = double(float(ctx.f26.f64 * ctx.f9.f64 + ctx.f25.f64));
	// lfs f25,-380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -380);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f31,f29,f9,f24
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f9.f64 + ctx.f24.f64));
	// lfs f24,-432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -432);
	ctx.f24.f64 = double(temp.f32);
	// fmsubs f26,f26,f8,f23
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f8.f64 - ctx.f23.f64));
	// lfs f23,-484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -484);
	ctx.f23.f64 = double(temp.f32);
	// fmsubs f1,f29,f8,f28
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f8.f64 - ctx.f28.f64));
	// fadds f28,f17,f27
	ctx.f28.f64 = double(float(ctx.f17.f64 + ctx.f27.f64));
	// lfs f27,-432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -432);
	ctx.f27.f64 = double(temp.f32);
	// fadds f29,f2,f16
	ctx.f29.f64 = double(float(ctx.f2.f64 + ctx.f16.f64));
	// fadds f24,f24,f19
	ctx.f24.f64 = double(float(ctx.f24.f64 + ctx.f19.f64));
	// fsubs f27,f19,f27
	ctx.f27.f64 = double(float(ctx.f19.f64 - ctx.f27.f64));
	// lfs f19,-380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -380);
	ctx.f19.f64 = double(temp.f32);
	// fadds f25,f25,f18
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f18.f64));
	// fsubs f19,f18,f19
	ctx.f19.f64 = double(float(ctx.f18.f64 - ctx.f19.f64));
	// lfs f18,-484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -484);
	ctx.f18.f64 = double(temp.f32);
	// fadds f23,f23,f21
	ctx.f23.f64 = double(float(ctx.f23.f64 + ctx.f21.f64));
	// fsubs f21,f21,f18
	ctx.f21.f64 = double(float(ctx.f21.f64 - ctx.f18.f64));
	// fadds f17,f26,f31
	ctx.f17.f64 = double(float(ctx.f26.f64 + ctx.f31.f64));
	// fsubs f31,f26,f31
	ctx.f31.f64 = double(float(ctx.f26.f64 - ctx.f31.f64));
	// fsubs f26,f7,f5
	ctx.f26.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// stfsx f26,r24,r3
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r3.u32, temp.u32);
	// fadds f18,f30,f1
	ctx.f18.f64 = double(float(ctx.f30.f64 + ctx.f1.f64));
	// fadds f26,f5,f7
	ctx.f26.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fsubs f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// fadds f30,f28,f29
	ctx.f30.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// fsubs f5,f29,f28
	ctx.f5.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// fadds f29,f4,f6
	ctx.f29.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfsx f29,r24,r4
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r4.u32, temp.u32);
	// stfsx f26,r24,r5
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r5.u32, temp.u32);
	// fsubs f2,f16,f2
	ctx.f2.f64 = double(float(ctx.f16.f64 - ctx.f2.f64));
	// fadds f7,f24,f25
	ctx.f7.f64 = double(float(ctx.f24.f64 + ctx.f25.f64));
	// fsubs f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// stfsx f6,r24,r6
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r6.u32, temp.u32);
	// fsubs f6,f24,f25
	ctx.f6.f64 = double(float(ctx.f24.f64 - ctx.f25.f64));
	// fadds f24,f18,f23
	ctx.f24.f64 = double(float(ctx.f18.f64 + ctx.f23.f64));
	// lfs f28,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f23,f23,f18
	ctx.f23.f64 = double(float(ctx.f23.f64 - ctx.f18.f64));
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f18,f21,f31
	ctx.f18.f64 = double(float(ctx.f21.f64 - ctx.f31.f64));
	// lfs f25,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f25.f64 = double(temp.f32);
	// fadds f31,f31,f21
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f21.f64));
	// fmuls f21,f28,f7
	ctx.f21.f64 = double(float(ctx.f28.f64 * ctx.f7.f64));
	// fadds f26,f19,f2
	ctx.f26.f64 = double(float(ctx.f19.f64 + ctx.f2.f64));
	// fmuls f28,f28,f30
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// fsubs f2,f2,f19
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f19.f64));
	// fsubs f19,f20,f1
	ctx.f19.f64 = double(float(ctx.f20.f64 - ctx.f1.f64));
	// fadds f1,f1,f20
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f20.f64));
	// fadds f20,f17,f22
	ctx.f20.f64 = double(float(ctx.f17.f64 + ctx.f22.f64));
	// fadds f29,f27,f3
	ctx.f29.f64 = double(float(ctx.f27.f64 + ctx.f3.f64));
	// fsubs f3,f27,f3
	ctx.f3.f64 = double(float(ctx.f27.f64 - ctx.f3.f64));
	// lfs f27,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f22,f22,f17
	ctx.f22.f64 = double(float(ctx.f22.f64 - ctx.f17.f64));
	// fmsubs f30,f4,f30,f21
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 - ctx.f21.f64));
	// fmadds f7,f4,f7,f28
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f28.f64));
	// fmuls f4,f25,f24
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f24.f64));
	// fmuls f28,f25,f20
	ctx.f28.f64 = double(float(ctx.f25.f64 * ctx.f20.f64));
	// fmadds f4,f27,f20,f4
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f20.f64 + ctx.f4.f64));
	// fmsubs f28,f27,f24,f28
	ctx.f28.f64 = double(float(ctx.f27.f64 * ctx.f24.f64 - ctx.f28.f64));
	// fsubs f27,f30,f4
	ctx.f27.f64 = double(float(ctx.f30.f64 - ctx.f4.f64));
	// stfsx f27,r27,r3
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r3.u32, temp.u32);
	// fadds f4,f4,f30
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// fadds f30,f28,f7
	ctx.f30.f64 = double(float(ctx.f28.f64 + ctx.f7.f64));
	// stfsx f30,r27,r4
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r4.u32, temp.u32);
	// stfsx f4,r27,r5
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r5.u32, temp.u32);
	// fsubs f7,f28,f7
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f7.f64));
	// stfsx f7,r27,r6
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r6.u32, temp.u32);
	// lfs f30,208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f30.f64 = double(temp.f32);
	// lfs f4,204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f25,f30,f19
	ctx.f25.f64 = double(float(ctx.f30.f64 * ctx.f19.f64));
	// lfs f7,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f27,f4,f3
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// lfs f28,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f24,f7,f3
	ctx.f24.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f21,f28,f19
	ctx.f21.f64 = double(float(ctx.f28.f64 * ctx.f19.f64));
	// fmadds f3,f28,f18,f25
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f18.f64 + ctx.f25.f64));
	// fmsubs f7,f7,f2,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 - ctx.f27.f64));
	// fmadds f4,f4,f2,f24
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f24.f64));
	// fmsubs f2,f30,f18,f21
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f18.f64 - ctx.f21.f64));
	// fsubs f30,f7,f3
	ctx.f30.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// stfsx f30,r21,r3
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r21.u32 + ctx.r3.u32, temp.u32);
	// fadds f7,f3,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f3,f2,f4
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfsx f3,r21,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r21.u32 + ctx.r4.u32, temp.u32);
	// stfsx f7,r21,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r21.u32 + ctx.r5.u32, temp.u32);
	// fsubs f7,f2,f4
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// stfsx f7,r21,r6
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r21.u32 + ctx.r6.u32, temp.u32);
	// lfs f4,140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f30,f4,f6
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f28,f2,f23
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f23.f64));
	// lfs f3,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f27,f4,f5
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// lfs f7,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f2,f22
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f22.f64));
	// fmsubs f5,f7,f5,f30
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 - ctx.f30.f64));
	// fmadds f4,f3,f22,f28
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f22.f64 + ctx.f28.f64));
	// fmadds f7,f7,f6,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f27.f64));
	// fmsubs f6,f3,f23,f2
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f23.f64 - ctx.f2.f64));
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfsx f3,r25,r3
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r3.u32, temp.u32);
	// fadds f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfsx f4,r25,r4
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r4.u32, temp.u32);
	// stfsx f5,r25,r5
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r5.u32, temp.u32);
	// fsubs f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// stfsx f7,r25,r6
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r6.u32, temp.u32);
	// lfs f7,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f2,f7,f29
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// lfs f5,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f6,f29
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// lfs f4,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f30,f5,f1
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmsubs f7,f7,f26,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f26.f64 - ctx.f3.f64));
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// fmadds f3,f4,f31,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f30.f64));
	// add r3,r19,r3
	ctx.r3.u64 = ctx.r19.u64 + ctx.r3.u64;
	// fmuls f4,f4,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// add r4,r19,r4
	ctx.r4.u64 = ctx.r19.u64 + ctx.r4.u64;
	// fmadds f6,f6,f26,f2
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f26.f64 + ctx.f2.f64));
	// subf r5,r19,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r19.s64;
	// subf r6,r19,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r19.s64;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// fsubs f2,f7,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// stfs f2,0(r18)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r18.u32 + 0, temp.u32);
	// fadds f3,f7,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fmsubs f7,f5,f31,f4
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 - ctx.f4.f64));
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,0(r17)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r17.u32 + 0, temp.u32);
	// stfs f3,0(r16)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r16.u32 + 0, temp.u32);
	// fsubs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f7,0(r20)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r20.u32 + 0, temp.u32);
	// lwz r10,-26212(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + -26212);
	// xor r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// bne 0x82c56df4
	if (!ctx.cr0.eq) goto loc_82C56DF4;
loc_82C583D0:
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82d5c58c
	ctx.lr = 0x82C583D8;
	__restfpr_14(ctx, base);
	// b 0x82d5c4e0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C583E0"))) PPC_WEAK_FUNC(sub_82C583E0);
PPC_FUNC_IMPL(__imp__sub_82C583E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,27728
	ctx.r5.s64 = ctx.r11.s64 + 27728;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// addi r4,r11,28040
	ctx.r4.s64 = ctx.r11.s64 + 28040;
	// b 0x82cab7c8
	sub_82CAB7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C583F8"))) PPC_WEAK_FUNC(sub_82C583F8);
PPC_FUNC_IMPL(__imp__sub_82C583F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4a4
	ctx.lr = 0x82C58400;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82d5c540
	ctx.lr = 0x82C58408;
	__savefpr_14(ctx, base);
	// mulli r11,r9,120
	ctx.r11.s64 = ctx.r9.s64 * 120;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// addi r11,r11,-120
	ctx.r11.s64 = ctx.r11.s64 + -120;
	// bge cr6,0x82c58bc0
	if (!ctx.cr6.lt) goto loc_82C58BC0;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r20,r9,r10
	ctx.r20.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// rlwinm r27,r7,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r19,-32234
	ctx.r19.s64 = -2112487424;
	// lfs f13,27776(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27776);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-29656(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29656);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-29652(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29652);
	ctx.f0.f64 = double(temp.f32);
loc_82C58444:
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mulli r9,r8,20
	ctx.r9.s64 = ctx.r8.s64 * 20;
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f26,f9,f8
	ctx.f26.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfsx f6,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// mulli r31,r8,24
	ctx.r31.s64 = ctx.r8.s64 * 24;
	// fadds f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fadds f8,f6,f7
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fsubs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfsx f5,r7,r5
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r31,r3
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f6,f5,f4
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfsx f2,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// mulli r29,r8,28
	ctx.r29.s64 = ctx.r8.s64 * 28;
	// lfsx f3,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f3.f64 = double(temp.f32);
	// fadds f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f4,f2,f3
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fsubs f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// mulli r28,r8,12
	ctx.r28.s64 = ctx.r8.s64 * 12;
	// add r26,r29,r5
	ctx.r26.u64 = ctx.r29.u64 + ctx.r5.u64;
	// add r25,r29,r6
	ctx.r25.u64 = ctx.r29.u64 + ctx.r6.u64;
	// rlwinm r30,r8,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r24,r28,r5
	ctx.r24.u64 = ctx.r28.u64 + ctx.r5.u64;
	// add r23,r28,r6
	ctx.r23.u64 = ctx.r28.u64 + ctx.r6.u64;
	// add r22,r29,r3
	ctx.r22.u64 = ctx.r29.u64 + ctx.r3.u64;
	// lfs f1,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// add r21,r28,r3
	ctx.r21.u64 = ctx.r28.u64 + ctx.r3.u64;
	// lfs f31,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fadds f2,f1,f11
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// lfsx f30,r30,r3
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f25,f10,f31
	ctx.f25.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// lfs f29,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fadds f1,f29,f30
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// lfsx f28,r30,r4
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fadds f10,f31,f10
	ctx.f10.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// fsubs f31,f30,f29
	ctx.f31.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// add r29,r29,r4
	ctx.r29.u64 = ctx.r29.u64 + ctx.r4.u64;
	// fsubs f30,f28,f27
	ctx.f30.f64 = double(float(ctx.f28.f64 - ctx.f27.f64));
	// add r28,r28,r4
	ctx.r28.u64 = ctx.r28.u64 + ctx.r4.u64;
	// fadds f29,f27,f28
	ctx.f29.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// fadds f28,f8,f26
	ctx.f28.f64 = double(float(ctx.f8.f64 + ctx.f26.f64));
	// fsubs f8,f26,f8
	ctx.f8.f64 = double(float(ctx.f26.f64 - ctx.f8.f64));
	// fadds f26,f4,f6
	ctx.f26.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fsubs f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fadds f27,f5,f9
	ctx.f27.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fadds f5,f3,f7
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f4,f1,f2
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fsubs f7,f3,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fsubs f3,f2,f1
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f2,f25,f30
	ctx.f2.f64 = double(float(ctx.f25.f64 - ctx.f30.f64));
	// fadds f1,f30,f25
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f25.f64));
	// lfs f25,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// fadds f30,f31,f10
	ctx.f30.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// fsubs f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fadds f31,f29,f11
	ctx.f31.f64 = double(float(ctx.f29.f64 + ctx.f11.f64));
	// fsubs f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// fsubs f29,f28,f26
	ctx.f29.f64 = double(float(ctx.f28.f64 - ctx.f26.f64));
	// fadds f24,f6,f8
	ctx.f24.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fadds f28,f26,f28
	ctx.f28.f64 = double(float(ctx.f26.f64 + ctx.f28.f64));
	// fsubs f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fadds f26,f27,f4
	ctx.f26.f64 = double(float(ctx.f27.f64 + ctx.f4.f64));
	// fsubs f4,f4,f27
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f27.f64));
	// fadds f27,f2,f9
	ctx.f27.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fsubs f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// fadds f2,f1,f5
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fsubs f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// fadds f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fsubs f7,f3,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// lfs f3,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f8,f24,f0
	ctx.f8.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfsx f14,r30,r5
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,-304(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// lfsx f23,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f23.f64 = double(temp.f32);
	// lfsx f24,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f24.f64 = double(temp.f32);
	// lfsx f14,r30,r6
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	ctx.f14.f64 = double(temp.f32);
	// stfs f14,-300(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// fsubs f14,f24,f23
	ctx.f14.f64 = double(float(ctx.f24.f64 - ctx.f23.f64));
	// lfsx f21,r31,r6
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	ctx.f21.f64 = double(temp.f32);
	// fadds f24,f23,f24
	ctx.f24.f64 = double(float(ctx.f23.f64 + ctx.f24.f64));
	// lfsx f22,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f22.f64 = double(temp.f32);
	// fadds f23,f21,f22
	ctx.f23.f64 = double(float(ctx.f21.f64 + ctx.f22.f64));
	// lfsx f19,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f19.f64 = double(temp.f32);
	// lfsx f20,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f22,f22,f21
	ctx.f22.f64 = double(float(ctx.f22.f64 - ctx.f21.f64));
	// lfsx f17,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f17.f64 = double(temp.f32);
	// fsubs f21,f20,f19
	ctx.f21.f64 = double(float(ctx.f20.f64 - ctx.f19.f64));
	// lfsx f18,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f18.f64 = double(temp.f32);
	// fadds f20,f19,f20
	ctx.f20.f64 = double(float(ctx.f19.f64 + ctx.f20.f64));
	// fadds f19,f17,f18
	ctx.f19.f64 = double(float(ctx.f17.f64 + ctx.f18.f64));
	// lfs f16,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f16.f64 = double(temp.f32);
	// stfs f19,-272(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fsubs f19,f3,f16
	ctx.f19.f64 = double(float(ctx.f3.f64 - ctx.f16.f64));
	// fadds f3,f16,f3
	ctx.f3.f64 = double(float(ctx.f16.f64 + ctx.f3.f64));
	// stfs f3,-288(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// lfs f3,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f18,f18,f17
	ctx.f18.f64 = double(float(ctx.f18.f64 - ctx.f17.f64));
	// lfs f15,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f15.f64 = double(temp.f32);
	// stfs f19,-292(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// fadds f19,f15,f25
	ctx.f19.f64 = double(float(ctx.f15.f64 + ctx.f25.f64));
	// fsubs f25,f15,f25
	ctx.f25.f64 = double(float(ctx.f15.f64 - ctx.f25.f64));
	// stfs f25,-276(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -276, temp.u32);
	// lfs f16,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f16.f64 = double(temp.f32);
	// fsubs f16,f3,f16
	ctx.f16.f64 = double(float(ctx.f3.f64 - ctx.f16.f64));
	// stfs f16,-296(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// lfs f16,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f16.f64 = double(temp.f32);
	// fadds f3,f16,f3
	ctx.f3.f64 = double(float(ctx.f16.f64 + ctx.f3.f64));
	// stfs f3,-284(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// lfs f3,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f16,-300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f16.f64 = double(temp.f32);
	// lfs f25,-300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f25.f64 = double(temp.f32);
	// fadds f16,f16,f3
	ctx.f16.f64 = double(float(ctx.f16.f64 + ctx.f3.f64));
	// fsubs f3,f3,f25
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f25.f64));
	// stfs f3,-280(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// fadds f25,f21,f23
	ctx.f25.f64 = double(float(ctx.f21.f64 + ctx.f23.f64));
	// stfs f25,-300(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// fsubs f3,f23,f21
	ctx.f3.f64 = double(float(ctx.f23.f64 - ctx.f21.f64));
	// lfs f25,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f25.f64 = double(temp.f32);
	// lfs f17,-288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f17.f64 = double(temp.f32);
	// fadds f23,f25,f14
	ctx.f23.f64 = double(float(ctx.f25.f64 + ctx.f14.f64));
	// stfs f23,-268(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// fsubs f21,f14,f25
	ctx.f21.f64 = double(float(ctx.f14.f64 - ctx.f25.f64));
	// fadds f25,f20,f24
	ctx.f25.f64 = double(float(ctx.f20.f64 + ctx.f24.f64));
	// stfs f21,-260(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// fmuls f14,f3,f13
	ctx.f14.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f23,-296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f23.f64 = double(temp.f32);
	// fadds f23,f23,f19
	ctx.f23.f64 = double(float(ctx.f23.f64 + ctx.f19.f64));
	// lfs f15,-284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -284);
	ctx.f15.f64 = double(temp.f32);
	// fadds f17,f15,f17
	ctx.f17.f64 = double(float(ctx.f15.f64 + ctx.f17.f64));
	// stfs f17,-272(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fmuls f15,f3,f12
	ctx.f15.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f3,f21,f12
	ctx.f3.f64 = double(float(ctx.f21.f64 * ctx.f12.f64));
	// fmuls f21,f23,f12
	ctx.f21.f64 = double(float(ctx.f23.f64 * ctx.f12.f64));
	// fmuls f23,f23,f13
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f13.f64));
	// stfs f23,-264(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// fadds f17,f17,f25
	ctx.f17.f64 = double(float(ctx.f17.f64 + ctx.f25.f64));
	// stfs f17,-304(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// lfs f17,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f17.f64 = double(temp.f32);
	// fsubs f25,f25,f17
	ctx.f25.f64 = double(float(ctx.f25.f64 - ctx.f17.f64));
	// lfs f17,-268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f17.f64 = double(temp.f32);
	// stfs f3,-268(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// fmr f3,f17
	ctx.f3.f64 = ctx.f17.f64;
	// stfs f21,-272(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fmadds f23,f3,f13,f15
	ctx.f23.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f15.f64));
	// fmsubs f21,f3,f12,f14
	ctx.f21.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 - ctx.f14.f64));
	// lfs f3,-300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f3.f64 = double(temp.f32);
	// lfs f15,-268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f15.f64 = double(temp.f32);
	// fmadds f17,f3,f13,f15
	ctx.f17.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f15.f64));
	// lfs f3,-292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -292);
	ctx.f3.f64 = double(temp.f32);
	// fadds f3,f16,f3
	ctx.f3.f64 = double(float(ctx.f16.f64 + ctx.f3.f64));
	// lfs f15,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f15.f64 = double(temp.f32);
	// fmadds f15,f3,f13,f15
	ctx.f15.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f15.f64));
	// lfs f14,-264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f24,f24,f20
	ctx.f24.f64 = double(float(ctx.f24.f64 - ctx.f20.f64));
	// fmsubs f3,f3,f12,f14
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 - ctx.f14.f64));
	// lfs f14,-296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f19,f14,f19
	ctx.f19.f64 = double(float(ctx.f14.f64 - ctx.f19.f64));
	// stfs f19,-296(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// lfs f19,-292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -292);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f19,f19,f16
	ctx.f19.f64 = double(float(ctx.f19.f64 - ctx.f16.f64));
	// stfs f19,-272(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// lfs f19,-300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f16,f19,f12
	ctx.f16.f64 = double(float(ctx.f19.f64 * ctx.f12.f64));
	// lfs f20,-260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	ctx.f20.f64 = double(temp.f32);
	// fadds f19,f18,f22
	ctx.f19.f64 = double(float(ctx.f18.f64 + ctx.f22.f64));
	// stfs f19,-292(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// fsubs f22,f22,f18
	ctx.f22.f64 = double(float(ctx.f22.f64 - ctx.f18.f64));
	// lfs f18,-288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f18.f64 = double(temp.f32);
	// lfs f14,-276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -276);
	ctx.f14.f64 = double(temp.f32);
	// lfs f19,-280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -280);
	ctx.f19.f64 = double(temp.f32);
	// fadds f19,f19,f14
	ctx.f19.f64 = double(float(ctx.f19.f64 + ctx.f14.f64));
	// lfs f14,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f14.f64 = double(temp.f32);
	// fadds f14,f14,f26
	ctx.f14.f64 = double(float(ctx.f14.f64 + ctx.f26.f64));
	// stfs f14,-300(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// lfs f14,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f26,f26,f14
	ctx.f26.f64 = double(float(ctx.f26.f64 - ctx.f14.f64));
	// fmsubs f20,f20,f13,f16
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f13.f64 - ctx.f16.f64));
	// lfs f16,-284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -284);
	ctx.f16.f64 = double(temp.f32);
	// fsubs f18,f18,f16
	ctx.f18.f64 = double(float(ctx.f18.f64 - ctx.f16.f64));
	// stfs f18,-260(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// lfs f16,-276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -276);
	ctx.f16.f64 = double(temp.f32);
	// lfs f18,-280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -280);
	ctx.f18.f64 = double(temp.f32);
	// fsubs f18,f16,f18
	ctx.f18.f64 = double(float(ctx.f16.f64 - ctx.f18.f64));
	// stfs f18,-276(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -276, temp.u32);
	// lfs f16,-296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f16,f16,f12
	ctx.f16.f64 = double(float(ctx.f16.f64 * ctx.f12.f64));
	// lfs f18,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f18,f18,f12
	ctx.f18.f64 = double(float(ctx.f18.f64 * ctx.f12.f64));
	// lfs f14,-292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -292);
	ctx.f14.f64 = double(temp.f32);
	// fadds f14,f19,f14
	ctx.f14.f64 = double(float(ctx.f19.f64 + ctx.f14.f64));
	// stfs f14,-264(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// lfs f14,-292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -292);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f19,f19,f14
	ctx.f19.f64 = double(float(ctx.f19.f64 - ctx.f14.f64));
	// lfs f14,-296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f14.f64 = double(temp.f32);
	// fmsubs f18,f14,f13,f18
	ctx.f18.f64 = double(float(ctx.f14.f64 * ctx.f13.f64 - ctx.f18.f64));
	// lfs f14,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f14.f64 = double(temp.f32);
	// fmadds f16,f14,f13,f16
	ctx.f16.f64 = double(float(ctx.f14.f64 * ctx.f13.f64 + ctx.f16.f64));
	// stfs f16,-280(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// lfs f16,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f14,f16,f26
	ctx.f14.f64 = double(float(ctx.f16.f64 * ctx.f26.f64));
	// fsubs f16,f24,f22
	ctx.f16.f64 = double(float(ctx.f24.f64 - ctx.f22.f64));
	// fadds f24,f22,f24
	ctx.f24.f64 = double(float(ctx.f22.f64 + ctx.f24.f64));
	// stfs f24,-284(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// lfs f24,-260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	ctx.f24.f64 = double(temp.f32);
	// lfs f22,-276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -276);
	ctx.f22.f64 = double(temp.f32);
	// fadds f22,f22,f24
	ctx.f22.f64 = double(float(ctx.f22.f64 + ctx.f24.f64));
	// stfs f22,-288(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// lfs f22,-276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -276);
	ctx.f22.f64 = double(temp.f32);
	// fsubs f24,f22,f24
	ctx.f24.f64 = double(float(ctx.f22.f64 - ctx.f24.f64));
	// stfs f24,-276(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -276, temp.u32);
	// lfs f24,-264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f24.f64 = double(temp.f32);
	// fadds f22,f24,f2
	ctx.f22.f64 = double(float(ctx.f24.f64 + ctx.f2.f64));
	// stfs f22,-272(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fsubs f24,f2,f24
	ctx.f24.f64 = double(float(ctx.f2.f64 - ctx.f24.f64));
	// lfs f22,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f22.f64 = double(temp.f32);
	// stfs f24,-264(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// fadds f2,f18,f17
	ctx.f2.f64 = double(float(ctx.f18.f64 + ctx.f17.f64));
	// fmuls f22,f22,f24
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f24.f64));
	// fadds f24,f29,f30
	ctx.f24.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// stfs f24,-260(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// fadds f24,f2,f24
	ctx.f24.f64 = double(float(ctx.f2.f64 + ctx.f24.f64));
	// stfs f24,-268(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// lfs f24,-260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f2,f24,f2
	ctx.f2.f64 = double(float(ctx.f24.f64 - ctx.f2.f64));
	// stfs f2,-296(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// fadds f24,f8,f11
	ctx.f24.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f24,-260(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// lfs f2,-280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -280);
	ctx.f2.f64 = double(temp.f32);
	// fadds f2,f2,f20
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f20.f64));
	// fadds f24,f24,f2
	ctx.f24.f64 = double(float(ctx.f24.f64 + ctx.f2.f64));
	// stfs f24,-292(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// lfs f24,-260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f2,f24,f2
	ctx.f2.f64 = double(float(ctx.f24.f64 - ctx.f2.f64));
	// lfs f24,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f30,f30,f29
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fmsubs f26,f24,f26,f22
	ctx.f26.f64 = double(float(ctx.f24.f64 * ctx.f26.f64 - ctx.f22.f64));
	// stfs f26,-304(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// lfs f26,-264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fmadds f26,f24,f26,f14
	ctx.f26.f64 = double(float(ctx.f24.f64 * ctx.f26.f64 + ctx.f14.f64));
	// stfs f26,-264(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// lfs f26,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// stfs f26,-260(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// lfs f24,-268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f22,f26,f24
	ctx.f22.f64 = double(float(ctx.f26.f64 * ctx.f24.f64));
	// lfs f26,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f14,f26,f24
	ctx.f14.f64 = double(float(ctx.f26.f64 * ctx.f24.f64));
	// lfs f24,-292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -292);
	ctx.f24.f64 = double(temp.f32);
	// lfs f29,-280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -280);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f29,f20,f29
	ctx.f29.f64 = double(float(ctx.f20.f64 - ctx.f29.f64));
	// fmadds f26,f26,f24,f22
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f24.f64 + ctx.f22.f64));
	// lfs f22,-260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	ctx.f22.f64 = double(temp.f32);
	// fmsubs f24,f22,f24,f14
	ctx.f24.f64 = double(float(ctx.f22.f64 * ctx.f24.f64 - ctx.f14.f64));
	// lfs f22,-300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f22.f64 = double(temp.f32);
	// fsubs f14,f22,f26
	ctx.f14.f64 = double(float(ctx.f22.f64 - ctx.f26.f64));
	// stfs f14,0(r3)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f14,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f14.f64 = double(temp.f32);
	// fadds f26,f26,f22
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f22.f64));
	// lfs f22,-296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f22.f64 = double(temp.f32);
	// fadds f14,f24,f14
	ctx.f14.f64 = double(float(ctx.f24.f64 + ctx.f14.f64));
	// stfs f14,0(r4)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f26,0(r5)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f26,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f26,f24,f26
	ctx.f26.f64 = double(float(ctx.f24.f64 - ctx.f26.f64));
	// stfs f26,0(r6)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f26,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f14,f26,f22
	ctx.f14.f64 = double(float(ctx.f26.f64 * ctx.f22.f64));
	// lfs f24,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f22,f24,f22
	ctx.f22.f64 = double(float(ctx.f24.f64 * ctx.f22.f64));
	// fmadds f24,f24,f2,f14
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f2.f64 + ctx.f14.f64));
	// lfs f14,-284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -284);
	ctx.f14.f64 = double(temp.f32);
	// fmsubs f2,f26,f2,f22
	ctx.f2.f64 = double(float(ctx.f26.f64 * ctx.f2.f64 - ctx.f22.f64));
	// lfs f26,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f22,f26,f24
	ctx.f22.f64 = double(float(ctx.f26.f64 - ctx.f24.f64));
	// stfsx f22,r30,r3
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, temp.u32);
	// fadds f26,f24,f26
	ctx.f26.f64 = double(float(ctx.f24.f64 + ctx.f26.f64));
	// lfs f24,-264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f24.f64 = double(temp.f32);
	// fadds f22,f2,f24
	ctx.f22.f64 = double(float(ctx.f2.f64 + ctx.f24.f64));
	// stfsx f22,r30,r4
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// stfsx f26,r30,r5
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// fsubs f26,f18,f17
	ctx.f26.f64 = double(float(ctx.f18.f64 - ctx.f17.f64));
	// lfs f18,-288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f18.f64 = double(temp.f32);
	// fsubs f8,f2,f24
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f24.f64));
	// fadds f17,f18,f16
	ctx.f17.f64 = double(float(ctx.f18.f64 + ctx.f16.f64));
	// lfs f18,-276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -276);
	ctx.f18.f64 = double(temp.f32);
	// fadds f14,f18,f14
	ctx.f14.f64 = double(float(ctx.f18.f64 + ctx.f14.f64));
	// stfsx f8,r30,r6
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// fadds f22,f25,f5
	ctx.f22.f64 = double(float(ctx.f25.f64 + ctx.f5.f64));
	// lfs f24,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f24.f64 = double(temp.f32);
	// fadds f2,f19,f4
	ctx.f2.f64 = double(float(ctx.f19.f64 + ctx.f4.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f4,f4,f19
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f19.f64));
	// lfs f20,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f5,f5,f25
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f25.f64));
	// lfs f19,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f19.f64 = double(temp.f32);
	// lfs f25,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f18,f23,f15
	ctx.f18.f64 = double(float(ctx.f23.f64 - ctx.f15.f64));
	// fmuls f17,f17,f0
	ctx.f17.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// fmuls f14,f14,f0
	ctx.f14.f64 = double(float(ctx.f14.f64 * ctx.f0.f64));
	// stfs f14,-264(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// fadds f14,f29,f30
	ctx.f14.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fsubs f30,f30,f29
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fadds f29,f11,f26
	ctx.f29.f64 = double(float(ctx.f11.f64 + ctx.f26.f64));
	// fsubs f11,f11,f26
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f26.f64));
	// stfs f11,-280(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// lfs f11,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f26,f24,f22
	ctx.f26.f64 = double(float(ctx.f24.f64 * ctx.f22.f64));
	// stfs f11,-260(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// fmuls f24,f24,f2
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f2.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmsubs f2,f8,f2,f26
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 - ctx.f26.f64));
	// stfs f2,-272(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// lfs f2,-260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// stfs f11,-260(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// fmadds f8,f8,f22,f24
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f22.f64 + ctx.f24.f64));
	// stfs f2,-268(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// fadds f11,f17,f1
	ctx.f11.f64 = double(float(ctx.f17.f64 + ctx.f1.f64));
	// lfs f26,-264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f2,f1,f17
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f17.f64));
	// fadds f1,f26,f27
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f27.f64));
	// fsubs f27,f27,f26
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f26.f64));
	// lfs f24,-260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	ctx.f24.f64 = double(temp.f32);
	// lfs f22,-268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f22.f64 = double(temp.f32);
	// fmsubs f4,f25,f4,f24
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f4.f64 - ctx.f24.f64));
	// fmadds f5,f25,f5,f22
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f5.f64 + ctx.f22.f64));
	// fmuls f25,f20,f14
	ctx.f25.f64 = double(float(ctx.f20.f64 * ctx.f14.f64));
	// fmuls f22,f19,f14
	ctx.f22.f64 = double(float(ctx.f19.f64 * ctx.f14.f64));
	// fadds f24,f6,f10
	ctx.f24.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fsubs f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fsubs f6,f21,f3
	ctx.f6.f64 = double(float(ctx.f21.f64 - ctx.f3.f64));
	// fmadds f25,f19,f29,f25
	ctx.f25.f64 = double(float(ctx.f19.f64 * ctx.f29.f64 + ctx.f25.f64));
	// fmsubs f29,f20,f29,f22
	ctx.f29.f64 = double(float(ctx.f20.f64 * ctx.f29.f64 - ctx.f22.f64));
	// lfs f22,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f22.f64 = double(temp.f32);
	// fadds f26,f18,f24
	ctx.f26.f64 = double(float(ctx.f18.f64 + ctx.f24.f64));
	// fsubs f24,f24,f18
	ctx.f24.f64 = double(float(ctx.f24.f64 - ctx.f18.f64));
	// fsubs f20,f22,f25
	ctx.f20.f64 = double(float(ctx.f22.f64 - ctx.f25.f64));
	// stfsx f20,r10,r3
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// fadds f20,f29,f8
	ctx.f20.f64 = double(float(ctx.f29.f64 + ctx.f8.f64));
	// stfsx f20,r10,r4
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// fadds f25,f25,f22
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f22.f64));
	// stfsx f25,r10,r5
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fsubs f8,f29,f8
	ctx.f8.f64 = double(float(ctx.f29.f64 - ctx.f8.f64));
	// stfsx f8,r10,r6
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// lfs f8,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f29,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f22,f8,f30
	ctx.f22.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmuls f20,f29,f30
	ctx.f20.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// lfs f25,-280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -280);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f30,f29,f25,f22
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f25.f64 + ctx.f22.f64));
	// lfs f22,-276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -276);
	ctx.f22.f64 = double(temp.f32);
	// fmsubs f8,f8,f25,f20
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f25.f64 - ctx.f20.f64));
	// lfs f20,-284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -284);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f22,f22,f20
	ctx.f22.f64 = double(float(ctx.f22.f64 - ctx.f20.f64));
	// lfs f20,-288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f20,f16,f20
	ctx.f20.f64 = double(float(ctx.f16.f64 - ctx.f20.f64));
	// fsubs f29,f4,f30
	ctx.f29.f64 = double(float(ctx.f4.f64 - ctx.f30.f64));
	// stfsx f29,r31,r3
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, temp.u32);
	// fadds f4,f30,f4
	ctx.f4.f64 = double(float(ctx.f30.f64 + ctx.f4.f64));
	// fadds f30,f8,f5
	ctx.f30.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfsx f30,r31,r4
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// stfsx f4,r31,r5
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, temp.u32);
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// stfsx f8,r31,r6
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// fsubs f4,f31,f28
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// fadds f8,f3,f21
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f21.f64));
	// lfs f30,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fadds f3,f28,f31
	ctx.f3.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f21,f30,f1
	ctx.f21.f64 = double(float(ctx.f30.f64 * ctx.f1.f64));
	// lfs f25,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f28,f22,f0
	ctx.f28.f64 = double(float(ctx.f22.f64 * ctx.f0.f64));
	// lfs f29,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f30,f30,f11
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// fadds f31,f15,f23
	ctx.f31.f64 = double(float(ctx.f15.f64 + ctx.f23.f64));
	// fmuls f23,f20,f0
	ctx.f23.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// fmuls f20,f25,f26
	ctx.f20.f64 = double(float(ctx.f25.f64 * ctx.f26.f64));
	// fadds f22,f4,f8
	ctx.f22.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fsubs f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fmsubs f11,f5,f11,f21
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 - ctx.f21.f64));
	// fadds f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fmadds f5,f5,f1,f30
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f30.f64));
	// fadds f1,f28,f7
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f7.f64));
	// fsubs f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fsubs f6,f3,f31
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f31.f64));
	// fsubs f7,f7,f28
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f28.f64));
	// fadds f3,f31,f3
	ctx.f3.f64 = double(float(ctx.f31.f64 + ctx.f3.f64));
	// fmuls f30,f25,f22
	ctx.f30.f64 = double(float(ctx.f25.f64 * ctx.f22.f64));
	// fadds f31,f23,f9
	ctx.f31.f64 = double(float(ctx.f23.f64 + ctx.f9.f64));
	// fsubs f9,f9,f23
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f23.f64));
	// fmadds f30,f29,f26,f30
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f26.f64 + ctx.f30.f64));
	// fmsubs f29,f29,f22,f20
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f22.f64 - ctx.f20.f64));
	// fsubs f28,f11,f30
	ctx.f28.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// stfsx f28,r7,r3
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// fadds f28,f29,f5
	ctx.f28.f64 = double(float(ctx.f29.f64 + ctx.f5.f64));
	// stfsx f28,r7,r4
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// fadds f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 + ctx.f11.f64));
	// stfsx f11,r7,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// fsubs f11,f29,f5
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f5.f64));
	// stfsx f11,r7,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// lfs f5,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// lfs f30,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f28,f5,f27
	ctx.f28.f64 = double(float(ctx.f5.f64 * ctx.f27.f64));
	// lfs f29,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f26,f30,f24
	ctx.f26.f64 = double(float(ctx.f30.f64 * ctx.f24.f64));
	// fmuls f25,f5,f2
	ctx.f25.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// lfs f11,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f24,f29,f24
	ctx.f24.f64 = double(float(ctx.f29.f64 * ctx.f24.f64));
	// fmsubs f5,f11,f2,f28
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 - ctx.f28.f64));
	// fmadds f2,f29,f8,f26
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f8.f64 + ctx.f26.f64));
	// fmadds f11,f11,f27,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 + ctx.f25.f64));
	// fmsubs f8,f30,f8,f24
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f8.f64 - ctx.f24.f64));
	// fsubs f30,f5,f2
	ctx.f30.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// stfsx f30,r9,r3
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// fadds f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// add r3,r27,r3
	ctx.r3.u64 = ctx.r27.u64 + ctx.r3.u64;
	// fadds f2,f8,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfsx f2,r9,r4
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
	// stfsx f5,r9,r5
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// fsubs f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// stfsx f11,r9,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// add r4,r27,r4
	ctx.r4.u64 = ctx.r27.u64 + ctx.r4.u64;
	// lfs f8,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// subf r5,r27,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r27.s64;
	// fmuls f30,f8,f31
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lfs f11,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f29,f8,f1
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// lfs f5,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// subf r6,r27,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r27.s64;
	// fmsubs f8,f11,f1,f30
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 - ctx.f30.f64));
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmadds f11,f11,f31,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f29.f64));
	// fmuls f31,f2,f4
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmadds f4,f2,f6,f1
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmsubs f6,f5,f6,f31
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f31.f64));
	// fsubs f5,f8,f4
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// stfs f5,0(r21)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// fadds f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fadds f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f5,0(r28)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f8,0(r24)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// fsubs f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f11,0(r23)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// lfs f8,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f8,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f5,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f6,f10
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f1,f8,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f11,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f31,f5,f10
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// fmsubs f10,f11,f7,f4
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 - ctx.f4.f64));
	// fmadds f8,f5,f3,f2
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmadds f11,f11,f9,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmsubs f9,f6,f3,f31
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 - ctx.f31.f64));
	// fsubs f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f7,0(r22)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r22.u32 + 0, temp.u32);
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f8,0(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f10,0(r26)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fsubs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f11,0(r25)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// lwz r10,-26212(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + -26212);
	// xor r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// bne 0x82c58444
	if (!ctx.cr0.eq) goto loc_82C58444;
loc_82C58BC0:
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82d5c58c
	ctx.lr = 0x82C58BC8;
	__restfpr_14(ctx, base);
	// b 0x82d5c4f4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C58BD0"))) PPC_WEAK_FUNC(sub_82C58BD0);
PPC_FUNC_IMPL(__imp__sub_82C58BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,27808
	ctx.r5.s64 = ctx.r11.s64 + 27808;
	// lis r11,-32058
	ctx.r11.s64 = -2100953088;
	// addi r4,r11,-31752
	ctx.r4.s64 = ctx.r11.s64 + -31752;
	// b 0x82cab7c8
	sub_82CAB7C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C58BE8"))) PPC_WEAK_FUNC(sub_82C58BE8);
PPC_FUNC_IMPL(__imp__sub_82C58BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82C58BF0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82d5c558
	ctx.lr = 0x82C58BF8;
	__savefpr_20(ctx, base);
	// mulli r11,r9,56
	ctx.r11.s64 = ctx.r9.s64 * 56;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// bge cr6,0x82c58eac
	if (!ctx.cr6.lt) goto loc_82C58EAC;
	// subf r30,r9,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// lfs f0,-29652(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29652);
	ctx.f0.f64 = double(temp.f32);
loc_82C58C24:
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mulli r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 * 12;
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f5,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f26,f13,f7
	ctx.f26.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// fsubs f24,f11,f5
	ctx.f24.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// add r29,r7,r3
	ctx.r29.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lfsx f6,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// add r28,r7,r4
	ctx.r28.u64 = ctx.r7.u64 + ctx.r4.u64;
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// add r27,r7,r5
	ctx.r27.u64 = ctx.r7.u64 + ctx.r5.u64;
	// fadds f25,f6,f12
	ctx.f25.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lfsx f4,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfsx f2,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f2.f64 = double(temp.f32);
	// fadds f23,f4,f10
	ctx.f23.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// lfs f3,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// lfs f1,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f7,f3,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfsx f31,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f31.f64 = double(temp.f32);
	// fadds f6,f2,f3
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fadds f5,f31,f1
	ctx.f5.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// lfsx f30,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f4,f1,f31
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lfsx f28,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f28.f64 = double(temp.f32);
	// fadds f2,f29,f30
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// lfs f27,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f3,f30,f29
	ctx.f3.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fsubs f31,f28,f27
	ctx.f31.f64 = double(float(ctx.f28.f64 - ctx.f27.f64));
	// fadds f1,f27,f28
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// fadds f29,f25,f26
	ctx.f29.f64 = double(float(ctx.f25.f64 + ctx.f26.f64));
	// fsubs f30,f26,f25
	ctx.f30.f64 = double(float(ctx.f26.f64 - ctx.f25.f64));
	// fadds f28,f13,f6
	ctx.f28.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fsubs f27,f7,f5
	ctx.f27.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// fadds f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f26,f2,f11
	ctx.f26.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fsubs f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// fadds f21,f12,f4
	ctx.f21.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// fsubs f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// fadds f5,f3,f23
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f23.f64));
	// fadds f22,f31,f10
	ctx.f22.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// fsubs f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fsubs f25,f24,f1
	ctx.f25.f64 = double(float(ctx.f24.f64 - ctx.f1.f64));
	// fadds f4,f30,f27
	ctx.f4.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
	// fsubs f2,f7,f29
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f29.f64));
	// fsubs f31,f27,f30
	ctx.f31.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// fadds f30,f29,f7
	ctx.f30.f64 = double(float(ctx.f29.f64 + ctx.f7.f64));
	// fadds f1,f1,f24
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f24.f64));
	// fadds f7,f28,f26
	ctx.f7.f64 = double(float(ctx.f28.f64 + ctx.f26.f64));
	// fsubs f3,f23,f3
	ctx.f3.f64 = double(float(ctx.f23.f64 - ctx.f3.f64));
	// fsubs f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f28,f26,f28
	ctx.f28.f64 = double(float(ctx.f26.f64 - ctx.f28.f64));
	// fadds f6,f21,f22
	ctx.f6.f64 = double(float(ctx.f21.f64 + ctx.f22.f64));
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fsubs f26,f22,f21
	ctx.f26.f64 = double(float(ctx.f22.f64 - ctx.f21.f64));
	// fadds f29,f4,f25
	ctx.f29.f64 = double(float(ctx.f4.f64 + ctx.f25.f64));
	// fadds f27,f2,f5
	ctx.f27.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fmuls f24,f9,f27
	ctx.f24.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// fmuls f23,f8,f27
	ctx.f23.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fsubs f27,f3,f31
	ctx.f27.f64 = double(float(ctx.f3.f64 - ctx.f31.f64));
	// fmadds f24,f8,f29,f24
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f24.f64));
	// fsubs f8,f7,f24
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f24.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f20,f24,f7
	ctx.f20.f64 = double(float(ctx.f24.f64 + ctx.f7.f64));
	// fsubs f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fadds f24,f30,f1
	ctx.f24.f64 = double(float(ctx.f30.f64 + ctx.f1.f64));
	// fmsubs f9,f9,f29,f23
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 - ctx.f23.f64));
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fsubs f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// fsubs f4,f25,f4
	ctx.f4.f64 = double(float(ctx.f25.f64 - ctx.f4.f64));
	// fadds f11,f9,f6
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f20,0(r5)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fsubs f11,f9,f6
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f10,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f10,f7
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// lfs f6,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f29,f9,f27
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// fmuls f25,f10,f8
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f11,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f27,f6,f27
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f27.f64));
	// fmsubs f10,f11,f8,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 - ctx.f2.f64));
	// fmadds f8,f6,f24,f29
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f24.f64 + ctx.f29.f64));
	// fmadds f11,f11,f7,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f25.f64));
	// fmsubs f9,f9,f24,f27
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f24.f64 - ctx.f27.f64));
	// fsubs f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfsx f7,r10,r3
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfsx f8,r10,r4
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// stfsx f10,r10,r5
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fsubs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfsx f11,r10,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f10,f26
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// lfs f8,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f9,f5
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f2,f10,f28
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f8,f5
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmsubs f10,f11,f28,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f28.f64 - ctx.f7.f64));
	// fmadds f8,f8,f4,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmadds f11,f11,f26,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f2.f64));
	// fmsubs f9,f9,f4,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 - ctx.f5.f64));
	// fsubs f6,f1,f30
	ctx.f6.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// fsubs f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfsx f7,r9,r3
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfsx f8,r9,r4
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
	// stfsx f10,r9,r5
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// fsubs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfsx f11,r9,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// fadds f8,f31,f3
	ctx.f8.f64 = double(float(ctx.f31.f64 + ctx.f3.f64));
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// fmuls f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// subf r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r31.s64;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// fmsubs f12,f11,f12,f5
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f5.f64));
	// fmadds f13,f11,f13,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmuls f11,f9,f8
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmadds f11,f7,f6,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f11.f64));
	// fmsubs f10,f9,f6,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 - ctx.f10.f64));
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f9,0(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f11,0(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f12,0(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lwz r10,-26212(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26212);
	// xor r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// bne 0x82c58c24
	if (!ctx.cr0.eq) goto loc_82C58C24;
loc_82C58EAC:
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82d5c5a4
	ctx.lr = 0x82C58EB4;
	__restfpr_20(ctx, base);
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

