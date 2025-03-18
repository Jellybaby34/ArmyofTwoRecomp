#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BE4BAC"))) PPC_WEAK_FUNC(sub_82BE4BAC);
PPC_FUNC_IMPL(__imp__sub_82BE4BAC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4BC4;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4BE0"))) PPC_WEAK_FUNC(sub_82BE4BE0);
PPC_FUNC_IMPL(__imp__sub_82BE4BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BE4BE8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE4C08;
	sub_82C0D0B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE4C10;
	sub_82BE8370(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE4C1C;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0f040
	ctx.lr = 0x82BE4C30;
	sub_82C0F040(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4C3C;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4C48"))) PPC_WEAK_FUNC(sub_82BE4C48);
PPC_FUNC_IMPL(__imp__sub_82BE4C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4C60;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4C78"))) PPC_WEAK_FUNC(sub_82BE4C78);
PPC_FUNC_IMPL(__imp__sub_82BE4C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BE4C80;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE4CA0;
	sub_82C0D0B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE4CA8;
	sub_82BE8370(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE4CB4;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c106d0
	ctx.lr = 0x82BE4CC8;
	sub_82C106D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4CD4;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4CE0"))) PPC_WEAK_FUNC(sub_82BE4CE0);
PPC_FUNC_IMPL(__imp__sub_82BE4CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4CF8;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4D10"))) PPC_WEAK_FUNC(sub_82BE4D10);
PPC_FUNC_IMPL(__imp__sub_82BE4D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BE4D18;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE4D38;
	sub_82C0D0B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE4D40;
	sub_82BE8370(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE4D4C;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c12020
	ctx.lr = 0x82BE4D60;
	sub_82C12020(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4D6C;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4D78"))) PPC_WEAK_FUNC(sub_82BE4D78);
PPC_FUNC_IMPL(__imp__sub_82BE4D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4D90;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4DA0"))) PPC_WEAK_FUNC(sub_82BE4DA0);
PPC_FUNC_IMPL(__imp__sub_82BE4DA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4DB0"))) PPC_WEAK_FUNC(sub_82BE4DB0);
PPC_FUNC_IMPL(__imp__sub_82BE4DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BE4DB8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE4DD8;
	sub_82C0D0B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE4DE0;
	sub_82BE8370(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE4DEC;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0eda0
	ctx.lr = 0x82BE4E00;
	sub_82C0EDA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4E0C;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4E18"))) PPC_WEAK_FUNC(sub_82BE4E18);
PPC_FUNC_IMPL(__imp__sub_82BE4E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4E30;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4E48"))) PPC_WEAK_FUNC(sub_82BE4E48);
PPC_FUNC_IMPL(__imp__sub_82BE4E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BE4E50;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE4E70;
	sub_82C0D0B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE4E78;
	sub_82BE8370(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE4E84;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0e008
	ctx.lr = 0x82BE4E98;
	sub_82C0E008(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4EA4;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4EB0"))) PPC_WEAK_FUNC(sub_82BE4EB0);
PPC_FUNC_IMPL(__imp__sub_82BE4EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4EC8;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4EE0"))) PPC_WEAK_FUNC(sub_82BE4EE0);
PPC_FUNC_IMPL(__imp__sub_82BE4EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BE4EE8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE4F08;
	sub_82C0D0B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE4F10;
	sub_82BE8370(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE4F1C;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0dc18
	ctx.lr = 0x82BE4F30;
	sub_82C0DC18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4F3C;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4F48"))) PPC_WEAK_FUNC(sub_82BE4F48);
PPC_FUNC_IMPL(__imp__sub_82BE4F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4F60;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4F78"))) PPC_WEAK_FUNC(sub_82BE4F78);
PPC_FUNC_IMPL(__imp__sub_82BE4F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BE4F80;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE4FA0;
	sub_82C0D0B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE4FA8;
	sub_82BE8370(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE4FB4;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d398
	ctx.lr = 0x82BE4FC8;
	sub_82C0D398(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4FD4;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4FE0"))) PPC_WEAK_FUNC(sub_82BE4FE0);
PPC_FUNC_IMPL(__imp__sub_82BE4FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE4FF8;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5010"))) PPC_WEAK_FUNC(sub_82BE5010);
PPC_FUNC_IMPL(__imp__sub_82BE5010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82BE5018;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE503C;
	sub_82C0D0B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE5044;
	sub_82BE8370(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE5050;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d688
	ctx.lr = 0x82BE5064;
	sub_82C0D688(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be5070
	if (ctx.cr6.eq) goto loc_82BE5070;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82BE5070:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5078;
	sub_82C0D0B8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE5084"))) PPC_WEAK_FUNC(sub_82BE5084);
PPC_FUNC_IMPL(__imp__sub_82BE5084) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE509C;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE50B8"))) PPC_WEAK_FUNC(sub_82BE50B8);
PPC_FUNC_IMPL(__imp__sub_82BE50B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BE50C0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE50E0;
	sub_82C0D0B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE50E8;
	sub_82BE8370(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE50F4;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0e910
	ctx.lr = 0x82BE5108;
	sub_82C0E910(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5114;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE5120"))) PPC_WEAK_FUNC(sub_82BE5120);
PPC_FUNC_IMPL(__imp__sub_82BE5120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5138;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5150"))) PPC_WEAK_FUNC(sub_82BE5150);
PPC_FUNC_IMPL(__imp__sub_82BE5150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BE5158;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE5178;
	sub_82C0D0B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE5180;
	sub_82BE8370(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE518C;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c125f8
	ctx.lr = 0x82BE51A0;
	sub_82C125F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE51AC;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE51B8"))) PPC_WEAK_FUNC(sub_82BE51B8);
PPC_FUNC_IMPL(__imp__sub_82BE51B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE51D0;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE51E0"))) PPC_WEAK_FUNC(sub_82BE51E0);
PPC_FUNC_IMPL(__imp__sub_82BE51E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stw r3,31448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31448, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE51F0"))) PPC_WEAK_FUNC(sub_82BE51F0);
PPC_FUNC_IMPL(__imp__sub_82BE51F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8247d948
	sub_8247D948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE5200"))) PPC_WEAK_FUNC(sub_82BE5200);
PPC_FUNC_IMPL(__imp__sub_82BE5200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BE5208;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE5228;
	sub_82C0D0B0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c10330
	ctx.lr = 0x82BE523C;
	sub_82C10330(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5248;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE5254"))) PPC_WEAK_FUNC(sub_82BE5254);
PPC_FUNC_IMPL(__imp__sub_82BE5254) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE526C;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5288"))) PPC_WEAK_FUNC(sub_82BE5288);
PPC_FUNC_IMPL(__imp__sub_82BE5288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BE5290;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE52B0;
	sub_82C0D0B0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c104a8
	ctx.lr = 0x82BE52C4;
	sub_82C104A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE52D0;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE52DC"))) PPC_WEAK_FUNC(sub_82BE52DC);
PPC_FUNC_IMPL(__imp__sub_82BE52DC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE52F4;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5310"))) PPC_WEAK_FUNC(sub_82BE5310);
PPC_FUNC_IMPL(__imp__sub_82BE5310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82BE5318;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
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
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE5344;
	sub_82C0D0B0(ctx, base);
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
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c10298
	ctx.lr = 0x82BE5364;
	sub_82C10298(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5370;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE537C"))) PPC_WEAK_FUNC(sub_82BE537C);
PPC_FUNC_IMPL(__imp__sub_82BE537C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5394;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE53B0"))) PPC_WEAK_FUNC(sub_82BE53B0);
PPC_FUNC_IMPL(__imp__sub_82BE53B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BE53B8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE53E0;
	sub_82C0D0B0(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0e270
	ctx.lr = 0x82BE53FC;
	sub_82C0E270(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5408;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE5414"))) PPC_WEAK_FUNC(sub_82BE5414);
PPC_FUNC_IMPL(__imp__sub_82BE5414) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE542C;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5448"))) PPC_WEAK_FUNC(sub_82BE5448);
PPC_FUNC_IMPL(__imp__sub_82BE5448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BE5450;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE5478;
	sub_82C0D0B0(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0e4f8
	ctx.lr = 0x82BE5494;
	sub_82C0E4F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE54A0;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE54AC"))) PPC_WEAK_FUNC(sub_82BE54AC);
PPC_FUNC_IMPL(__imp__sub_82BE54AC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE54C4;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE54D8"))) PPC_WEAK_FUNC(sub_82BE54D8);
PPC_FUNC_IMPL(__imp__sub_82BE54D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE54F8"))) PPC_WEAK_FUNC(sub_82BE54F8);
PPC_FUNC_IMPL(__imp__sub_82BE54F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5500"))) PPC_WEAK_FUNC(sub_82BE5500);
PPC_FUNC_IMPL(__imp__sub_82BE5500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,31452(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31452, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5518"))) PPC_WEAK_FUNC(sub_82BE5518);
PPC_FUNC_IMPL(__imp__sub_82BE5518) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE5540;
	sub_82C0D0B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0c0
	ctx.lr = 0x82BE554C;
	sub_82C0D0C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5558;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82BE5574"))) PPC_WEAK_FUNC(sub_82BE5574);
PPC_FUNC_IMPL(__imp__sub_82BE5574) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE558C;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE55A8"))) PPC_WEAK_FUNC(sub_82BE55A8);
PPC_FUNC_IMPL(__imp__sub_82BE55A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BE55B0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE55D0;
	sub_82C0D0B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0eb68
	ctx.lr = 0x82BE55E0;
	sub_82C0EB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be55ec
	if (ctx.cr6.eq) goto loc_82BE55EC;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82BE55EC:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE55F4;
	sub_82C0D0B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE5600"))) PPC_WEAK_FUNC(sub_82BE5600);
PPC_FUNC_IMPL(__imp__sub_82BE5600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5618;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5628"))) PPC_WEAK_FUNC(sub_82BE5628);
PPC_FUNC_IMPL(__imp__sub_82BE5628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,31441(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31441, ctx.r3.u8);
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// addi r11,r11,9724
	ctx.r11.s64 = ctx.r11.s64 + 9724;
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5648"))) PPC_WEAK_FUNC(sub_82BE5648);
PPC_FUNC_IMPL(__imp__sub_82BE5648) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82be5670
	if (ctx.cr6.eq) goto loc_82BE5670;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE566C;
	sub_82BE8370(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82BE5670:
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

__attribute__((alias("__imp__sub_82BE5688"))) PPC_WEAK_FUNC(sub_82BE5688);
PPC_FUNC_IMPL(__imp__sub_82BE5688) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5698"))) PPC_WEAK_FUNC(sub_82BE5698);
PPC_FUNC_IMPL(__imp__sub_82BE5698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BE56A0;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE56BC;
	sub_82C0D0B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE56C4;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d128
	ctx.lr = 0x82BE56D4;
	sub_82C0D128(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE56DC;
	sub_82C0D0B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE56E8"))) PPC_WEAK_FUNC(sub_82BE56E8);
PPC_FUNC_IMPL(__imp__sub_82BE56E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5700;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5710"))) PPC_WEAK_FUNC(sub_82BE5710);
PPC_FUNC_IMPL(__imp__sub_82BE5710) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5720"))) PPC_WEAK_FUNC(sub_82BE5720);
PPC_FUNC_IMPL(__imp__sub_82BE5720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x82BE5728;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82BE573C:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// bge cr6,0x82be57ac
	if (!ctx.cr6.lt) goto loc_82BE57AC;
	// clrlwi r26,r27,16
	ctx.r26.u64 = ctx.r27.u32 & 0xFFFF;
loc_82BE574C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r5,r28,16
	ctx.r5.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be57a0
	if (!ctx.cr6.eq) goto loc_82BE57A0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE5784;
	sub_82C0D0B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c10330
	ctx.lr = 0x82BE5798;
	sub_82C10330(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE57A0;
	sub_82C0D0B8(ctx, base);
loc_82BE57A0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// blt cr6,0x82be574c
	if (ctx.cr6.lt) goto loc_82BE574C;
loc_82BE57AC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// blt cr6,0x82be573c
	if (ctx.cr6.lt) goto loc_82BE573C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE57CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be587c
	if (ctx.cr6.eq) goto loc_82BE587C;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82be57f0
	if (!ctx.cr6.gt) goto loc_82BE57F0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BE57F0:
	// bl 0x8247d8e0
	ctx.lr = 0x82BE57F4;
	sub_8247D8E0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be5874
	if (ctx.cr6.eq) goto loc_82BE5874;
	// addi r30,r24,2
	ctx.r30.s64 = ctx.r24.s64 + 2;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82BE5830:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r27,2(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lhz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r25,-2(r30)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r30.u32 + -2);
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE5848;
	sub_82C0D0B0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c104a8
	ctx.lr = 0x82BE585C;
	sub_82C104A8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5864;
	sub_82C0D0B8(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82be5830
	if (!ctx.cr6.eq) goto loc_82BE5830;
loc_82BE5874:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8247d948
	ctx.lr = 0x82BE587C;
	sub_8247D948(ctx, base);
loc_82BE587C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE58B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE58CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE58E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r28,92(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r27,96(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE58FC;
	sub_82C0D0B0(ctx, base);
	// addi r9,r31,112
	ctx.r9.s64 = ctx.r31.s64 + 112;
	// addi r8,r31,128
	ctx.r8.s64 = ctx.r31.s64 + 128;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c10298
	ctx.lr = 0x82BE591C;
	sub_82C10298(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5924;
	sub_82C0D0B8(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE592C"))) PPC_WEAK_FUNC(sub_82BE592C);
PPC_FUNC_IMPL(__imp__sub_82BE592C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5944;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5954"))) PPC_WEAK_FUNC(sub_82BE5954);
PPC_FUNC_IMPL(__imp__sub_82BE5954) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE596C;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE597C"))) PPC_WEAK_FUNC(sub_82BE597C);
PPC_FUNC_IMPL(__imp__sub_82BE597C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5994;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE59B0"))) PPC_WEAK_FUNC(sub_82BE59B0);
PPC_FUNC_IMPL(__imp__sub_82BE59B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BE59B8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82be5518
	ctx.lr = 0x82BE59D0;
	sub_82BE5518(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BE59D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE59EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE59FC;
	sub_82C0D0B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82c0d8e8
	ctx.lr = 0x82BE5A0C;
	sub_82C0D8E8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5A14;
	sub_82C0D0B8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// blt cr6,0x82be59d4
	if (ctx.cr6.lt) goto loc_82BE59D4;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE5A2C"))) PPC_WEAK_FUNC(sub_82BE5A2C);
PPC_FUNC_IMPL(__imp__sub_82BE5A2C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5A44;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5A58"))) PPC_WEAK_FUNC(sub_82BE5A58);
PPC_FUNC_IMPL(__imp__sub_82BE5A58) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82be5af8
	if (ctx.cr6.eq) goto loc_82BE5AF8;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82be5acc
	if (ctx.cr6.eq) goto loc_82BE5ACC;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x82be5b20
	if (!ctx.cr6.eq) goto loc_82BE5B20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be4f78
	ctx.lr = 0x82BE5AC8;
	sub_82BE4F78(ctx, base);
	// b 0x82be5b20
	goto loc_82BE5B20;
loc_82BE5ACC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be4ee0
	ctx.lr = 0x82BE5AF4;
	sub_82BE4EE0(ctx, base);
	// b 0x82be5b20
	goto loc_82BE5B20;
loc_82BE5AF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be4e48
	ctx.lr = 0x82BE5B20;
	sub_82BE4E48(ctx, base);
loc_82BE5B20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5B34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82be5b50
	if (ctx.cr6.eq) goto loc_82BE5B50;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be5010
	ctx.lr = 0x82BE5B50;
	sub_82BE5010(ctx, base);
loc_82BE5B50:
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

__attribute__((alias("__imp__sub_82BE5B70"))) PPC_WEAK_FUNC(sub_82BE5B70);
PPC_FUNC_IMPL(__imp__sub_82BE5B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82BE5B78;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be5c34
	if (ctx.cr6.eq) goto loc_82BE5C34;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82BE5BC4:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be5c24
	if (ctx.cr6.eq) goto loc_82BE5C24;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be5c24
	if (ctx.cr6.eq) goto loc_82BE5C24;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82BE5C08:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82be5a58
	ctx.lr = 0x82BE5C14;
	sub_82BE5A58(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82be5c08
	if (!ctx.cr6.eq) goto loc_82BE5C08;
loc_82BE5C24:
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82be5bc4
	if (!ctx.cr6.eq) goto loc_82BE5BC4;
loc_82BE5C34:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be5cc8
	if (ctx.cr6.eq) goto loc_82BE5CC8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be5cc8
	if (ctx.cr6.eq) goto loc_82BE5CC8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82BE5C88:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE5C98;
	sub_82C0D0B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82be8370
	ctx.lr = 0x82BE5CA0;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d128
	ctx.lr = 0x82BE5CB0;
	sub_82C0D128(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5CB8;
	sub_82C0D0B8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82be5c88
	if (!ctx.cr6.eq) goto loc_82BE5C88;
loc_82BE5CC8:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE5CD0"))) PPC_WEAK_FUNC(sub_82BE5CD0);
PPC_FUNC_IMPL(__imp__sub_82BE5CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5CE8;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5D00"))) PPC_WEAK_FUNC(sub_82BE5D00);
PPC_FUNC_IMPL(__imp__sub_82BE5D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BE5D08;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be5da8
	if (ctx.cr6.eq) goto loc_82BE5DA8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be5da8
	if (ctx.cr6.eq) goto loc_82BE5DA8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82BE5D58:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE5D68;
	sub_82C0D0B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82be8370
	ctx.lr = 0x82BE5D70;
	sub_82BE8370(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82be8370
	ctx.lr = 0x82BE5D7C;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0f040
	ctx.lr = 0x82BE5D90;
	sub_82C0F040(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5D98;
	sub_82C0D0B8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82be5d58
	if (!ctx.cr6.eq) goto loc_82BE5D58;
loc_82BE5DA8:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE5DB0"))) PPC_WEAK_FUNC(sub_82BE5DB0);
PPC_FUNC_IMPL(__imp__sub_82BE5DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5DC8;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5DE0"))) PPC_WEAK_FUNC(sub_82BE5DE0);
PPC_FUNC_IMPL(__imp__sub_82BE5DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BE5DE8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be5ed4
	if (ctx.cr6.eq) goto loc_82BE5ED4;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82be5e38
	if (ctx.cr6.gt) goto loc_82BE5E38;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82be5e3c
	goto loc_82BE5E3C;
loc_82BE5E38:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BE5E3C:
	// bl 0x8247d8e0
	ctx.lr = 0x82BE5E40;
	sub_8247D8E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d5cb60
	ctx.lr = 0x82BE5E58;
	sub_82D5CB60(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be5ecc
	if (ctx.cr6.eq) goto loc_82BE5ECC;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82BE5E80:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE5E8C;
	sub_82C0D0B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82be8370
	ctx.lr = 0x82BE5E94;
	sub_82BE8370(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82be8370
	ctx.lr = 0x82BE5EA0;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c125f8
	ctx.lr = 0x82BE5EB4;
	sub_82C125F8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5EBC;
	sub_82C0D0B8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82be5e80
	if (!ctx.cr6.eq) goto loc_82BE5E80;
loc_82BE5ECC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8247d948
	ctx.lr = 0x82BE5ED4;
	sub_8247D948(ctx, base);
loc_82BE5ED4:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE5EDC"))) PPC_WEAK_FUNC(sub_82BE5EDC);
PPC_FUNC_IMPL(__imp__sub_82BE5EDC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5EF4;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5F10"))) PPC_WEAK_FUNC(sub_82BE5F10);
PPC_FUNC_IMPL(__imp__sub_82BE5F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BE5F18;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE5F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be5fb0
	if (ctx.cr6.eq) goto loc_82BE5FB0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82BE5F60:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE5F70;
	sub_82C0D0B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82be8370
	ctx.lr = 0x82BE5F78;
	sub_82BE8370(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82be8370
	ctx.lr = 0x82BE5F84;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c12020
	ctx.lr = 0x82BE5F98;
	sub_82C12020(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5FA0;
	sub_82C0D0B8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82be5f60
	if (!ctx.cr6.eq) goto loc_82BE5F60;
loc_82BE5FB0:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE5FB8"))) PPC_WEAK_FUNC(sub_82BE5FB8);
PPC_FUNC_IMPL(__imp__sub_82BE5FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE5FD0;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE5FE8"))) PPC_WEAK_FUNC(sub_82BE5FE8);
PPC_FUNC_IMPL(__imp__sub_82BE5FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82BE5FF0;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE6014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be60d8
	if (ctx.cr6.eq) goto loc_82BE60D8;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82be6038
	if (!ctx.cr6.gt) goto loc_82BE6038;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BE6038:
	// bl 0x8247d8e0
	ctx.lr = 0x82BE603C;
	sub_8247D8E0(ctx, base);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x82BE604C;
	sub_82D5CB60(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE6074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be60d0
	if (ctx.cr6.eq) goto loc_82BE60D0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82BE6080:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE6090;
	sub_82C0D0B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82be8370
	ctx.lr = 0x82BE6098;
	sub_82BE8370(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82be8370
	ctx.lr = 0x82BE60A4;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0eda0
	ctx.lr = 0x82BE60B8;
	sub_82C0EDA0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE60C0;
	sub_82C0D0B8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82be6080
	if (!ctx.cr6.eq) goto loc_82BE6080;
loc_82BE60D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8247d948
	ctx.lr = 0x82BE60D8;
	sub_8247D948(ctx, base);
loc_82BE60D8:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE60E0"))) PPC_WEAK_FUNC(sub_82BE60E0);
PPC_FUNC_IMPL(__imp__sub_82BE60E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE60F8;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6110"))) PPC_WEAK_FUNC(sub_82BE6110);
PPC_FUNC_IMPL(__imp__sub_82BE6110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BE6118;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE613C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be61e8
	if (ctx.cr6.eq) goto loc_82BE61E8;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82be6160
	if (!ctx.cr6.gt) goto loc_82BE6160;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BE6160:
	// bl 0x8247d8e0
	ctx.lr = 0x82BE6164;
	sub_8247D8E0(ctx, base);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x82BE6174;
	sub_82D5CB60(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE619C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be61e0
	if (ctx.cr6.eq) goto loc_82BE61E0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82BE61A8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE61B8;
	sub_82C0D0B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0eb68
	ctx.lr = 0x82BE61C8;
	sub_82C0EB68(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE61D0;
	sub_82C0D0B8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82be61a8
	if (!ctx.cr6.eq) goto loc_82BE61A8;
loc_82BE61E0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8247d948
	ctx.lr = 0x82BE61E8;
	sub_8247D948(ctx, base);
loc_82BE61E8:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE61F0"))) PPC_WEAK_FUNC(sub_82BE61F0);
PPC_FUNC_IMPL(__imp__sub_82BE61F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE6208;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6220"))) PPC_WEAK_FUNC(sub_82BE6220);
PPC_FUNC_IMPL(__imp__sub_82BE6220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82BE6228;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lfs f0,14276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	ctx.f0.f64 = double(temp.f32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r11,68
	ctx.r11.s64 = 68;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// ori r11,r11,21844
	ctx.r11.u64 = ctx.r11.u64 | 21844;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BE62FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE630C;
	sub_82C0D0B0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE6314;
	sub_82BE8370(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE6320;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0da48
	ctx.lr = 0x82BE6334;
	sub_82C0DA48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE6340;
	sub_82C0D0B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE634C"))) PPC_WEAK_FUNC(sub_82BE634C);
PPC_FUNC_IMPL(__imp__sub_82BE634C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE6364;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6378"))) PPC_WEAK_FUNC(sub_82BE6378);
PPC_FUNC_IMPL(__imp__sub_82BE6378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6390"))) PPC_WEAK_FUNC(sub_82BE6390);
PPC_FUNC_IMPL(__imp__sub_82BE6390) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE63C8"))) PPC_WEAK_FUNC(sub_82BE63C8);
PPC_FUNC_IMPL(__imp__sub_82BE63C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE63E0"))) PPC_WEAK_FUNC(sub_82BE63E0);
PPC_FUNC_IMPL(__imp__sub_82BE63E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6418"))) PPC_WEAK_FUNC(sub_82BE6418);
PPC_FUNC_IMPL(__imp__sub_82BE6418) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6450"))) PPC_WEAK_FUNC(sub_82BE6450);
PPC_FUNC_IMPL(__imp__sub_82BE6450) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82be6220
	sub_82BE6220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6468"))) PPC_WEAK_FUNC(sub_82BE6468);
PPC_FUNC_IMPL(__imp__sub_82BE6468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4ac
	ctx.lr = 0x82BE6470;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE6494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82be6610
	if (ctx.cr6.eq) goto loc_82BE6610;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE64CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82be659c
	if (ctx.cr6.eq) goto loc_82BE659C;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
loc_82BE64D8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE64EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82be6584
	if (ctx.cr6.gt) goto loc_82BE6584;
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// srawi r26,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 2;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82be6518
	if (!ctx.cr6.eq) goto loc_82BE6518;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82be6520
	goto loc_82BE6520;
loc_82BE6518:
	// subf r11,r29,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r29.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82BE6520:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82be6584
	if (!ctx.cr6.lt) goto loc_82BE6584;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d5e610
	ctx.lr = 0x82BE6534;
	sub_82D5E610(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82be655c
	if (ctx.cr6.eq) goto loc_82BE655C;
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
loc_82BE6548:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82be6548
	if (!ctx.cr6.eq) goto loc_82BE6548;
loc_82BE655C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82be656c
	if (ctx.cr6.eq) goto loc_82BE656C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BE656C;
	sub_82D5E5B0(ctx, base);
loc_82BE656C:
	// add r27,r27,r28
	ctx.r27.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82BE6584:
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// bne cr6,0x82be64d8
	if (!ctx.cr6.eq) goto loc_82BE64D8;
loc_82BE659C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82be6600
	if (ctx.cr6.eq) goto loc_82BE6600;
loc_82BE65A8:
	// subf r11,r30,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r30.s64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE65C4;
	sub_82C0D0B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82be8370
	ctx.lr = 0x82BE65CC;
	sub_82BE8370(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82be8370
	ctx.lr = 0x82BE65D8;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c106d0
	ctx.lr = 0x82BE65EC;
	sub_82C106D0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE65F4;
	sub_82C0D0B8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82be65a8
	if (ctx.cr6.lt) goto loc_82BE65A8;
loc_82BE6600:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82be6610
	if (ctx.cr6.eq) goto loc_82BE6610;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BE6610;
	sub_82D5E5B0(ctx, base);
loc_82BE6610:
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x82d5c4fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6618"))) PPC_WEAK_FUNC(sub_82BE6618);
PPC_FUNC_IMPL(__imp__sub_82BE6618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	// bl 0x82c07db0
	ctx.lr = 0x82BE6630;
	sub_82C07DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6640"))) PPC_WEAK_FUNC(sub_82BE6640);
PPC_FUNC_IMPL(__imp__sub_82BE6640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE6658;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6670"))) PPC_WEAK_FUNC(sub_82BE6670);
PPC_FUNC_IMPL(__imp__sub_82BE6670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4ac
	ctx.lr = 0x82BE6678;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE669C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82be6818
	if (ctx.cr6.eq) goto loc_82BE6818;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE66D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82be67a4
	if (ctx.cr6.eq) goto loc_82BE67A4;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
loc_82BE66E0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE66F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82be678c
	if (ctx.cr6.gt) goto loc_82BE678C;
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// srawi r26,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 2;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82be6720
	if (!ctx.cr6.eq) goto loc_82BE6720;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82be6728
	goto loc_82BE6728;
loc_82BE6720:
	// subf r11,r29,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r29.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82BE6728:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82be678c
	if (!ctx.cr6.lt) goto loc_82BE678C;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d5e610
	ctx.lr = 0x82BE673C;
	sub_82D5E610(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82be6764
	if (ctx.cr6.eq) goto loc_82BE6764;
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
loc_82BE6750:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82be6750
	if (!ctx.cr6.eq) goto loc_82BE6750;
loc_82BE6764:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82be6774
	if (ctx.cr6.eq) goto loc_82BE6774;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BE6774;
	sub_82D5E5B0(ctx, base);
loc_82BE6774:
	// add r27,r27,r28
	ctx.r27.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82BE678C:
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// bne cr6,0x82be66e0
	if (!ctx.cr6.eq) goto loc_82BE66E0;
loc_82BE67A4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82be6808
	if (ctx.cr6.eq) goto loc_82BE6808;
loc_82BE67B0:
	// subf r11,r30,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r30.s64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82c0d0b0
	ctx.lr = 0x82BE67CC;
	sub_82C0D0B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82be8370
	ctx.lr = 0x82BE67D4;
	sub_82BE8370(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82be8370
	ctx.lr = 0x82BE67E0;
	sub_82BE8370(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0e910
	ctx.lr = 0x82BE67F4;
	sub_82C0E910(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE67FC;
	sub_82C0D0B8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82be67b0
	if (ctx.cr6.lt) goto loc_82BE67B0;
loc_82BE6808:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82be6818
	if (ctx.cr6.eq) goto loc_82BE6818;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BE6818;
	sub_82D5E5B0(ctx, base);
loc_82BE6818:
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x82d5c4fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE6820"))) PPC_WEAK_FUNC(sub_82BE6820);
PPC_FUNC_IMPL(__imp__sub_82BE6820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	// bl 0x82c07db0
	ctx.lr = 0x82BE6838;
	sub_82C07DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6848"))) PPC_WEAK_FUNC(sub_82BE6848);
PPC_FUNC_IMPL(__imp__sub_82BE6848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
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
	// bl 0x82c0d0b8
	ctx.lr = 0x82BE6860;
	sub_82C0D0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6870"))) PPC_WEAK_FUNC(sub_82BE6870);
PPC_FUNC_IMPL(__imp__sub_82BE6870) {
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
	// bl 0x82be5b70
	ctx.lr = 0x82BE6890;
	sub_82BE5B70(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be6220
	ctx.lr = 0x82BE68A4;
	sub_82BE6220(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be5720
	ctx.lr = 0x82BE68B0;
	sub_82BE5720(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be5fe8
	ctx.lr = 0x82BE68BC;
	sub_82BE5FE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be6110
	ctx.lr = 0x82BE68C8;
	sub_82BE6110(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be5d00
	ctx.lr = 0x82BE68D4;
	sub_82BE5D00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be6468
	ctx.lr = 0x82BE68E0;
	sub_82BE6468(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be5de0
	ctx.lr = 0x82BE68EC;
	sub_82BE5DE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be5f10
	ctx.lr = 0x82BE68F8;
	sub_82BE5F10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be6670
	ctx.lr = 0x82BE6904;
	sub_82BE6670(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82BE6928"))) PPC_WEAK_FUNC(sub_82BE6928);
PPC_FUNC_IMPL(__imp__sub_82BE6928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c490
	ctx.lr = 0x82BE6930;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82d5c56c
	ctx.lr = 0x82BE6938;
	__savefpr_25(ctx, base);
	// addi r31,r1,-880
	ctx.r31.s64 = ctx.r1.s64 + -880;
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// lwz r10,128(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be7014
	if (ctx.cr6.eq) goto loc_82BE7014;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r15,r11,27520
	ctx.r15.s64 = ctx.r11.s64 + 27520;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r9,10922
	ctx.r9.s64 = 715784192;
	// li r16,12
	ctx.r16.s64 = 12;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// ori r21,r9,43691
	ctx.r21.u64 = ctx.r9.u64 | 43691;
	// lfs f31,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f31.f64 = double(temp.f32);
loc_82BE6998:
	// lwz r11,128(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwzx r14,r10,r11
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwz r11,232(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 232);
	// lwz r7,228(r14)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r14.u32 + 228);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6fec
	if (ctx.cr6.eq) goto loc_82BE6FEC;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
loc_82BE69C8:
	// lwz r11,228(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 228);
	// lwzx r20,r11,r10
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82be6fbc
	if (ctx.cr6.eq) goto loc_82BE6FBC;
	// lwz r11,220(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 220);
	// mr r17,r23
	ctx.r17.u64 = ctx.r23.u64;
	// lwz r8,216(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 216);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6fbc
	if (ctx.cr6.eq) goto loc_82BE6FBC;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
loc_82BE69FC:
	// lwz r11,216(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 216);
	// lwzx r26,r11,r19
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6a38
	if (ctx.cr6.eq) goto loc_82BE6A38;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BE6A14:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82be6a14
	if (!ctx.cr6.eq) goto loc_82BE6A14;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be6f94
	if (!ctx.cr6.eq) goto loc_82BE6F94;
loc_82BE6A38:
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r23,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r23.u32);
	// stw r23,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r23.u32);
	// stw r23,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r23.u32);
	// lwz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// addi r11,r11,-30
	ctx.r11.s64 = ctx.r11.s64 + -30;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// bgt cr6,0x82be6d78
	if (ctx.cr6.gt) goto loc_82BE6D78;
	// lis r12,-32066
	ctx.r12.s64 = -2101477376;
	// addi r12,r12,27276
	ctx.r12.s64 = ctx.r12.s64 + 27276;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BE6AA4;
	case 1:
		goto loc_82BE6D78;
	case 2:
		goto loc_82BE6B84;
	case 3:
		goto loc_82BE6C28;
	case 4:
		goto loc_82BE6D78;
	case 5:
		goto loc_82BE6CE8;
	default:
		__builtin_unreachable();
	}
	// lwz r21,27300(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27300);
	// lwz r21,28024(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28024);
	// lwz r21,27524(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27524);
	// lwz r21,27688(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27688);
	// lwz r21,28024(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28024);
	// lwz r21,27880(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27880);
loc_82BE6AA4:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r10,96(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6b4c
	if (ctx.cr6.eq) goto loc_82BE6B4C;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82BE6AC8:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// bne cr6,0x82be6b1c
	if (!ctx.cr6.eq) goto loc_82BE6B1C;
	// lfs f0,108(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82be6b0c
	if (!ctx.cr6.eq) goto loc_82BE6B0C;
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82be6b0c
	if (!ctx.cr6.eq) goto loc_82BE6B0C;
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,116(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82be6b10
	if (ctx.cr6.eq) goto loc_82BE6B10;
loc_82BE6B0C:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82BE6B10:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82be6b40
	if (!ctx.cr6.eq) goto loc_82BE6B40;
loc_82BE6B1C:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,96(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82be6ac8
	if (ctx.cr6.lt) goto loc_82BE6AC8;
	// b 0x82be6b4c
	goto loc_82BE6B4C;
loc_82BE6B40:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
loc_82BE6B4C:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be6d78
	if (!ctx.cr6.eq) goto loc_82BE6D78;
	// addi r30,r26,108
	ctx.r30.s64 = ctx.r26.s64 + 108;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c12960
	ctx.lr = 0x82BE6B74;
	sub_82C12960(ctx, base);
	// lfs f29,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// b 0x82be6d78
	goto loc_82BE6D78;
loc_82BE6B84:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r9,96(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6bf8
	if (ctx.cr6.eq) goto loc_82BE6BF8;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82BE6BA8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// bne cr6,0x82be6bc8
	if (!ctx.cr6.eq) goto loc_82BE6BC8;
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82be6bec
	if (ctx.cr6.eq) goto loc_82BE6BEC;
loc_82BE6BC8:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,96(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82be6ba8
	if (ctx.cr6.lt) goto loc_82BE6BA8;
	// b 0x82be6bf8
	goto loc_82BE6BF8;
loc_82BE6BEC:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
loc_82BE6BF8:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be6d78
	if (!ctx.cr6.eq) goto loc_82BE6D78;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lfs f1,108(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82c132b0
	ctx.lr = 0x82BE6C20;
	sub_82C132B0(ctx, base);
	// lfs f30,108(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82be6d78
	goto loc_82BE6D78;
loc_82BE6C28:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r9,96(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6cac
	if (ctx.cr6.eq) goto loc_82BE6CAC;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82BE6C4C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// bne cr6,0x82be6c7c
	if (!ctx.cr6.eq) goto loc_82BE6C7C;
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82be6c7c
	if (!ctx.cr6.eq) goto loc_82BE6C7C;
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82be6ca0
	if (ctx.cr6.eq) goto loc_82BE6CA0;
loc_82BE6C7C:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,96(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82be6c4c
	if (ctx.cr6.lt) goto loc_82BE6C4C;
	// b 0x82be6cac
	goto loc_82BE6CAC;
loc_82BE6CA0:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
loc_82BE6CAC:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be6d78
	if (!ctx.cr6.eq) goto loc_82BE6D78;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lfs f2,112(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r31,80
	ctx.r8.s64 = ctx.r31.s64 + 80;
	// lfs f1,108(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82c13318
	ctx.lr = 0x82BE6CDC;
	sub_82C13318(ctx, base);
	// lfs f30,108(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	ctx.f30.f64 = double(temp.f32);
	// lfs f26,112(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	ctx.f26.f64 = double(temp.f32);
	// b 0x82be6d78
	goto loc_82BE6D78;
loc_82BE6CE8:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r25,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r25.u32);
	// stw r23,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r23.u32);
	// lwz r4,108(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	// bl 0x82c13a60
	ctx.lr = 0x82BE6CFC;
	sub_82C13A60(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82be6d78
	if (ctx.cr6.eq) goto loc_82BE6D78;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulhw r11,r11,r21
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82be6d78
	if (ctx.cr0.eq) goto loc_82BE6D78;
	// lwz r11,68(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6d44
	if (ctx.cr6.eq) goto loc_82BE6D44;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
	// b 0x82be6d78
	goto loc_82BE6D78;
loc_82BE6D44:
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulhw r11,r11,r21
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82c13030
	ctx.lr = 0x82BE6D78;
	sub_82C13030(ctx, base);
loc_82BE6D78:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be6f64
	if (!ctx.cr6.eq) goto loc_82BE6F64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be6f64
	if (ctx.cr6.eq) goto loc_82BE6F64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r16,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r16.u32);
	// stw r16,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r16.u32);
	// stw r23,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r23.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// bl 0x8247d8e0
	ctx.lr = 0x82BE6DC0;
	sub_8247D8E0(ctx, base);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be6dd8
	if (ctx.cr6.eq) goto loc_82BE6DD8;
	// bl 0x82bfbe38
	ctx.lr = 0x82BE6DD0;
	sub_82BFBE38(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82be6ddc
	goto loc_82BE6DDC;
loc_82BE6DD8:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82BE6DDC:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82d5ea60
	ctx.lr = 0x82BE6DEC;
	sub_82D5EA60(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82be8370
	ctx.lr = 0x82BE6DF4;
	sub_82BE8370(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// stw r11,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
	// stw r25,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r25.u32);
	// stw r23,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r23.u32);
	// bl 0x82bf3cd0
	ctx.lr = 0x82BE6E18;
	sub_82BF3CD0(ctx, base);
	// addi r30,r25,96
	ctx.r30.s64 = ctx.r25.s64 + 96;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82be6ed4
	if (ctx.cr6.gt) goto loc_82BE6ED4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82be6e50
	if (!ctx.cr6.eq) goto loc_82BE6E50;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// b 0x82be6e58
	goto loc_82BE6E58;
loc_82BE6E50:
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_82BE6E58:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82be6ed4
	if (!ctx.cr6.lt) goto loc_82BE6ED4;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d5e610
	ctx.lr = 0x82BE6E6C;
	sub_82D5E610(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82be6e9c
	if (ctx.cr6.eq) goto loc_82BE6E9C;
loc_82BE6E84:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x82be6e84
	if (!ctx.cr6.eq) goto loc_82BE6E84;
loc_82BE6E9C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be6eac
	if (ctx.cr6.eq) goto loc_82BE6EAC;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BE6EAC;
	sub_82D5E5B0(ctx, base);
loc_82BE6EAC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r27,r29
	ctx.r10.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82BE6ED4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// stw r11,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r11.u32);
	// lwz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// addi r11,r11,-30
	ctx.r11.s64 = ctx.r11.s64 + -30;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82be6f60
	if (ctx.cr6.gt) goto loc_82BE6F60;
	// lis r12,-32066
	ctx.r12.s64 = -2101477376;
	// addi r12,r12,28440
	ctx.r12.s64 = ctx.r12.s64 + 28440;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BE6F30;
	case 1:
		goto loc_82BE6F60;
	case 2:
		goto loc_82BE6F40;
	case 3:
		goto loc_82BE6F48;
	case 4:
		goto loc_82BE6F60;
	case 5:
		goto loc_82BE6F54;
	default:
		__builtin_unreachable();
	}
	// lwz r21,28464(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28464);
	// lwz r21,28512(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28512);
	// lwz r21,28480(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28480);
	// lwz r21,28488(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28488);
	// lwz r21,28512(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28512);
	// lwz r21,28500(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28500);
loc_82BE6F30:
	// stfs f29,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r28.u32 + 56, temp.u32);
	// stfs f28,60(r28)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r28.u32 + 60, temp.u32);
	// stfs f27,64(r28)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r28.u32 + 64, temp.u32);
	// b 0x82be6f60
	goto loc_82BE6F60;
loc_82BE6F40:
	// stfs f30,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 68, temp.u32);
	// b 0x82be6f60
	goto loc_82BE6F60;
loc_82BE6F48:
	// stfs f30,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 68, temp.u32);
	// stfs f26,72(r28)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r28.u32 + 72, temp.u32);
	// b 0x82be6f60
	goto loc_82BE6F60;
loc_82BE6F54:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82be6f60
	if (ctx.cr6.eq) goto loc_82BE6F60;
	// stw r28,68(r24)
	PPC_STORE_U32(ctx.r24.u32 + 68, ctx.r28.u32);
loc_82BE6F60:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82BE6F64:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be6f74
	if (ctx.cr6.eq) goto loc_82BE6F74;
	// bl 0x8247d948
	ctx.lr = 0x82BE6F74;
	sub_8247D948(ctx, base);
loc_82BE6F74:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be6f84
	if (ctx.cr6.eq) goto loc_82BE6F84;
	// bl 0x8247d948
	ctx.lr = 0x82BE6F84;
	sub_8247D948(ctx, base);
loc_82BE6F84:
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r23,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r23.u32);
	// stw r23,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r23.u32);
	// stw r23,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r23.u32);
loc_82BE6F94:
	// lwz r11,220(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 220);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// lwz r10,216(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 216);
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82be69fc
	if (ctx.cr6.lt) goto loc_82BE69FC;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
loc_82BE6FBC:
	// lwz r11,232(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 232);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,228(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 228);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82be69c8
	if (ctx.cr6.lt) goto loc_82BE69C8;
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
loc_82BE6FEC:
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r9,128(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82be6998
	if (ctx.cr6.lt) goto loc_82BE6998;
loc_82BE7014:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r1,r31,880
	ctx.r1.s64 = ctx.r31.s64 + 880;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82d5c5b8
	ctx.lr = 0x82BE7024;
	__restfpr_25(ctx, base);
	// b 0x82d5c4e0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE7028"))) PPC_WEAK_FUNC(sub_82BE7028);
PPC_FUNC_IMPL(__imp__sub_82BE7028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-880
	ctx.r31.s64 = ctx.r12.s64 + -880;
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
	// bl 0x82be8310
	ctx.lr = 0x82BE7040;
	sub_82BE8310(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7050"))) PPC_WEAK_FUNC(sub_82BE7050);
PPC_FUNC_IMPL(__imp__sub_82BE7050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-880
	ctx.r31.s64 = ctx.r12.s64 + -880;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x8247d948
	ctx.lr = 0x82BE7068;
	sub_8247D948(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7080"))) PPC_WEAK_FUNC(sub_82BE7080);
PPC_FUNC_IMPL(__imp__sub_82BE7080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c490
	ctx.lr = 0x82BE7088;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82d5c564
	ctx.lr = 0x82BE7090;
	__savefpr_23(ctx, base);
	// addi r31,r1,-1520
	ctx.r31.s64 = ctx.r1.s64 + -1520;
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31980
	ctx.r25.s64 = -2095841280;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r5.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,31444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r11,r11,27544
	ctx.r11.s64 = ctx.r11.s64 + 27544;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bne cr6,0x82be70d8
	if (!ctx.cr6.eq) goto loc_82BE70D8;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82be4ab0
	ctx.lr = 0x82BE70D4;
	sub_82BE4AB0(ctx, base);
	// stw r3,31444(r25)
	PPC_STORE_U32(ctx.r25.u32 + 31444, ctx.r3.u32);
loc_82BE70D8:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE70EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be7ad4
	if (ctx.cr6.eq) goto loc_82BE7AD4;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE710C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82be7ad4
	if (ctx.cr6.eq) goto loc_82BE7AD4;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE712C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82be7ad4
	if (ctx.cr6.eq) goto loc_82BE7AD4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r19,r11,-19736
	ctx.r19.s64 = ctx.r11.s64 + -19736;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// addi r18,r11,-19760
	ctx.r18.s64 = ctx.r11.s64 + -19760;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r17,r11,15636
	ctx.r17.s64 = ctx.r11.s64 + 15636;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r11,14280
	ctx.r11.s64 = ctx.r11.s64 + 14280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfs f29,21360(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21360);
	ctx.f29.f64 = double(temp.f32);
	// li r23,8
	ctx.r23.s64 = 8;
	// li r21,1
	ctx.r21.s64 = 1;
	// lfs f30,21344(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21344);
	ctx.f30.f64 = double(temp.f32);
	// li r14,5
	ctx.r14.s64 = 5;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f31,21348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
	ctx.f31.f64 = double(temp.f32);
	// addi r16,r11,15624
	ctx.r16.s64 = ctx.r11.s64 + 15624;
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// ori r15,r11,43691
	ctx.r15.u64 = ctx.r11.u64 | 43691;
loc_82BE719C:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE71B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82be7abc
	if (!ctx.cr6.eq) goto loc_82BE7ABC;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f31.f64;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// li r24,93
	ctx.r24.s64 = 93;
	// fmr f24,f31
	ctx.f24.f64 = ctx.f31.f64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE7200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82be784c
	if (ctx.cr6.gt) goto loc_82BE784C;
	// lis r12,-32066
	ctx.r12.s64 = -2101477376;
	// addi r12,r12,29220
	ctx.r12.s64 = ctx.r12.s64 + 29220;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BE73C8;
	case 1:
		goto loc_82BE7238;
	case 2:
		goto loc_82BE7514;
	case 3:
		goto loc_82BE784C;
	case 4:
		goto loc_82BE7688;
	default:
		__builtin_unreachable();
	}
	// lwz r21,29640(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29640);
	// lwz r21,29240(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29240);
	// lwz r21,29972(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29972);
	// lwz r21,30796(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 30796);
	// lwz r21,30344(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 30344);
loc_82BE7238:
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f31,156(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// li r24,30
	ctx.r24.s64 = 30;
	// stfs f31,160(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r16,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r16.u32);
	// stfs f30,168(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stw r23,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r23.u32);
	// stfs f31,172(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stfs f31,176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// sth r30,204(r31)
	PPC_STORE_U16(ctx.r31.u32 + 204, ctx.r30.u16);
	// stfs f31,180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// sth r30,206(r31)
	PPC_STORE_U16(ctx.r31.u32 + 206, ctx.r30.u16);
	// stfs f30,184(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stfs f31,196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stfs f31,192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stfs f31,188(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stfs f29,220(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stfs f30,212(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stfs f29,216(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stfs f31,256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f31,252(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f31,248(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE72D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,31444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31444);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82be738c
	if (ctx.cr6.eq) goto loc_82BE738C;
	// lfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lfs f13,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
loc_82BE7304:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// bne cr6,0x82be734c
	if (!ctx.cr6.eq) goto loc_82BE734C;
	// lfs f11,56(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x82be733c
	if (!ctx.cr6.eq) goto loc_82BE733C;
	// lfs f11,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bne cr6,0x82be733c
	if (!ctx.cr6.eq) goto loc_82BE733C;
	// lfs f11,64(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x82be7340
	if (ctx.cr6.eq) goto loc_82BE7340;
loc_82BE733C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BE7340:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82be7370
	if (!ctx.cr6.eq) goto loc_82BE7370;
loc_82BE734C:
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82be7304
	if (ctx.cr6.lt) goto loc_82BE7304;
	// b 0x82be738c
	goto loc_82BE738C;
loc_82BE7370:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE7388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_82BE738C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be73bc
	if (!ctx.cr6.eq) goto loc_82BE73BC;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// lwz r7,1556(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// bl 0x82c12960
	ctx.lr = 0x82BE73B0;
	sub_82C12960(ctx, base);
	// lfs f26,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f24.f64 = double(temp.f32);
loc_82BE73BC:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// b 0x82be784c
	goto loc_82BE784C;
loc_82BE73C8:
	// stfs f30,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// li r24,32
	ctx.r24.s64 = 32;
	// stfs f31,476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stfs f31,480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stw r21,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r21.u32);
	// stfs f31,484(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stw r17,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r17.u32);
	// stfs f30,488(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stw r23,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r23.u32);
	// stfs f31,492(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// sth r30,524(r31)
	PPC_STORE_U16(ctx.r31.u32 + 524, ctx.r30.u16);
	// stfs f31,496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// sth r30,526(r31)
	PPC_STORE_U16(ctx.r31.u32 + 526, ctx.r30.u16);
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stfs f30,504(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stfs f31,516(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stfs f31,512(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stfs f31,508(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// stfs f29,540(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stfs f30,532(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stfs f29,536(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stfs f30,568(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,464
	ctx.r4.s64 = ctx.r31.s64 + 464;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE7458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,31444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31444);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be74dc
	if (ctx.cr6.eq) goto loc_82BE74DC;
	// lfs f0,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_82BE7480:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// bne cr6,0x82be749c
	if (!ctx.cr6.eq) goto loc_82BE749C;
	// lfs f13,68(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82be74c0
	if (ctx.cr6.eq) goto loc_82BE74C0;
loc_82BE749C:
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82be7480
	if (ctx.cr6.lt) goto loc_82BE7480;
	// b 0x82be74dc
	goto loc_82BE74DC;
loc_82BE74C0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE74D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_82BE74DC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be7508
	if (!ctx.cr6.eq) goto loc_82BE7508;
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// lwz r8,1556(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f1.f64 = double(temp.f32);
	// li r4,16
	ctx.r4.s64 = 16;
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// bl 0x82c132b0
	ctx.lr = 0x82BE7504;
	sub_82C132B0(ctx, base);
	// lfs f28,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f28.f64 = double(temp.f32);
loc_82BE7508:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// b 0x82be784c
	goto loc_82BE784C;
loc_82BE7514:
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f30,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f31,284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// li r24,33
	ctx.r24.s64 = 33;
	// stfs f31,288(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stfs f31,292(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stw r18,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r18.u32);
	// stfs f30,296(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stw r23,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r23.u32);
	// stfs f31,300(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stfs f31,304(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// sth r30,332(r31)
	PPC_STORE_U16(ctx.r31.u32 + 332, ctx.r30.u16);
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// sth r30,334(r31)
	PPC_STORE_U16(ctx.r31.u32 + 334, ctx.r30.u16);
	// stfs f30,312(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stfs f31,324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stfs f31,320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stfs f31,316(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stfs f29,348(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stfs f30,340(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stfs f29,344(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stfs f30,376(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stfs f30,380(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE75B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,31444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31444);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be7644
	if (ctx.cr6.eq) goto loc_82BE7644;
	// lfs f0,380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lfs f13,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f13.f64 = double(temp.f32);
loc_82BE75DC:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// bne cr6,0x82be7604
	if (!ctx.cr6.eq) goto loc_82BE7604;
	// lfs f12,68(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82be7604
	if (!ctx.cr6.eq) goto loc_82BE7604;
	// lfs f12,72(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82be7628
	if (ctx.cr6.eq) goto loc_82BE7628;
loc_82BE7604:
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82be75dc
	if (ctx.cr6.lt) goto loc_82BE75DC;
	// b 0x82be7644
	goto loc_82BE7644;
loc_82BE7628:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE7640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_82BE7644:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be767c
	if (!ctx.cr6.eq) goto loc_82BE767C;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// lwz r10,1556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f2.f64 = double(temp.f32);
	// li r6,16
	ctx.r6.s64 = 16;
	// lfs f1,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// bl 0x82c13318
	ctx.lr = 0x82BE7674;
	sub_82C13318(ctx, base);
	// lfs f28,376(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f27.f64 = double(temp.f32);
loc_82BE767C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// b 0x82be784c
	goto loc_82BE784C;
loc_82BE7688:
	// stfs f30,584(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// li r24,35
	ctx.r24.s64 = 35;
	// stfs f31,588(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stw r14,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r14.u32);
	// stfs f31,592(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stw r19,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r19.u32);
	// stfs f31,596(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stw r23,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r23.u32);
	// stfs f30,600(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// sth r30,636(r31)
	PPC_STORE_U16(ctx.r31.u32 + 636, ctx.r30.u16);
	// stfs f31,604(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// sth r30,638(r31)
	PPC_STORE_U16(ctx.r31.u32 + 638, ctx.r30.u16);
	// stfs f31,608(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// stfs f31,612(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// stfs f30,616(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
	// stfs f31,628(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// stfs f31,624(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// stfs f31,620(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// stw r30,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// stfs f29,652(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 652, temp.u32);
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// stfs f30,644(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// stfs f29,648(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,576
	ctx.r4.s64 = ctx.r31.s64 + 576;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE7718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,31444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31444);
	// lwz r7,680(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82be77a4
	if (ctx.cr6.eq) goto loc_82BE77A4;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_82BE7744:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,52(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r6,35
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 35, ctx.xer);
	// bne cr6,0x82be7760
	if (!ctx.cr6.eq) goto loc_82BE7760;
	// lwz r6,76(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82be7784
	if (ctx.cr6.eq) goto loc_82BE7784;
loc_82BE7760:
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82be7744
	if (ctx.cr6.lt) goto loc_82BE7744;
	// b 0x82be77a4
	goto loc_82BE77A4;
loc_82BE7784:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE779C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,31444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31444);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_82BE77A4:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82be7844
	if (!ctx.cr6.eq) goto loc_82BE7844;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// bl 0x82bfb668
	ctx.lr = 0x82BE77C0;
	sub_82BFB668(ctx, base);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE77F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r31,136
	ctx.r5.s64 = ctx.r31.s64 + 136;
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82bf3b40
	ctx.lr = 0x82BE7804;
	sub_82BF3B40(ctx, base);
	// lwz r4,712(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mulhw r11,r11,r15
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be783c
	if (ctx.cr6.eq) goto loc_82BE783C;
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// lwz r8,1556(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x82c13030
	ctx.lr = 0x82BE783C;
	sub_82C13030(ctx, base);
loc_82BE783C:
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82bfb6b0
	ctx.lr = 0x82BE7844;
	sub_82BFB6B0(ctx, base);
loc_82BE7844:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
loc_82BE784C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be7a84
	if (!ctx.cr6.eq) goto loc_82BE7A84;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be7a84
	if (ctx.cr6.eq) goto loc_82BE7A84;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// bl 0x8247d8e0
	ctx.lr = 0x82BE7898;
	sub_8247D8E0(ctx, base);
	// stw r3,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be78b0
	if (ctx.cr6.eq) goto loc_82BE78B0;
	// bl 0x82bfbe38
	ctx.lr = 0x82BE78A8;
	sub_82BFBE38(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82be78b4
	goto loc_82BE78B4;
loc_82BE78B0:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82BE78B4:
	// clrlwi r5,r26,24
	ctx.r5.u64 = ctx.r26.u32 & 0xFF;
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d5ea60
	ctx.lr = 0x82BE78C4;
	sub_82D5EA60(ctx, base);
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// bl 0x82be8370
	ctx.lr = 0x82BE78CC;
	sub_82BE8370(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r4,r31,432
	ctx.r4.s64 = ctx.r31.s64 + 432;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// lwz r11,31444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31444);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82bf3cd0
	ctx.lr = 0x82BE78F0;
	sub_82BF3CD0(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE7904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE7914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,432
	ctx.r4.s64 = ctx.r31.s64 + 432;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE7928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r4,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r4.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE7944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,31444(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31444);
	// addi r29,r11,96
	ctx.r29.s64 = ctx.r11.s64 + 96;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82be7a04
	if (ctx.cr6.gt) goto loc_82BE7A04;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82be7980
	if (!ctx.cr6.eq) goto loc_82BE7980;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82be7988
	goto loc_82BE7988;
loc_82BE7980:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_82BE7988:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82be7a04
	if (!ctx.cr6.lt) goto loc_82BE7A04;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d5e610
	ctx.lr = 0x82BE799C;
	sub_82D5E610(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82be79cc
	if (ctx.cr6.eq) goto loc_82BE79CC;
loc_82BE79B4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x82be79b4
	if (!ctx.cr6.eq) goto loc_82BE79B4;
loc_82BE79CC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be79dc
	if (ctx.cr6.eq) goto loc_82BE79DC;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BE79DC;
	sub_82D5E5B0(ctx, base);
loc_82BE79DC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_82BE7A04:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r24,-30
	ctx.r11.s64 = ctx.r24.s64 + -30;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r24,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r24.u32);
	// bgt cr6,0x82be7a80
	if (ctx.cr6.gt) goto loc_82BE7A80;
	// lis r12,-32066
	ctx.r12.s64 = -2101477376;
	// addi r12,r12,31296
	ctx.r12.s64 = ctx.r12.s64 + 31296;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BE7A58;
	case 1:
		goto loc_82BE7A80;
	case 2:
		goto loc_82BE7A68;
	case 3:
		goto loc_82BE7A70;
	case 4:
		goto loc_82BE7A80;
	case 5:
		goto loc_82BE7A7C;
	default:
		__builtin_unreachable();
	}
	// lwz r21,31320(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31320);
	// lwz r21,31360(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31360);
	// lwz r21,31336(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31336);
	// lwz r21,31344(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31344);
	// lwz r21,31360(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31360);
	// lwz r21,31356(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31356);
loc_82BE7A58:
	// stfs f26,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r28.u32 + 56, temp.u32);
	// stfs f25,60(r28)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r28.u32 + 60, temp.u32);
	// stfs f24,64(r28)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r28.u32 + 64, temp.u32);
	// b 0x82be7a80
	goto loc_82BE7A80;
loc_82BE7A68:
	// stfs f28,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r28.u32 + 68, temp.u32);
	// b 0x82be7a80
	goto loc_82BE7A80;
loc_82BE7A70:
	// stfs f28,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r28.u32 + 68, temp.u32);
	// stfs f27,72(r28)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r28.u32 + 72, temp.u32);
	// b 0x82be7a80
	goto loc_82BE7A80;
loc_82BE7A7C:
	// stw r22,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r22.u32);
loc_82BE7A80:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
loc_82BE7A84:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be7a94
	if (ctx.cr6.eq) goto loc_82BE7A94;
	// bl 0x8247d948
	ctx.lr = 0x82BE7A94;
	sub_8247D948(ctx, base);
loc_82BE7A94:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be7aa4
	if (ctx.cr6.eq) goto loc_82BE7AA4;
	// bl 0x8247d948
	ctx.lr = 0x82BE7AA4;
	sub_8247D948(ctx, base);
loc_82BE7AA4:
	// lwz r28,116(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r27,112(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
loc_82BE7ABC:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// bne cr6,0x82be719c
	if (!ctx.cr6.eq) goto loc_82BE719C;
loc_82BE7AD4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r31,1520
	ctx.r1.s64 = ctx.r31.s64 + 1520;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82d5c5b0
	ctx.lr = 0x82BE7AE4;
	__restfpr_23(ctx, base);
	// b 0x82d5c4e0
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE7AE8"))) PPC_WEAK_FUNC(sub_82BE7AE8);
PPC_FUNC_IMPL(__imp__sub_82BE7AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1520
	ctx.r31.s64 = ctx.r12.s64 + -1520;
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
	// bl 0x82be8310
	ctx.lr = 0x82BE7B00;
	sub_82BE8310(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7B10"))) PPC_WEAK_FUNC(sub_82BE7B10);
PPC_FUNC_IMPL(__imp__sub_82BE7B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1520
	ctx.r31.s64 = ctx.r12.s64 + -1520;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82706bf0
	ctx.lr = 0x82BE7B28;
	sub_82706BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7B38"))) PPC_WEAK_FUNC(sub_82BE7B38);
PPC_FUNC_IMPL(__imp__sub_82BE7B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1520
	ctx.r31.s64 = ctx.r12.s64 + -1520;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// bl 0x82706bf0
	ctx.lr = 0x82BE7B50;
	sub_82706BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7B60"))) PPC_WEAK_FUNC(sub_82BE7B60);
PPC_FUNC_IMPL(__imp__sub_82BE7B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1520
	ctx.r31.s64 = ctx.r12.s64 + -1520;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x82706bf0
	ctx.lr = 0x82BE7B78;
	sub_82706BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7B88"))) PPC_WEAK_FUNC(sub_82BE7B88);
PPC_FUNC_IMPL(__imp__sub_82BE7B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1520
	ctx.r31.s64 = ctx.r12.s64 + -1520;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// bl 0x82706bf0
	ctx.lr = 0x82BE7BA0;
	sub_82706BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7BB0"))) PPC_WEAK_FUNC(sub_82BE7BB0);
PPC_FUNC_IMPL(__imp__sub_82BE7BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1520
	ctx.r31.s64 = ctx.r12.s64 + -1520;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82bfb6b0
	ctx.lr = 0x82BE7BC8;
	sub_82BFB6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7BD8"))) PPC_WEAK_FUNC(sub_82BE7BD8);
PPC_FUNC_IMPL(__imp__sub_82BE7BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1520
	ctx.r31.s64 = ctx.r12.s64 + -1520;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// bl 0x8247d948
	ctx.lr = 0x82BE7BF0;
	sub_8247D948(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7C08"))) PPC_WEAK_FUNC(sub_82BE7C08);
PPC_FUNC_IMPL(__imp__sub_82BE7C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82BE7C10;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-896
	ctx.r31.s64 = ctx.r1.s64 + -896;
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r27,r11,27432
	ctx.r27.s64 = ctx.r11.s64 + 27432;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82bebde8
	ctx.lr = 0x82BE7C3C;
	sub_82BEBDE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be7d38
	if (ctx.cr6.eq) goto loc_82BE7D38;
	// bl 0x82beb9f0
	ctx.lr = 0x82BE7C48;
	sub_82BEB9F0(ctx, base);
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x82be7c64
	if (!ctx.cr6.eq) goto loc_82BE7C64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c1faa0
	ctx.lr = 0x82BE7C60;
	sub_82C1FAA0(ctx, base);
	// b 0x82be7d48
	goto loc_82BE7D48;
loc_82BE7C64:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// addi r6,r27,-36
	ctx.r6.s64 = ctx.r27.s64 + -36;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82c191f0
	ctx.lr = 0x82BE7C88;
	sub_82C191F0(ctx, base);
	// lbz r11,254(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 254);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be7d2c
	if (ctx.cr6.eq) goto loc_82BE7D2C;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x8247d8e0
	ctx.lr = 0x82BE7C9C;
	sub_8247D8E0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be7cb4
	if (ctx.cr6.eq) goto loc_82BE7CB4;
	// bl 0x82c00538
	ctx.lr = 0x82BE7CAC;
	sub_82C00538(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82be7cb8
	goto loc_82BE7CB8;
loc_82BE7CB4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BE7CB8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// bl 0x82c06208
	ctx.lr = 0x82BE7CCC;
	sub_82C06208(ctx, base);
	// lbz r11,254(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 254);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be7d04
	if (!ctx.cr6.eq) goto loc_82BE7D04;
	// addi r3,r27,-32
	ctx.r3.s64 = ctx.r27.s64 + -32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82be8640
	ctx.lr = 0x82BE7CE4;
	sub_82BE8640(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be7cfc
	if (ctx.cr6.eq) goto loc_82BE7CFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c05778
	ctx.lr = 0x82BE7CF4;
	sub_82C05778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8247d948
	ctx.lr = 0x82BE7CFC;
	sub_8247D948(ctx, base);
loc_82BE7CFC:
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82be7d2c
	goto loc_82BE7D2C;
loc_82BE7D04:
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lbz r11,31441(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31441);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be7d2c
	if (ctx.cr6.eq) goto loc_82BE7D2C;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9724
	ctx.r11.s64 = ctx.r11.s64 + 9724;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be6928
	ctx.lr = 0x82BE7D2C;
	sub_82BE6928(ctx, base);
loc_82BE7D2C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82c197b0
	ctx.lr = 0x82BE7D34;
	sub_82C197B0(ctx, base);
	// b 0x82be7d44
	goto loc_82BE7D44;
loc_82BE7D38:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82be8640
	ctx.lr = 0x82BE7D44;
	sub_82BE8640(ctx, base);
loc_82BE7D44:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82BE7D48:
	// addi r1,r31,896
	ctx.r1.s64 = ctx.r31.s64 + 896;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE7D50"))) PPC_WEAK_FUNC(sub_82BE7D50);
PPC_FUNC_IMPL(__imp__sub_82BE7D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-896
	ctx.r31.s64 = ctx.r12.s64 + -896;
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
	// bl 0x82c197b0
	ctx.lr = 0x82BE7D68;
	sub_82C197B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7D78"))) PPC_WEAK_FUNC(sub_82BE7D78);
PPC_FUNC_IMPL(__imp__sub_82BE7D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-896
	ctx.r31.s64 = ctx.r12.s64 + -896;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8247d948
	ctx.lr = 0x82BE7D90;
	sub_8247D948(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7DA8"))) PPC_WEAK_FUNC(sub_82BE7DA8);
PPC_FUNC_IMPL(__imp__sub_82BE7DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82BE7DB0;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-1616
	ctx.r31.s64 = ctx.r1.s64 + -1616;
	// stwu r1,-1616(r1)
	ea = -1616 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be7eec
	if (ctx.cr6.eq) goto loc_82BE7EEC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82be7e34
	if (ctx.cr6.eq) goto loc_82BE7E34;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be7e1c
	if (ctx.cr6.eq) goto loc_82BE7E1C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BE7DF4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82be7df4
	if (!ctx.cr6.eq) goto loc_82BE7DF4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be7e1c
	if (ctx.cr6.eq) goto loc_82BE7E1C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82BE7E1C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be7e34
	if (ctx.cr6.eq) goto loc_82BE7E34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE7E30;
	sub_82BE8370(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82BE7E34:
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// li r10,263
	ctx.r10.s64 = 263;
	// li r9,100
	ctx.r9.s64 = 100;
	// lbz r11,31441(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31441);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82be7e6c
	if (ctx.cr6.eq) goto loc_82BE7E6C;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9724
	ctx.r11.s64 = ctx.r11.s64 + 9724;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be6928
	ctx.lr = 0x82BE7E6C;
	sub_82BE6928(ctx, base);
loc_82BE7E6C:
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// lis r10,-31980
	ctx.r10.s64 = -2095841280;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r27,9732(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9732, ctx.r27.u8);
	// stb r26,31440(r10)
	PPC_STORE_U8(ctx.r10.u32 + 31440, ctx.r26.u8);
	// bne cr6,0x82be7e94
	if (!ctx.cr6.eq) goto loc_82BE7E94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be4810
	ctx.lr = 0x82BE7E90;
	sub_82BE4810(ctx, base);
	// b 0x82be7ef0
	goto loc_82BE7EF0;
loc_82BE7E94:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bne cr6,0x82be7ef8
	if (!ctx.cr6.eq) goto loc_82BE7EF8;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,27492
	ctx.r10.s64 = ctx.r10.s64 + 27492;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,9732(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9732, ctx.r10.u8);
	// bl 0x82c191f0
	ctx.lr = 0x82BE7EC4;
	sub_82C191F0(ctx, base);
	// lbz r11,238(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 238);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be7ee4
	if (ctx.cr6.eq) goto loc_82BE7EE4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c05df0
	ctx.lr = 0x82BE7EE0;
	sub_82C05DF0(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
loc_82BE7EE4:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c197b0
	ctx.lr = 0x82BE7EEC;
	sub_82C197B0(ctx, base);
loc_82BE7EEC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82BE7EF0:
	// addi r1,r31,1616
	ctx.r1.s64 = ctx.r31.s64 + 1616;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
loc_82BE7EF8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,27492
	ctx.r6.s64 = ctx.r11.s64 + 27492;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82c191f0
	ctx.lr = 0x82BE7F0C;
	sub_82C191F0(ctx, base);
	// lbz r11,974(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 974);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be7f28
	if (ctx.cr6.eq) goto loc_82BE7F28;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c05df0
	ctx.lr = 0x82BE7F28;
	sub_82C05DF0(ctx, base);
loc_82BE7F28:
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82c197b0
	ctx.lr = 0x82BE7F34;
	sub_82C197B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82be7ef0
	goto loc_82BE7EF0;
}

__attribute__((alias("__imp__sub_82BE7F3C"))) PPC_WEAK_FUNC(sub_82BE7F3C);
PPC_FUNC_IMPL(__imp__sub_82BE7F3C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1616
	ctx.r31.s64 = ctx.r12.s64 + -1616;
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
	// bl 0x82c197b0
	ctx.lr = 0x82BE7F54;
	sub_82C197B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7F64"))) PPC_WEAK_FUNC(sub_82BE7F64);
PPC_FUNC_IMPL(__imp__sub_82BE7F64) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1616
	ctx.r31.s64 = ctx.r12.s64 + -1616;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82c197b0
	ctx.lr = 0x82BE7F7C;
	sub_82C197B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE7F90"))) PPC_WEAK_FUNC(sub_82BE7F90);
PPC_FUNC_IMPL(__imp__sub_82BE7F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BE7F98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82be4ab0
	ctx.lr = 0x82BE7FAC;
	sub_82BE4AB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82be59b0
	ctx.lr = 0x82BE7FB8;
	sub_82BE59B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE7FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82be8014
	if (ctx.cr6.eq) goto loc_82BE8014;
loc_82BE7FDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE7FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be6870
	ctx.lr = 0x82BE8008;
	sub_82BE6870(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82be7fdc
	if (ctx.cr6.lt) goto loc_82BE7FDC;
loc_82BE8014:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE8020"))) PPC_WEAK_FUNC(sub_82BE8020);
PPC_FUNC_IMPL(__imp__sub_82BE8020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BE8028;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82be4ab0
	ctx.lr = 0x82BE8040;
	sub_82BE4AB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82be8068
	if (ctx.cr6.eq) goto loc_82BE8068;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be8068
	if (ctx.cr6.eq) goto loc_82BE8068;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82be6870
	ctx.lr = 0x82BE8064;
	sub_82BE6870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BE8068:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE8078"))) PPC_WEAK_FUNC(sub_82BE8078);
PPC_FUNC_IMPL(__imp__sub_82BE8078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x82BE8080;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-1632
	ctx.r31.s64 = ctx.r1.s64 + -1632;
	// stwu r1,-1632(r1)
	ea = -1632 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82be8238
	if (ctx.cr6.eq) goto loc_82BE8238;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82be80c8
	if (ctx.cr6.eq) goto loc_82BE80C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE80C4;
	sub_82BE8370(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_82BE80C8:
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// li r10,263
	ctx.r10.s64 = 263;
	// li r9,100
	ctx.r9.s64 = 100;
	// lbz r11,31441(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31441);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82be8100
	if (ctx.cr6.eq) goto loc_82BE8100;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,9724
	ctx.r11.s64 = ctx.r11.s64 + 9724;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be6928
	ctx.lr = 0x82BE8100;
	sub_82BE6928(ctx, base);
loc_82BE8100:
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// lis r10,-31980
	ctx.r10.s64 = -2095841280;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// stb r25,9732(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9732, ctx.r25.u8);
	// stb r24,31440(r10)
	PPC_STORE_U8(ctx.r10.u32 + 31440, ctx.r24.u8);
	// bne cr6,0x82be8170
	if (!ctx.cr6.eq) goto loc_82BE8170;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r11,r11,27512
	ctx.r11.s64 = ctx.r11.s64 + 27512;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bebde8
	ctx.lr = 0x82BE8134;
	sub_82BEBDE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82be8238
	if (ctx.cr6.eq) goto loc_82BE8238;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82be88a0
	ctx.lr = 0x82BE8150;
	sub_82BE88A0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bebdb0
	ctx.lr = 0x82BE815C;
	sub_82BEBDB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82beb9f0
	ctx.lr = 0x82BE8168;
	sub_82BEB9F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82be823c
	goto loc_82BE823C;
loc_82BE8170:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x82be81e4
	if (!ctx.cr6.eq) goto loc_82BE81E4;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,27512
	ctx.r10.s64 = ctx.r10.s64 + 27512;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r6,r10,-8
	ctx.r6.s64 = ctx.r10.s64 + -8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,9732(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9732, ctx.r10.u8);
	// bl 0x82c191f0
	ctx.lr = 0x82BE81A4;
	sub_82C191F0(ctx, base);
	// lbz r11,238(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 238);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be81dc
	if (ctx.cr6.eq) goto loc_82BE81DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c05df0
	ctx.lr = 0x82BE81C0;
	sub_82C05DF0(ctx, base);
	// lbz r11,238(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 238);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be81dc
	if (ctx.cr6.eq) goto loc_82BE81DC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82c19850
	ctx.lr = 0x82BE81D8;
	sub_82C19850(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82BE81DC:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x82be8234
	goto loc_82BE8234;
loc_82BE81E4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,27512
	ctx.r6.s64 = ctx.r11.s64 + 27512;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82c191f0
	ctx.lr = 0x82BE81F8;
	sub_82C191F0(ctx, base);
	// lbz r11,974(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 974);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be8230
	if (ctx.cr6.eq) goto loc_82BE8230;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c05df0
	ctx.lr = 0x82BE8214;
	sub_82C05DF0(ctx, base);
	// lbz r11,974(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 974);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be8230
	if (ctx.cr6.eq) goto loc_82BE8230;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82c19850
	ctx.lr = 0x82BE822C;
	sub_82C19850(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82BE8230:
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
loc_82BE8234:
	// bl 0x82c197b0
	ctx.lr = 0x82BE8238;
	sub_82C197B0(ctx, base);
loc_82BE8238:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82BE823C:
	// addi r1,r31,1632
	ctx.r1.s64 = ctx.r31.s64 + 1632;
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE8244"))) PPC_WEAK_FUNC(sub_82BE8244);
PPC_FUNC_IMPL(__imp__sub_82BE8244) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1632
	ctx.r31.s64 = ctx.r12.s64 + -1632;
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
	// bl 0x82c197b0
	ctx.lr = 0x82BE825C;
	sub_82C197B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE826C"))) PPC_WEAK_FUNC(sub_82BE826C);
PPC_FUNC_IMPL(__imp__sub_82BE826C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1632
	ctx.r31.s64 = ctx.r12.s64 + -1632;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82c197b0
	ctx.lr = 0x82BE8284;
	sub_82C197B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8298"))) PPC_WEAK_FUNC(sub_82BE8298);
PPC_FUNC_IMPL(__imp__sub_82BE8298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BE82A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82be7f90
	ctx.lr = 0x82BE82C0;
	sub_82BE7F90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82be8300
	if (ctx.cr6.eq) goto loc_82BE8300;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82be7da8
	ctx.lr = 0x82BE82E0;
	sub_82BE7DA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05778
	ctx.lr = 0x82BE82EC;
	sub_82C05778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8247d948
	ctx.lr = 0x82BE82F4;
	sub_8247D948(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
loc_82BE8300:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE8310"))) PPC_WEAK_FUNC(sub_82BE8310);
PPC_FUNC_IMPL(__imp__sub_82BE8310) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be8334
	if (ctx.cr6.eq) goto loc_82BE8334;
	// bl 0x8247d948
	ctx.lr = 0x82BE8334;
	sub_8247D948(ctx, base);
loc_82BE8334:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be8344
	if (ctx.cr6.eq) goto loc_82BE8344;
	// bl 0x8247d948
	ctx.lr = 0x82BE8344;
	sub_8247D948(ctx, base);
loc_82BE8344:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BE8370"))) PPC_WEAK_FUNC(sub_82BE8370);
PPC_FUNC_IMPL(__imp__sub_82BE8370) {
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
	// bne cr6,0x82be8398
	if (!ctx.cr6.eq) goto loc_82BE8398;
loc_82BE8390:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82be8474
	goto loc_82BE8474;
loc_82BE8398:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BE83A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82be83a0
	if (!ctx.cr6.eq) goto loc_82BE83A0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82be8390
	if (ctx.cr6.eq) goto loc_82BE8390;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// addi r31,r11,31464
	ctx.r31.s64 = ctx.r11.s64 + 31464;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be841c
	if (ctx.cr6.eq) goto loc_82BE841C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82BE83DC:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BE83E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82be8408
	if (ctx.cr6.eq) goto loc_82BE8408;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82be83e4
	if (ctx.cr6.eq) goto loc_82BE83E4;
loc_82BE8408:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82be848c
	if (ctx.cr6.eq) goto loc_82BE848C;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82be83dc
	if (!ctx.cr6.eq) goto loc_82BE83DC;
loc_82BE841C:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r6,9
	ctx.r3.s64 = ctx.r6.s64 + 9;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8247d8e0
	ctx.lr = 0x82BE843C;
	sub_8247D8E0(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_82BE8460:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82be8460
	if (!ctx.cr6.eq) goto loc_82BE8460;
loc_82BE8474:
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
loc_82BE848C:
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82be8474
	goto loc_82BE8474;
}

__attribute__((alias("__imp__sub_82BE8498"))) PPC_WEAK_FUNC(sub_82BE8498);
PPC_FUNC_IMPL(__imp__sub_82BE8498) {
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
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// addi r31,r11,31464
	ctx.r31.s64 = ctx.r11.s64 + 31464;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be84d4
	if (ctx.cr6.eq) goto loc_82BE84D4;
loc_82BE84C0:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8247d948
	ctx.lr = 0x82BE84C8;
	sub_8247D948(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82be84c0
	if (!ctx.cr6.eq) goto loc_82BE84C0;
loc_82BE84D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BE8500"))) PPC_WEAK_FUNC(sub_82BE8500);
PPC_FUNC_IMPL(__imp__sub_82BE8500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,31468(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31468);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82BE8518:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82BE8520:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82be8544
	if (ctx.cr6.eq) goto loc_82BE8544;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82be8520
	if (ctx.cr6.eq) goto loc_82BE8520;
loc_82BE8544:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82be855c
	if (ctx.cr6.eq) goto loc_82BE855C;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82be8518
	if (!ctx.cr6.eq) goto loc_82BE8518;
	// blr 
	return;
loc_82BE855C:
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8568"))) PPC_WEAK_FUNC(sub_82BE8568);
PPC_FUNC_IMPL(__imp__sub_82BE8568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BE8570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82be8500
	ctx.lr = 0x82BE8580;
	sub_82BE8500(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82be85d0
	if (!ctx.cr6.eq) goto loc_82BE85D0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82be8370
	ctx.lr = 0x82BE8590;
	sub_82BE8370(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,31468
	ctx.r31.s64 = ctx.r11.s64 + 31468;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8247d8e0
	ctx.lr = 0x82BE85BC;
	sub_8247D8E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82BE85D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE85D8"))) PPC_WEAK_FUNC(sub_82BE85D8);
PPC_FUNC_IMPL(__imp__sub_82BE85D8) {
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
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// addi r31,r11,31476
	ctx.r31.s64 = ctx.r11.s64 + 31476;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be8614
	if (ctx.cr6.eq) goto loc_82BE8614;
loc_82BE8600:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8247d948
	ctx.lr = 0x82BE8608;
	sub_8247D948(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82be8600
	if (!ctx.cr6.eq) goto loc_82BE8600;
loc_82BE8614:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BE8640"))) PPC_WEAK_FUNC(sub_82BE8640);
PPC_FUNC_IMPL(__imp__sub_82BE8640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// stwu r1,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31980
	ctx.r31.s64 = -2095841280;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,31448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31448);
	// stw r4,2164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2164, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be86ac
	if (ctx.cr6.eq) goto loc_82BE86AC;
	// addi r5,r1,2168
	ctx.r5.s64 = ctx.r1.s64 + 2168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d64498
	ctx.lr = 0x82BE8690;
	sub_82D64498(ctx, base);
	// lwz r3,31448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31448);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE86AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BE86AC:
	// addi r1,r1,2144
	ctx.r1.s64 = ctx.r1.s64 + 2144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE86C0"))) PPC_WEAK_FUNC(sub_82BE86C0);
PPC_FUNC_IMPL(__imp__sub_82BE86C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// stwu r1,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31980
	ctx.r31.s64 = -2095841280;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,31448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31448);
	// stw r4,2164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2164, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be872c
	if (ctx.cr6.eq) goto loc_82BE872C;
	// addi r5,r1,2168
	ctx.r5.s64 = ctx.r1.s64 + 2168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d64498
	ctx.lr = 0x82BE8710;
	sub_82D64498(ctx, base);
	// lwz r3,31448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31448);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BE872C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BE872C:
	// addi r1,r1,2144
	ctx.r1.s64 = ctx.r1.s64 + 2144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8740"))) PPC_WEAK_FUNC(sub_82BE8740);
PPC_FUNC_IMPL(__imp__sub_82BE8740) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-30
	ctx.r11.s64 = ctx.r3.s64 + -30;
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-30872
	ctx.r12.s64 = ctx.r12.s64 + -30872;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BE879C;
	case 1:
		goto loc_82BE878C;
	case 2:
		goto loc_82BE8794;
	case 3:
		goto loc_82BE87A4;
	case 4:
		goto loc_82BE87C8;
	case 5:
		goto loc_82BE87B4;
	case 6:
		goto loc_82BE87BC;
	case 7:
		goto loc_82BE87AC;
	case 8:
		goto loc_82BE87C4;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-30820(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30820);
	// lwz r21,-30836(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30836);
	// lwz r21,-30828(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30828);
	// lwz r21,-30812(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30812);
	// lwz r21,-30776(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30776);
	// lwz r21,-30796(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30796);
	// lwz r21,-30788(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30788);
	// lwz r21,-30804(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30804);
	// lwz r21,-30780(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30780);
loc_82BE878C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BE8794:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82BE879C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82BE87A4:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82BE87AC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82BE87B4:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82BE87BC:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82BE87C4:
	// li r3,7
	ctx.r3.s64 = 7;
loc_82BE87C8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE87D0"))) PPC_WEAK_FUNC(sub_82BE87D0);
PPC_FUNC_IMPL(__imp__sub_82BE87D0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-43
	ctx.r11.s64 = ctx.r3.s64 + -43;
	// li r3,8
	ctx.r3.s64 = 8;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-30728
	ctx.r12.s64 = ctx.r12.s64 + -30728;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BE8858;
	case 1:
		goto loc_82BE889C;
	case 2:
		goto loc_82BE889C;
	case 3:
		goto loc_82BE889C;
	case 4:
		goto loc_82BE889C;
	case 5:
		goto loc_82BE889C;
	case 6:
		goto loc_82BE8850;
	case 7:
		goto loc_82BE889C;
	case 8:
		goto loc_82BE8860;
	case 9:
		goto loc_82BE8868;
	case 10:
		goto loc_82BE8870;
	case 11:
		goto loc_82BE8878;
	case 12:
		goto loc_82BE8880;
	case 13:
		goto loc_82BE889C;
	case 14:
		goto loc_82BE889C;
	case 15:
		goto loc_82BE889C;
	case 16:
		goto loc_82BE889C;
	case 17:
		goto loc_82BE8888;
	case 18:
		goto loc_82BE889C;
	case 19:
		goto loc_82BE8890;
	case 20:
		goto loc_82BE889C;
	case 21:
		goto loc_82BE8898;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-30632(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30632);
	// lwz r21,-30564(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30564);
	// lwz r21,-30564(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30564);
	// lwz r21,-30564(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30564);
	// lwz r21,-30564(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30564);
	// lwz r21,-30564(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30564);
	// lwz r21,-30640(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30640);
	// lwz r21,-30564(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30564);
	// lwz r21,-30624(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30624);
	// lwz r21,-30616(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30616);
	// lwz r21,-30608(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30608);
	// lwz r21,-30600(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30600);
	// lwz r21,-30592(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30592);
	// lwz r21,-30564(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30564);
	// lwz r21,-30564(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30564);
	// lwz r21,-30564(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30564);
	// lwz r21,-30564(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30564);
	// lwz r21,-30584(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30584);
	// lwz r21,-30564(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30564);
	// lwz r21,-30576(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30576);
	// lwz r21,-30564(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30564);
	// lwz r21,-30568(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30568);
loc_82BE8850:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_82BE8858:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82BE8860:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82BE8868:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82BE8870:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82BE8878:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82BE8880:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BE8888:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82BE8890:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82BE8898:
	// li r3,7
	ctx.r3.s64 = 7;
loc_82BE889C:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE88A0"))) PPC_WEAK_FUNC(sub_82BE88A0);
PPC_FUNC_IMPL(__imp__sub_82BE88A0) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82beada8
	ctx.lr = 0x82BE88C0;
	sub_82BEADA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE88D0"))) PPC_WEAK_FUNC(sub_82BE88D0);
PPC_FUNC_IMPL(__imp__sub_82BE88D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BE88D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// bne cr6,0x82be8904
	if (!ctx.cr6.eq) goto loc_82BE8904;
loc_82BE88F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
loc_82BE8904:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BE890C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82be890c
	if (!ctx.cr6.eq) goto loc_82BE890C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82be88f8
	if (ctx.cr6.eq) goto loc_82BE88F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be8980
	if (ctx.cr6.eq) goto loc_82BE8980;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82BE8940:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BE8948:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82be896c
	if (ctx.cr6.eq) goto loc_82BE896C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82be8948
	if (ctx.cr6.eq) goto loc_82BE8948;
loc_82BE896C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82be89e8
	if (ctx.cr6.eq) goto loc_82BE89E8;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82be8940
	if (!ctx.cr6.eq) goto loc_82BE8940;
loc_82BE8980:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r6,9
	ctx.r3.s64 = ctx.r6.s64 + 9;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8247d8e0
	ctx.lr = 0x82BE89A0;
	sub_8247D8E0(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82BE89C4:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82be89c4
	if (!ctx.cr6.eq) goto loc_82BE89C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
loc_82BE89E8:
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE89F8"))) PPC_WEAK_FUNC(sub_82BE89F8);
PPC_FUNC_IMPL(__imp__sub_82BE89F8) {
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
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be8a30
	if (ctx.cr6.eq) goto loc_82BE8A30;
loc_82BE8A1C:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8247d948
	ctx.lr = 0x82BE8A24;
	sub_8247D948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82be8a1c
	if (!ctx.cr6.eq) goto loc_82BE8A1C;
loc_82BE8A30:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BE8A58"))) PPC_WEAK_FUNC(sub_82BE8A58);
PPC_FUNC_IMPL(__imp__sub_82BE8A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// addi r9,r11,31488
	ctx.r9.s64 = ctx.r11.s64 + 31488;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// lwz r10,31480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31480);
	// rlwinm r8,r10,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stw r10,31480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31480, ctx.r10.u32);
	// bne cr6,0x82be8a88
	if (!ctx.cr6.eq) goto loc_82BE8A88;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,31480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31480, ctx.r10.u32);
loc_82BE8A88:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be8ac0
	if (ctx.cr6.eq) goto loc_82BE8AC0;
loc_82BE8A98:
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bne cr6,0x82be8aac
	if (!ctx.cr6.eq) goto loc_82BE8AAC;
	// li r11,95
	ctx.r11.s64 = 95;
loc_82BE8AAC:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82be8a98
	if (!ctx.cr6.eq) goto loc_82BE8A98;
loc_82BE8AC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE8AD0"))) PPC_WEAK_FUNC(sub_82BE8AD0);
PPC_FUNC_IMPL(__imp__sub_82BE8AD0) {
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
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-31992
	ctx.r9.s64 = ctx.r11.s64 + -31992;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r10,-32000(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32000);
	// rlwinm r8,r10,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// stw r10,-32000(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32000, ctx.r10.u32);
	// bne cr6,0x82be8b18
	if (!ctx.cr6.eq) goto loc_82BE8B18;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r10,-32000(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32000, ctx.r10.u32);
loc_82BE8B18:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,-15932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15932);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82be8b34
	if (!ctx.cr6.eq) goto loc_82BE8B34;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,30656
	ctx.r3.s64 = ctx.r11.s64 + 30656;
	// b 0x82be8c58
	goto loc_82BE8C58;
loc_82BE8B34:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-18944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18944);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82be8b50
	if (!ctx.cr6.eq) goto loc_82BE8B50;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,30652
	ctx.r3.s64 = ctx.r11.s64 + 30652;
	// b 0x82be8c58
	goto loc_82BE8C58;
loc_82BE8B50:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82be8b70
	if (!ctx.cr6.eq) goto loc_82BE8B70;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lhz r11,17692(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 17692);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x82be8c54
	goto loc_82BE8C54;
loc_82BE8B70:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82be8b90
	if (!ctx.cr6.eq) goto loc_82BE8B90;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lhz r11,17684(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 17684);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x82be8c54
	goto loc_82BE8C54;
loc_82BE8B90:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21360);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82be8bc4
	if (!ctx.cr6.eq) goto loc_82BE8BC4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,25900
	ctx.r11.s64 = ctx.r11.s64 + 25900;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// b 0x82be8c54
	goto loc_82BE8C54;
loc_82BE8BC4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,30644
	ctx.r4.s64 = ctx.r11.s64 + 30644;
	// bl 0x82d5ea60
	ctx.lr = 0x82BE8BDC;
	sub_82D5EA60(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8240
	ctx.r4.s64 = ctx.r11.s64 + 8240;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BE8BEC;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82be8c54
	if (ctx.cr6.eq) goto loc_82BE8C54;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BE8BFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82be8bfc
	if (!ctx.cr6.eq) goto loc_82BE8BFC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x82be8c3c
	if (!ctx.cr6.eq) goto loc_82BE8C3C;
loc_82BE8C2C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x82be8c2c
	if (ctx.cr6.eq) goto loc_82BE8C2C;
loc_82BE8C3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x82be8c50
	if (!ctx.cr6.eq) goto loc_82BE8C50;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// b 0x82be8c54
	goto loc_82BE8C54;
loc_82BE8C50:
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
loc_82BE8C54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BE8C58:
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

__attribute__((alias("__imp__sub_82BE8C70"))) PPC_WEAK_FUNC(sub_82BE8C70);
PPC_FUNC_IMPL(__imp__sub_82BE8C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82BE8C78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,236(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82be8a58
	ctx.lr = 0x82BE8C94;
	sub_82BE8A58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be8a58
	ctx.lr = 0x82BE8CA4;
	sub_82BE8A58(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,30856
	ctx.r4.s64 = ctx.r11.s64 + 30856;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE8CBC;
	sub_82BEBAB0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82be8d78
	if (ctx.cr6.eq) goto loc_82BE8D78;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,30828
	ctx.r4.s64 = ctx.r11.s64 + 30828;
	// bl 0x82bebab0
	ctx.lr = 0x82BE8CD8;
	sub_82BEBAB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE8CE4;
	sub_82BE8AD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE8CF4;
	sub_82BE8AD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,140(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE8D04;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,30772
	ctx.r4.s64 = ctx.r11.s64 + 30772;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE8D20;
	sub_82BEBAB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,136(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE8D2C;
	sub_82BE8AD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE8D3C;
	sub_82BE8AD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE8D4C;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,30732
	ctx.r4.s64 = ctx.r11.s64 + 30732;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE8D68;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,30704
	ctx.r4.s64 = ctx.r11.s64 + 30704;
	// bl 0x82bebab0
	ctx.lr = 0x82BE8D78;
	sub_82BEBAB0(ctx, base);
loc_82BE8D78:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,30672
	ctx.r4.s64 = ctx.r11.s64 + 30672;
	// bl 0x82bebab0
	ctx.lr = 0x82BE8D88;
	sub_82BEBAB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE8D90"))) PPC_WEAK_FUNC(sub_82BE8D90);
PPC_FUNC_IMPL(__imp__sub_82BE8D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82BE8D98;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82d5c56c
	ctx.lr = 0x82BE8DA0;
	__savefpr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lfs f12,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f25,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f25.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f30,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f30.f64 = double(temp.f32);
	// fadds f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f25
	ctx.cr6.compare(ctx.f11.f64, ctx.f25.f64);
	// blt cr6,0x82be8e2c
	if (ctx.cr6.lt) goto loc_82BE8E2C;
	// fadds f0,f11,f30
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f13,-29000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29000);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f27,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f29,f10,f0
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// b 0x82be8f6c
	goto loc_82BE8F6C;
loc_82BE8E2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82be8e3c
	if (!ctx.cr6.gt) goto loc_82BE8E3C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BE8E3C:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f11,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82be8e50
	if (!ctx.cr6.gt) goto loc_82BE8E50;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82BE8E50:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82be8f0c
	if (ctx.cr6.lt) goto loc_82BE8F0C;
	// beq cr6,0x82be8eb8
	if (ctx.cr6.eq) goto loc_82BE8EB8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82be8f5c
	if (!ctx.cr6.lt) goto loc_82BE8F5C;
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f13,-29000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29000);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f27,f11,f0
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f28,f10,f0
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f31,f9,f0
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// b 0x82be8f6c
	goto loc_82BE8F6C;
loc_82BE8EB8:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,-29000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29000);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f27,f11,f0
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// b 0x82be8f6c
	goto loc_82BE8F6C;
loc_82BE8F0C:
	// fsubs f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f13,-29000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29000);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f28,f12,f0
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// b 0x82be8f6c
	goto loc_82BE8F6C;
loc_82BE8F5C:
	// lfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
loc_82BE8F6C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x82be8f7c
	if (ctx.cr6.lt) goto loc_82BE8F7C;
	// fmr f13,f25
	ctx.f13.f64 = ctx.f25.f64;
	// b 0x82be8fa4
	goto loc_82BE8FA4;
loc_82BE8F7C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21360);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82be8f98
	if (ctx.cr6.gt) goto loc_82BE8F98;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lfs f13,30632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30632);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82be8fa4
	goto loc_82BE8FA4;
loc_82BE8F98:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d5b470
	ctx.lr = 0x82BE8FA0;
	sub_82D5B470(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
loc_82BE8FA4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f13,f0
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fnmsubs f0,f31,f31,f30
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f31.f64 - ctx.f30.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// beq cr6,0x82be90fc
	if (ctx.cr6.eq) goto loc_82BE90FC;
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-18880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18880);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f26,f26,f13
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fmuls f31,f0,f27
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f28,f0,f28
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fcmpu cr6,f31,f25
	ctx.cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// bne cr6,0x82be8ff8
	if (!ctx.cr6.eq) goto loc_82BE8FF8;
	// fcmpu cr6,f28,f25
	ctx.cr6.compare(ctx.f28.f64, ctx.f25.f64);
	// bne cr6,0x82be8ff8
	if (!ctx.cr6.eq) goto loc_82BE8FF8;
	// fcmpu cr6,f29,f25
	ctx.cr6.compare(ctx.f29.f64, ctx.f25.f64);
	// bne cr6,0x82be8ff8
	if (!ctx.cr6.eq) goto loc_82BE8FF8;
loc_82BE8FF4:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_82BE8FF8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r11,-9668
	ctx.r26.s64 = ctx.r11.s64 + -9668;
	// ble cr6,0x82be9024
	if (!ctx.cr6.gt) goto loc_82BE9024;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82BE900C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9018;
	sub_82BEBAB0(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82be900c
	if (!ctx.cr6.eq) goto loc_82BE900C;
loc_82BE9024:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9030;
	sub_82BE8AD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9040;
	sub_82BE8AD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9050;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,31028
	ctx.r4.s64 = ctx.r11.s64 + 31028;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE906C;
	sub_82BEBAB0(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82be9090
	if (!ctx.cr6.gt) goto loc_82BE9090;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82BE9078:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9084;
	sub_82BEBAB0(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82be9078
	if (!ctx.cr6.eq) goto loc_82BE9078;
loc_82BE9090:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82be8ad0
	ctx.lr = 0x82BE909C;
	sub_82BE8AD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82be8ad0
	ctx.lr = 0x82BE90AC;
	sub_82BE8AD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82be8ad0
	ctx.lr = 0x82BE90BC;
	sub_82BE8AD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82be8ad0
	ctx.lr = 0x82BE90CC;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,30996
	ctx.r4.s64 = ctx.r11.s64 + 30996;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE90EC;
	sub_82BEBAB0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82d5c5b8
	ctx.lr = 0x82BE90F8;
	__restfpr_25(ctx, base);
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
loc_82BE90FC:
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f25.f64;
	// fmr f29,f25
	ctx.f29.f64 = ctx.f25.f64;
	// b 0x82be8ff4
	goto loc_82BE8FF4;
}

__attribute__((alias("__imp__sub_82BE9108"))) PPC_WEAK_FUNC(sub_82BE9108);
PPC_FUNC_IMPL(__imp__sub_82BE9108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BE9110;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x82be8740
	ctx.lr = 0x82BE912C;
	sub_82BE8740(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r11,31896
	ctx.r4.s64 = ctx.r11.s64 + 31896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9140;
	sub_82BEBAB0(ctx, base);
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8d90
	ctx.lr = 0x82BE9154;
	sub_82BE8D90(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lhz r5,62(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 62);
	// addi r4,r11,31824
	ctx.r4.s64 = ctx.r11.s64 + 31824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE916C;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f1,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82be9194
	if (!ctx.cr6.gt) goto loc_82BE9194;
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9188;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,31800
	ctx.r4.s64 = ctx.r11.s64 + 31800;
	// b 0x82be91a4
	goto loc_82BE91A4;
loc_82BE9194:
	// lfs f1,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE919C;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,31768
	ctx.r4.s64 = ctx.r11.s64 + 31768;
loc_82BE91A4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE91B0;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,31752
	ctx.r4.s64 = ctx.r11.s64 + 31752;
	// bl 0x82bebab0
	ctx.lr = 0x82BE91C0;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,31712
	ctx.r4.s64 = ctx.r11.s64 + 31712;
	// bl 0x82bebab0
	ctx.lr = 0x82BE91D0;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 60);
	// addi r4,r11,31684
	ctx.r4.s64 = ctx.r11.s64 + 31684;
	// bl 0x82bebab0
	ctx.lr = 0x82BE91E4;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE91F0;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,31648
	ctx.r4.s64 = ctx.r11.s64 + 31648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9204;
	sub_82BEBAB0(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82be9220
	if (ctx.cr6.eq) goto loc_82BE9220;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,8328
	ctx.r5.s64 = ctx.r11.s64 + 8328;
	// b 0x82be9228
	goto loc_82BE9228;
loc_82BE9220:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r11,-25912
	ctx.r5.s64 = ctx.r11.s64 + -25912;
loc_82BE9228:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,31596
	ctx.r4.s64 = ctx.r11.s64 + 31596;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9238;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,31572
	ctx.r4.s64 = ctx.r11.s64 + 31572;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9248;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,31552
	ctx.r4.s64 = ctx.r11.s64 + 31552;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9258;
	sub_82BEBAB0(ctx, base);
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// bgt cr6,0x82be9480
	if (ctx.cr6.gt) goto loc_82BE9480;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-28040
	ctx.r12.s64 = ctx.r12.s64 + -28040;
	// rlwinm r0,r27,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r27.u64) {
	case 0:
		goto loc_82BE92F4;
	case 1:
		goto loc_82BE936C;
	case 2:
		goto loc_82BE93A8;
	case 3:
		goto loc_82BE940C;
	case 4:
		goto loc_82BE9480;
	case 5:
		goto loc_82BE9294;
	case 6:
		goto loc_82BE92C4;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-27916(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27916);
	// lwz r21,-27796(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27796);
	// lwz r21,-27736(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27736);
	// lwz r21,-27636(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27636);
	// lwz r21,-27520(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27520);
	// lwz r21,-28012(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28012);
	// lwz r21,-27964(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27964);
loc_82BE9294:
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82c16cc8
	ctx.lr = 0x82BE92A0;
	sub_82C16CC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be9480
	if (ctx.cr6.eq) goto loc_82BE9480;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,31508
	ctx.r4.s64 = ctx.r10.s64 + 31508;
	// bl 0x82bebab0
	ctx.lr = 0x82BE92C0;
	sub_82BEBAB0(ctx, base);
	// b 0x82be9480
	goto loc_82BE9480;
loc_82BE92C4:
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82c16d68
	ctx.lr = 0x82BE92D0;
	sub_82C16D68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82be9480
	if (ctx.cr6.eq) goto loc_82BE9480;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,31508
	ctx.r4.s64 = ctx.r10.s64 + 31508;
	// bl 0x82bebab0
	ctx.lr = 0x82BE92F0;
	sub_82BEBAB0(ctx, base);
	// b 0x82be9480
	goto loc_82BE9480;
loc_82BE92F4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,31492
	ctx.r4.s64 = ctx.r11.s64 + 31492;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9304;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9310;
	sub_82BE8AD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9320;
	sub_82BE8AD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9330;
	sub_82BE8AD0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9340;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,31448
	ctx.r4.s64 = ctx.r11.s64 + 31448;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9360;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,31428
	ctx.r4.s64 = ctx.r11.s64 + 31428;
	// b 0x82be9478
	goto loc_82BE9478;
loc_82BE936C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,31408
	ctx.r4.s64 = ctx.r11.s64 + 31408;
	// bl 0x82bebab0
	ctx.lr = 0x82BE937C;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9388;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,31376
	ctx.r4.s64 = ctx.r11.s64 + 31376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE939C;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,31356
	ctx.r4.s64 = ctx.r11.s64 + 31356;
	// b 0x82be9478
	goto loc_82BE9478;
loc_82BE93A8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,31340
	ctx.r4.s64 = ctx.r11.s64 + 31340;
	// bl 0x82bebab0
	ctx.lr = 0x82BE93B8;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE93C4;
	sub_82BE8AD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE93D4;
	sub_82BE8AD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE93E4;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,31292
	ctx.r4.s64 = ctx.r11.s64 + 31292;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9400;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,31276
	ctx.r4.s64 = ctx.r11.s64 + 31276;
	// b 0x82be9478
	goto loc_82BE9478;
loc_82BE940C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,31256
	ctx.r4.s64 = ctx.r11.s64 + 31256;
	// bl 0x82bebab0
	ctx.lr = 0x82BE941C;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9428;
	sub_82BE8AD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9438;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,31224
	ctx.r4.s64 = ctx.r11.s64 + 31224;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9450;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE945C;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,31192
	ctx.r4.s64 = ctx.r11.s64 + 31192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9470;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,31172
	ctx.r4.s64 = ctx.r11.s64 + 31172;
loc_82BE9478:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9480;
	sub_82BEBAB0(ctx, base);
loc_82BE9480:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,31152
	ctx.r4.s64 = ctx.r11.s64 + 31152;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9490;
	sub_82BEBAB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE9498"))) PPC_WEAK_FUNC(sub_82BE9498);
PPC_FUNC_IMPL(__imp__sub_82BE9498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BE94A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,32204
	ctx.r4.s64 = ctx.r11.s64 + 32204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE94C0;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r5,r11,-9088
	ctx.r5.s64 = ctx.r11.s64 + -9088;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82be94fc
	if (ctx.cr6.eq) goto loc_82BE94FC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82be94f0
	if (ctx.cr6.eq) goto loc_82BE94F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82be9504
	if (!ctx.cr6.eq) goto loc_82BE9504;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r11,31968
	ctx.r5.s64 = ctx.r11.s64 + 31968;
	// b 0x82be9504
	goto loc_82BE9504;
loc_82BE94F0:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r11,31940
	ctx.r5.s64 = ctx.r11.s64 + 31940;
	// b 0x82be9504
	goto loc_82BE9504;
loc_82BE94FC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r11,31912
	ctx.r5.s64 = ctx.r11.s64 + 31912;
loc_82BE9504:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32144
	ctx.r4.s64 = ctx.r11.s64 + 32144;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9514;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9520;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32116
	ctx.r4.s64 = ctx.r11.s64 + 32116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9534;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9540;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32084
	ctx.r4.s64 = ctx.r11.s64 + 32084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9554;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9560;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32048
	ctx.r4.s64 = ctx.r11.s64 + 32048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9574;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32020
	ctx.r4.s64 = ctx.r11.s64 + 32020;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9584;
	sub_82BEBAB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE9590"))) PPC_WEAK_FUNC(sub_82BE9590);
PPC_FUNC_IMPL(__imp__sub_82BE9590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82be95f8
	if (ctx.cr6.lt) goto loc_82BE95F8;
	// beq cr6,0x82be95c0
	if (ctx.cr6.eq) goto loc_82BE95C0;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,-15932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15932);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,-18944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18944);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_82BE95C0:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f2,0(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,30640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30640);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_82BE95F8:
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE9610"))) PPC_WEAK_FUNC(sub_82BE9610);
PPC_FUNC_IMPL(__imp__sub_82BE9610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BE9618;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82d5c570
	ctx.lr = 0x82BE9620;
	__savefpr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r4,144(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// bl 0x82be8a58
	ctx.lr = 0x82BE963C;
	sub_82BE8A58(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-31860
	ctx.r4.s64 = ctx.r11.s64 + -31860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9654;
	sub_82BEBAB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82c16ea8
	ctx.lr = 0x82BE9660;
	sub_82C16EA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82c16ea8
	ctx.lr = 0x82BE9670;
	sub_82C16EA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82be96a4
	if (ctx.cr6.eq) goto loc_82BE96A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,236(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// bl 0x82be8a58
	ctx.lr = 0x82BE9688;
	sub_82BE8A58(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r11,-31920
	ctx.r4.s64 = ctx.r11.s64 + -31920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE96A0;
	sub_82BEBAB0(ctx, base);
	// b 0x82be96b4
	goto loc_82BE96B4;
loc_82BE96A4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31960
	ctx.r4.s64 = ctx.r11.s64 + -31960;
	// bl 0x82bebab0
	ctx.lr = 0x82BE96B4;
	sub_82BEBAB0(ctx, base);
loc_82BE96B4:
	// lfs f0,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f10,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// li r4,10
	ctx.r4.s64 = 10;
	// lfs f0,72(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f11,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,76(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// lfs f9,44(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f13,48(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// lfs f12,52(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f8,164(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmsubs f0,f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmsubs f0,f10,f12,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmsubs f0,f9,f11,f6
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x82be8d90
	ctx.lr = 0x82BE974C;
	sub_82BE8D90(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31984
	ctx.r4.s64 = ctx.r11.s64 + -31984;
	// bl 0x82bebab0
	ctx.lr = 0x82BE975C;
	sub_82BEBAB0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82be978c
	if (ctx.cr6.eq) goto loc_82BE978C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,236(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 236);
	// bl 0x82be8a58
	ctx.lr = 0x82BE9770;
	sub_82BE8A58(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,12(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r4,r11,-32040
	ctx.r4.s64 = ctx.r11.s64 + -32040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9788;
	sub_82BEBAB0(ctx, base);
	// b 0x82be979c
	goto loc_82BE979C;
loc_82BE978C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32076
	ctx.r4.s64 = ctx.r11.s64 + -32076;
	// bl 0x82bebab0
	ctx.lr = 0x82BE979C;
	sub_82BEBAB0(ctx, base);
loc_82BE979C:
	// lfs f0,80(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f10,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// li r4,10
	ctx.r4.s64 = 10;
	// lfs f0,84(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f11,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,88(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// lfs f9,56(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f13,60(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// lfs f12,64(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f8,164(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmsubs f0,f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmsubs f0,f10,f12,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmsubs f0,f9,f11,f6
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x82be8d90
	ctx.lr = 0x82BE9834;
	sub_82BE8D90(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32096
	ctx.r4.s64 = ctx.r11.s64 + -32096;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9844;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32124
	ctx.r4.s64 = ctx.r11.s64 + -32124;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9854;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r10,100(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r27,r11,8328
	ctx.r27.s64 = ctx.r11.s64 + 8328;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82be9874
	if (ctx.cr6.eq) goto loc_82BE9874;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r27,r11,-25912
	ctx.r27.s64 = ctx.r11.s64 + -25912;
loc_82BE9874:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r3,140(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// lfs f28,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f28.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82be87d0
	ctx.lr = 0x82BE98D4;
	sub_82BE87D0(ctx, base);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x82be99f4
	if (!ctx.cr6.eq) goto loc_82BE99F4;
	// lfs f2,172(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	ctx.f2.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,148(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x82be9590
	ctx.lr = 0x82BE9900;
	sub_82BE9590(ctx, base);
	// lfs f2,172(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	ctx.f2.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,152(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be9590
	ctx.lr = 0x82BE9920;
	sub_82BE9590(ctx, base);
	// lfs f2,172(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	ctx.f2.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,156(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be9590
	ctx.lr = 0x82BE9940;
	sub_82BE9590(ctx, base);
	// lwz r25,160(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// lfs f2,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	ctx.f2.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82be9590
	ctx.lr = 0x82BE9964;
	sub_82BE9590(ctx, base);
	// lwz r26,164(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// lfs f2,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	ctx.f2.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82be9590
	ctx.lr = 0x82BE9988;
	sub_82BE9590(ctx, base);
	// lwz r24,168(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 168);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f2,252(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// lfs f1,232(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82be9590
	ctx.lr = 0x82BE99AC;
	sub_82BE9590(ctx, base);
	// lfs f28,180(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,184(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	ctx.f27.f64 = double(temp.f32);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// lfs f26,172(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	ctx.f26.f64 = double(temp.f32);
	// bne cr6,0x82be99cc
	if (!ctx.cr6.eq) goto loc_82BE99CC;
	// lfs f31,220(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,224(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,216(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	ctx.f29.f64 = double(temp.f32);
loc_82BE99CC:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x82be99e0
	if (!ctx.cr6.eq) goto loc_82BE99E0;
	// lfs f31,200(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,204(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,196(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	ctx.f29.f64 = double(temp.f32);
loc_82BE99E0:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x82be99f4
	if (!ctx.cr6.eq) goto loc_82BE99F4;
	// lfs f31,240(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,244(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,236(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	ctx.f29.f64 = double(temp.f32);
loc_82BE99F4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32152
	ctx.r4.s64 = ctx.r11.s64 + -32152;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9A04;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-32196
	ctx.r4.s64 = ctx.r11.s64 + -32196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9A18;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32212
	ctx.r4.s64 = ctx.r11.s64 + -32212;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9A28;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,-32232
	ctx.r28.s64 = ctx.r11.s64 + -32232;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9A3C;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9A48;
	sub_82BE8AD0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9A58;
	sub_82BE8AD0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9A68;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r27,r11,-32264
	ctx.r27.s64 = ctx.r11.s64 + -32264;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9A88;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9A94;
	sub_82BE8AD0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9AA4;
	sub_82BE8AD0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9AB4;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r26,r11,-32296
	ctx.r26.s64 = ctx.r11.s64 + -32296;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9AD4;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32316
	ctx.r4.s64 = ctx.r11.s64 + -32316;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9AE4;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32348
	ctx.r4.s64 = ctx.r11.s64 + -32348;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9AF4;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9B00;
	sub_82BE8AD0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9B10;
	sub_82BE8AD0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9B20;
	sub_82BE8AD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9B38;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9B44;
	sub_82BE8AD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9B54;
	sub_82BE8AD0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9B64;
	sub_82BE8AD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9B7C;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32380
	ctx.r4.s64 = ctx.r11.s64 + -32380;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9B8C;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32400
	ctx.r4.s64 = ctx.r11.s64 + -32400;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9B9C;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32416
	ctx.r4.s64 = ctx.r11.s64 + -32416;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9BAC;
	sub_82BEBAB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9BB8;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9BC4;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r28,r11,-32452
	ctx.r28.s64 = ctx.r11.s64 + -32452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9BDC;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9BE8;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r27,r11,-32484
	ctx.r27.s64 = ctx.r11.s64 + -32484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9C00;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9C0C;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r26,r11,-32528
	ctx.r26.s64 = ctx.r11.s64 + -32528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9C24;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32548
	ctx.r4.s64 = ctx.r11.s64 + -32548;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9C34;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32568
	ctx.r4.s64 = ctx.r11.s64 + -32568;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9C44;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9C50;
	sub_82BE8AD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9C60;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9C6C;
	sub_82BE8AD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9C7C;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9C88;
	sub_82BE8AD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9C98;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32588
	ctx.r4.s64 = ctx.r11.s64 + -32588;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9CA8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32608
	ctx.r4.s64 = ctx.r11.s64 + -32608;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9CB8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32636
	ctx.r4.s64 = ctx.r11.s64 + -32636;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9CC8;
	sub_82BEBAB0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82be9f5c
	if (ctx.cr6.eq) goto loc_82BE9F5C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32652
	ctx.r4.s64 = ctx.r11.s64 + -32652;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9CE0;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32688
	ctx.r4.s64 = ctx.r11.s64 + -32688;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9CF0;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r29,276
	ctx.r6.s64 = ctx.r29.s64 + 276;
	// addi r5,r11,-32696
	ctx.r5.s64 = ctx.r11.s64 + -32696;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be9498
	ctx.lr = 0x82BE9D08;
	sub_82BE9498(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r29,296
	ctx.r6.s64 = ctx.r29.s64 + 296;
	// addi r5,r11,-32704
	ctx.r5.s64 = ctx.r11.s64 + -32704;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be9498
	ctx.lr = 0x82BE9D20;
	sub_82BE9498(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r29,316
	ctx.r6.s64 = ctx.r29.s64 + 316;
	// addi r5,r11,-32712
	ctx.r5.s64 = ctx.r11.s64 + -32712;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be9498
	ctx.lr = 0x82BE9D38;
	sub_82BE9498(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r29,336
	ctx.r6.s64 = ctx.r29.s64 + 336;
	// addi r5,r11,-32724
	ctx.r5.s64 = ctx.r11.s64 + -32724;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be9498
	ctx.lr = 0x82BE9D50;
	sub_82BE9498(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r29,356
	ctx.r6.s64 = ctx.r29.s64 + 356;
	// addi r5,r11,-32736
	ctx.r5.s64 = ctx.r11.s64 + -32736;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be9498
	ctx.lr = 0x82BE9D68;
	sub_82BE9498(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r29,376
	ctx.r6.s64 = ctx.r29.s64 + 376;
	// addi r5,r11,-32748
	ctx.r5.s64 = ctx.r11.s64 + -32748;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be9498
	ctx.lr = 0x82BE9D80;
	sub_82BE9498(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,404(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9D8C;
	sub_82BE8AD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,400(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9D9C;
	sub_82BE8AD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,396(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9DAC;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32740
	ctx.r4.s64 = ctx.r11.s64 + 32740;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9DC8;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,420(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9DD4;
	sub_82BE8AD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,416(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9DE4;
	sub_82BE8AD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,412(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9DF4;
	sub_82BE8AD0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,408(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9E04;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r4,r11,32684
	ctx.r4.s64 = ctx.r11.s64 + 32684;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9E24;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,432(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9E30;
	sub_82BE8AD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,428(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9E40;
	sub_82BE8AD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,424(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 424);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9E50;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32624
	ctx.r4.s64 = ctx.r11.s64 + 32624;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9E6C;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,444(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 444);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9E78;
	sub_82BE8AD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,440(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 440);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9E88;
	sub_82BE8AD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,436(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 436);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9E98;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32560
	ctx.r4.s64 = ctx.r11.s64 + 32560;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9EB4;
	sub_82BEBAB0(ctx, base);
	// lwz r11,448(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82be9ed0
	if (!ctx.cr6.eq) goto loc_82BE9ED0;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,32496
	ctx.r4.s64 = ctx.r11.s64 + 32496;
	// b 0x82be9ed8
	goto loc_82BE9ED8;
loc_82BE9ED0:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,32440
	ctx.r4.s64 = ctx.r11.s64 + 32440;
loc_82BE9ED8:
	// bl 0x82bebab0
	ctx.lr = 0x82BE9EDC;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,452(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 452);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9EE8;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32388
	ctx.r4.s64 = ctx.r11.s64 + 32388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9EFC;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,456(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 456);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9F08;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32340
	ctx.r4.s64 = ctx.r11.s64 + 32340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9F1C;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,460(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 460);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9F28;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,32304
	ctx.r4.s64 = ctx.r11.s64 + 32304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9F3C;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32284
	ctx.r4.s64 = ctx.r11.s64 + 32284;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9F4C;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32268
	ctx.r4.s64 = ctx.r11.s64 + 32268;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9F5C;
	sub_82BEBAB0(ctx, base);
loc_82BE9F5C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32240
	ctx.r4.s64 = ctx.r11.s64 + 32240;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9F6C;
	sub_82BEBAB0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82d5c5bc
	ctx.lr = 0x82BE9F78;
	__restfpr_26(ctx, base);
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE9F80"))) PPC_WEAK_FUNC(sub_82BE9F80);
PPC_FUNC_IMPL(__imp__sub_82BE9F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BE9F88;
	__savegprlr_29(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r11,-31552
	ctx.r4.s64 = ctx.r11.s64 + -31552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d5ea60
	ctx.lr = 0x82BE9FAC;
	sub_82D5EA60(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-31596
	ctx.r4.s64 = ctx.r11.s64 + -31596;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9FC4;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31620
	ctx.r4.s64 = ctx.r11.s64 + -31620;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9FD4;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BE9FE0;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-31668
	ctx.r4.s64 = ctx.r11.s64 + -31668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BE9FF4;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEA000;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-31704
	ctx.r4.s64 = ctx.r11.s64 + -31704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA014;
	sub_82BEBAB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEA020;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-31748
	ctx.r4.s64 = ctx.r11.s64 + -31748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA034;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31776
	ctx.r4.s64 = ctx.r11.s64 + -31776;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA044;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31800
	ctx.r4.s64 = ctx.r11.s64 + -31800;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA054;
	sub_82BEBAB0(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA060"))) PPC_WEAK_FUNC(sub_82BEA060);
PPC_FUNC_IMPL(__imp__sub_82BEA060) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30468
	ctx.r4.s64 = ctx.r11.s64 + -30468;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA088;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30516
	ctx.r4.s64 = ctx.r11.s64 + -30516;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA098;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30580
	ctx.r4.s64 = ctx.r11.s64 + -30580;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA0A8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30600
	ctx.r4.s64 = ctx.r11.s64 + -30600;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA0B8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30628
	ctx.r4.s64 = ctx.r11.s64 + -30628;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA0C8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30652
	ctx.r4.s64 = ctx.r11.s64 + -30652;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA0D8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30700
	ctx.r4.s64 = ctx.r11.s64 + -30700;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA0E8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30724
	ctx.r4.s64 = ctx.r11.s64 + -30724;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA0F8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30784
	ctx.r4.s64 = ctx.r11.s64 + -30784;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA108;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30804
	ctx.r4.s64 = ctx.r11.s64 + -30804;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA118;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30828
	ctx.r4.s64 = ctx.r11.s64 + -30828;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA128;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-30884
	ctx.r30.s64 = ctx.r11.s64 + -30884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA13C;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30908
	ctx.r4.s64 = ctx.r11.s64 + -30908;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA14C;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30932
	ctx.r4.s64 = ctx.r11.s64 + -30932;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA15C;
	sub_82BEBAB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA168;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30956
	ctx.r4.s64 = ctx.r11.s64 + -30956;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA178;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30980
	ctx.r4.s64 = ctx.r11.s64 + -30980;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA188;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31040
	ctx.r4.s64 = ctx.r11.s64 + -31040;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA198;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31064
	ctx.r4.s64 = ctx.r11.s64 + -31064;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA1A8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31088
	ctx.r4.s64 = ctx.r11.s64 + -31088;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA1B8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31120
	ctx.r4.s64 = ctx.r11.s64 + -31120;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA1C8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31144
	ctx.r4.s64 = ctx.r11.s64 + -31144;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA1D8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31168
	ctx.r4.s64 = ctx.r11.s64 + -31168;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA1E8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31204
	ctx.r4.s64 = ctx.r11.s64 + -31204;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA1F8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31232
	ctx.r4.s64 = ctx.r11.s64 + -31232;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA208;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31260
	ctx.r4.s64 = ctx.r11.s64 + -31260;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA218;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31296
	ctx.r4.s64 = ctx.r11.s64 + -31296;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA228;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31324
	ctx.r4.s64 = ctx.r11.s64 + -31324;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA238;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31352
	ctx.r4.s64 = ctx.r11.s64 + -31352;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA248;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31384
	ctx.r4.s64 = ctx.r11.s64 + -31384;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA258;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31412
	ctx.r4.s64 = ctx.r11.s64 + -31412;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA268;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31432
	ctx.r4.s64 = ctx.r11.s64 + -31432;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA278;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31456
	ctx.r4.s64 = ctx.r11.s64 + -31456;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA288;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31484
	ctx.r4.s64 = ctx.r11.s64 + -31484;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA298;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31500
	ctx.r4.s64 = ctx.r11.s64 + -31500;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA2A8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31524
	ctx.r4.s64 = ctx.r11.s64 + -31524;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA2B8;
	sub_82BEBAB0(ctx, base);
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

__attribute__((alias("__imp__sub_82BEA2D0"))) PPC_WEAK_FUNC(sub_82BEA2D0);
PPC_FUNC_IMPL(__imp__sub_82BEA2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEA2D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,236(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82be8a58
	ctx.lr = 0x82BEA2F4;
	sub_82BE8A58(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-30368
	ctx.r4.s64 = ctx.r11.s64 + -30368;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA30C;
	sub_82BEBAB0(ctx, base);
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be8d90
	ctx.lr = 0x82BEA320;
	sub_82BE8D90(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82bea374
	if (!ctx.cr6.eq) goto loc_82BEA374;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,104(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// bl 0x82be8740
	ctx.lr = 0x82BEA348;
	sub_82BE8740(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82bea368
	if (ctx.cr6.eq) goto loc_82BEA368;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x82bea374
	if (!ctx.cr6.eq) goto loc_82BEA374;
	// lwz r4,108(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c16d68
	ctx.lr = 0x82BEA364;
	sub_82C16D68(ctx, base);
	// b 0x82bea374
	goto loc_82BEA374;
loc_82BEA368:
	// lwz r4,108(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c16cc8
	ctx.lr = 0x82BEA374;
	sub_82C16CC8(ctx, base);
loc_82BEA374:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-30444
	ctx.r4.s64 = ctx.r11.s64 + -30444;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA384;
	sub_82BEBAB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA390"))) PPC_WEAK_FUNC(sub_82BEA390);
PPC_FUNC_IMPL(__imp__sub_82BEA390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x82BEA398;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r4,r11,-30116
	ctx.r4.s64 = ctx.r11.s64 + -30116;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA3C0;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-30176
	ctx.r4.s64 = ctx.r11.s64 + -30176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA3D4;
	sub_82BEBAB0(ctx, base);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82bea414
	if (!ctx.cr6.gt) goto loc_82BEA414;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82BEA3F0:
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r5,r28,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82be8c70
	ctx.lr = 0x82BEA404;
	sub_82BE8C70(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bea3f0
	if (!ctx.cr6.eq) goto loc_82BEA3F0;
loc_82BEA414:
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82bea46c
	if (!ctx.cr6.gt) goto loc_82BEA46C;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r11,30928
	ctx.r26.s64 = ctx.r11.s64 + 30928;
loc_82BEA438:
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r4,144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// bl 0x82be8a58
	ctx.lr = 0x82BEA44C;
	sub_82BE8A58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA45C;
	sub_82BEBAB0(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bea438
	if (!ctx.cr6.eq) goto loc_82BEA438;
loc_82BEA46C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30192
	ctx.r4.s64 = ctx.r11.s64 + -30192;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA47C;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30228
	ctx.r4.s64 = ctx.r11.s64 + -30228;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA48C;
	sub_82BEBAB0(ctx, base);
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82bea530
	if (ctx.cr6.eq) goto loc_82BEA530;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r24,r11,31064
	ctx.r24.s64 = ctx.r11.s64 + 31064;
loc_82BEA4B4:
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r28,r25,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82c16ea8
	ctx.lr = 0x82BEA4C8;
	sub_82C16EA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16ea8
	ctx.lr = 0x82BEA4D8;
	sub_82C16EA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bea520
	if (ctx.cr6.eq) goto loc_82BEA520;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bea520
	if (ctx.cr6.eq) goto loc_82BEA520;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// bl 0x82be8a58
	ctx.lr = 0x82BEA4F8;
	sub_82BE8A58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,236(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// bl 0x82be8a58
	ctx.lr = 0x82BEA508;
	sub_82BE8A58(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA520;
	sub_82BEBAB0(ctx, base);
loc_82BEA520:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r26,r23
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82bea4b4
	if (ctx.cr6.lt) goto loc_82BEA4B4;
loc_82BEA530:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30248
	ctx.r4.s64 = ctx.r11.s64 + -30248;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA540;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30264
	ctx.r4.s64 = ctx.r11.s64 + -30264;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA550;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30296
	ctx.r4.s64 = ctx.r11.s64 + -30296;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA560;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30320
	ctx.r4.s64 = ctx.r11.s64 + -30320;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA570;
	sub_82BEBAB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA580"))) PPC_WEAK_FUNC(sub_82BEA580);
PPC_FUNC_IMPL(__imp__sub_82BEA580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82BEA588;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r4,r11,-30040
	ctx.r4.s64 = ctx.r11.s64 + -30040;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA5AC;
	sub_82BEBAB0(ctx, base);
	// lwz r11,232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// lwz r10,228(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82bea5ec
	if (!ctx.cr6.gt) goto loc_82BEA5EC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BEA5C8:
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82bea2d0
	ctx.lr = 0x82BEA5DC;
	sub_82BEA2D0(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bea5c8
	if (!ctx.cr6.eq) goto loc_82BEA5C8;
loc_82BEA5EC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-30064
	ctx.r4.s64 = ctx.r11.s64 + -30064;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA5FC;
	sub_82BEBAB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEA608"))) PPC_WEAK_FUNC(sub_82BEA608);
PPC_FUNC_IMPL(__imp__sub_82BEA608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BEA610;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r4,236(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// bl 0x82be8a58
	ctx.lr = 0x82BEA62C;
	sub_82BE8A58(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-29008
	ctx.r4.s64 = ctx.r11.s64 + -29008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA644;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32124
	ctx.r4.s64 = ctx.r11.s64 + -32124;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA654;
	sub_82BEBAB0(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bea68c
	if (ctx.cr6.eq) goto loc_82BEA68C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r10,-29080
	ctx.r4.s64 = ctx.r10.s64 + -29080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r5,62(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// bl 0x82bebab0
	ctx.lr = 0x82BEA68C;
	sub_82BEBAB0(ctx, base);
loc_82BEA68C:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82bea6d0
	if (!ctx.cr6.gt) goto loc_82BEA6D0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82BEA6A8:
	// lwz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r5,r27,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x82be9108
	ctx.lr = 0x82BEA6C0;
	sub_82BE9108(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bea6a8
	if (!ctx.cr6.eq) goto loc_82BEA6A8;
loc_82BEA6D0:
	// lwz r26,8(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82bea7b0
	if (ctx.cr6.eq) goto loc_82BEA7B0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-29112
	ctx.r4.s64 = ctx.r11.s64 + -29112;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA6EC;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f1,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82bea714
	if (!ctx.cr6.gt) goto loc_82BEA714;
	// bl 0x82be8ad0
	ctx.lr = 0x82BEA708;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,31800
	ctx.r4.s64 = ctx.r11.s64 + 31800;
	// b 0x82bea724
	goto loc_82BEA724;
loc_82BEA714:
	// lfs f1,200(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEA71C;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,31768
	ctx.r4.s64 = ctx.r11.s64 + 31768;
loc_82BEA724:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA730;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29136
	ctx.r4.s64 = ctx.r11.s64 + -29136;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA740;
	sub_82BEBAB0(ctx, base);
	// addi r6,r30,64
	ctx.r6.s64 = ctx.r30.s64 + 64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be8d90
	ctx.lr = 0x82BEA754;
	sub_82BE8D90(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29160
	ctx.r4.s64 = ctx.r11.s64 + -29160;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA764;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEA770;
	sub_82BE8AD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEA780;
	sub_82BE8AD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEA790;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-29196
	ctx.r4.s64 = ctx.r11.s64 + -29196;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA7AC;
	sub_82BEBAB0(ctx, base);
	// b 0x82bea7cc
	goto loc_82BEA7CC;
loc_82BEA7B0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-29228
	ctx.r4.s64 = ctx.r11.s64 + -29228;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA7BC;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29252
	ctx.r4.s64 = ctx.r11.s64 + -29252;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA7CC;
	sub_82BEBAB0(ctx, base);
loc_82BEA7CC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,30704
	ctx.r4.s64 = ctx.r11.s64 + 30704;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA7DC;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30192
	ctx.r4.s64 = ctx.r11.s64 + -30192;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA7EC;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30228
	ctx.r4.s64 = ctx.r11.s64 + -30228;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA7FC;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r11,-25912
	ctx.r28.s64 = ctx.r11.s64 + -25912;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r27,r11,8328
	ctx.r27.s64 = ctx.r11.s64 + 8328;
	// beq cr6,0x82bea988
	if (ctx.cr6.eq) goto loc_82BEA988;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,152(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEA820;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-29296
	ctx.r4.s64 = ctx.r11.s64 + -29296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA834;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEA840;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-29340
	ctx.r4.s64 = ctx.r11.s64 + -29340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA854;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEA860;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-29384
	ctx.r4.s64 = ctx.r11.s64 + -29384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA874;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,164(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEA880;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-29436
	ctx.r4.s64 = ctx.r11.s64 + -29436;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA894;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,176(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEA8A0;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-29492
	ctx.r4.s64 = ctx.r11.s64 + -29492;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA8B4;
	sub_82BEBAB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,180(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEA8C0;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-29548
	ctx.r4.s64 = ctx.r11.s64 + -29548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA8D4;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,184(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r4,r11,-29604
	ctx.r4.s64 = ctx.r11.s64 + -29604;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA8E8;
	sub_82BEBAB0(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bea900
	if (!ctx.cr6.eq) goto loc_82BEA900;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82BEA900:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29652
	ctx.r4.s64 = ctx.r11.s64 + -29652;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA910;
	sub_82BEBAB0(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bea928
	if (!ctx.cr6.eq) goto loc_82BEA928;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82BEA928:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29688
	ctx.r4.s64 = ctx.r11.s64 + -29688;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA938;
	sub_82BEBAB0(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bea950
	if (!ctx.cr6.eq) goto loc_82BEA950;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82BEA950:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29736
	ctx.r4.s64 = ctx.r11.s64 + -29736;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA960;
	sub_82BEBAB0(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bea978
	if (!ctx.cr6.eq) goto loc_82BEA978;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82BEA978:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29796
	ctx.r4.s64 = ctx.r11.s64 + -29796;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA988;
	sub_82BEBAB0(ctx, base);
loc_82BEA988:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lhz r5,208(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29824
	ctx.r4.s64 = ctx.r11.s64 + -29824;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA99C;
	sub_82BEBAB0(ctx, base);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bea9b4
	if (!ctx.cr6.eq) goto loc_82BEA9B4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82BEA9B4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29876
	ctx.r4.s64 = ctx.r11.s64 + -29876;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA9C4;
	sub_82BEBAB0(ctx, base);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bea9dc
	if (!ctx.cr6.eq) goto loc_82BEA9DC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82BEA9DC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29924
	ctx.r4.s64 = ctx.r11.s64 + -29924;
	// bl 0x82bebab0
	ctx.lr = 0x82BEA9EC;
	sub_82BEBAB0(ctx, base);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82beaa04
	if (!ctx.cr6.eq) goto loc_82BEAA04;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82BEAA04:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29956
	ctx.r4.s64 = ctx.r11.s64 + -29956;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAA14;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30248
	ctx.r4.s64 = ctx.r11.s64 + -30248;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAA24;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30264
	ctx.r4.s64 = ctx.r11.s64 + -30264;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAA34;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29976
	ctx.r4.s64 = ctx.r11.s64 + -29976;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAA44;
	sub_82BEBAB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEAA50"))) PPC_WEAK_FUNC(sub_82BEAA50);
PPC_FUNC_IMPL(__imp__sub_82BEAA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c49c
	ctx.lr = 0x82BEAA58;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r28,0(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// ori r11,r11,43691
	ctx.r11.u64 = ctx.r11.u64 | 43691;
	// lwz r18,0(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// subf r11,r28,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r28.s64;
	// subf r10,r18,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r18.s64;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mulhw r10,r10,r6
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32)) >> 32;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82beada0
	if (ctx.cr6.eq) goto loc_82BEADA0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82beada0
	if (ctx.cr6.eq) goto loc_82BEADA0;
	// clrlwi r17,r8,24
	ctx.r17.u64 = ctx.r8.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82beaadc
	if (ctx.cr6.eq) goto loc_82BEAADC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-28224
	ctx.r4.s64 = ctx.r11.s64 + -28224;
	// b 0x82beaae4
	goto loc_82BEAAE4;
loc_82BEAADC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-28236
	ctx.r4.s64 = ctx.r11.s64 + -28236;
loc_82BEAAE4:
	// bl 0x82bebab0
	ctx.lr = 0x82BEAAE8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28268
	ctx.r4.s64 = ctx.r11.s64 + -28268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAAFC;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-28324
	ctx.r4.s64 = ctx.r11.s64 + -28324;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAB18;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r20,r11,-28332
	ctx.r20.s64 = ctx.r11.s64 + -28332;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAB2C;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r22,r11,-10632
	ctx.r22.s64 = ctx.r11.s64 + -10632;
	// beq cr6,0x82beabd4
	if (ctx.cr6.eq) goto loc_82BEABD4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// mr r19,r29
	ctx.r19.u64 = ctx.r29.u64;
	// addi r21,r11,-28344
	ctx.r21.s64 = ctx.r11.s64 + -28344;
loc_82BEAB50:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f1,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEAB5C;
	sub_82BE8AD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEAB6C;
	sub_82BE8AD0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f1,-4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82be8ad0
	ctx.lr = 0x82BEAB7C;
	sub_82BE8AD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAB94;
	sub_82BEBAB0(ctx, base);
	// clrlwi r11,r25,30
	ctx.r11.u64 = ctx.r25.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82beabc0
	if (!ctx.cr6.eq) goto loc_82BEABC0;
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82beabc0
	if (!ctx.cr6.lt) goto loc_82BEABC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEABB4;
	sub_82BEBAB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEABC0;
	sub_82BEBAB0(ctx, base);
loc_82BEABC0:
	// addi r19,r19,-1
	ctx.r19.s64 = ctx.r19.s64 + -1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82beab50
	if (!ctx.cr6.eq) goto loc_82BEAB50;
loc_82BEABD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEABE0;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28368
	ctx.r4.s64 = ctx.r11.s64 + -28368;
	// bl 0x82bebab0
	ctx.lr = 0x82BEABF0;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,30828
	ctx.r4.s64 = ctx.r11.s64 + 30828;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAC00;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-28440
	ctx.r4.s64 = ctx.r11.s64 + -28440;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAC18;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28484
	ctx.r4.s64 = ctx.r11.s64 + -28484;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAC28;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28524
	ctx.r4.s64 = ctx.r11.s64 + -28524;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAC38;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28564
	ctx.r4.s64 = ctx.r11.s64 + -28564;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAC48;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28584
	ctx.r4.s64 = ctx.r11.s64 + -28584;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAC58;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28612
	ctx.r4.s64 = ctx.r11.s64 + -28612;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAC68;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28632
	ctx.r4.s64 = ctx.r11.s64 + -28632;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAC78;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28664
	ctx.r4.s64 = ctx.r11.s64 + -28664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAC8C;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28724
	ctx.r4.s64 = ctx.r11.s64 + -28724;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEACA0;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28744
	ctx.r4.s64 = ctx.r11.s64 + -28744;
	// bl 0x82bebab0
	ctx.lr = 0x82BEACB0;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r11,-28796
	ctx.r4.s64 = ctx.r11.s64 + -28796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEACC4;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28864
	ctx.r4.s64 = ctx.r11.s64 + -28864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEACD8;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28876
	ctx.r4.s64 = ctx.r11.s64 + -28876;
	// bl 0x82bebab0
	ctx.lr = 0x82BEACE8;
	sub_82BEBAB0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82bead54
	if (ctx.cr6.eq) goto loc_82BEAD54;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r29,r18,4
	ctx.r29.s64 = ctx.r18.s64 + 4;
	// addi r27,r11,-28884
	ctx.r27.s64 = ctx.r11.s64 + -28884;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r28,r11,-28896
	ctx.r28.s64 = ctx.r11.s64 + -28896;
loc_82BEAD08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,-4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x82bebab0
	ctx.lr = 0x82BEAD20;
	sub_82BEBAB0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bead48
	if (!ctx.cr6.eq) goto loc_82BEAD48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAD3C;
	sub_82BEBAB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAD48;
	sub_82BEBAB0(ctx, base);
loc_82BEAD48:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82bead08
	if (ctx.cr6.lt) goto loc_82BEAD08;
loc_82BEAD54:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28904
	ctx.r4.s64 = ctx.r11.s64 + -28904;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAD64;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28924
	ctx.r4.s64 = ctx.r11.s64 + -28924;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAD74;
	sub_82BEBAB0(ctx, base);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82bead94
	if (ctx.cr6.eq) goto loc_82BEAD94;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-28944
	ctx.r4.s64 = ctx.r11.s64 + -28944;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAD8C;
	sub_82BEBAB0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82d5c4ec
	__restgprlr_17(ctx, base);
	return;
loc_82BEAD94:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-28960
	ctx.r4.s64 = ctx.r11.s64 + -28960;
	// bl 0x82bebab0
	ctx.lr = 0x82BEADA0;
	sub_82BEBAB0(ctx, base);
loc_82BEADA0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82d5c4ec
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEADA8"))) PPC_WEAK_FUNC(sub_82BEADA8);
PPC_FUNC_IMPL(__imp__sub_82BEADA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c494
	ctx.lr = 0x82BEADB0;
	__savegprlr_15(ctx, base);
	// stfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f29.u64);
	// stfd f30,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f30.u64);
	// stfd f31,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26884
	ctx.r4.s64 = ctx.r11.s64 + -26884;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r18,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r18.u32);
	// bl 0x82bebab0
	ctx.lr = 0x82BEADE4;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26968
	ctx.r4.s64 = ctx.r11.s64 + -26968;
	// bl 0x82bebab0
	ctx.lr = 0x82BEADF4;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26984
	ctx.r4.s64 = ctx.r11.s64 + -26984;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAE04;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27004
	ctx.r4.s64 = ctx.r11.s64 + -27004;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAE14;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27072
	ctx.r4.s64 = ctx.r11.s64 + -27072;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAE24;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27160
	ctx.r4.s64 = ctx.r11.s64 + -27160;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAE34;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27224
	ctx.r4.s64 = ctx.r11.s64 + -27224;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAE44;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27260
	ctx.r4.s64 = ctx.r11.s64 + -27260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAE58;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27280
	ctx.r4.s64 = ctx.r11.s64 + -27280;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAE68;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27316
	ctx.r4.s64 = ctx.r11.s64 + -27316;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAE78;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27344
	ctx.r4.s64 = ctx.r11.s64 + -27344;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAE88;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27356
	ctx.r4.s64 = ctx.r11.s64 + -27356;
	// bl 0x82bebab0
	ctx.lr = 0x82BEAE98;
	sub_82BEBAB0(ctx, base);
	// addi r17,r18,128
	ctx.r17.s64 = ctx.r18.s64 + 128;
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r22,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r22.s64 = ctx.r11.s32 >> 2;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r15,r11,-30968
	ctx.r15.s64 = ctx.r11.s64 + -30968;
	// ble cr6,0x82beafec
	if (!ctx.cr6.gt) goto loc_82BEAFEC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r19,r11,5084
	ctx.r19.s64 = ctx.r11.s64 + 5084;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r23,r11,30664
	ctx.r23.s64 = ctx.r11.s64 + 30664;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r21,r11,-27364
	ctx.r21.s64 = ctx.r11.s64 + -27364;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r20,r11,9608
	ctx.r20.s64 = ctx.r11.s64 + 9608;
loc_82BEAEE4:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lwzx r25,r10,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,232(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// lwz r10,228(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r26,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82beaf68
	if (!ctx.cr6.gt) goto loc_82BEAF68;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
loc_82BEAF10:
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r27,r28,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// beq cr6,0x82beaf38
	if (ctx.cr6.eq) goto loc_82BEAF38;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82beaf40
	goto loc_82BEAF40;
loc_82BEAF38:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_82BEAF40:
	// bl 0x82d5ea60
	ctx.lr = 0x82BEAF44;
	sub_82D5EA60(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82be88d0
	ctx.lr = 0x82BEAF54;
	sub_82BE88D0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r3,236(r27)
	PPC_STORE_U32(ctx.r27.u32 + 236, ctx.r3.u32);
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82beaf10
	if (ctx.cr6.lt) goto loc_82BEAF10;
loc_82BEAF68:
	// lwz r11,248(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 248);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lwz r10,244(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r26,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82beafe0
	if (!ctx.cr6.gt) goto loc_82BEAFE0;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
loc_82BEAF88:
	// lwz r11,244(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r27,r28,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// beq cr6,0x82beafb0
	if (ctx.cr6.eq) goto loc_82BEAFB0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82beafb8
	goto loc_82BEAFB8;
loc_82BEAFB0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_82BEAFB8:
	// bl 0x82d5ea60
	ctx.lr = 0x82BEAFBC;
	sub_82D5EA60(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82be88d0
	ctx.lr = 0x82BEAFCC;
	sub_82BE88D0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r3,144(r27)
	PPC_STORE_U32(ctx.r27.u32 + 144, ctx.r3.u32);
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82beaf88
	if (ctx.cr6.lt) goto loc_82BEAF88;
loc_82BEAFE0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82beaee4
	if (ctx.cr6.lt) goto loc_82BEAEE4;
loc_82BEAFEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82bea060
	ctx.lr = 0x82BEAFF8;
	sub_82BEA060(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27388
	ctx.r4.s64 = ctx.r11.s64 + -27388;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB008;
	sub_82BEBAB0(ctx, base);
	// addi r29,r18,48
	ctx.r29.s64 = ctx.r18.s64 + 48;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r26,r11,-28204
	ctx.r26.s64 = ctx.r11.s64 + -28204;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r25,r11,-28188
	ctx.r25.s64 = ctx.r11.s64 + -28188;
	// beq cr6,0x82beb0a0
	if (ctx.cr6.eq) goto loc_82BEB0A0;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
loc_82BEB03C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwzx r30,r27,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB058;
	sub_82BEBAB0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r30,24
	ctx.r7.s64 = ctx.r30.s64 + 24;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82beaa50
	ctx.lr = 0x82BEB074;
	sub_82BEAA50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB080;
	sub_82BEBAB0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82beb03c
	if (ctx.cr6.lt) goto loc_82BEB03C;
loc_82BEB0A0:
	// addi r29,r18,64
	ctx.r29.s64 = ctx.r18.s64 + 64;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82beb128
	if (ctx.cr6.eq) goto loc_82BEB128;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
loc_82BEB0C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwzx r30,r27,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB0E0;
	sub_82BEBAB0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82beaa50
	ctx.lr = 0x82BEB0FC;
	sub_82BEAA50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB108;
	sub_82BEBAB0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82beb0c4
	if (ctx.cr6.lt) goto loc_82BEB0C4;
loc_82BEB128:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27416
	ctx.r4.s64 = ctx.r11.s64 + -27416;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB138;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27444
	ctx.r4.s64 = ctx.r11.s64 + -27444;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB148;
	sub_82BEBAB0(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82beb190
	if (!ctx.cr6.gt) goto loc_82BEB190;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_82BEB168:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82bea580
	ctx.lr = 0x82BEB180;
	sub_82BEA580(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82beb168
	if (ctx.cr6.lt) goto loc_82BEB168;
loc_82BEB190:
	// addi r21,r18,144
	ctx.r21.s64 = ctx.r18.s64 + 144;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82beb258
	if (ctx.cr6.eq) goto loc_82BEB258;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27508
	ctx.r4.s64 = ctx.r11.s64 + -27508;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB1BC;
	sub_82BEBAB0(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82beb248
	if (ctx.cr6.eq) goto loc_82BEB248;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// addi r27,r11,-30444
	ctx.r27.s64 = ctx.r11.s64 + -30444;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r26,r11,-30428
	ctx.r26.s64 = ctx.r11.s64 + -30428;
loc_82BEB1EC:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r29,r28,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82bebab0
	ctx.lr = 0x82BEB208;
	sub_82BEBAB0(ctx, base);
	// addi r6,r29,12
	ctx.r6.s64 = ctx.r29.s64 + 12;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82be8d90
	ctx.lr = 0x82BEB21C;
	sub_82BE8D90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB228;
	sub_82BEBAB0(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82beb1ec
	if (ctx.cr6.lt) goto loc_82BEB1EC;
loc_82BEB248:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30064
	ctx.r4.s64 = ctx.r11.s64 + -30064;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB258;
	sub_82BEBAB0(ctx, base);
loc_82BEB258:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27536
	ctx.r4.s64 = ctx.r11.s64 + -27536;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB268;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27568
	ctx.r4.s64 = ctx.r11.s64 + -27568;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB278;
	sub_82BEBAB0(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82beb2fc
	if (!ctx.cr6.gt) goto loc_82BEB2FC;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
loc_82BEB298:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lwzx r28,r25,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwz r11,216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// lwz r10,212(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82beb2ec
	if (!ctx.cr6.gt) goto loc_82BEB2EC;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_82BEB2C0:
	// lwz r11,212(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82be9f80
	ctx.lr = 0x82BEB2DC;
	sub_82BE9F80(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82beb2c0
	if (ctx.cr6.lt) goto loc_82BEB2C0;
loc_82BEB2EC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82beb298
	if (ctx.cr6.lt) goto loc_82BEB298;
loc_82BEB2FC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27600
	ctx.r4.s64 = ctx.r11.s64 + -27600;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB30C;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27628
	ctx.r4.s64 = ctx.r11.s64 + -27628;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB31C;
	sub_82BEBAB0(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82beb40c
	if (!ctx.cr6.gt) goto loc_82BEB40C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// addi r22,r11,-30320
	ctx.r22.s64 = ctx.r11.s64 + -30320;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r25,r11,-27676
	ctx.r25.s64 = ctx.r11.s64 + -27676;
loc_82BEB34C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB35C;
	sub_82BEBAB0(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwzx r30,r26,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82beb3a8
	if (!ctx.cr6.gt) goto loc_82BEB3A8;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
loc_82BEB380:
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r5,r28,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82bea608
	ctx.lr = 0x82BEB398;
	sub_82BEA608(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82beb380
	if (!ctx.cr6.eq) goto loc_82BEB380;
loc_82BEB3A8:
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82beb3f0
	if (!ctx.cr6.gt) goto loc_82BEB3F0;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
loc_82BEB3C4:
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r5,r28,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82be9610
	ctx.lr = 0x82BEB3E0;
	sub_82BE9610(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82beb3c4
	if (!ctx.cr6.eq) goto loc_82BEB3C4;
loc_82BEB3F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB3FC;
	sub_82BEBAB0(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82beb34c
	if (ctx.cr6.lt) goto loc_82BEB34C;
loc_82BEB40C:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82beb454
	if (!ctx.cr6.gt) goto loc_82BEB454;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_82BEB42C:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82bea390
	ctx.lr = 0x82BEB444;
	sub_82BEA390(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82beb42c
	if (ctx.cr6.lt) goto loc_82BEB42C;
loc_82BEB454:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27708
	ctx.r4.s64 = ctx.r11.s64 + -27708;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB464;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27736
	ctx.r4.s64 = ctx.r11.s64 + -27736;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB474;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27784
	ctx.r4.s64 = ctx.r11.s64 + -27784;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB484;
	sub_82BEBAB0(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82beb51c
	if (ctx.cr6.eq) goto loc_82BEB51C;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82beb568
	if (ctx.cr6.eq) goto loc_82BEB568;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// addi r28,r11,-27880
	ctx.r28.s64 = ctx.r11.s64 + -27880;
loc_82BEB4C4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82c16c10
	ctx.lr = 0x82BEB4DC;
	sub_82C16C10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82beb4f8
	if (ctx.cr6.eq) goto loc_82BEB4F8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB4F8;
	sub_82BEBAB0(ctx, base);
loc_82BEB4F8:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82beb4c4
	if (ctx.cr6.lt) goto loc_82BEB4C4;
	// b 0x82beb568
	goto loc_82BEB568;
loc_82BEB51C:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82beb568
	if (ctx.cr6.eq) goto loc_82BEB568;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r29,r11,-27948
	ctx.r29.s64 = ctx.r11.s64 + -27948;
loc_82BEB53C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB54C;
	sub_82BEBAB0(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82beb53c
	if (ctx.cr6.lt) goto loc_82BEB53C;
loc_82BEB568:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lfs f31,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// lfs f30,-27952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27952);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82beb5a8
	if (ctx.cr6.eq) goto loc_82BEB5A8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f31,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
loc_82BEB5A8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31620
	ctx.r4.s64 = ctx.r11.s64 + -31620;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB5B8;
	sub_82BEBAB0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82be8ad0
	ctx.lr = 0x82BEB5C4;
	sub_82BE8AD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82be8ad0
	ctx.lr = 0x82BEB5D4;
	sub_82BE8AD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82be8ad0
	ctx.lr = 0x82BEB5E4;
	sub_82BE8AD0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-27988
	ctx.r4.s64 = ctx.r11.s64 + -27988;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB600;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-31776
	ctx.r4.s64 = ctx.r11.s64 + -31776;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB610;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28012
	ctx.r4.s64 = ctx.r11.s64 + -28012;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB620;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28044
	ctx.r4.s64 = ctx.r11.s64 + -28044;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB630;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28056
	ctx.r4.s64 = ctx.r11.s64 + -28056;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB640;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28116
	ctx.r4.s64 = ctx.r11.s64 + -28116;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB650;
	sub_82BEBAB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28128
	ctx.r4.s64 = ctx.r11.s64 + -28128;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB660;
	sub_82BEBAB0(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82beb6d4
	if (!ctx.cr6.gt) goto loc_82BEB6D4;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82BEB680:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r11,232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 232);
	// lwz r10,228(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82beb6c4
	if (!ctx.cr6.gt) goto loc_82BEB6C4;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_82BEB6A4:
	// lwz r9,228(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r16,236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 236, ctx.r16.u32);
	// bne cr6,0x82beb6a4
	if (!ctx.cr6.eq) goto loc_82BEB6A4;
loc_82BEB6C4:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82beb680
	if (!ctx.cr6.eq) goto loc_82BEB680;
loc_82BEB6D4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28144
	ctx.r4.s64 = ctx.r11.s64 + -28144;
	// bl 0x82bebab0
	ctx.lr = 0x82BEB6E4;
	sub_82BEBAB0(ctx, base);
	// lwz r3,0(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82beb704
	if (ctx.cr6.eq) goto loc_82BEB704;
loc_82BEB6F0:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8247d948
	ctx.lr = 0x82BEB6F8;
	sub_8247D948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82beb6f0
	if (!ctx.cr6.eq) goto loc_82BEB6F0;
loc_82BEB704:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// stw r11,4(r15)
	PPC_STORE_U32(ctx.r15.u32 + 4, ctx.r11.u32);
	// stw r11,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r11.u32);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// lfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f30,-160(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82d5c4e4
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB730"))) PPC_WEAK_FUNC(sub_82BEB730);
PPC_FUNC_IMPL(__imp__sub_82BEB730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82BEB738;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stb r30,529(r31)
	PPC_STORE_U8(ctx.r31.u32 + 529, ctx.r30.u8);
	// stb r26,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r26.u8);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// beq cr6,0x82beb7c0
	if (ctx.cr6.eq) goto loc_82BEB7C0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-26840
	ctx.r4.s64 = ctx.r11.s64 + -26840;
	// bl 0x82d61e20
	ctx.lr = 0x82BEB788;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beb7c0
	if (!ctx.cr6.eq) goto loc_82BEB7C0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// beq cr6,0x82beb7a4
	if (ctx.cr6.eq) goto loc_82BEB7A4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82beb7c0
	if (!ctx.cr6.eq) goto loc_82BEB7C0;
loc_82BEB7A4:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r30,r11,16960
	ctx.r30.u64 = ctx.r11.u64 | 16960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8247d8e0
	ctx.lr = 0x82BEB7B4;
	sub_8247D8E0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r26,529(r31)
	PPC_STORE_U8(ctx.r31.u32 + 529, ctx.r26.u8);
loc_82BEB7C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82beb7dc
	if (!ctx.cr6.eq) goto loc_82BEB7DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d5fc58
	ctx.lr = 0x82BEB7D8;
	sub_82D5FC58(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82BEB7DC:
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,17
	ctx.r3.s64 = ctx.r31.s64 + 17;
	// bl 0x82d5e188
	ctx.lr = 0x82BEB7EC;
	sub_82D5E188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB7F8"))) PPC_WEAK_FUNC(sub_82BEB7F8);
PPC_FUNC_IMPL(__imp__sub_82BEB7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BEB800;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82beb874
	if (ctx.cr6.lt) goto loc_82BEB874;
	// lbz r10,529(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 529);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82beb874
	if (ctx.cr6.eq) goto loc_82BEB874;
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// ori r10,r10,33920
	ctx.r10.u64 = ctx.r10.u64 | 33920;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82beb84c
	if (!ctx.cr6.gt) goto loc_82BEB84C;
	// add r29,r30,r10
	ctx.r29.u64 = ctx.r30.u64 + ctx.r10.u64;
loc_82BEB84C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8247d8e0
	ctx.lr = 0x82BEB854;
	sub_8247D8E0(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d5c630
	ctx.lr = 0x82BEB864;
	sub_82D5C630(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8247d948
	ctx.lr = 0x82BEB86C;
	sub_8247D948(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82BEB874:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82beb8b4
	if (ctx.cr6.gt) goto loc_82BEB8B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82d5c630
	ctx.lr = 0x82BEB89C;
	sub_82D5C630(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
loc_82BEB8B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB8C0"))) PPC_WEAK_FUNC(sub_82BEB8C0);
PPC_FUNC_IMPL(__imp__sub_82BEB8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BEB8C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82beb900
	if (ctx.cr6.eq) goto loc_82BEB900;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d60208
	ctx.lr = 0x82BEB8F8;
	sub_82D60208(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
loc_82BEB900:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82beb958
	if (!ctx.cr6.gt) goto loc_82BEB958;
loc_82BEB910:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82beb958
	if (ctx.cr6.gt) goto loc_82BEB958;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82d5c630
	ctx.lr = 0x82BEB938;
	sub_82D5C630(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 + ctx.r30.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// blt cr6,0x82beb910
	if (ctx.cr6.lt) goto loc_82BEB910;
loc_82BEB958:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB968"))) PPC_WEAK_FUNC(sub_82BEB968);
PPC_FUNC_IMPL(__imp__sub_82BEB968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BEB970;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82beb9a8
	if (ctx.cr6.eq) goto loc_82BEB9A8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d60498
	ctx.lr = 0x82BEB9A0;
	sub_82D60498(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
loc_82BEB9A8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82beb9e4
	if (!ctx.cr6.gt) goto loc_82BEB9E4;
loc_82BEB9B8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82beb7f8
	ctx.lr = 0x82BEB9C8;
	sub_82BEB7F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82beb9e4
	if (ctx.cr6.eq) goto loc_82BEB9E4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82beb9b8
	if (ctx.cr6.lt) goto loc_82BEB9B8;
loc_82BEB9E4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEB9F0"))) PPC_WEAK_FUNC(sub_82BEB9F0);
PPC_FUNC_IMPL(__imp__sub_82BEB9F0) {
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
	// beq cr6,0x82beba38
	if (ctx.cr6.eq) goto loc_82BEBA38;
	// lbz r11,529(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 529);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82beba20
	if (ctx.cr6.eq) goto loc_82BEBA20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8247d948
	ctx.lr = 0x82BEBA20;
	sub_8247D948(ctx, base);
loc_82BEBA20:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82beba30
	if (ctx.cr6.eq) goto loc_82BEBA30;
	// bl 0x82d5fd20
	ctx.lr = 0x82BEBA30;
	sub_82D5FD20(ctx, base);
loc_82BEBA30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8247d948
	ctx.lr = 0x82BEBA38;
	sub_8247D948(ctx, base);
loc_82BEBA38:
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

__attribute__((alias("__imp__sub_82BEBA50"))) PPC_WEAK_FUNC(sub_82BEBA50);
PPC_FUNC_IMPL(__imp__sub_82BEBA50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82beb8c0
	sub_82BEB8C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEBA78"))) PPC_WEAK_FUNC(sub_82BEBA78);
PPC_FUNC_IMPL(__imp__sub_82BEBA78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBA80"))) PPC_WEAK_FUNC(sub_82BEBA80);
PPC_FUNC_IMPL(__imp__sub_82BEBA80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82beb968
	sub_82BEB968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEBAA8"))) PPC_WEAK_FUNC(sub_82BEBAA8);
PPC_FUNC_IMPL(__imp__sub_82BEBAA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBAB0"))) PPC_WEAK_FUNC(sub_82BEBAB0);
PPC_FUNC_IMPL(__imp__sub_82BEBAB0) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,2208
	ctx.r10.s64 = ctx.r1.s64 + 2208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d64498
	ctx.lr = 0x82BEBAFC;
	sub_82D64498(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bebb3c
	if (ctx.cr6.eq) goto loc_82BEBB3C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BEBB0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bebb0c
	if (!ctx.cr6.eq) goto loc_82BEBB0C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beb968
	ctx.lr = 0x82BEBB38;
	sub_82BEB968(ctx, base);
	// b 0x82bebb40
	goto loc_82BEBB40;
loc_82BEBB3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BEBB40:
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
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

__attribute__((alias("__imp__sub_82BEBB58"))) PPC_WEAK_FUNC(sub_82BEBB58);
PPC_FUNC_IMPL(__imp__sub_82BEBB58) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82d5f540
	sub_82D5F540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEBB7C"))) PPC_WEAK_FUNC(sub_82BEBB7C);
PPC_FUNC_IMPL(__imp__sub_82BEBB7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBB80"))) PPC_WEAK_FUNC(sub_82BEBB80);
PPC_FUNC_IMPL(__imp__sub_82BEBB80) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bebbfc
	if (ctx.cr6.eq) goto loc_82BEBBFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bebbc0
	if (ctx.cr6.eq) goto loc_82BEBBC0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82d60cb0
	ctx.lr = 0x82BEBBB0;
	sub_82D60CB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BEBBC0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82bebbec
	if (!ctx.cr6.eq) goto loc_82BEBBEC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82bebbfc
	if (ctx.cr6.gt) goto loc_82BEBBFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BEBBEC:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82bebbfc
	if (!ctx.cr6.eq) goto loc_82BEBBFC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82BEBBFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBC10"))) PPC_WEAK_FUNC(sub_82BEBC10);
PPC_FUNC_IMPL(__imp__sub_82BEBC10) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bebc50
	if (ctx.cr6.eq) goto loc_82BEBC50;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bebc4c
	if (ctx.cr6.eq) goto loc_82BEBC4C;
	// bl 0x82d60ad8
	ctx.lr = 0x82BEBC3C;
	sub_82D60AD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BEBC4C:
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82BEBC50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBC60"))) PPC_WEAK_FUNC(sub_82BEBC60);
PPC_FUNC_IMPL(__imp__sub_82BEBC60) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bebcb8
	if (ctx.cr6.eq) goto loc_82BEBCB8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bebca8
	if (ctx.cr6.eq) goto loc_82BEBCA8;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x82d61188
	ctx.lr = 0x82BEBC98;
	sub_82D61188(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BEBCA8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82beb7f8
	ctx.lr = 0x82BEBCB8;
	sub_82BEB7F8(ctx, base);
loc_82BEBCB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBCC8"))) PPC_WEAK_FUNC(sub_82BEBCC8);
PPC_FUNC_IMPL(__imp__sub_82BEBCC8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82BEBCEC:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82bebcec
	if (!ctx.cr6.eq) goto loc_82BEBCEC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x82beb968
	sub_82BEB968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEBD18"))) PPC_WEAK_FUNC(sub_82BEBD18);
PPC_FUNC_IMPL(__imp__sub_82BEBD18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBD20"))) PPC_WEAK_FUNC(sub_82BEBD20);
PPC_FUNC_IMPL(__imp__sub_82BEBD20) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bebd74
	if (ctx.cr6.eq) goto loc_82BEBD74;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bebd60
	if (ctx.cr6.eq) goto loc_82BEBD60;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82d644a8
	ctx.lr = 0x82BEBD50;
	sub_82D644A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BEBD60:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bebd74
	if (ctx.cr6.lt) goto loc_82BEBD74;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BEBD74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBD88"))) PPC_WEAK_FUNC(sub_82BEBD88);
PPC_FUNC_IMPL(__imp__sub_82BEBD88) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82d64508
	sub_82D64508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEBDAC"))) PPC_WEAK_FUNC(sub_82BEBDAC);
PPC_FUNC_IMPL(__imp__sub_82BEBDAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBDB0"))) PPC_WEAK_FUNC(sub_82BEBDB0);
PPC_FUNC_IMPL(__imp__sub_82BEBDB0) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stb r10,529(r11)
	PPC_STORE_U8(ctx.r11.u32 + 529, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBDE8"))) PPC_WEAK_FUNC(sub_82BEBDE8);
PPC_FUNC_IMPL(__imp__sub_82BEBDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82BEBDF0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,532
	ctx.r3.s64 = 532;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8247d8e0
	ctx.lr = 0x82BEBE10;
	sub_8247D8E0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bebe38
	if (ctx.cr6.eq) goto loc_82BEBE38;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82beb730
	ctx.lr = 0x82BEBE30;
	sub_82BEB730(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82bebe3c
	goto loc_82BEBE3C;
loc_82BEBE38:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BEBE3C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82bebe90
	if (!ctx.cr6.eq) goto loc_82BEBE90;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bebe90
	if (!ctx.cr6.eq) goto loc_82BEBE90;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bebe90
	if (!ctx.cr6.eq) goto loc_82BEBE90;
	// lbz r11,529(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 529);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bebe70
	if (ctx.cr6.eq) goto loc_82BEBE70;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8247d948
	ctx.lr = 0x82BEBE70;
	sub_8247D948(ctx, base);
loc_82BEBE70:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bebe80
	if (ctx.cr6.eq) goto loc_82BEBE80;
	// bl 0x82d5fd20
	ctx.lr = 0x82BEBE80;
	sub_82D5FD20(ctx, base);
loc_82BEBE80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8247d948
	ctx.lr = 0x82BEBE88;
	sub_8247D948(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bebe94
	goto loc_82BEBE94;
loc_82BEBE90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BEBE94:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEBE9C"))) PPC_WEAK_FUNC(sub_82BEBE9C);
PPC_FUNC_IMPL(__imp__sub_82BEBE9C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8247d948
	ctx.lr = 0x82BEBEB4;
	sub_8247D948(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBEC8"))) PPC_WEAK_FUNC(sub_82BEBEC8);
PPC_FUNC_IMPL(__imp__sub_82BEBEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,28228
	ctx.r11.s64 = ctx.r11.s64 + 28228;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBED8"))) PPC_WEAK_FUNC(sub_82BEBED8);
PPC_FUNC_IMPL(__imp__sub_82BEBED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lfs f13,21344(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
loc_82BEBEFC:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// stfs f0,-28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// stfs f0,-24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne cr6,0x82bebefc
	if (!ctx.cr6.eq) goto loc_82BEBEFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// lfs f0,-18944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18944);
	ctx.f0.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEBF58"))) PPC_WEAK_FUNC(sub_82BEBF58);
PPC_FUNC_IMPL(__imp__sub_82BEBF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lfs f13,21344(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
loc_82BEBF7C:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// stfs f0,-28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// stfs f0,-24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne cr6,0x82bebf7c
	if (!ctx.cr6.eq) goto loc_82BEBF7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// lfs f12,-18944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18944);
	ctx.f12.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f12,92(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f13,116(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f13,156(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stw r10,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEC020"))) PPC_WEAK_FUNC(sub_82BEC020);
PPC_FUNC_IMPL(__imp__sub_82BEC020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,14280
	ctx.r11.s64 = ctx.r11.s64 + 14280;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEC030"))) PPC_WEAK_FUNC(sub_82BEC030);
PPC_FUNC_IMPL(__imp__sub_82BEC030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r8,8
	ctx.r8.s64 = 8;
	// lfs f13,21344(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f12,21360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21360);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,21348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// sth r10,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r10.u16);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// sth r10,62(r3)
	PPC_STORE_U16(ctx.r3.u32 + 62, ctx.r10.u16);
	// stfs f12,72(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEC0D0"))) PPC_WEAK_FUNC(sub_82BEC0D0);
PPC_FUNC_IMPL(__imp__sub_82BEC0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// lfs f0,21348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stfs f0,-84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// stfs f0,-100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// stfs f0,-52(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-72(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f12,-120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f12,-104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f13,21344(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lfs f12,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r10,64
	ctx.r11.s64 = ctx.r10.s64 + 64;
	// lfs f0,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-68(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
loc_82BEC1D4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82bec1f4
	if (!ctx.cr0.eq) goto loc_82BEC1F4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bec1d4
	if (!ctx.cr6.eq) goto loc_82BEC1D4;
loc_82BEC1F4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEC208"))) PPC_WEAK_FUNC(sub_82BEC208);
PPC_FUNC_IMPL(__imp__sub_82BEC208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEC258"))) PPC_WEAK_FUNC(sub_82BEC258);
PPC_FUNC_IMPL(__imp__sub_82BEC258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82bec294
	if (!ctx.cr6.eq) goto loc_82BEC294;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82bec294
	if (!ctx.cr6.eq) goto loc_82BEC294;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82bec298
	if (ctx.cr6.eq) goto loc_82BEC298;
loc_82BEC294:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BEC298:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bec2d8
	if (!ctx.cr6.eq) goto loc_82BEC2D8;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82bec2d8
	if (!ctx.cr6.eq) goto loc_82BEC2D8;
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82bec2dc
	if (ctx.cr6.eq) goto loc_82BEC2DC;
loc_82BEC2D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BEC2DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEC2F0"))) PPC_WEAK_FUNC(sub_82BEC2F0);
PPC_FUNC_IMPL(__imp__sub_82BEC2F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// bgt cr6,0x82bec920
	if (ctx.cr6.gt) goto loc_82BEC920;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-15596
	ctx.r12.s64 = ctx.r12.s64 + -15596;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82BEC418;
	case 1:
		goto loc_82BEC42C;
	case 2:
		goto loc_82BEC440;
	case 3:
		goto loc_82BEC454;
	case 4:
		goto loc_82BEC468;
	case 5:
		goto loc_82BEC47C;
	case 6:
		goto loc_82BEC490;
	case 7:
		goto loc_82BEC4A4;
	case 8:
		goto loc_82BEC4B8;
	case 9:
		goto loc_82BEC4CC;
	case 10:
		goto loc_82BEC4E0;
	case 11:
		goto loc_82BEC4F4;
	case 12:
		goto loc_82BEC508;
	case 13:
		goto loc_82BEC51C;
	case 14:
		goto loc_82BEC530;
	case 15:
		goto loc_82BEC544;
	case 16:
		goto loc_82BEC558;
	case 17:
		goto loc_82BEC56C;
	case 18:
		goto loc_82BEC580;
	case 19:
		goto loc_82BEC594;
	case 20:
		goto loc_82BEC5A8;
	case 21:
		goto loc_82BEC5BC;
	case 22:
		goto loc_82BEC5D0;
	case 23:
		goto loc_82BEC5E4;
	case 24:
		goto loc_82BEC5F8;
	case 25:
		goto loc_82BEC60C;
	case 26:
		goto loc_82BEC620;
	case 27:
		goto loc_82BEC634;
	case 28:
		goto loc_82BEC648;
	case 29:
		goto loc_82BEC65C;
	case 30:
		goto loc_82BEC670;
	case 31:
		goto loc_82BEC684;
	case 32:
		goto loc_82BEC698;
	case 33:
		goto loc_82BEC6AC;
	case 34:
		goto loc_82BEC6C0;
	case 35:
		goto loc_82BEC6D4;
	case 36:
		goto loc_82BEC6E8;
	case 37:
		goto loc_82BEC6FC;
	case 38:
		goto loc_82BEC710;
	case 39:
		goto loc_82BEC724;
	case 40:
		goto loc_82BEC738;
	case 41:
		goto loc_82BEC74C;
	case 42:
		goto loc_82BEC760;
	case 43:
		goto loc_82BEC774;
	case 44:
		goto loc_82BEC788;
	case 45:
		goto loc_82BEC79C;
	case 46:
		goto loc_82BEC7B0;
	case 47:
		goto loc_82BEC7C4;
	case 48:
		goto loc_82BEC7D8;
	case 49:
		goto loc_82BEC7EC;
	case 50:
		goto loc_82BEC800;
	case 51:
		goto loc_82BEC814;
	case 52:
		goto loc_82BEC828;
	case 53:
		goto loc_82BEC83C;
	case 54:
		goto loc_82BEC850;
	case 55:
		goto loc_82BEC864;
	case 56:
		goto loc_82BEC878;
	case 57:
		goto loc_82BEC88C;
	case 58:
		goto loc_82BEC8A0;
	case 59:
		goto loc_82BEC8B4;
	case 60:
		goto loc_82BEC8C8;
	case 61:
		goto loc_82BEC8DC;
	case 62:
		goto loc_82BEC8F0;
	case 63:
		goto loc_82BEC904;
	case 64:
		goto loc_82BEC918;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-15336(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15336);
	// lwz r21,-15316(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15316);
	// lwz r21,-15296(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15296);
	// lwz r21,-15276(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15276);
	// lwz r21,-15256(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15256);
	// lwz r21,-15236(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15236);
	// lwz r21,-15216(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15216);
	// lwz r21,-15196(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15196);
	// lwz r21,-15176(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15176);
	// lwz r21,-15156(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15156);
	// lwz r21,-15136(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15136);
	// lwz r21,-15116(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15116);
	// lwz r21,-15096(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15096);
	// lwz r21,-15076(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15076);
	// lwz r21,-15056(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15056);
	// lwz r21,-15036(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15036);
	// lwz r21,-15016(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15016);
	// lwz r21,-14996(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14996);
	// lwz r21,-14976(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14976);
	// lwz r21,-14956(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14956);
	// lwz r21,-14936(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14936);
	// lwz r21,-14916(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14916);
	// lwz r21,-14896(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14896);
	// lwz r21,-14876(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14876);
	// lwz r21,-14856(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14856);
	// lwz r21,-14836(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14836);
	// lwz r21,-14816(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14816);
	// lwz r21,-14796(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14796);
	// lwz r21,-14776(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14776);
	// lwz r21,-14756(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14756);
	// lwz r21,-14736(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14736);
	// lwz r21,-14716(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14716);
	// lwz r21,-14696(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14696);
	// lwz r21,-14676(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14676);
	// lwz r21,-14656(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14656);
	// lwz r21,-14636(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14636);
	// lwz r21,-14616(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14616);
	// lwz r21,-14596(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14596);
	// lwz r21,-14576(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14576);
	// lwz r21,-14556(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14556);
	// lwz r21,-14536(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14536);
	// lwz r21,-14516(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14516);
	// lwz r21,-14496(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14496);
	// lwz r21,-14476(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14476);
	// lwz r21,-14456(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14456);
	// lwz r21,-14436(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14436);
	// lwz r21,-14416(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14416);
	// lwz r21,-14396(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14396);
	// lwz r21,-14376(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14376);
	// lwz r21,-14356(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14356);
	// lwz r21,-14336(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14336);
	// lwz r21,-14316(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14316);
	// lwz r21,-14296(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14296);
	// lwz r21,-14276(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14276);
	// lwz r21,-14256(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14256);
	// lwz r21,-14236(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14236);
	// lwz r21,-14216(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14216);
	// lwz r21,-14196(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14196);
	// lwz r21,-14176(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14176);
	// lwz r21,-14156(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14156);
	// lwz r21,-14136(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14136);
	// lwz r21,-14116(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14116);
	// lwz r21,-14096(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14096);
	// lwz r21,-14076(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14076);
	// lwz r21,-14056(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14056);
loc_82BEC418:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1824
	ctx.r11.s64 = ctx.r11.s64 + -1824;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC42C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1804
	ctx.r11.s64 = ctx.r11.s64 + -1804;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC440:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1788
	ctx.r11.s64 = ctx.r11.s64 + -1788;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC454:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1752
	ctx.r11.s64 = ctx.r11.s64 + -1752;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC468:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1716
	ctx.r11.s64 = ctx.r11.s64 + -1716;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC47C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1696
	ctx.r11.s64 = ctx.r11.s64 + -1696;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC490:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1672
	ctx.r11.s64 = ctx.r11.s64 + -1672;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC4A4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1648
	ctx.r11.s64 = ctx.r11.s64 + -1648;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC4B8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1624
	ctx.r11.s64 = ctx.r11.s64 + -1624;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC4CC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1604
	ctx.r11.s64 = ctx.r11.s64 + -1604;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC4E0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1580
	ctx.r11.s64 = ctx.r11.s64 + -1580;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC4F4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1556
	ctx.r11.s64 = ctx.r11.s64 + -1556;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC508:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1532
	ctx.r11.s64 = ctx.r11.s64 + -1532;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC51C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1504
	ctx.r11.s64 = ctx.r11.s64 + -1504;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC530:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1472
	ctx.r11.s64 = ctx.r11.s64 + -1472;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC544:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1440
	ctx.r11.s64 = ctx.r11.s64 + -1440;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC558:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC56C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1376
	ctx.r11.s64 = ctx.r11.s64 + -1376;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC580:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1344
	ctx.r11.s64 = ctx.r11.s64 + -1344;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC594:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1316
	ctx.r11.s64 = ctx.r11.s64 + -1316;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC5A8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1288
	ctx.r11.s64 = ctx.r11.s64 + -1288;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC5BC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1260
	ctx.r11.s64 = ctx.r11.s64 + -1260;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC5D0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1232
	ctx.r11.s64 = ctx.r11.s64 + -1232;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC5E4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1204
	ctx.r11.s64 = ctx.r11.s64 + -1204;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC5F8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1180
	ctx.r11.s64 = ctx.r11.s64 + -1180;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC60C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1148
	ctx.r11.s64 = ctx.r11.s64 + -1148;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC620:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1116
	ctx.r11.s64 = ctx.r11.s64 + -1116;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC634:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1088
	ctx.r11.s64 = ctx.r11.s64 + -1088;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC648:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1052
	ctx.r11.s64 = ctx.r11.s64 + -1052;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC65C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-1020
	ctx.r11.s64 = ctx.r11.s64 + -1020;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC670:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-988
	ctx.r11.s64 = ctx.r11.s64 + -988;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC684:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-956
	ctx.r11.s64 = ctx.r11.s64 + -956;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC698:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-924
	ctx.r11.s64 = ctx.r11.s64 + -924;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC6AC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-896
	ctx.r11.s64 = ctx.r11.s64 + -896;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC6C0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-864
	ctx.r11.s64 = ctx.r11.s64 + -864;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC6D4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-832
	ctx.r11.s64 = ctx.r11.s64 + -832;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC6E8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-804
	ctx.r11.s64 = ctx.r11.s64 + -804;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC6FC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-776
	ctx.r11.s64 = ctx.r11.s64 + -776;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC710:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-740
	ctx.r11.s64 = ctx.r11.s64 + -740;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC724:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-712
	ctx.r11.s64 = ctx.r11.s64 + -712;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC738:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-684
	ctx.r11.s64 = ctx.r11.s64 + -684;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC74C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-656
	ctx.r11.s64 = ctx.r11.s64 + -656;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC760:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-620
	ctx.r11.s64 = ctx.r11.s64 + -620;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC774:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-592
	ctx.r11.s64 = ctx.r11.s64 + -592;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC788:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-564
	ctx.r11.s64 = ctx.r11.s64 + -564;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC79C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-532
	ctx.r11.s64 = ctx.r11.s64 + -532;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC7B0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-496
	ctx.r11.s64 = ctx.r11.s64 + -496;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC7C4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-460
	ctx.r11.s64 = ctx.r11.s64 + -460;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC7D8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-428
	ctx.r11.s64 = ctx.r11.s64 + -428;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC7EC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-400
	ctx.r11.s64 = ctx.r11.s64 + -400;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC800:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-376
	ctx.r11.s64 = ctx.r11.s64 + -376;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC814:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-344
	ctx.r11.s64 = ctx.r11.s64 + -344;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC828:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-308
	ctx.r11.s64 = ctx.r11.s64 + -308;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC83C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-276
	ctx.r11.s64 = ctx.r11.s64 + -276;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC850:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-248
	ctx.r11.s64 = ctx.r11.s64 + -248;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC864:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-228
	ctx.r11.s64 = ctx.r11.s64 + -228;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC878:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-204
	ctx.r11.s64 = ctx.r11.s64 + -204;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC88C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-176
	ctx.r11.s64 = ctx.r11.s64 + -176;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC8A0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-156
	ctx.r11.s64 = ctx.r11.s64 + -156;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC8B4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-124
	ctx.r11.s64 = ctx.r11.s64 + -124;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC8C8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-108
	ctx.r11.s64 = ctx.r11.s64 + -108;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC8DC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC8F0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC904:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEC918:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-24912
	ctx.r11.s64 = ctx.r11.s64 + -24912;
loc_82BEC920:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEC928"))) PPC_WEAK_FUNC(sub_82BEC928);
PPC_FUNC_IMPL(__imp__sub_82BEC928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEC930;
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
	// beq cr6,0x82bed468
	if (ctx.cr6.eq) goto loc_82BED468;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-23064
	ctx.r30.s64 = ctx.r11.s64 + -23064;
	// addi r4,r30,-1824
	ctx.r4.s64 = ctx.r30.s64 + -1824;
	// bl 0x82d61e20
	ctx.lr = 0x82BEC958;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bec978
	if (!ctx.cr6.eq) goto loc_82BEC978;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEC978:
	// addi r4,r30,-1804
	ctx.r4.s64 = ctx.r30.s64 + -1804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEC984;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bec9a0
	if (!ctx.cr6.eq) goto loc_82BEC9A0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEC9A0:
	// addi r4,r30,-1788
	ctx.r4.s64 = ctx.r30.s64 + -1788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEC9AC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bec9cc
	if (!ctx.cr6.eq) goto loc_82BEC9CC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEC9CC:
	// addi r4,r30,-1752
	ctx.r4.s64 = ctx.r30.s64 + -1752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEC9D8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bec9f8
	if (!ctx.cr6.eq) goto loc_82BEC9F8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEC9F8:
	// addi r4,r30,-1716
	ctx.r4.s64 = ctx.r30.s64 + -1716;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECA04;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beca24
	if (!ctx.cr6.eq) goto loc_82BECA24;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECA24:
	// addi r4,r30,-1696
	ctx.r4.s64 = ctx.r30.s64 + -1696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECA30;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beca50
	if (!ctx.cr6.eq) goto loc_82BECA50;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECA50:
	// addi r4,r30,-1672
	ctx.r4.s64 = ctx.r30.s64 + -1672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECA5C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beca7c
	if (!ctx.cr6.eq) goto loc_82BECA7C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECA7C:
	// addi r4,r30,-1648
	ctx.r4.s64 = ctx.r30.s64 + -1648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECA88;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becaa8
	if (!ctx.cr6.eq) goto loc_82BECAA8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECAA8:
	// addi r4,r30,-1624
	ctx.r4.s64 = ctx.r30.s64 + -1624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECAB4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becad4
	if (!ctx.cr6.eq) goto loc_82BECAD4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECAD4:
	// addi r4,r30,-1604
	ctx.r4.s64 = ctx.r30.s64 + -1604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECAE0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becb00
	if (!ctx.cr6.eq) goto loc_82BECB00;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECB00:
	// addi r4,r30,-1580
	ctx.r4.s64 = ctx.r30.s64 + -1580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECB0C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becb2c
	if (!ctx.cr6.eq) goto loc_82BECB2C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECB2C:
	// addi r4,r30,-1556
	ctx.r4.s64 = ctx.r30.s64 + -1556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECB38;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becb58
	if (!ctx.cr6.eq) goto loc_82BECB58;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECB58:
	// addi r4,r30,-1532
	ctx.r4.s64 = ctx.r30.s64 + -1532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECB64;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becb84
	if (!ctx.cr6.eq) goto loc_82BECB84;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECB84:
	// addi r4,r30,-1504
	ctx.r4.s64 = ctx.r30.s64 + -1504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECB90;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becbb0
	if (!ctx.cr6.eq) goto loc_82BECBB0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECBB0:
	// addi r4,r30,-1472
	ctx.r4.s64 = ctx.r30.s64 + -1472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECBBC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becbdc
	if (!ctx.cr6.eq) goto loc_82BECBDC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECBDC:
	// addi r4,r30,-1440
	ctx.r4.s64 = ctx.r30.s64 + -1440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECBE8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becc08
	if (!ctx.cr6.eq) goto loc_82BECC08;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECC08:
	// addi r4,r30,-1408
	ctx.r4.s64 = ctx.r30.s64 + -1408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECC14;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becc34
	if (!ctx.cr6.eq) goto loc_82BECC34;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECC34:
	// addi r4,r30,-1376
	ctx.r4.s64 = ctx.r30.s64 + -1376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECC40;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becc60
	if (!ctx.cr6.eq) goto loc_82BECC60;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECC60:
	// addi r4,r30,-1344
	ctx.r4.s64 = ctx.r30.s64 + -1344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECC6C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becc8c
	if (!ctx.cr6.eq) goto loc_82BECC8C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECC8C:
	// addi r4,r30,-1316
	ctx.r4.s64 = ctx.r30.s64 + -1316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECC98;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beccb8
	if (!ctx.cr6.eq) goto loc_82BECCB8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECCB8:
	// addi r4,r30,-1288
	ctx.r4.s64 = ctx.r30.s64 + -1288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECCC4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becce4
	if (!ctx.cr6.eq) goto loc_82BECCE4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECCE4:
	// addi r4,r30,-1260
	ctx.r4.s64 = ctx.r30.s64 + -1260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECCF0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becd10
	if (!ctx.cr6.eq) goto loc_82BECD10;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECD10:
	// addi r4,r30,-1232
	ctx.r4.s64 = ctx.r30.s64 + -1232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECD1C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becd3c
	if (!ctx.cr6.eq) goto loc_82BECD3C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECD3C:
	// addi r4,r30,-1204
	ctx.r4.s64 = ctx.r30.s64 + -1204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECD48;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becd68
	if (!ctx.cr6.eq) goto loc_82BECD68;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECD68:
	// addi r4,r30,-1180
	ctx.r4.s64 = ctx.r30.s64 + -1180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECD74;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becd94
	if (!ctx.cr6.eq) goto loc_82BECD94;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECD94:
	// addi r4,r30,-1148
	ctx.r4.s64 = ctx.r30.s64 + -1148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECDA0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becdc0
	if (!ctx.cr6.eq) goto loc_82BECDC0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECDC0:
	// addi r4,r30,-1116
	ctx.r4.s64 = ctx.r30.s64 + -1116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECDCC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becdec
	if (!ctx.cr6.eq) goto loc_82BECDEC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECDEC:
	// addi r4,r30,-1088
	ctx.r4.s64 = ctx.r30.s64 + -1088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECDF8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bece18
	if (!ctx.cr6.eq) goto loc_82BECE18;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECE18:
	// addi r4,r30,-1052
	ctx.r4.s64 = ctx.r30.s64 + -1052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECE24;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bece44
	if (!ctx.cr6.eq) goto loc_82BECE44;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECE44:
	// addi r4,r30,-1020
	ctx.r4.s64 = ctx.r30.s64 + -1020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECE50;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bece70
	if (!ctx.cr6.eq) goto loc_82BECE70;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECE70:
	// addi r4,r30,-988
	ctx.r4.s64 = ctx.r30.s64 + -988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECE7C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bece9c
	if (!ctx.cr6.eq) goto loc_82BECE9C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECE9C:
	// addi r4,r30,-956
	ctx.r4.s64 = ctx.r30.s64 + -956;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECEA8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becec8
	if (!ctx.cr6.eq) goto loc_82BECEC8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECEC8:
	// addi r4,r30,-924
	ctx.r4.s64 = ctx.r30.s64 + -924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECED4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becef4
	if (!ctx.cr6.eq) goto loc_82BECEF4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECEF4:
	// addi r4,r30,-896
	ctx.r4.s64 = ctx.r30.s64 + -896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECF00;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becf20
	if (!ctx.cr6.eq) goto loc_82BECF20;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECF20:
	// addi r4,r30,-864
	ctx.r4.s64 = ctx.r30.s64 + -864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECF2C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becf4c
	if (!ctx.cr6.eq) goto loc_82BECF4C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECF4C:
	// addi r4,r30,-832
	ctx.r4.s64 = ctx.r30.s64 + -832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECF58;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becf78
	if (!ctx.cr6.eq) goto loc_82BECF78;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECF78:
	// addi r4,r30,-804
	ctx.r4.s64 = ctx.r30.s64 + -804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECF84;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becfa4
	if (!ctx.cr6.eq) goto loc_82BECFA4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECFA4:
	// addi r4,r30,-776
	ctx.r4.s64 = ctx.r30.s64 + -776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECFB0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becfd0
	if (!ctx.cr6.eq) goto loc_82BECFD0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECFD0:
	// addi r4,r30,-740
	ctx.r4.s64 = ctx.r30.s64 + -740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BECFDC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82becffc
	if (!ctx.cr6.eq) goto loc_82BECFFC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BECFFC:
	// addi r4,r30,-712
	ctx.r4.s64 = ctx.r30.s64 + -712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED008;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed028
	if (!ctx.cr6.eq) goto loc_82BED028;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED028:
	// addi r4,r30,-684
	ctx.r4.s64 = ctx.r30.s64 + -684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED034;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed054
	if (!ctx.cr6.eq) goto loc_82BED054;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED054:
	// addi r4,r30,-656
	ctx.r4.s64 = ctx.r30.s64 + -656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED060;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed080
	if (!ctx.cr6.eq) goto loc_82BED080;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED080:
	// addi r4,r30,-620
	ctx.r4.s64 = ctx.r30.s64 + -620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED08C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed0ac
	if (!ctx.cr6.eq) goto loc_82BED0AC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED0AC:
	// addi r4,r30,-592
	ctx.r4.s64 = ctx.r30.s64 + -592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED0B8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed0d8
	if (!ctx.cr6.eq) goto loc_82BED0D8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED0D8:
	// addi r4,r30,-564
	ctx.r4.s64 = ctx.r30.s64 + -564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED0E4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed104
	if (!ctx.cr6.eq) goto loc_82BED104;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED104:
	// addi r4,r30,-532
	ctx.r4.s64 = ctx.r30.s64 + -532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED110;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed130
	if (!ctx.cr6.eq) goto loc_82BED130;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED130:
	// addi r4,r30,-496
	ctx.r4.s64 = ctx.r30.s64 + -496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED13C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed15c
	if (!ctx.cr6.eq) goto loc_82BED15C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED15C:
	// addi r4,r30,-460
	ctx.r4.s64 = ctx.r30.s64 + -460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED168;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed188
	if (!ctx.cr6.eq) goto loc_82BED188;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED188:
	// addi r4,r30,-428
	ctx.r4.s64 = ctx.r30.s64 + -428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED194;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed1b4
	if (!ctx.cr6.eq) goto loc_82BED1B4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED1B4:
	// addi r4,r30,-400
	ctx.r4.s64 = ctx.r30.s64 + -400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED1C0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed1e0
	if (!ctx.cr6.eq) goto loc_82BED1E0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED1E0:
	// addi r4,r30,-376
	ctx.r4.s64 = ctx.r30.s64 + -376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED1EC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed20c
	if (!ctx.cr6.eq) goto loc_82BED20C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED20C:
	// addi r4,r30,-344
	ctx.r4.s64 = ctx.r30.s64 + -344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED218;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed238
	if (!ctx.cr6.eq) goto loc_82BED238;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED238:
	// addi r4,r30,-308
	ctx.r4.s64 = ctx.r30.s64 + -308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED244;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed264
	if (!ctx.cr6.eq) goto loc_82BED264;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED264:
	// addi r4,r30,-276
	ctx.r4.s64 = ctx.r30.s64 + -276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED270;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed290
	if (!ctx.cr6.eq) goto loc_82BED290;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED290:
	// addi r4,r30,-248
	ctx.r4.s64 = ctx.r30.s64 + -248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED29C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed2bc
	if (!ctx.cr6.eq) goto loc_82BED2BC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED2BC:
	// addi r4,r30,-228
	ctx.r4.s64 = ctx.r30.s64 + -228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED2C8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed2e8
	if (!ctx.cr6.eq) goto loc_82BED2E8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED2E8:
	// addi r4,r30,-204
	ctx.r4.s64 = ctx.r30.s64 + -204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED2F4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed314
	if (!ctx.cr6.eq) goto loc_82BED314;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED314:
	// addi r4,r30,-176
	ctx.r4.s64 = ctx.r30.s64 + -176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED320;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed340
	if (!ctx.cr6.eq) goto loc_82BED340;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED340:
	// addi r4,r30,-156
	ctx.r4.s64 = ctx.r30.s64 + -156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED34C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed36c
	if (!ctx.cr6.eq) goto loc_82BED36C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED36C:
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED378;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed398
	if (!ctx.cr6.eq) goto loc_82BED398;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED398:
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED3A4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed3c4
	if (!ctx.cr6.eq) goto loc_82BED3C4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED3C4:
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED3D0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed3f0
	if (!ctx.cr6.eq) goto loc_82BED3F0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED3F0:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED3FC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed41c
	if (!ctx.cr6.eq) goto loc_82BED41C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED41C:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED428;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed448
	if (!ctx.cr6.eq) goto loc_82BED448;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED448:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED454;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed468
	if (!ctx.cr6.eq) goto loc_82BED468;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82BED468:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BED478"))) PPC_WEAK_FUNC(sub_82BED478);
PPC_FUNC_IMPL(__imp__sub_82BED478) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bed4b0
	if (ctx.cr6.lt) goto loc_82BED4B0;
	// beq cr6,0x82bed4a0
	if (ctx.cr6.eq) goto loc_82BED4A0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-23004
	ctx.r3.s64 = ctx.r11.s64 + -23004;
	// blr 
	return;
loc_82BED4A0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-23004
	ctx.r11.s64 = ctx.r11.s64 + -23004;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// blr 
	return;
loc_82BED4B0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-23004
	ctx.r11.s64 = ctx.r11.s64 + -23004;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED4C0"))) PPC_WEAK_FUNC(sub_82BED4C0);
PPC_FUNC_IMPL(__imp__sub_82BED4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BED4C8;
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
	// beq cr6,0x82bed554
	if (ctx.cr6.eq) goto loc_82BED554;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-22952
	ctx.r30.s64 = ctx.r11.s64 + -22952;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// bl 0x82d61e20
	ctx.lr = 0x82BED4F0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed508
	if (!ctx.cr6.eq) goto loc_82BED508;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED508:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED514;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed52c
	if (!ctx.cr6.eq) goto loc_82BED52C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED52C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED538;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed554
	if (!ctx.cr6.eq) goto loc_82BED554;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED554:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BED560"))) PPC_WEAK_FUNC(sub_82BED560);
PPC_FUNC_IMPL(__imp__sub_82BED560) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bgt cr6,0x82bed5f0
	if (ctx.cr6.gt) goto loc_82BED5F0;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-10876
	ctx.r12.s64 = ctx.r12.s64 + -10876;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82BED598;
	case 1:
		goto loc_82BED5AC;
	case 2:
		goto loc_82BED5C0;
	case 3:
		goto loc_82BED5D4;
	case 4:
		goto loc_82BED5E8;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-10856(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10856);
	// lwz r21,-10836(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10836);
	// lwz r21,-10816(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10816);
	// lwz r21,-10796(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10796);
	// lwz r21,-10776(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10776);
loc_82BED598:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22848
	ctx.r11.s64 = ctx.r11.s64 + -22848;
	// addi r11,r11,-88
	ctx.r11.s64 = ctx.r11.s64 + -88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BED5AC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22848
	ctx.r11.s64 = ctx.r11.s64 + -22848;
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BED5C0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22848
	ctx.r11.s64 = ctx.r11.s64 + -22848;
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BED5D4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22848
	ctx.r11.s64 = ctx.r11.s64 + -22848;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BED5E8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22848
	ctx.r11.s64 = ctx.r11.s64 + -22848;
loc_82BED5F0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED5F8"))) PPC_WEAK_FUNC(sub_82BED5F8);
PPC_FUNC_IMPL(__imp__sub_82BED5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BED600;
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
	// beq cr6,0x82bed6dc
	if (ctx.cr6.eq) goto loc_82BED6DC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-22732
	ctx.r30.s64 = ctx.r11.s64 + -22732;
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// bl 0x82d61e20
	ctx.lr = 0x82BED628;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed640
	if (!ctx.cr6.eq) goto loc_82BED640;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED640:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED64C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed664
	if (!ctx.cr6.eq) goto loc_82BED664;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED664:
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED670;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed68c
	if (!ctx.cr6.eq) goto loc_82BED68C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED68C:
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED698;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed6b4
	if (!ctx.cr6.eq) goto loc_82BED6B4;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED6B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED6C0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed6dc
	if (!ctx.cr6.eq) goto loc_82BED6DC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED6DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BED6E8"))) PPC_WEAK_FUNC(sub_82BED6E8);
PPC_FUNC_IMPL(__imp__sub_82BED6E8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-10480
	ctx.r12.s64 = ctx.r12.s64 + -10480;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BED790;
	case 1:
		goto loc_82BED7A0;
	case 2:
		goto loc_82BED7E8;
	case 3:
		goto loc_82BED7B0;
	case 4:
		goto loc_82BED7E8;
	case 5:
		goto loc_82BED7E8;
	case 6:
		goto loc_82BED7E8;
	case 7:
		goto loc_82BED7C0;
	case 8:
		goto loc_82BED7E8;
	case 9:
		goto loc_82BED7E8;
	case 10:
		goto loc_82BED7E8;
	case 11:
		goto loc_82BED7E8;
	case 12:
		goto loc_82BED7E8;
	case 13:
		goto loc_82BED7E8;
	case 14:
		goto loc_82BED7E8;
	case 15:
		goto loc_82BED7D0;
	case 16:
		goto loc_82BED7E8;
	case 17:
		goto loc_82BED7E8;
	case 18:
		goto loc_82BED7E8;
	case 19:
		goto loc_82BED7E8;
	case 20:
		goto loc_82BED7E8;
	case 21:
		goto loc_82BED7E8;
	case 22:
		goto loc_82BED7E8;
	case 23:
		goto loc_82BED7E8;
	case 24:
		goto loc_82BED7E8;
	case 25:
		goto loc_82BED7E8;
	case 26:
		goto loc_82BED7E8;
	case 27:
		goto loc_82BED7E8;
	case 28:
		goto loc_82BED7E8;
	case 29:
		goto loc_82BED7E8;
	case 30:
		goto loc_82BED7E8;
	case 31:
		goto loc_82BED7E0;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-10352(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10352);
	// lwz r21,-10336(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10336);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10320(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10320);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10304(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10304);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10288(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10288);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10264);
	// lwz r21,-10272(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10272);
loc_82BED790:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22588
	ctx.r11.s64 = ctx.r11.s64 + -22588;
	// addi r3,r11,-116
	ctx.r3.s64 = ctx.r11.s64 + -116;
	// blr 
	return;
loc_82BED7A0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22588
	ctx.r11.s64 = ctx.r11.s64 + -22588;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// blr 
	return;
loc_82BED7B0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22588
	ctx.r11.s64 = ctx.r11.s64 + -22588;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// blr 
	return;
loc_82BED7C0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22588
	ctx.r11.s64 = ctx.r11.s64 + -22588;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// blr 
	return;
loc_82BED7D0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22588
	ctx.r11.s64 = ctx.r11.s64 + -22588;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82BED7E0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-22588
	ctx.r3.s64 = ctx.r11.s64 + -22588;
loc_82BED7E8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED7F0"))) PPC_WEAK_FUNC(sub_82BED7F0);
PPC_FUNC_IMPL(__imp__sub_82BED7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BED7F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-22440
	ctx.r30.s64 = ctx.r11.s64 + -22440;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BED818;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed830
	if (!ctx.cr6.eq) goto loc_82BED830;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED830:
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED83C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed858
	if (!ctx.cr6.eq) goto loc_82BED858;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED858:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED864;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed880
	if (!ctx.cr6.eq) goto loc_82BED880;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED880:
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED88C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed8a8
	if (!ctx.cr6.eq) goto loc_82BED8A8;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED8A8:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED8B4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed8d0
	if (!ctx.cr6.eq) goto loc_82BED8D0;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED8D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED8DC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed8f8
	if (!ctx.cr6.eq) goto loc_82BED8F8;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED8F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BED908"))) PPC_WEAK_FUNC(sub_82BED908);
PPC_FUNC_IMPL(__imp__sub_82BED908) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bed940
	if (ctx.cr6.lt) goto loc_82BED940;
	// beq cr6,0x82bed930
	if (ctx.cr6.eq) goto loc_82BED930;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-22392
	ctx.r3.s64 = ctx.r11.s64 + -22392;
	// blr 
	return;
loc_82BED930:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22392
	ctx.r11.s64 = ctx.r11.s64 + -22392;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// blr 
	return;
loc_82BED940:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22392
	ctx.r11.s64 = ctx.r11.s64 + -22392;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BED950"))) PPC_WEAK_FUNC(sub_82BED950);
PPC_FUNC_IMPL(__imp__sub_82BED950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BED958;
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
	// beq cr6,0x82bed9e4
	if (ctx.cr6.eq) goto loc_82BED9E4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-22368
	ctx.r30.s64 = ctx.r11.s64 + -22368;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// bl 0x82d61e20
	ctx.lr = 0x82BED980;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed998
	if (!ctx.cr6.eq) goto loc_82BED998;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED998:
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED9A4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed9bc
	if (!ctx.cr6.eq) goto loc_82BED9BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED9BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BED9C8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bed9e4
	if (!ctx.cr6.eq) goto loc_82BED9E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BED9E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BED9F0"))) PPC_WEAK_FUNC(sub_82BED9F0);
PPC_FUNC_IMPL(__imp__sub_82BED9F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82beda2c
	if (ctx.cr6.eq) goto loc_82BEDA2C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82beda1c
	if (ctx.cr6.eq) goto loc_82BEDA1C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-22316
	ctx.r3.s64 = ctx.r11.s64 + -22316;
	// blr 
	return;
loc_82BEDA1C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22316
	ctx.r11.s64 = ctx.r11.s64 + -22316;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82BEDA2C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22316
	ctx.r11.s64 = ctx.r11.s64 + -22316;
	// addi r3,r11,-44
	ctx.r3.s64 = ctx.r11.s64 + -44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEDA40"))) PPC_WEAK_FUNC(sub_82BEDA40);
PPC_FUNC_IMPL(__imp__sub_82BEDA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEDA48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-22252
	ctx.r30.s64 = ctx.r11.s64 + -22252;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BEDA68;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beda80
	if (!ctx.cr6.eq) goto loc_82BEDA80;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEDA80:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEDA8C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bedaa8
	if (!ctx.cr6.eq) goto loc_82BEDAA8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEDAA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEDAB4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bedad0
	if (!ctx.cr6.eq) goto loc_82BEDAD0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEDAD0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEDAE0"))) PPC_WEAK_FUNC(sub_82BEDAE0);
PPC_FUNC_IMPL(__imp__sub_82BEDAE0) {
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
	// addi r3,r11,-22232
	ctx.r3.s64 = ctx.r11.s64 + -22232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEDB00"))) PPC_WEAK_FUNC(sub_82BEDB00);
PPC_FUNC_IMPL(__imp__sub_82BEDB00) {
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
	// addi r4,r11,-22208
	ctx.r4.s64 = ctx.r11.s64 + -22208;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BEDB28;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bedb3c
	if (!ctx.cr6.eq) goto loc_82BEDB3C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82bedb40
	goto loc_82BEDB40;
loc_82BEDB3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BEDB40:
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

__attribute__((alias("__imp__sub_82BEDB58"))) PPC_WEAK_FUNC(sub_82BEDB58);
PPC_FUNC_IMPL(__imp__sub_82BEDB58) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bedb78
	if (ctx.cr6.lt) goto loc_82BEDB78;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-22160
	ctx.r3.s64 = ctx.r11.s64 + -22160;
	// blr 
	return;
loc_82BEDB78:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-22160
	ctx.r11.s64 = ctx.r11.s64 + -22160;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEDB88"))) PPC_WEAK_FUNC(sub_82BEDB88);
PPC_FUNC_IMPL(__imp__sub_82BEDB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEDB90;
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
	// beq cr6,0x82bedbf4
	if (ctx.cr6.eq) goto loc_82BEDBF4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-22108
	ctx.r30.s64 = ctx.r11.s64 + -22108;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// bl 0x82d61e20
	ctx.lr = 0x82BEDBB8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bedbd0
	if (!ctx.cr6.eq) goto loc_82BEDBD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEDBD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEDBDC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bedbf4
	if (!ctx.cr6.eq) goto loc_82BEDBF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEDBF4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEDC00"))) PPC_WEAK_FUNC(sub_82BEDC00);
PPC_FUNC_IMPL(__imp__sub_82BEDC00) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bgt cr6,0x82bedcb8
	if (ctx.cr6.gt) goto loc_82BEDCB8;
	// beq cr6,0x82bedca4
	if (ctx.cr6.eq) goto loc_82BEDCA4;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bgt cr6,0x82bee0a4
	if (ctx.cr6.gt) goto loc_82BEE0A4;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-9164
	ctx.r12.s64 = ctx.r12.s64 + -9164;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82BEDC54;
	case 1:
		goto loc_82BEDC68;
	case 2:
		goto loc_82BEE0A4;
	case 3:
		goto loc_82BEDC7C;
	case 4:
		goto loc_82BEE0A4;
	case 5:
		goto loc_82BEE0A4;
	case 6:
		goto loc_82BEE0A4;
	case 7:
		goto loc_82BEDC90;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-9132(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9132);
	// lwz r21,-9112(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9112);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-9092(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9092);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-9072(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9072);
loc_82BEDC54:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21888
	ctx.r11.s64 = ctx.r11.s64 + -21888;
	// addi r11,r11,-192
	ctx.r11.s64 = ctx.r11.s64 + -192;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEDC68:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21888
	ctx.r11.s64 = ctx.r11.s64 + -21888;
	// addi r11,r11,-168
	ctx.r11.s64 = ctx.r11.s64 + -168;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEDC7C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21888
	ctx.r11.s64 = ctx.r11.s64 + -21888;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEDC90:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21888
	ctx.r11.s64 = ctx.r11.s64 + -21888;
	// addi r11,r11,-120
	ctx.r11.s64 = ctx.r11.s64 + -120;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEDCA4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21888
	ctx.r11.s64 = ctx.r11.s64 + -21888;
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEDCB8:
	// addi r10,r3,-32
	ctx.r10.s64 = ctx.r3.s64 + -32;
	// cmplwi cr6,r10,224
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 224, ctx.xer);
	// bgt cr6,0x82bee0a4
	if (ctx.cr6.gt) goto loc_82BEE0A4;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-8996
	ctx.r12.s64 = ctx.r12.s64 + -8996;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82BEE060;
	case 1:
		goto loc_82BEE0A4;
	case 2:
		goto loc_82BEE0A4;
	case 3:
		goto loc_82BEE0A4;
	case 4:
		goto loc_82BEE0A4;
	case 5:
		goto loc_82BEE0A4;
	case 6:
		goto loc_82BEE0A4;
	case 7:
		goto loc_82BEE0A4;
	case 8:
		goto loc_82BEE0A4;
	case 9:
		goto loc_82BEE0A4;
	case 10:
		goto loc_82BEE0A4;
	case 11:
		goto loc_82BEE0A4;
	case 12:
		goto loc_82BEE0A4;
	case 13:
		goto loc_82BEE0A4;
	case 14:
		goto loc_82BEE0A4;
	case 15:
		goto loc_82BEE0A4;
	case 16:
		goto loc_82BEE0A4;
	case 17:
		goto loc_82BEE0A4;
	case 18:
		goto loc_82BEE0A4;
	case 19:
		goto loc_82BEE0A4;
	case 20:
		goto loc_82BEE0A4;
	case 21:
		goto loc_82BEE0A4;
	case 22:
		goto loc_82BEE0A4;
	case 23:
		goto loc_82BEE0A4;
	case 24:
		goto loc_82BEE0A4;
	case 25:
		goto loc_82BEE0A4;
	case 26:
		goto loc_82BEE0A4;
	case 27:
		goto loc_82BEE0A4;
	case 28:
		goto loc_82BEE0A4;
	case 29:
		goto loc_82BEE0A4;
	case 30:
		goto loc_82BEE0A4;
	case 31:
		goto loc_82BEE0A4;
	case 32:
		goto loc_82BEE074;
	case 33:
		goto loc_82BEE0A4;
	case 34:
		goto loc_82BEE0A4;
	case 35:
		goto loc_82BEE0A4;
	case 36:
		goto loc_82BEE0A4;
	case 37:
		goto loc_82BEE0A4;
	case 38:
		goto loc_82BEE0A4;
	case 39:
		goto loc_82BEE0A4;
	case 40:
		goto loc_82BEE0A4;
	case 41:
		goto loc_82BEE0A4;
	case 42:
		goto loc_82BEE0A4;
	case 43:
		goto loc_82BEE0A4;
	case 44:
		goto loc_82BEE0A4;
	case 45:
		goto loc_82BEE0A4;
	case 46:
		goto loc_82BEE0A4;
	case 47:
		goto loc_82BEE0A4;
	case 48:
		goto loc_82BEE0A4;
	case 49:
		goto loc_82BEE0A4;
	case 50:
		goto loc_82BEE0A4;
	case 51:
		goto loc_82BEE0A4;
	case 52:
		goto loc_82BEE0A4;
	case 53:
		goto loc_82BEE0A4;
	case 54:
		goto loc_82BEE0A4;
	case 55:
		goto loc_82BEE0A4;
	case 56:
		goto loc_82BEE0A4;
	case 57:
		goto loc_82BEE0A4;
	case 58:
		goto loc_82BEE0A4;
	case 59:
		goto loc_82BEE0A4;
	case 60:
		goto loc_82BEE0A4;
	case 61:
		goto loc_82BEE0A4;
	case 62:
		goto loc_82BEE0A4;
	case 63:
		goto loc_82BEE0A4;
	case 64:
		goto loc_82BEE0A4;
	case 65:
		goto loc_82BEE0A4;
	case 66:
		goto loc_82BEE0A4;
	case 67:
		goto loc_82BEE0A4;
	case 68:
		goto loc_82BEE0A4;
	case 69:
		goto loc_82BEE0A4;
	case 70:
		goto loc_82BEE0A4;
	case 71:
		goto loc_82BEE0A4;
	case 72:
		goto loc_82BEE0A4;
	case 73:
		goto loc_82BEE0A4;
	case 74:
		goto loc_82BEE0A4;
	case 75:
		goto loc_82BEE0A4;
	case 76:
		goto loc_82BEE0A4;
	case 77:
		goto loc_82BEE0A4;
	case 78:
		goto loc_82BEE0A4;
	case 79:
		goto loc_82BEE0A4;
	case 80:
		goto loc_82BEE0A4;
	case 81:
		goto loc_82BEE0A4;
	case 82:
		goto loc_82BEE0A4;
	case 83:
		goto loc_82BEE0A4;
	case 84:
		goto loc_82BEE0A4;
	case 85:
		goto loc_82BEE0A4;
	case 86:
		goto loc_82BEE0A4;
	case 87:
		goto loc_82BEE0A4;
	case 88:
		goto loc_82BEE0A4;
	case 89:
		goto loc_82BEE0A4;
	case 90:
		goto loc_82BEE0A4;
	case 91:
		goto loc_82BEE0A4;
	case 92:
		goto loc_82BEE0A4;
	case 93:
		goto loc_82BEE0A4;
	case 94:
		goto loc_82BEE0A4;
	case 95:
		goto loc_82BEE0A4;
	case 96:
		goto loc_82BEE088;
	case 97:
		goto loc_82BEE0A4;
	case 98:
		goto loc_82BEE0A4;
	case 99:
		goto loc_82BEE0A4;
	case 100:
		goto loc_82BEE0A4;
	case 101:
		goto loc_82BEE0A4;
	case 102:
		goto loc_82BEE0A4;
	case 103:
		goto loc_82BEE0A4;
	case 104:
		goto loc_82BEE0A4;
	case 105:
		goto loc_82BEE0A4;
	case 106:
		goto loc_82BEE0A4;
	case 107:
		goto loc_82BEE0A4;
	case 108:
		goto loc_82BEE0A4;
	case 109:
		goto loc_82BEE0A4;
	case 110:
		goto loc_82BEE0A4;
	case 111:
		goto loc_82BEE0A4;
	case 112:
		goto loc_82BEE0A4;
	case 113:
		goto loc_82BEE0A4;
	case 114:
		goto loc_82BEE0A4;
	case 115:
		goto loc_82BEE0A4;
	case 116:
		goto loc_82BEE0A4;
	case 117:
		goto loc_82BEE0A4;
	case 118:
		goto loc_82BEE0A4;
	case 119:
		goto loc_82BEE0A4;
	case 120:
		goto loc_82BEE0A4;
	case 121:
		goto loc_82BEE0A4;
	case 122:
		goto loc_82BEE0A4;
	case 123:
		goto loc_82BEE0A4;
	case 124:
		goto loc_82BEE0A4;
	case 125:
		goto loc_82BEE0A4;
	case 126:
		goto loc_82BEE0A4;
	case 127:
		goto loc_82BEE0A4;
	case 128:
		goto loc_82BEE0A4;
	case 129:
		goto loc_82BEE0A4;
	case 130:
		goto loc_82BEE0A4;
	case 131:
		goto loc_82BEE0A4;
	case 132:
		goto loc_82BEE0A4;
	case 133:
		goto loc_82BEE0A4;
	case 134:
		goto loc_82BEE0A4;
	case 135:
		goto loc_82BEE0A4;
	case 136:
		goto loc_82BEE0A4;
	case 137:
		goto loc_82BEE0A4;
	case 138:
		goto loc_82BEE0A4;
	case 139:
		goto loc_82BEE0A4;
	case 140:
		goto loc_82BEE0A4;
	case 141:
		goto loc_82BEE0A4;
	case 142:
		goto loc_82BEE0A4;
	case 143:
		goto loc_82BEE0A4;
	case 144:
		goto loc_82BEE0A4;
	case 145:
		goto loc_82BEE0A4;
	case 146:
		goto loc_82BEE0A4;
	case 147:
		goto loc_82BEE0A4;
	case 148:
		goto loc_82BEE0A4;
	case 149:
		goto loc_82BEE0A4;
	case 150:
		goto loc_82BEE0A4;
	case 151:
		goto loc_82BEE0A4;
	case 152:
		goto loc_82BEE0A4;
	case 153:
		goto loc_82BEE0A4;
	case 154:
		goto loc_82BEE0A4;
	case 155:
		goto loc_82BEE0A4;
	case 156:
		goto loc_82BEE0A4;
	case 157:
		goto loc_82BEE0A4;
	case 158:
		goto loc_82BEE0A4;
	case 159:
		goto loc_82BEE0A4;
	case 160:
		goto loc_82BEE0A4;
	case 161:
		goto loc_82BEE0A4;
	case 162:
		goto loc_82BEE0A4;
	case 163:
		goto loc_82BEE0A4;
	case 164:
		goto loc_82BEE0A4;
	case 165:
		goto loc_82BEE0A4;
	case 166:
		goto loc_82BEE0A4;
	case 167:
		goto loc_82BEE0A4;
	case 168:
		goto loc_82BEE0A4;
	case 169:
		goto loc_82BEE0A4;
	case 170:
		goto loc_82BEE0A4;
	case 171:
		goto loc_82BEE0A4;
	case 172:
		goto loc_82BEE0A4;
	case 173:
		goto loc_82BEE0A4;
	case 174:
		goto loc_82BEE0A4;
	case 175:
		goto loc_82BEE0A4;
	case 176:
		goto loc_82BEE0A4;
	case 177:
		goto loc_82BEE0A4;
	case 178:
		goto loc_82BEE0A4;
	case 179:
		goto loc_82BEE0A4;
	case 180:
		goto loc_82BEE0A4;
	case 181:
		goto loc_82BEE0A4;
	case 182:
		goto loc_82BEE0A4;
	case 183:
		goto loc_82BEE0A4;
	case 184:
		goto loc_82BEE0A4;
	case 185:
		goto loc_82BEE0A4;
	case 186:
		goto loc_82BEE0A4;
	case 187:
		goto loc_82BEE0A4;
	case 188:
		goto loc_82BEE0A4;
	case 189:
		goto loc_82BEE0A4;
	case 190:
		goto loc_82BEE0A4;
	case 191:
		goto loc_82BEE0A4;
	case 192:
		goto loc_82BEE0A4;
	case 193:
		goto loc_82BEE0A4;
	case 194:
		goto loc_82BEE0A4;
	case 195:
		goto loc_82BEE0A4;
	case 196:
		goto loc_82BEE0A4;
	case 197:
		goto loc_82BEE0A4;
	case 198:
		goto loc_82BEE0A4;
	case 199:
		goto loc_82BEE0A4;
	case 200:
		goto loc_82BEE0A4;
	case 201:
		goto loc_82BEE0A4;
	case 202:
		goto loc_82BEE0A4;
	case 203:
		goto loc_82BEE0A4;
	case 204:
		goto loc_82BEE0A4;
	case 205:
		goto loc_82BEE0A4;
	case 206:
		goto loc_82BEE0A4;
	case 207:
		goto loc_82BEE0A4;
	case 208:
		goto loc_82BEE0A4;
	case 209:
		goto loc_82BEE0A4;
	case 210:
		goto loc_82BEE0A4;
	case 211:
		goto loc_82BEE0A4;
	case 212:
		goto loc_82BEE0A4;
	case 213:
		goto loc_82BEE0A4;
	case 214:
		goto loc_82BEE0A4;
	case 215:
		goto loc_82BEE0A4;
	case 216:
		goto loc_82BEE0A4;
	case 217:
		goto loc_82BEE0A4;
	case 218:
		goto loc_82BEE0A4;
	case 219:
		goto loc_82BEE0A4;
	case 220:
		goto loc_82BEE0A4;
	case 221:
		goto loc_82BEE0A4;
	case 222:
		goto loc_82BEE0A4;
	case 223:
		goto loc_82BEE0A4;
	case 224:
		goto loc_82BEE09C;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-8096(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8096);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8076(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8076);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8056(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8056);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8028(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8028);
	// lwz r21,-8036(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8036);
loc_82BEE060:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21888
	ctx.r11.s64 = ctx.r11.s64 + -21888;
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEE074:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21888
	ctx.r11.s64 = ctx.r11.s64 + -21888;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEE088:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21888
	ctx.r11.s64 = ctx.r11.s64 + -21888;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEE09C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21888
	ctx.r11.s64 = ctx.r11.s64 + -21888;
loc_82BEE0A4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE0B0"))) PPC_WEAK_FUNC(sub_82BEE0B0);
PPC_FUNC_IMPL(__imp__sub_82BEE0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEE0B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-21672
	ctx.r30.s64 = ctx.r11.s64 + -21672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-192
	ctx.r4.s64 = ctx.r30.s64 + -192;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE0D8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee0f4
	if (!ctx.cr6.eq) goto loc_82BEE0F4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE0F4:
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE100;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee120
	if (!ctx.cr6.eq) goto loc_82BEE120;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE120:
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE12C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee14c
	if (!ctx.cr6.eq) goto loc_82BEE14C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE14C:
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE158;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee178
	if (!ctx.cr6.eq) goto loc_82BEE178;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE178:
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE184;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee1a4
	if (!ctx.cr6.eq) goto loc_82BEE1A4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE1A4:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE1B0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee1d0
	if (!ctx.cr6.eq) goto loc_82BEE1D0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE1D0:
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE1DC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee1fc
	if (!ctx.cr6.eq) goto loc_82BEE1FC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE1FC:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE208;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee228
	if (!ctx.cr6.eq) goto loc_82BEE228;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE228:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE234;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee248
	if (!ctx.cr6.eq) goto loc_82BEE248;
	// li r11,256
	ctx.r11.s64 = 256;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82BEE248:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEE258"))) PPC_WEAK_FUNC(sub_82BEE258);
PPC_FUNC_IMPL(__imp__sub_82BEE258) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-7552
	ctx.r12.s64 = ctx.r12.s64 + -7552;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BEE480;
	case 1:
		goto loc_82BEE490;
	case 2:
		goto loc_82BEE4F8;
	case 3:
		goto loc_82BEE4A0;
	case 4:
		goto loc_82BEE4F8;
	case 5:
		goto loc_82BEE4F8;
	case 6:
		goto loc_82BEE4F8;
	case 7:
		goto loc_82BEE4B0;
	case 8:
		goto loc_82BEE4F8;
	case 9:
		goto loc_82BEE4F8;
	case 10:
		goto loc_82BEE4F8;
	case 11:
		goto loc_82BEE4F8;
	case 12:
		goto loc_82BEE4F8;
	case 13:
		goto loc_82BEE4F8;
	case 14:
		goto loc_82BEE4F8;
	case 15:
		goto loc_82BEE4C0;
	case 16:
		goto loc_82BEE4F8;
	case 17:
		goto loc_82BEE4F8;
	case 18:
		goto loc_82BEE4F8;
	case 19:
		goto loc_82BEE4F8;
	case 20:
		goto loc_82BEE4F8;
	case 21:
		goto loc_82BEE4F8;
	case 22:
		goto loc_82BEE4F8;
	case 23:
		goto loc_82BEE4F8;
	case 24:
		goto loc_82BEE4F8;
	case 25:
		goto loc_82BEE4F8;
	case 26:
		goto loc_82BEE4F8;
	case 27:
		goto loc_82BEE4F8;
	case 28:
		goto loc_82BEE4F8;
	case 29:
		goto loc_82BEE4F8;
	case 30:
		goto loc_82BEE4F8;
	case 31:
		goto loc_82BEE4D0;
	case 32:
		goto loc_82BEE4F8;
	case 33:
		goto loc_82BEE4F8;
	case 34:
		goto loc_82BEE4F8;
	case 35:
		goto loc_82BEE4F8;
	case 36:
		goto loc_82BEE4F8;
	case 37:
		goto loc_82BEE4F8;
	case 38:
		goto loc_82BEE4F8;
	case 39:
		goto loc_82BEE4F8;
	case 40:
		goto loc_82BEE4F8;
	case 41:
		goto loc_82BEE4F8;
	case 42:
		goto loc_82BEE4F8;
	case 43:
		goto loc_82BEE4F8;
	case 44:
		goto loc_82BEE4F8;
	case 45:
		goto loc_82BEE4F8;
	case 46:
		goto loc_82BEE4F8;
	case 47:
		goto loc_82BEE4F8;
	case 48:
		goto loc_82BEE4F8;
	case 49:
		goto loc_82BEE4F8;
	case 50:
		goto loc_82BEE4F8;
	case 51:
		goto loc_82BEE4F8;
	case 52:
		goto loc_82BEE4F8;
	case 53:
		goto loc_82BEE4F8;
	case 54:
		goto loc_82BEE4F8;
	case 55:
		goto loc_82BEE4F8;
	case 56:
		goto loc_82BEE4F8;
	case 57:
		goto loc_82BEE4F8;
	case 58:
		goto loc_82BEE4F8;
	case 59:
		goto loc_82BEE4F8;
	case 60:
		goto loc_82BEE4F8;
	case 61:
		goto loc_82BEE4F8;
	case 62:
		goto loc_82BEE4F8;
	case 63:
		goto loc_82BEE4E0;
	case 64:
		goto loc_82BEE4F8;
	case 65:
		goto loc_82BEE4F8;
	case 66:
		goto loc_82BEE4F8;
	case 67:
		goto loc_82BEE4F8;
	case 68:
		goto loc_82BEE4F8;
	case 69:
		goto loc_82BEE4F8;
	case 70:
		goto loc_82BEE4F8;
	case 71:
		goto loc_82BEE4F8;
	case 72:
		goto loc_82BEE4F8;
	case 73:
		goto loc_82BEE4F8;
	case 74:
		goto loc_82BEE4F8;
	case 75:
		goto loc_82BEE4F8;
	case 76:
		goto loc_82BEE4F8;
	case 77:
		goto loc_82BEE4F8;
	case 78:
		goto loc_82BEE4F8;
	case 79:
		goto loc_82BEE4F8;
	case 80:
		goto loc_82BEE4F8;
	case 81:
		goto loc_82BEE4F8;
	case 82:
		goto loc_82BEE4F8;
	case 83:
		goto loc_82BEE4F8;
	case 84:
		goto loc_82BEE4F8;
	case 85:
		goto loc_82BEE4F8;
	case 86:
		goto loc_82BEE4F8;
	case 87:
		goto loc_82BEE4F8;
	case 88:
		goto loc_82BEE4F8;
	case 89:
		goto loc_82BEE4F8;
	case 90:
		goto loc_82BEE4F8;
	case 91:
		goto loc_82BEE4F8;
	case 92:
		goto loc_82BEE4F8;
	case 93:
		goto loc_82BEE4F8;
	case 94:
		goto loc_82BEE4F8;
	case 95:
		goto loc_82BEE4F8;
	case 96:
		goto loc_82BEE4F8;
	case 97:
		goto loc_82BEE4F8;
	case 98:
		goto loc_82BEE4F8;
	case 99:
		goto loc_82BEE4F8;
	case 100:
		goto loc_82BEE4F8;
	case 101:
		goto loc_82BEE4F8;
	case 102:
		goto loc_82BEE4F8;
	case 103:
		goto loc_82BEE4F8;
	case 104:
		goto loc_82BEE4F8;
	case 105:
		goto loc_82BEE4F8;
	case 106:
		goto loc_82BEE4F8;
	case 107:
		goto loc_82BEE4F8;
	case 108:
		goto loc_82BEE4F8;
	case 109:
		goto loc_82BEE4F8;
	case 110:
		goto loc_82BEE4F8;
	case 111:
		goto loc_82BEE4F8;
	case 112:
		goto loc_82BEE4F8;
	case 113:
		goto loc_82BEE4F8;
	case 114:
		goto loc_82BEE4F8;
	case 115:
		goto loc_82BEE4F8;
	case 116:
		goto loc_82BEE4F8;
	case 117:
		goto loc_82BEE4F8;
	case 118:
		goto loc_82BEE4F8;
	case 119:
		goto loc_82BEE4F8;
	case 120:
		goto loc_82BEE4F8;
	case 121:
		goto loc_82BEE4F8;
	case 122:
		goto loc_82BEE4F8;
	case 123:
		goto loc_82BEE4F8;
	case 124:
		goto loc_82BEE4F8;
	case 125:
		goto loc_82BEE4F8;
	case 126:
		goto loc_82BEE4F8;
	case 127:
		goto loc_82BEE4F0;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-7040(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7040);
	// lwz r21,-7024(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7024);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-7008(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7008);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6992(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6992);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6976(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6976);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6960(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6960);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6944(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6944);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6920);
	// lwz r21,-6928(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6928);
loc_82BEE480:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21480
	ctx.r11.s64 = ctx.r11.s64 + -21480;
	// addi r3,r11,-168
	ctx.r3.s64 = ctx.r11.s64 + -168;
	// blr 
	return;
loc_82BEE490:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21480
	ctx.r11.s64 = ctx.r11.s64 + -21480;
	// addi r3,r11,-144
	ctx.r3.s64 = ctx.r11.s64 + -144;
	// blr 
	return;
loc_82BEE4A0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21480
	ctx.r11.s64 = ctx.r11.s64 + -21480;
	// addi r3,r11,-120
	ctx.r3.s64 = ctx.r11.s64 + -120;
	// blr 
	return;
loc_82BEE4B0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21480
	ctx.r11.s64 = ctx.r11.s64 + -21480;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// blr 
	return;
loc_82BEE4C0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21480
	ctx.r11.s64 = ctx.r11.s64 + -21480;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// blr 
	return;
loc_82BEE4D0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21480
	ctx.r11.s64 = ctx.r11.s64 + -21480;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// blr 
	return;
loc_82BEE4E0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21480
	ctx.r11.s64 = ctx.r11.s64 + -21480;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82BEE4F0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-21480
	ctx.r3.s64 = ctx.r11.s64 + -21480;
loc_82BEE4F8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE500"))) PPC_WEAK_FUNC(sub_82BEE500);
PPC_FUNC_IMPL(__imp__sub_82BEE500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEE508;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-21284
	ctx.r30.s64 = ctx.r11.s64 + -21284;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE528;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee544
	if (!ctx.cr6.eq) goto loc_82BEE544;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE544:
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE550;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee570
	if (!ctx.cr6.eq) goto loc_82BEE570;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE570:
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE57C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee59c
	if (!ctx.cr6.eq) goto loc_82BEE59C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE59C:
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE5A8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee5c8
	if (!ctx.cr6.eq) goto loc_82BEE5C8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE5C8:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE5D4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee5f4
	if (!ctx.cr6.eq) goto loc_82BEE5F4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE5F4:
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE600;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee620
	if (!ctx.cr6.eq) goto loc_82BEE620;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE620:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE62C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee64c
	if (!ctx.cr6.eq) goto loc_82BEE64C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE64C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE658;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee66c
	if (!ctx.cr6.eq) goto loc_82BEE66C;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82BEE66C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEE678"))) PPC_WEAK_FUNC(sub_82BEE678);
PPC_FUNC_IMPL(__imp__sub_82BEE678) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bgt cr6,0x82bee738
	if (ctx.cr6.gt) goto loc_82BEE738;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-6500
	ctx.r12.s64 = ctx.r12.s64 + -6500;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82BEE6B8;
	case 1:
		goto loc_82BEE6CC;
	case 2:
		goto loc_82BEE6E0;
	case 3:
		goto loc_82BEE6F4;
	case 4:
		goto loc_82BEE708;
	case 5:
		goto loc_82BEE71C;
	case 6:
		goto loc_82BEE730;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-6472(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6472);
	// lwz r21,-6452(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6452);
	// lwz r21,-6432(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6432);
	// lwz r21,-6412(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6412);
	// lwz r21,-6392(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6392);
	// lwz r21,-6372(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6372);
	// lwz r21,-6352(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6352);
loc_82BEE6B8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21152
	ctx.r11.s64 = ctx.r11.s64 + -21152;
	// addi r11,r11,-104
	ctx.r11.s64 = ctx.r11.s64 + -104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEE6CC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21152
	ctx.r11.s64 = ctx.r11.s64 + -21152;
	// addi r11,r11,-88
	ctx.r11.s64 = ctx.r11.s64 + -88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEE6E0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21152
	ctx.r11.s64 = ctx.r11.s64 + -21152;
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEE6F4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21152
	ctx.r11.s64 = ctx.r11.s64 + -21152;
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEE708:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21152
	ctx.r11.s64 = ctx.r11.s64 + -21152;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEE71C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21152
	ctx.r11.s64 = ctx.r11.s64 + -21152;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEE730:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-21152
	ctx.r11.s64 = ctx.r11.s64 + -21152;
loc_82BEE738:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE740"))) PPC_WEAK_FUNC(sub_82BEE740);
PPC_FUNC_IMPL(__imp__sub_82BEE740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEE748;
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
	// beq cr6,0x82bee888
	if (ctx.cr6.eq) goto loc_82BEE888;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-21024
	ctx.r30.s64 = ctx.r11.s64 + -21024;
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE770;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee790
	if (!ctx.cr6.eq) goto loc_82BEE790;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE790:
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE79C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee7b8
	if (!ctx.cr6.eq) goto loc_82BEE7B8;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE7B8:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE7C4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee7e4
	if (!ctx.cr6.eq) goto loc_82BEE7E4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE7E4:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE7F0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee810
	if (!ctx.cr6.eq) goto loc_82BEE810;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE810:
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE81C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee83c
	if (!ctx.cr6.eq) goto loc_82BEE83C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE83C:
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE848;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee868
	if (!ctx.cr6.eq) goto loc_82BEE868;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE868:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE874;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee888
	if (!ctx.cr6.eq) goto loc_82BEE888;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82BEE888:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEE898"))) PPC_WEAK_FUNC(sub_82BEE898);
PPC_FUNC_IMPL(__imp__sub_82BEE898) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bee8b8
	if (ctx.cr6.lt) goto loc_82BEE8B8;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-20980
	ctx.r3.s64 = ctx.r11.s64 + -20980;
	// blr 
	return;
loc_82BEE8B8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20980
	ctx.r11.s64 = ctx.r11.s64 + -20980;
	// addi r3,r11,-20
	ctx.r3.s64 = ctx.r11.s64 + -20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE8C8"))) PPC_WEAK_FUNC(sub_82BEE8C8);
PPC_FUNC_IMPL(__imp__sub_82BEE8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEE8D0;
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
	// beq cr6,0x82bee934
	if (ctx.cr6.eq) goto loc_82BEE934;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-20936
	ctx.r30.s64 = ctx.r11.s64 + -20936;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE8F8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee910
	if (!ctx.cr6.eq) goto loc_82BEE910;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE91C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee934
	if (!ctx.cr6.eq) goto loc_82BEE934;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE934:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEE940"))) PPC_WEAK_FUNC(sub_82BEE940);
PPC_FUNC_IMPL(__imp__sub_82BEE940) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bee960
	if (ctx.cr6.lt) goto loc_82BEE960;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-20892
	ctx.r3.s64 = ctx.r11.s64 + -20892;
	// blr 
	return;
loc_82BEE960:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20892
	ctx.r11.s64 = ctx.r11.s64 + -20892;
	// addi r3,r11,-20
	ctx.r3.s64 = ctx.r11.s64 + -20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEE970"))) PPC_WEAK_FUNC(sub_82BEE970);
PPC_FUNC_IMPL(__imp__sub_82BEE970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEE978;
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
	// beq cr6,0x82bee9dc
	if (ctx.cr6.eq) goto loc_82BEE9DC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-20852
	ctx.r30.s64 = ctx.r11.s64 + -20852;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE9A0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee9b8
	if (!ctx.cr6.eq) goto loc_82BEE9B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE9B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEE9C4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bee9dc
	if (!ctx.cr6.eq) goto loc_82BEE9DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEE9DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEE9E8"))) PPC_WEAK_FUNC(sub_82BEE9E8);
PPC_FUNC_IMPL(__imp__sub_82BEE9E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82beea20
	if (ctx.cr6.lt) goto loc_82BEEA20;
	// beq cr6,0x82beea10
	if (ctx.cr6.eq) goto loc_82BEEA10;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-20804
	ctx.r3.s64 = ctx.r11.s64 + -20804;
	// blr 
	return;
loc_82BEEA10:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20804
	ctx.r11.s64 = ctx.r11.s64 + -20804;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// blr 
	return;
loc_82BEEA20:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20804
	ctx.r11.s64 = ctx.r11.s64 + -20804;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEEA30"))) PPC_WEAK_FUNC(sub_82BEEA30);
PPC_FUNC_IMPL(__imp__sub_82BEEA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEEA38;
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
	// beq cr6,0x82beeac4
	if (ctx.cr6.eq) goto loc_82BEEAC4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-20764
	ctx.r30.s64 = ctx.r11.s64 + -20764;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// bl 0x82d61e20
	ctx.lr = 0x82BEEA60;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beea78
	if (!ctx.cr6.eq) goto loc_82BEEA78;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEEA78:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEEA84;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beea9c
	if (!ctx.cr6.eq) goto loc_82BEEA9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEEA9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEEAA8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beeac4
	if (!ctx.cr6.eq) goto loc_82BEEAC4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEEAC4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEEAD0"))) PPC_WEAK_FUNC(sub_82BEEAD0);
PPC_FUNC_IMPL(__imp__sub_82BEEAD0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-5384
	ctx.r12.s64 = ctx.r12.s64 + -5384;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BEECF8;
	case 1:
		goto loc_82BEED08;
	case 2:
		goto loc_82BEED70;
	case 3:
		goto loc_82BEED18;
	case 4:
		goto loc_82BEED70;
	case 5:
		goto loc_82BEED70;
	case 6:
		goto loc_82BEED70;
	case 7:
		goto loc_82BEED28;
	case 8:
		goto loc_82BEED70;
	case 9:
		goto loc_82BEED70;
	case 10:
		goto loc_82BEED70;
	case 11:
		goto loc_82BEED70;
	case 12:
		goto loc_82BEED70;
	case 13:
		goto loc_82BEED70;
	case 14:
		goto loc_82BEED70;
	case 15:
		goto loc_82BEED38;
	case 16:
		goto loc_82BEED70;
	case 17:
		goto loc_82BEED70;
	case 18:
		goto loc_82BEED70;
	case 19:
		goto loc_82BEED70;
	case 20:
		goto loc_82BEED70;
	case 21:
		goto loc_82BEED70;
	case 22:
		goto loc_82BEED70;
	case 23:
		goto loc_82BEED70;
	case 24:
		goto loc_82BEED70;
	case 25:
		goto loc_82BEED70;
	case 26:
		goto loc_82BEED70;
	case 27:
		goto loc_82BEED70;
	case 28:
		goto loc_82BEED70;
	case 29:
		goto loc_82BEED70;
	case 30:
		goto loc_82BEED70;
	case 31:
		goto loc_82BEED48;
	case 32:
		goto loc_82BEED70;
	case 33:
		goto loc_82BEED70;
	case 34:
		goto loc_82BEED70;
	case 35:
		goto loc_82BEED70;
	case 36:
		goto loc_82BEED70;
	case 37:
		goto loc_82BEED70;
	case 38:
		goto loc_82BEED70;
	case 39:
		goto loc_82BEED70;
	case 40:
		goto loc_82BEED70;
	case 41:
		goto loc_82BEED70;
	case 42:
		goto loc_82BEED70;
	case 43:
		goto loc_82BEED70;
	case 44:
		goto loc_82BEED70;
	case 45:
		goto loc_82BEED70;
	case 46:
		goto loc_82BEED70;
	case 47:
		goto loc_82BEED70;
	case 48:
		goto loc_82BEED70;
	case 49:
		goto loc_82BEED70;
	case 50:
		goto loc_82BEED70;
	case 51:
		goto loc_82BEED70;
	case 52:
		goto loc_82BEED70;
	case 53:
		goto loc_82BEED70;
	case 54:
		goto loc_82BEED70;
	case 55:
		goto loc_82BEED70;
	case 56:
		goto loc_82BEED70;
	case 57:
		goto loc_82BEED70;
	case 58:
		goto loc_82BEED70;
	case 59:
		goto loc_82BEED70;
	case 60:
		goto loc_82BEED70;
	case 61:
		goto loc_82BEED70;
	case 62:
		goto loc_82BEED70;
	case 63:
		goto loc_82BEED58;
	case 64:
		goto loc_82BEED70;
	case 65:
		goto loc_82BEED70;
	case 66:
		goto loc_82BEED70;
	case 67:
		goto loc_82BEED70;
	case 68:
		goto loc_82BEED70;
	case 69:
		goto loc_82BEED70;
	case 70:
		goto loc_82BEED70;
	case 71:
		goto loc_82BEED70;
	case 72:
		goto loc_82BEED70;
	case 73:
		goto loc_82BEED70;
	case 74:
		goto loc_82BEED70;
	case 75:
		goto loc_82BEED70;
	case 76:
		goto loc_82BEED70;
	case 77:
		goto loc_82BEED70;
	case 78:
		goto loc_82BEED70;
	case 79:
		goto loc_82BEED70;
	case 80:
		goto loc_82BEED70;
	case 81:
		goto loc_82BEED70;
	case 82:
		goto loc_82BEED70;
	case 83:
		goto loc_82BEED70;
	case 84:
		goto loc_82BEED70;
	case 85:
		goto loc_82BEED70;
	case 86:
		goto loc_82BEED70;
	case 87:
		goto loc_82BEED70;
	case 88:
		goto loc_82BEED70;
	case 89:
		goto loc_82BEED70;
	case 90:
		goto loc_82BEED70;
	case 91:
		goto loc_82BEED70;
	case 92:
		goto loc_82BEED70;
	case 93:
		goto loc_82BEED70;
	case 94:
		goto loc_82BEED70;
	case 95:
		goto loc_82BEED70;
	case 96:
		goto loc_82BEED70;
	case 97:
		goto loc_82BEED70;
	case 98:
		goto loc_82BEED70;
	case 99:
		goto loc_82BEED70;
	case 100:
		goto loc_82BEED70;
	case 101:
		goto loc_82BEED70;
	case 102:
		goto loc_82BEED70;
	case 103:
		goto loc_82BEED70;
	case 104:
		goto loc_82BEED70;
	case 105:
		goto loc_82BEED70;
	case 106:
		goto loc_82BEED70;
	case 107:
		goto loc_82BEED70;
	case 108:
		goto loc_82BEED70;
	case 109:
		goto loc_82BEED70;
	case 110:
		goto loc_82BEED70;
	case 111:
		goto loc_82BEED70;
	case 112:
		goto loc_82BEED70;
	case 113:
		goto loc_82BEED70;
	case 114:
		goto loc_82BEED70;
	case 115:
		goto loc_82BEED70;
	case 116:
		goto loc_82BEED70;
	case 117:
		goto loc_82BEED70;
	case 118:
		goto loc_82BEED70;
	case 119:
		goto loc_82BEED70;
	case 120:
		goto loc_82BEED70;
	case 121:
		goto loc_82BEED70;
	case 122:
		goto loc_82BEED70;
	case 123:
		goto loc_82BEED70;
	case 124:
		goto loc_82BEED70;
	case 125:
		goto loc_82BEED70;
	case 126:
		goto loc_82BEED70;
	case 127:
		goto loc_82BEED68;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-4872(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4872);
	// lwz r21,-4856(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4856);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4840(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4840);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4824(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4824);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4808(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4808);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4792(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4792);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4776(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4776);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4752(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4752);
	// lwz r21,-4760(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4760);
loc_82BEECF8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20560
	ctx.r11.s64 = ctx.r11.s64 + -20560;
	// addi r3,r11,-192
	ctx.r3.s64 = ctx.r11.s64 + -192;
	// blr 
	return;
loc_82BEED08:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20560
	ctx.r11.s64 = ctx.r11.s64 + -20560;
	// addi r3,r11,-172
	ctx.r3.s64 = ctx.r11.s64 + -172;
	// blr 
	return;
loc_82BEED18:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20560
	ctx.r11.s64 = ctx.r11.s64 + -20560;
	// addi r3,r11,-144
	ctx.r3.s64 = ctx.r11.s64 + -144;
	// blr 
	return;
loc_82BEED28:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20560
	ctx.r11.s64 = ctx.r11.s64 + -20560;
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// blr 
	return;
loc_82BEED38:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20560
	ctx.r11.s64 = ctx.r11.s64 + -20560;
	// addi r3,r11,-84
	ctx.r3.s64 = ctx.r11.s64 + -84;
	// blr 
	return;
loc_82BEED48:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20560
	ctx.r11.s64 = ctx.r11.s64 + -20560;
	// addi r3,r11,-52
	ctx.r3.s64 = ctx.r11.s64 + -52;
	// blr 
	return;
loc_82BEED58:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20560
	ctx.r11.s64 = ctx.r11.s64 + -20560;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
loc_82BEED68:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-20560
	ctx.r3.s64 = ctx.r11.s64 + -20560;
loc_82BEED70:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEED78"))) PPC_WEAK_FUNC(sub_82BEED78);
PPC_FUNC_IMPL(__imp__sub_82BEED78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEED80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-20340
	ctx.r30.s64 = ctx.r11.s64 + -20340;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-192
	ctx.r4.s64 = ctx.r30.s64 + -192;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BEEDA0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beedbc
	if (!ctx.cr6.eq) goto loc_82BEEDBC;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEEDBC:
	// addi r4,r30,-172
	ctx.r4.s64 = ctx.r30.s64 + -172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEEDC8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beede8
	if (!ctx.cr6.eq) goto loc_82BEEDE8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEEDE8:
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEEDF4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beee14
	if (!ctx.cr6.eq) goto loc_82BEEE14;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEEE14:
	// addi r4,r30,-112
	ctx.r4.s64 = ctx.r30.s64 + -112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEEE20;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beee40
	if (!ctx.cr6.eq) goto loc_82BEEE40;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEEE40:
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEEE4C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beee6c
	if (!ctx.cr6.eq) goto loc_82BEEE6C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEEE6C:
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEEE78;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beee98
	if (!ctx.cr6.eq) goto loc_82BEEE98;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEEE98:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEEEA4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beeec4
	if (!ctx.cr6.eq) goto loc_82BEEEC4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEEEC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEEED0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beeee4
	if (!ctx.cr6.eq) goto loc_82BEEEE4;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82BEEEE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEEEF0"))) PPC_WEAK_FUNC(sub_82BEEEF0);
PPC_FUNC_IMPL(__imp__sub_82BEEEF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x82beef68
	if (ctx.cr6.gt) goto loc_82BEEF68;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-4332
	ctx.r12.s64 = ctx.r12.s64 + -4332;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82BEEF24;
	case 1:
		goto loc_82BEEF38;
	case 2:
		goto loc_82BEEF4C;
	case 3:
		goto loc_82BEEF60;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-4316(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4316);
	// lwz r21,-4296(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4296);
	// lwz r21,-4276(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4276);
	// lwz r21,-4256(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4256);
loc_82BEEF24:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20268
	ctx.r11.s64 = ctx.r11.s64 + -20268;
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEEF38:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20268
	ctx.r11.s64 = ctx.r11.s64 + -20268;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEEF4C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20268
	ctx.r11.s64 = ctx.r11.s64 + -20268;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEEF60:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20268
	ctx.r11.s64 = ctx.r11.s64 + -20268;
loc_82BEEF68:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEEF70"))) PPC_WEAK_FUNC(sub_82BEEF70);
PPC_FUNC_IMPL(__imp__sub_82BEEF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEEF78;
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
	// beq cr6,0x82bef02c
	if (ctx.cr6.eq) goto loc_82BEF02C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-20212
	ctx.r30.s64 = ctx.r11.s64 + -20212;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// bl 0x82d61e20
	ctx.lr = 0x82BEEFA0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beefb8
	if (!ctx.cr6.eq) goto loc_82BEEFB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEEFB8:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEEFC4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beefdc
	if (!ctx.cr6.eq) goto loc_82BEEFDC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEEFDC:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEEFE8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef004
	if (!ctx.cr6.eq) goto loc_82BEF004;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF004:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF010;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef02c
	if (!ctx.cr6.eq) goto loc_82BEF02C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF02C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEF038"))) PPC_WEAK_FUNC(sub_82BEF038);
PPC_FUNC_IMPL(__imp__sub_82BEF038) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-4000
	ctx.r12.s64 = ctx.r12.s64 + -4000;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BEF0E0;
	case 1:
		goto loc_82BEF0F0;
	case 2:
		goto loc_82BEF138;
	case 3:
		goto loc_82BEF100;
	case 4:
		goto loc_82BEF138;
	case 5:
		goto loc_82BEF138;
	case 6:
		goto loc_82BEF138;
	case 7:
		goto loc_82BEF110;
	case 8:
		goto loc_82BEF138;
	case 9:
		goto loc_82BEF138;
	case 10:
		goto loc_82BEF138;
	case 11:
		goto loc_82BEF138;
	case 12:
		goto loc_82BEF138;
	case 13:
		goto loc_82BEF138;
	case 14:
		goto loc_82BEF138;
	case 15:
		goto loc_82BEF120;
	case 16:
		goto loc_82BEF138;
	case 17:
		goto loc_82BEF138;
	case 18:
		goto loc_82BEF138;
	case 19:
		goto loc_82BEF138;
	case 20:
		goto loc_82BEF138;
	case 21:
		goto loc_82BEF138;
	case 22:
		goto loc_82BEF138;
	case 23:
		goto loc_82BEF138;
	case 24:
		goto loc_82BEF138;
	case 25:
		goto loc_82BEF138;
	case 26:
		goto loc_82BEF138;
	case 27:
		goto loc_82BEF138;
	case 28:
		goto loc_82BEF138;
	case 29:
		goto loc_82BEF138;
	case 30:
		goto loc_82BEF138;
	case 31:
		goto loc_82BEF130;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-3872(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3872);
	// lwz r21,-3856(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3856);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3840(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3840);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3824(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3824);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3808(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3808);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3784(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3784);
	// lwz r21,-3792(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3792);
loc_82BEF0E0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20108
	ctx.r11.s64 = ctx.r11.s64 + -20108;
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// blr 
	return;
loc_82BEF0F0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20108
	ctx.r11.s64 = ctx.r11.s64 + -20108;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// blr 
	return;
loc_82BEF100:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20108
	ctx.r11.s64 = ctx.r11.s64 + -20108;
	// addi r3,r11,-56
	ctx.r3.s64 = ctx.r11.s64 + -56;
	// blr 
	return;
loc_82BEF110:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20108
	ctx.r11.s64 = ctx.r11.s64 + -20108;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// blr 
	return;
loc_82BEF120:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-20108
	ctx.r11.s64 = ctx.r11.s64 + -20108;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82BEF130:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-20108
	ctx.r3.s64 = ctx.r11.s64 + -20108;
loc_82BEF138:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEF140"))) PPC_WEAK_FUNC(sub_82BEF140);
PPC_FUNC_IMPL(__imp__sub_82BEF140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEF148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-19984
	ctx.r30.s64 = ctx.r11.s64 + -19984;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF168;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef180
	if (!ctx.cr6.eq) goto loc_82BEF180;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF180:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF18C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef1a8
	if (!ctx.cr6.eq) goto loc_82BEF1A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF1A8:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF1B4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef1d0
	if (!ctx.cr6.eq) goto loc_82BEF1D0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF1D0:
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF1DC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef1f8
	if (!ctx.cr6.eq) goto loc_82BEF1F8;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF1F8:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF204;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef220
	if (!ctx.cr6.eq) goto loc_82BEF220;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF220:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF22C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef248
	if (!ctx.cr6.eq) goto loc_82BEF248;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF248:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEF258"))) PPC_WEAK_FUNC(sub_82BEF258);
PPC_FUNC_IMPL(__imp__sub_82BEF258) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// bgt cr6,0x82bef398
	if (ctx.cr6.gt) goto loc_82BEF398;
	// beq cr6,0x82bef384
	if (ctx.cr6.eq) goto loc_82BEF384;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bgt cr6,0x82bef41c
	if (ctx.cr6.gt) goto loc_82BEF41C;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-3444
	ctx.r12.s64 = ctx.r12.s64 + -3444;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82BEF30C;
	case 1:
		goto loc_82BEF320;
	case 2:
		goto loc_82BEF41C;
	case 3:
		goto loc_82BEF334;
	case 4:
		goto loc_82BEF41C;
	case 5:
		goto loc_82BEF41C;
	case 6:
		goto loc_82BEF41C;
	case 7:
		goto loc_82BEF348;
	case 8:
		goto loc_82BEF41C;
	case 9:
		goto loc_82BEF41C;
	case 10:
		goto loc_82BEF41C;
	case 11:
		goto loc_82BEF41C;
	case 12:
		goto loc_82BEF41C;
	case 13:
		goto loc_82BEF41C;
	case 14:
		goto loc_82BEF41C;
	case 15:
		goto loc_82BEF35C;
	case 16:
		goto loc_82BEF41C;
	case 17:
		goto loc_82BEF41C;
	case 18:
		goto loc_82BEF41C;
	case 19:
		goto loc_82BEF41C;
	case 20:
		goto loc_82BEF41C;
	case 21:
		goto loc_82BEF41C;
	case 22:
		goto loc_82BEF41C;
	case 23:
		goto loc_82BEF41C;
	case 24:
		goto loc_82BEF41C;
	case 25:
		goto loc_82BEF41C;
	case 26:
		goto loc_82BEF41C;
	case 27:
		goto loc_82BEF41C;
	case 28:
		goto loc_82BEF41C;
	case 29:
		goto loc_82BEF41C;
	case 30:
		goto loc_82BEF41C;
	case 31:
		goto loc_82BEF370;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-3316(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3316);
	// lwz r21,-3296(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3296);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3276(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3276);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3256(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3256);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3236(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3236);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3044(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3044);
	// lwz r21,-3216(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3216);
loc_82BEF30C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19724
	ctx.r11.s64 = ctx.r11.s64 + -19724;
	// addi r11,r11,-228
	ctx.r11.s64 = ctx.r11.s64 + -228;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF320:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19724
	ctx.r11.s64 = ctx.r11.s64 + -19724;
	// addi r11,r11,-204
	ctx.r11.s64 = ctx.r11.s64 + -204;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF334:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19724
	ctx.r11.s64 = ctx.r11.s64 + -19724;
	// addi r11,r11,-184
	ctx.r11.s64 = ctx.r11.s64 + -184;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF348:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19724
	ctx.r11.s64 = ctx.r11.s64 + -19724;
	// addi r11,r11,-164
	ctx.r11.s64 = ctx.r11.s64 + -164;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF35C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19724
	ctx.r11.s64 = ctx.r11.s64 + -19724;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF370:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19724
	ctx.r11.s64 = ctx.r11.s64 + -19724;
	// addi r11,r11,-124
	ctx.r11.s64 = ctx.r11.s64 + -124;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF384:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19724
	ctx.r11.s64 = ctx.r11.s64 + -19724;
	// addi r11,r11,-104
	ctx.r11.s64 = ctx.r11.s64 + -104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF398:
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bgt cr6,0x82bef3f0
	if (ctx.cr6.gt) goto loc_82BEF3F0;
	// beq cr6,0x82bef3dc
	if (ctx.cr6.eq) goto loc_82BEF3DC;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// beq cr6,0x82bef3c8
	if (ctx.cr6.eq) goto loc_82BEF3C8;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bne cr6,0x82bef41c
	if (!ctx.cr6.eq) goto loc_82BEF41C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19724
	ctx.r11.s64 = ctx.r11.s64 + -19724;
	// addi r11,r11,-68
	ctx.r11.s64 = ctx.r11.s64 + -68;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF3C8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19724
	ctx.r11.s64 = ctx.r11.s64 + -19724;
	// addi r11,r11,-84
	ctx.r11.s64 = ctx.r11.s64 + -84;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF3DC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19724
	ctx.r11.s64 = ctx.r11.s64 + -19724;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF3F0:
	// cmpwi cr6,r3,1024
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1024, ctx.xer);
	// beq cr6,0x82bef410
	if (ctx.cr6.eq) goto loc_82BEF410;
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// bne cr6,0x82bef41c
	if (!ctx.cr6.eq) goto loc_82BEF41C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19724
	ctx.r11.s64 = ctx.r11.s64 + -19724;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF410:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19724
	ctx.r11.s64 = ctx.r11.s64 + -19724;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_82BEF41C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEF428"))) PPC_WEAK_FUNC(sub_82BEF428);
PPC_FUNC_IMPL(__imp__sub_82BEF428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEF430;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-19472
	ctx.r30.s64 = ctx.r11.s64 + -19472;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-228
	ctx.r4.s64 = ctx.r30.s64 + -228;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF450;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef46c
	if (!ctx.cr6.eq) goto loc_82BEF46C;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF46C:
	// addi r4,r30,-204
	ctx.r4.s64 = ctx.r30.s64 + -204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF478;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef498
	if (!ctx.cr6.eq) goto loc_82BEF498;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF498:
	// addi r4,r30,-184
	ctx.r4.s64 = ctx.r30.s64 + -184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF4A4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef4c4
	if (!ctx.cr6.eq) goto loc_82BEF4C4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF4C4:
	// addi r4,r30,-164
	ctx.r4.s64 = ctx.r30.s64 + -164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF4D0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef4f0
	if (!ctx.cr6.eq) goto loc_82BEF4F0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF4F0:
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF4FC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef51c
	if (!ctx.cr6.eq) goto loc_82BEF51C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF51C:
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF528;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef548
	if (!ctx.cr6.eq) goto loc_82BEF548;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF548:
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF554;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef574
	if (!ctx.cr6.eq) goto loc_82BEF574;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF574:
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF580;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef5a0
	if (!ctx.cr6.eq) goto loc_82BEF5A0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF5A0:
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF5AC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef5cc
	if (!ctx.cr6.eq) goto loc_82BEF5CC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF5CC:
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF5D8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef5f8
	if (!ctx.cr6.eq) goto loc_82BEF5F8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF5F8:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF604;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef624
	if (!ctx.cr6.eq) goto loc_82BEF624;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF624:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF630;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef644
	if (!ctx.cr6.eq) goto loc_82BEF644;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82BEF644:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEF650"))) PPC_WEAK_FUNC(sub_82BEF650);
PPC_FUNC_IMPL(__imp__sub_82BEF650) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-2440
	ctx.r12.s64 = ctx.r12.s64 + -2440;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BEF6F8;
	case 1:
		goto loc_82BEF708;
	case 2:
		goto loc_82BEF750;
	case 3:
		goto loc_82BEF718;
	case 4:
		goto loc_82BEF750;
	case 5:
		goto loc_82BEF750;
	case 6:
		goto loc_82BEF750;
	case 7:
		goto loc_82BEF728;
	case 8:
		goto loc_82BEF750;
	case 9:
		goto loc_82BEF750;
	case 10:
		goto loc_82BEF750;
	case 11:
		goto loc_82BEF750;
	case 12:
		goto loc_82BEF750;
	case 13:
		goto loc_82BEF750;
	case 14:
		goto loc_82BEF750;
	case 15:
		goto loc_82BEF738;
	case 16:
		goto loc_82BEF750;
	case 17:
		goto loc_82BEF750;
	case 18:
		goto loc_82BEF750;
	case 19:
		goto loc_82BEF750;
	case 20:
		goto loc_82BEF750;
	case 21:
		goto loc_82BEF750;
	case 22:
		goto loc_82BEF750;
	case 23:
		goto loc_82BEF750;
	case 24:
		goto loc_82BEF750;
	case 25:
		goto loc_82BEF750;
	case 26:
		goto loc_82BEF750;
	case 27:
		goto loc_82BEF750;
	case 28:
		goto loc_82BEF750;
	case 29:
		goto loc_82BEF750;
	case 30:
		goto loc_82BEF750;
	case 31:
		goto loc_82BEF748;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-2312(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2312);
	// lwz r21,-2296(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2296);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2280(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2280);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2264(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2264);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2248(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2248);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2224(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2224);
	// lwz r21,-2232(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2232);
loc_82BEF6F8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19324
	ctx.r11.s64 = ctx.r11.s64 + -19324;
	// addi r3,r11,-124
	ctx.r3.s64 = ctx.r11.s64 + -124;
	// blr 
	return;
loc_82BEF708:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19324
	ctx.r11.s64 = ctx.r11.s64 + -19324;
	// addi r3,r11,-100
	ctx.r3.s64 = ctx.r11.s64 + -100;
	// blr 
	return;
loc_82BEF718:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19324
	ctx.r11.s64 = ctx.r11.s64 + -19324;
	// addi r3,r11,-76
	ctx.r3.s64 = ctx.r11.s64 + -76;
	// blr 
	return;
loc_82BEF728:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19324
	ctx.r11.s64 = ctx.r11.s64 + -19324;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// blr 
	return;
loc_82BEF738:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19324
	ctx.r11.s64 = ctx.r11.s64 + -19324;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
loc_82BEF748:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-19324
	ctx.r3.s64 = ctx.r11.s64 + -19324;
loc_82BEF750:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEF758"))) PPC_WEAK_FUNC(sub_82BEF758);
PPC_FUNC_IMPL(__imp__sub_82BEF758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEF760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-19172
	ctx.r30.s64 = ctx.r11.s64 + -19172;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF780;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef798
	if (!ctx.cr6.eq) goto loc_82BEF798;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF798:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF7A4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef7c0
	if (!ctx.cr6.eq) goto loc_82BEF7C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF7C0:
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF7CC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef7e8
	if (!ctx.cr6.eq) goto loc_82BEF7E8;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF7E8:
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF7F4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef810
	if (!ctx.cr6.eq) goto loc_82BEF810;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF810:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF81C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef838
	if (!ctx.cr6.eq) goto loc_82BEF838;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF838:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF844;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef860
	if (!ctx.cr6.eq) goto loc_82BEF860;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF860:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEF870"))) PPC_WEAK_FUNC(sub_82BEF870);
PPC_FUNC_IMPL(__imp__sub_82BEF870) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// bgt cr6,0x82bef948
	if (ctx.cr6.gt) goto loc_82BEF948;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-1900
	ctx.r12.s64 = ctx.r12.s64 + -1900;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82BEF8B4;
	case 1:
		goto loc_82BEF8C8;
	case 2:
		goto loc_82BEF8DC;
	case 3:
		goto loc_82BEF8F0;
	case 4:
		goto loc_82BEF904;
	case 5:
		goto loc_82BEF918;
	case 6:
		goto loc_82BEF92C;
	case 7:
		goto loc_82BEF940;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-1868(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1868);
	// lwz r21,-1848(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1848);
	// lwz r21,-1828(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1828);
	// lwz r21,-1808(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1808);
	// lwz r21,-1788(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1788);
	// lwz r21,-1768(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1768);
	// lwz r21,-1748(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1748);
	// lwz r21,-1728(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1728);
loc_82BEF8B4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19028
	ctx.r11.s64 = ctx.r11.s64 + -19028;
	// addi r11,r11,-116
	ctx.r11.s64 = ctx.r11.s64 + -116;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF8C8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19028
	ctx.r11.s64 = ctx.r11.s64 + -19028;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF8DC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19028
	ctx.r11.s64 = ctx.r11.s64 + -19028;
	// addi r11,r11,-84
	ctx.r11.s64 = ctx.r11.s64 + -84;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF8F0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19028
	ctx.r11.s64 = ctx.r11.s64 + -19028;
	// addi r11,r11,-68
	ctx.r11.s64 = ctx.r11.s64 + -68;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF904:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19028
	ctx.r11.s64 = ctx.r11.s64 + -19028;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF918:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19028
	ctx.r11.s64 = ctx.r11.s64 + -19028;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF92C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19028
	ctx.r11.s64 = ctx.r11.s64 + -19028;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEF940:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-19028
	ctx.r11.s64 = ctx.r11.s64 + -19028;
loc_82BEF948:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEF950"))) PPC_WEAK_FUNC(sub_82BEF950);
PPC_FUNC_IMPL(__imp__sub_82BEF950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEF958;
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
	// beq cr6,0x82befac4
	if (ctx.cr6.eq) goto loc_82BEFAC4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-18888
	ctx.r30.s64 = ctx.r11.s64 + -18888;
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF980;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef9a0
	if (!ctx.cr6.eq) goto loc_82BEF9A0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF9A0:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF9AC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef9c8
	if (!ctx.cr6.eq) goto loc_82BEF9C8;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF9C8:
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEF9D4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bef9f4
	if (!ctx.cr6.eq) goto loc_82BEF9F4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEF9F4:
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFA00;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82befa20
	if (!ctx.cr6.eq) goto loc_82BEFA20;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFA20:
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFA2C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82befa4c
	if (!ctx.cr6.eq) goto loc_82BEFA4C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFA4C:
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFA58;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82befa78
	if (!ctx.cr6.eq) goto loc_82BEFA78;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFA78:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFA84;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82befaa4
	if (!ctx.cr6.eq) goto loc_82BEFAA4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFAA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFAB0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82befac4
	if (!ctx.cr6.eq) goto loc_82BEFAC4;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82BEFAC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFAD0"))) PPC_WEAK_FUNC(sub_82BEFAD0);
PPC_FUNC_IMPL(__imp__sub_82BEFAD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// bgt cr6,0x82befca4
	if (ctx.cr6.gt) goto loc_82BEFCA4;
	// beq cr6,0x82befc90
	if (ctx.cr6.eq) goto loc_82BEFC90;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// bgt cr6,0x82befd60
	if (ctx.cr6.gt) goto loc_82BEFD60;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,-1276
	ctx.r12.s64 = ctx.r12.s64 + -1276;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82BEFC04;
	case 1:
		goto loc_82BEFC18;
	case 2:
		goto loc_82BEFD60;
	case 3:
		goto loc_82BEFC2C;
	case 4:
		goto loc_82BEFD60;
	case 5:
		goto loc_82BEFD60;
	case 6:
		goto loc_82BEFD60;
	case 7:
		goto loc_82BEFC40;
	case 8:
		goto loc_82BEFD60;
	case 9:
		goto loc_82BEFD60;
	case 10:
		goto loc_82BEFD60;
	case 11:
		goto loc_82BEFD60;
	case 12:
		goto loc_82BEFD60;
	case 13:
		goto loc_82BEFD60;
	case 14:
		goto loc_82BEFD60;
	case 15:
		goto loc_82BEFC54;
	case 16:
		goto loc_82BEFD60;
	case 17:
		goto loc_82BEFD60;
	case 18:
		goto loc_82BEFD60;
	case 19:
		goto loc_82BEFD60;
	case 20:
		goto loc_82BEFD60;
	case 21:
		goto loc_82BEFD60;
	case 22:
		goto loc_82BEFD60;
	case 23:
		goto loc_82BEFD60;
	case 24:
		goto loc_82BEFD60;
	case 25:
		goto loc_82BEFD60;
	case 26:
		goto loc_82BEFD60;
	case 27:
		goto loc_82BEFD60;
	case 28:
		goto loc_82BEFD60;
	case 29:
		goto loc_82BEFD60;
	case 30:
		goto loc_82BEFD60;
	case 31:
		goto loc_82BEFC68;
	case 32:
		goto loc_82BEFD60;
	case 33:
		goto loc_82BEFD60;
	case 34:
		goto loc_82BEFD60;
	case 35:
		goto loc_82BEFD60;
	case 36:
		goto loc_82BEFD60;
	case 37:
		goto loc_82BEFD60;
	case 38:
		goto loc_82BEFD60;
	case 39:
		goto loc_82BEFD60;
	case 40:
		goto loc_82BEFD60;
	case 41:
		goto loc_82BEFD60;
	case 42:
		goto loc_82BEFD60;
	case 43:
		goto loc_82BEFD60;
	case 44:
		goto loc_82BEFD60;
	case 45:
		goto loc_82BEFD60;
	case 46:
		goto loc_82BEFD60;
	case 47:
		goto loc_82BEFD60;
	case 48:
		goto loc_82BEFD60;
	case 49:
		goto loc_82BEFD60;
	case 50:
		goto loc_82BEFD60;
	case 51:
		goto loc_82BEFD60;
	case 52:
		goto loc_82BEFD60;
	case 53:
		goto loc_82BEFD60;
	case 54:
		goto loc_82BEFD60;
	case 55:
		goto loc_82BEFD60;
	case 56:
		goto loc_82BEFD60;
	case 57:
		goto loc_82BEFD60;
	case 58:
		goto loc_82BEFD60;
	case 59:
		goto loc_82BEFD60;
	case 60:
		goto loc_82BEFD60;
	case 61:
		goto loc_82BEFD60;
	case 62:
		goto loc_82BEFD60;
	case 63:
		goto loc_82BEFC7C;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-1020(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1020);
	// lwz r21,-1000(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1000);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-980(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -980);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-960(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -960);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-940(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -940);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-920(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -920);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-672(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -672);
	// lwz r21,-900(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + -900);
loc_82BEFC04:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// addi r11,r11,-328
	ctx.r11.s64 = ctx.r11.s64 + -328;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEFC18:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// addi r11,r11,-308
	ctx.r11.s64 = ctx.r11.s64 + -308;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEFC2C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// addi r11,r11,-288
	ctx.r11.s64 = ctx.r11.s64 + -288;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEFC40:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// addi r11,r11,-268
	ctx.r11.s64 = ctx.r11.s64 + -268;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEFC54:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// addi r11,r11,-248
	ctx.r11.s64 = ctx.r11.s64 + -248;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEFC68:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// addi r11,r11,-224
	ctx.r11.s64 = ctx.r11.s64 + -224;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEFC7C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// addi r11,r11,-200
	ctx.r11.s64 = ctx.r11.s64 + -200;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEFC90:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// addi r11,r11,-172
	ctx.r11.s64 = ctx.r11.s64 + -172;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEFCA4:
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// bgt cr6,0x82befd18
	if (ctx.cr6.gt) goto loc_82BEFD18;
	// beq cr6,0x82befd04
	if (ctx.cr6.eq) goto loc_82BEFD04;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// beq cr6,0x82befcf0
	if (ctx.cr6.eq) goto loc_82BEFCF0;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x82befcdc
	if (ctx.cr6.eq) goto loc_82BEFCDC;
	// cmpwi cr6,r3,1024
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1024, ctx.xer);
	// bne cr6,0x82befd60
	if (!ctx.cr6.eq) goto loc_82BEFD60;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// addi r11,r11,-104
	ctx.r11.s64 = ctx.r11.s64 + -104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEFCDC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// addi r11,r11,-124
	ctx.r11.s64 = ctx.r11.s64 + -124;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEFCF0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEFD04:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEFD18:
	// cmpwi cr6,r3,4096
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4096, ctx.xer);
	// beq cr6,0x82befd54
	if (ctx.cr6.eq) goto loc_82BEFD54;
	// cmpwi cr6,r3,8192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8192, ctx.xer);
	// beq cr6,0x82befd40
	if (ctx.cr6.eq) goto loc_82BEFD40;
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// bne cr6,0x82befd60
	if (!ctx.cr6.eq) goto loc_82BEFD60;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEFD40:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BEFD54:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-18536
	ctx.r11.s64 = ctx.r11.s64 + -18536;
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
loc_82BEFD60:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFD68"))) PPC_WEAK_FUNC(sub_82BEFD68);
PPC_FUNC_IMPL(__imp__sub_82BEFD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BEFD70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-18180
	ctx.r30.s64 = ctx.r11.s64 + -18180;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-328
	ctx.r4.s64 = ctx.r30.s64 + -328;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFD90;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82befdac
	if (!ctx.cr6.eq) goto loc_82BEFDAC;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFDAC:
	// addi r4,r30,-308
	ctx.r4.s64 = ctx.r30.s64 + -308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFDB8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82befdd8
	if (!ctx.cr6.eq) goto loc_82BEFDD8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFDD8:
	// addi r4,r30,-288
	ctx.r4.s64 = ctx.r30.s64 + -288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFDE4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82befe04
	if (!ctx.cr6.eq) goto loc_82BEFE04;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFE04:
	// addi r4,r30,-268
	ctx.r4.s64 = ctx.r30.s64 + -268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFE10;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82befe30
	if (!ctx.cr6.eq) goto loc_82BEFE30;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFE30:
	// addi r4,r30,-248
	ctx.r4.s64 = ctx.r30.s64 + -248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFE3C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82befe5c
	if (!ctx.cr6.eq) goto loc_82BEFE5C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFE5C:
	// addi r4,r30,-224
	ctx.r4.s64 = ctx.r30.s64 + -224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFE68;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82befe88
	if (!ctx.cr6.eq) goto loc_82BEFE88;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFE88:
	// addi r4,r30,-200
	ctx.r4.s64 = ctx.r30.s64 + -200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFE94;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82befeb4
	if (!ctx.cr6.eq) goto loc_82BEFEB4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFEB4:
	// addi r4,r30,-172
	ctx.r4.s64 = ctx.r30.s64 + -172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFEC0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82befee0
	if (!ctx.cr6.eq) goto loc_82BEFEE0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFEE0:
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFEEC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beff0c
	if (!ctx.cr6.eq) goto loc_82BEFF0C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFF0C:
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFF18;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beff38
	if (!ctx.cr6.eq) goto loc_82BEFF38;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFF38:
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFF44;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beff64
	if (!ctx.cr6.eq) goto loc_82BEFF64;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFF64:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFF70;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beff90
	if (!ctx.cr6.eq) goto loc_82BEFF90;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFF90:
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFF9C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beffbc
	if (!ctx.cr6.eq) goto loc_82BEFFBC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFFBC:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFFC8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82beffe8
	if (!ctx.cr6.eq) goto loc_82BEFFE8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BEFFE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BEFFF4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0008
	if (!ctx.cr6.eq) goto loc_82BF0008;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82BF0008:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0018"))) PPC_WEAK_FUNC(sub_82BF0018);
PPC_FUNC_IMPL(__imp__sub_82BF0018) {
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
	// addi r3,r11,-18152
	ctx.r3.s64 = ctx.r11.s64 + -18152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0038"))) PPC_WEAK_FUNC(sub_82BF0038);
PPC_FUNC_IMPL(__imp__sub_82BF0038) {
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
	// addi r4,r11,-18136
	ctx.r4.s64 = ctx.r11.s64 + -18136;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0060;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0074
	if (!ctx.cr6.eq) goto loc_82BF0074;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82bf0078
	goto loc_82BF0078;
loc_82BF0074:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BF0078:
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

__attribute__((alias("__imp__sub_82BF0090"))) PPC_WEAK_FUNC(sub_82BF0090);
PPC_FUNC_IMPL(__imp__sub_82BF0090) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,184
	ctx.r12.s64 = ctx.r12.s64 + 184;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BF0138;
	case 1:
		goto loc_82BF0148;
	case 2:
		goto loc_82BF0190;
	case 3:
		goto loc_82BF0158;
	case 4:
		goto loc_82BF0190;
	case 5:
		goto loc_82BF0190;
	case 6:
		goto loc_82BF0190;
	case 7:
		goto loc_82BF0168;
	case 8:
		goto loc_82BF0190;
	case 9:
		goto loc_82BF0190;
	case 10:
		goto loc_82BF0190;
	case 11:
		goto loc_82BF0190;
	case 12:
		goto loc_82BF0190;
	case 13:
		goto loc_82BF0190;
	case 14:
		goto loc_82BF0190;
	case 15:
		goto loc_82BF0178;
	case 16:
		goto loc_82BF0190;
	case 17:
		goto loc_82BF0190;
	case 18:
		goto loc_82BF0190;
	case 19:
		goto loc_82BF0190;
	case 20:
		goto loc_82BF0190;
	case 21:
		goto loc_82BF0190;
	case 22:
		goto loc_82BF0190;
	case 23:
		goto loc_82BF0190;
	case 24:
		goto loc_82BF0190;
	case 25:
		goto loc_82BF0190;
	case 26:
		goto loc_82BF0190;
	case 27:
		goto loc_82BF0190;
	case 28:
		goto loc_82BF0190;
	case 29:
		goto loc_82BF0190;
	case 30:
		goto loc_82BF0190;
	case 31:
		goto loc_82BF0188;
	default:
		__builtin_unreachable();
	}
	// lwz r21,312(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lwz r21,328(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,344(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,360(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,376(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,400(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r21,392(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
loc_82BF0138:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17964
	ctx.r11.s64 = ctx.r11.s64 + -17964;
	// addi r3,r11,-156
	ctx.r3.s64 = ctx.r11.s64 + -156;
	// blr 
	return;
loc_82BF0148:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17964
	ctx.r11.s64 = ctx.r11.s64 + -17964;
	// addi r3,r11,-124
	ctx.r3.s64 = ctx.r11.s64 + -124;
	// blr 
	return;
loc_82BF0158:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17964
	ctx.r11.s64 = ctx.r11.s64 + -17964;
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// blr 
	return;
loc_82BF0168:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17964
	ctx.r11.s64 = ctx.r11.s64 + -17964;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// blr 
	return;
loc_82BF0178:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17964
	ctx.r11.s64 = ctx.r11.s64 + -17964;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
loc_82BF0188:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-17964
	ctx.r3.s64 = ctx.r11.s64 + -17964;
loc_82BF0190:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0198"))) PPC_WEAK_FUNC(sub_82BF0198);
PPC_FUNC_IMPL(__imp__sub_82BF0198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF01A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-17780
	ctx.r30.s64 = ctx.r11.s64 + -17780;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-156
	ctx.r4.s64 = ctx.r30.s64 + -156;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BF01C0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf01d8
	if (!ctx.cr6.eq) goto loc_82BF01D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF01D8:
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF01E4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0200
	if (!ctx.cr6.eq) goto loc_82BF0200;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0200:
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF020C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0228
	if (!ctx.cr6.eq) goto loc_82BF0228;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0228:
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0234;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0250
	if (!ctx.cr6.eq) goto loc_82BF0250;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0250:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF025C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0278
	if (!ctx.cr6.eq) goto loc_82BF0278;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0284;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf02a0
	if (!ctx.cr6.eq) goto loc_82BF02A0;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF02A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF02B0"))) PPC_WEAK_FUNC(sub_82BF02B0);
PPC_FUNC_IMPL(__imp__sub_82BF02B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bf02e8
	if (ctx.cr6.lt) goto loc_82BF02E8;
	// beq cr6,0x82bf02d8
	if (ctx.cr6.eq) goto loc_82BF02D8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-17704
	ctx.r3.s64 = ctx.r11.s64 + -17704;
	// blr 
	return;
loc_82BF02D8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17704
	ctx.r11.s64 = ctx.r11.s64 + -17704;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82BF02E8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17704
	ctx.r11.s64 = ctx.r11.s64 + -17704;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF02F8"))) PPC_WEAK_FUNC(sub_82BF02F8);
PPC_FUNC_IMPL(__imp__sub_82BF02F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF0300;
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
	// beq cr6,0x82bf038c
	if (ctx.cr6.eq) goto loc_82BF038C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-17636
	ctx.r30.s64 = ctx.r11.s64 + -17636;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0328;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0340
	if (!ctx.cr6.eq) goto loc_82BF0340;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0340:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF034C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0364
	if (!ctx.cr6.eq) goto loc_82BF0364;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0364:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0370;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf038c
	if (!ctx.cr6.eq) goto loc_82BF038C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF038C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0398"))) PPC_WEAK_FUNC(sub_82BF0398);
PPC_FUNC_IMPL(__imp__sub_82BF0398) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82bf03bc
	if (ctx.cr6.eq) goto loc_82BF03BC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-17580
	ctx.r3.s64 = ctx.r11.s64 + -17580;
	// blr 
	return;
loc_82BF03BC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17580
	ctx.r11.s64 = ctx.r11.s64 + -17580;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF03D0"))) PPC_WEAK_FUNC(sub_82BF03D0);
PPC_FUNC_IMPL(__imp__sub_82BF03D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF03D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-17520
	ctx.r30.s64 = ctx.r11.s64 + -17520;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BF03F8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0410
	if (!ctx.cr6.eq) goto loc_82BF0410;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0410:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF041C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0438
	if (!ctx.cr6.eq) goto loc_82BF0438;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0438:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0448"))) PPC_WEAK_FUNC(sub_82BF0448);
PPC_FUNC_IMPL(__imp__sub_82BF0448) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bgt cr6,0x82bf0550
	if (ctx.cr6.gt) goto loc_82BF0550;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,1132
	ctx.r12.s64 = ctx.r12.s64 + 1132;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82BF0494;
	case 1:
		goto loc_82BF04A8;
	case 2:
		goto loc_82BF04BC;
	case 3:
		goto loc_82BF04D0;
	case 4:
		goto loc_82BF04E4;
	case 5:
		goto loc_82BF04F8;
	case 6:
		goto loc_82BF050C;
	case 7:
		goto loc_82BF0520;
	case 8:
		goto loc_82BF0534;
	case 9:
		goto loc_82BF0548;
	default:
		__builtin_unreachable();
	}
	// lwz r21,1172(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// lwz r21,1192(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1192);
	// lwz r21,1212(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1212);
	// lwz r21,1232(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r21,1252(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// lwz r21,1272(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// lwz r21,1292(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// lwz r21,1312(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	// lwz r21,1332(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// lwz r21,1352(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1352);
loc_82BF0494:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17312
	ctx.r11.s64 = ctx.r11.s64 + -17312;
	// addi r11,r11,-184
	ctx.r11.s64 = ctx.r11.s64 + -184;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF04A8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17312
	ctx.r11.s64 = ctx.r11.s64 + -17312;
	// addi r11,r11,-164
	ctx.r11.s64 = ctx.r11.s64 + -164;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF04BC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17312
	ctx.r11.s64 = ctx.r11.s64 + -17312;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF04D0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17312
	ctx.r11.s64 = ctx.r11.s64 + -17312;
	// addi r11,r11,-120
	ctx.r11.s64 = ctx.r11.s64 + -120;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF04E4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17312
	ctx.r11.s64 = ctx.r11.s64 + -17312;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF04F8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17312
	ctx.r11.s64 = ctx.r11.s64 + -17312;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF050C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17312
	ctx.r11.s64 = ctx.r11.s64 + -17312;
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF0520:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17312
	ctx.r11.s64 = ctx.r11.s64 + -17312;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF0534:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17312
	ctx.r11.s64 = ctx.r11.s64 + -17312;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF0548:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17312
	ctx.r11.s64 = ctx.r11.s64 + -17312;
loc_82BF0550:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0558"))) PPC_WEAK_FUNC(sub_82BF0558);
PPC_FUNC_IMPL(__imp__sub_82BF0558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF0560;
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
	// beq cr6,0x82bf0724
	if (ctx.cr6.eq) goto loc_82BF0724;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-17116
	ctx.r30.s64 = ctx.r11.s64 + -17116;
	// addi r4,r30,-184
	ctx.r4.s64 = ctx.r30.s64 + -184;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0588;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf05a8
	if (!ctx.cr6.eq) goto loc_82BF05A8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF05A8:
	// addi r4,r30,-164
	ctx.r4.s64 = ctx.r30.s64 + -164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF05B4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf05d0
	if (!ctx.cr6.eq) goto loc_82BF05D0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF05D0:
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF05DC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf05fc
	if (!ctx.cr6.eq) goto loc_82BF05FC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF05FC:
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0608;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0628
	if (!ctx.cr6.eq) goto loc_82BF0628;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0628:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0634;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0654
	if (!ctx.cr6.eq) goto loc_82BF0654;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0654:
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0660;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0680
	if (!ctx.cr6.eq) goto loc_82BF0680;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0680:
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF068C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf06ac
	if (!ctx.cr6.eq) goto loc_82BF06AC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF06AC:
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF06B8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf06d8
	if (!ctx.cr6.eq) goto loc_82BF06D8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF06D8:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF06E4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0704
	if (!ctx.cr6.eq) goto loc_82BF0704;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0704:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0710;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0724
	if (!ctx.cr6.eq) goto loc_82BF0724;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82BF0724:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0730"))) PPC_WEAK_FUNC(sub_82BF0730);
PPC_FUNC_IMPL(__imp__sub_82BF0730) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82bf0754
	if (ctx.cr6.eq) goto loc_82BF0754;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-17080
	ctx.r3.s64 = ctx.r11.s64 + -17080;
	// blr 
	return;
loc_82BF0754:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-17080
	ctx.r11.s64 = ctx.r11.s64 + -17080;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0768"))) PPC_WEAK_FUNC(sub_82BF0768);
PPC_FUNC_IMPL(__imp__sub_82BF0768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF0770;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-17036
	ctx.r30.s64 = ctx.r11.s64 + -17036;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0790;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf07a8
	if (!ctx.cr6.eq) goto loc_82BF07A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF07A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF07B4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf07d0
	if (!ctx.cr6.eq) goto loc_82BF07D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF07D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF07E0"))) PPC_WEAK_FUNC(sub_82BF07E0);
PPC_FUNC_IMPL(__imp__sub_82BF07E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bf0818
	if (ctx.cr6.lt) goto loc_82BF0818;
	// beq cr6,0x82bf0808
	if (ctx.cr6.eq) goto loc_82BF0808;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-16960
	ctx.r3.s64 = ctx.r11.s64 + -16960;
	// blr 
	return;
loc_82BF0808:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-16960
	ctx.r11.s64 = ctx.r11.s64 + -16960;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
loc_82BF0818:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-16960
	ctx.r11.s64 = ctx.r11.s64 + -16960;
	// addi r3,r11,-56
	ctx.r3.s64 = ctx.r11.s64 + -56;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0828"))) PPC_WEAK_FUNC(sub_82BF0828);
PPC_FUNC_IMPL(__imp__sub_82BF0828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF0830;
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
	// beq cr6,0x82bf08bc
	if (ctx.cr6.eq) goto loc_82BF08BC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-16880
	ctx.r30.s64 = ctx.r11.s64 + -16880;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0858;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0870
	if (!ctx.cr6.eq) goto loc_82BF0870;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0870:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF087C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0894
	if (!ctx.cr6.eq) goto loc_82BF0894;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0894:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF08A0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf08bc
	if (!ctx.cr6.eq) goto loc_82BF08BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF08BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF08C8"))) PPC_WEAK_FUNC(sub_82BF08C8);
PPC_FUNC_IMPL(__imp__sub_82BF08C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82bf08ec
	if (ctx.cr6.eq) goto loc_82BF08EC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-16828
	ctx.r3.s64 = ctx.r11.s64 + -16828;
	// blr 
	return;
loc_82BF08EC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-16828
	ctx.r11.s64 = ctx.r11.s64 + -16828;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0900"))) PPC_WEAK_FUNC(sub_82BF0900);
PPC_FUNC_IMPL(__imp__sub_82BF0900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF0908;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-16772
	ctx.r30.s64 = ctx.r11.s64 + -16772;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0928;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0940
	if (!ctx.cr6.eq) goto loc_82BF0940;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0940:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF094C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0968
	if (!ctx.cr6.eq) goto loc_82BF0968;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0968:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0978"))) PPC_WEAK_FUNC(sub_82BF0978);
PPC_FUNC_IMPL(__imp__sub_82BF0978) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bf09b0
	if (ctx.cr6.lt) goto loc_82BF09B0;
	// beq cr6,0x82bf09a0
	if (ctx.cr6.eq) goto loc_82BF09A0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-16708
	ctx.r3.s64 = ctx.r11.s64 + -16708;
	// blr 
	return;
loc_82BF09A0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-16708
	ctx.r11.s64 = ctx.r11.s64 + -16708;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82BF09B0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-16708
	ctx.r11.s64 = ctx.r11.s64 + -16708;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF09C0"))) PPC_WEAK_FUNC(sub_82BF09C0);
PPC_FUNC_IMPL(__imp__sub_82BF09C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF09C8;
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
	// beq cr6,0x82bf0a54
	if (ctx.cr6.eq) goto loc_82BF0A54;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-16648
	ctx.r30.s64 = ctx.r11.s64 + -16648;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// bl 0x82d61e20
	ctx.lr = 0x82BF09F0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0a08
	if (!ctx.cr6.eq) goto loc_82BF0A08;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0A08:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0A14;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0a2c
	if (!ctx.cr6.eq) goto loc_82BF0A2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0A2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0A38;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0a54
	if (!ctx.cr6.eq) goto loc_82BF0A54;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0A54:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0A60"))) PPC_WEAK_FUNC(sub_82BF0A60);
PPC_FUNC_IMPL(__imp__sub_82BF0A60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82bf0a84
	if (ctx.cr6.eq) goto loc_82BF0A84;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-16600
	ctx.r3.s64 = ctx.r11.s64 + -16600;
	// blr 
	return;
loc_82BF0A84:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-16600
	ctx.r11.s64 = ctx.r11.s64 + -16600;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0A98"))) PPC_WEAK_FUNC(sub_82BF0A98);
PPC_FUNC_IMPL(__imp__sub_82BF0A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF0AA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-16552
	ctx.r30.s64 = ctx.r11.s64 + -16552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0AC0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0ad8
	if (!ctx.cr6.eq) goto loc_82BF0AD8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0AD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0AE4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0b00
	if (!ctx.cr6.eq) goto loc_82BF0B00;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0B00:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0B10"))) PPC_WEAK_FUNC(sub_82BF0B10);
PPC_FUNC_IMPL(__imp__sub_82BF0B10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82bf0b4c
	if (ctx.cr6.eq) goto loc_82BF0B4C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bf0b3c
	if (ctx.cr6.eq) goto loc_82BF0B3C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-16472
	ctx.r3.s64 = ctx.r11.s64 + -16472;
	// blr 
	return;
loc_82BF0B3C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-16472
	ctx.r11.s64 = ctx.r11.s64 + -16472;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
loc_82BF0B4C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-16472
	ctx.r11.s64 = ctx.r11.s64 + -16472;
	// addi r3,r11,-56
	ctx.r3.s64 = ctx.r11.s64 + -56;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0B60"))) PPC_WEAK_FUNC(sub_82BF0B60);
PPC_FUNC_IMPL(__imp__sub_82BF0B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF0B68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-16392
	ctx.r30.s64 = ctx.r11.s64 + -16392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0B88;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0ba0
	if (!ctx.cr6.eq) goto loc_82BF0BA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0BA0:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0BAC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0bc8
	if (!ctx.cr6.eq) goto loc_82BF0BC8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0BC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0BD4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0bf0
	if (!ctx.cr6.eq) goto loc_82BF0BF0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0BF0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0C00"))) PPC_WEAK_FUNC(sub_82BF0C00);
PPC_FUNC_IMPL(__imp__sub_82BF0C00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82bf0c3c
	if (ctx.cr6.eq) goto loc_82BF0C3C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bf0c2c
	if (ctx.cr6.eq) goto loc_82BF0C2C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// blr 
	return;
loc_82BF0C2C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-16320
	ctx.r11.s64 = ctx.r11.s64 + -16320;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82BF0C3C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-16320
	ctx.r11.s64 = ctx.r11.s64 + -16320;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0C50"))) PPC_WEAK_FUNC(sub_82BF0C50);
PPC_FUNC_IMPL(__imp__sub_82BF0C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF0C58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-16248
	ctx.r30.s64 = ctx.r11.s64 + -16248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0C78;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0c90
	if (!ctx.cr6.eq) goto loc_82BF0C90;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0C90:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0C9C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0cb8
	if (!ctx.cr6.eq) goto loc_82BF0CB8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0CB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0CC4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0ce0
	if (!ctx.cr6.eq) goto loc_82BF0CE0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0CE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0CF0"))) PPC_WEAK_FUNC(sub_82BF0CF0);
PPC_FUNC_IMPL(__imp__sub_82BF0CF0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,3352
	ctx.r12.s64 = ctx.r12.s64 + 3352;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BF0D58;
	case 1:
		goto loc_82BF0D68;
	case 2:
		goto loc_82BF0DA0;
	case 3:
		goto loc_82BF0D78;
	case 4:
		goto loc_82BF0DA0;
	case 5:
		goto loc_82BF0DA0;
	case 6:
		goto loc_82BF0DA0;
	case 7:
		goto loc_82BF0D88;
	case 8:
		goto loc_82BF0DA0;
	case 9:
		goto loc_82BF0DA0;
	case 10:
		goto loc_82BF0DA0;
	case 11:
		goto loc_82BF0DA0;
	case 12:
		goto loc_82BF0DA0;
	case 13:
		goto loc_82BF0DA0;
	case 14:
		goto loc_82BF0DA0;
	case 15:
		goto loc_82BF0D98;
	default:
		__builtin_unreachable();
	}
	// lwz r21,3416(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3416);
	// lwz r21,3432(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3432);
	// lwz r21,3488(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3488);
	// lwz r21,3448(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3448);
	// lwz r21,3488(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3488);
	// lwz r21,3488(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3488);
	// lwz r21,3488(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3488);
	// lwz r21,3464(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3464);
	// lwz r21,3488(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3488);
	// lwz r21,3488(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3488);
	// lwz r21,3488(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3488);
	// lwz r21,3488(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3488);
	// lwz r21,3488(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3488);
	// lwz r21,3488(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3488);
	// lwz r21,3488(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3488);
	// lwz r21,3480(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3480);
loc_82BF0D58:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-16112
	ctx.r11.s64 = ctx.r11.s64 + -16112;
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// blr 
	return;
loc_82BF0D68:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-16112
	ctx.r11.s64 = ctx.r11.s64 + -16112;
	// addi r3,r11,-84
	ctx.r3.s64 = ctx.r11.s64 + -84;
	// blr 
	return;
loc_82BF0D78:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-16112
	ctx.r11.s64 = ctx.r11.s64 + -16112;
	// addi r3,r11,-56
	ctx.r3.s64 = ctx.r11.s64 + -56;
	// blr 
	return;
loc_82BF0D88:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-16112
	ctx.r11.s64 = ctx.r11.s64 + -16112;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
loc_82BF0D98:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-16112
	ctx.r3.s64 = ctx.r11.s64 + -16112;
loc_82BF0DA0:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0DA8"))) PPC_WEAK_FUNC(sub_82BF0DA8);
PPC_FUNC_IMPL(__imp__sub_82BF0DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF0DB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-15972
	ctx.r30.s64 = ctx.r11.s64 + -15972;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-112
	ctx.r4.s64 = ctx.r30.s64 + -112;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0DD0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0de8
	if (!ctx.cr6.eq) goto loc_82BF0DE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0DE8:
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0DF4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0e10
	if (!ctx.cr6.eq) goto loc_82BF0E10;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0E10:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0E1C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0e38
	if (!ctx.cr6.eq) goto loc_82BF0E38;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0E38:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0E44;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0e60
	if (!ctx.cr6.eq) goto loc_82BF0E60;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0E60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0E6C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0e88
	if (!ctx.cr6.eq) goto loc_82BF0E88;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0E88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0E98"))) PPC_WEAK_FUNC(sub_82BF0E98);
PPC_FUNC_IMPL(__imp__sub_82BF0E98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82bf0ebc
	if (ctx.cr6.eq) goto loc_82BF0EBC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-15928
	ctx.r3.s64 = ctx.r11.s64 + -15928;
	// blr 
	return;
loc_82BF0EBC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15928
	ctx.r11.s64 = ctx.r11.s64 + -15928;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0ED0"))) PPC_WEAK_FUNC(sub_82BF0ED0);
PPC_FUNC_IMPL(__imp__sub_82BF0ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF0ED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-15888
	ctx.r30.s64 = ctx.r11.s64 + -15888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0EF8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0f10
	if (!ctx.cr6.eq) goto loc_82BF0F10;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0F10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF0F1C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf0f38
	if (!ctx.cr6.eq) goto loc_82BF0F38;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF0F38:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0F48"))) PPC_WEAK_FUNC(sub_82BF0F48);
PPC_FUNC_IMPL(__imp__sub_82BF0F48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bgt cr6,0x82bf1230
	if (ctx.cr6.gt) goto loc_82BF1230;
	// beq cr6,0x82bf121c
	if (ctx.cr6.eq) goto loc_82BF121C;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bgt cr6,0x82bf1310
	if (ctx.cr6.gt) goto loc_82BF1310;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,3964
	ctx.r12.s64 = ctx.r12.s64 + 3964;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82BF117C;
	case 1:
		goto loc_82BF1190;
	case 2:
		goto loc_82BF1310;
	case 3:
		goto loc_82BF11A4;
	case 4:
		goto loc_82BF1310;
	case 5:
		goto loc_82BF1310;
	case 6:
		goto loc_82BF1310;
	case 7:
		goto loc_82BF11B8;
	case 8:
		goto loc_82BF1310;
	case 9:
		goto loc_82BF1310;
	case 10:
		goto loc_82BF1310;
	case 11:
		goto loc_82BF1310;
	case 12:
		goto loc_82BF1310;
	case 13:
		goto loc_82BF1310;
	case 14:
		goto loc_82BF1310;
	case 15:
		goto loc_82BF11CC;
	case 16:
		goto loc_82BF1310;
	case 17:
		goto loc_82BF1310;
	case 18:
		goto loc_82BF1310;
	case 19:
		goto loc_82BF1310;
	case 20:
		goto loc_82BF1310;
	case 21:
		goto loc_82BF1310;
	case 22:
		goto loc_82BF1310;
	case 23:
		goto loc_82BF1310;
	case 24:
		goto loc_82BF1310;
	case 25:
		goto loc_82BF1310;
	case 26:
		goto loc_82BF1310;
	case 27:
		goto loc_82BF1310;
	case 28:
		goto loc_82BF1310;
	case 29:
		goto loc_82BF1310;
	case 30:
		goto loc_82BF1310;
	case 31:
		goto loc_82BF11E0;
	case 32:
		goto loc_82BF1310;
	case 33:
		goto loc_82BF1310;
	case 34:
		goto loc_82BF1310;
	case 35:
		goto loc_82BF1310;
	case 36:
		goto loc_82BF1310;
	case 37:
		goto loc_82BF1310;
	case 38:
		goto loc_82BF1310;
	case 39:
		goto loc_82BF1310;
	case 40:
		goto loc_82BF1310;
	case 41:
		goto loc_82BF1310;
	case 42:
		goto loc_82BF1310;
	case 43:
		goto loc_82BF1310;
	case 44:
		goto loc_82BF1310;
	case 45:
		goto loc_82BF1310;
	case 46:
		goto loc_82BF1310;
	case 47:
		goto loc_82BF1310;
	case 48:
		goto loc_82BF1310;
	case 49:
		goto loc_82BF1310;
	case 50:
		goto loc_82BF1310;
	case 51:
		goto loc_82BF1310;
	case 52:
		goto loc_82BF1310;
	case 53:
		goto loc_82BF1310;
	case 54:
		goto loc_82BF1310;
	case 55:
		goto loc_82BF1310;
	case 56:
		goto loc_82BF1310;
	case 57:
		goto loc_82BF1310;
	case 58:
		goto loc_82BF1310;
	case 59:
		goto loc_82BF1310;
	case 60:
		goto loc_82BF1310;
	case 61:
		goto loc_82BF1310;
	case 62:
		goto loc_82BF1310;
	case 63:
		goto loc_82BF11F4;
	case 64:
		goto loc_82BF1310;
	case 65:
		goto loc_82BF1310;
	case 66:
		goto loc_82BF1310;
	case 67:
		goto loc_82BF1310;
	case 68:
		goto loc_82BF1310;
	case 69:
		goto loc_82BF1310;
	case 70:
		goto loc_82BF1310;
	case 71:
		goto loc_82BF1310;
	case 72:
		goto loc_82BF1310;
	case 73:
		goto loc_82BF1310;
	case 74:
		goto loc_82BF1310;
	case 75:
		goto loc_82BF1310;
	case 76:
		goto loc_82BF1310;
	case 77:
		goto loc_82BF1310;
	case 78:
		goto loc_82BF1310;
	case 79:
		goto loc_82BF1310;
	case 80:
		goto loc_82BF1310;
	case 81:
		goto loc_82BF1310;
	case 82:
		goto loc_82BF1310;
	case 83:
		goto loc_82BF1310;
	case 84:
		goto loc_82BF1310;
	case 85:
		goto loc_82BF1310;
	case 86:
		goto loc_82BF1310;
	case 87:
		goto loc_82BF1310;
	case 88:
		goto loc_82BF1310;
	case 89:
		goto loc_82BF1310;
	case 90:
		goto loc_82BF1310;
	case 91:
		goto loc_82BF1310;
	case 92:
		goto loc_82BF1310;
	case 93:
		goto loc_82BF1310;
	case 94:
		goto loc_82BF1310;
	case 95:
		goto loc_82BF1310;
	case 96:
		goto loc_82BF1310;
	case 97:
		goto loc_82BF1310;
	case 98:
		goto loc_82BF1310;
	case 99:
		goto loc_82BF1310;
	case 100:
		goto loc_82BF1310;
	case 101:
		goto loc_82BF1310;
	case 102:
		goto loc_82BF1310;
	case 103:
		goto loc_82BF1310;
	case 104:
		goto loc_82BF1310;
	case 105:
		goto loc_82BF1310;
	case 106:
		goto loc_82BF1310;
	case 107:
		goto loc_82BF1310;
	case 108:
		goto loc_82BF1310;
	case 109:
		goto loc_82BF1310;
	case 110:
		goto loc_82BF1310;
	case 111:
		goto loc_82BF1310;
	case 112:
		goto loc_82BF1310;
	case 113:
		goto loc_82BF1310;
	case 114:
		goto loc_82BF1310;
	case 115:
		goto loc_82BF1310;
	case 116:
		goto loc_82BF1310;
	case 117:
		goto loc_82BF1310;
	case 118:
		goto loc_82BF1310;
	case 119:
		goto loc_82BF1310;
	case 120:
		goto loc_82BF1310;
	case 121:
		goto loc_82BF1310;
	case 122:
		goto loc_82BF1310;
	case 123:
		goto loc_82BF1310;
	case 124:
		goto loc_82BF1310;
	case 125:
		goto loc_82BF1310;
	case 126:
		goto loc_82BF1310;
	case 127:
		goto loc_82BF1208;
	default:
		__builtin_unreachable();
	}
	// lwz r21,4476(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4476);
	// lwz r21,4496(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4496);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4516(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4516);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4536(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4536);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4556(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4556);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4576(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4576);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4596(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4596);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4880(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4880);
	// lwz r21,4616(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4616);
loc_82BF117C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-328
	ctx.r11.s64 = ctx.r11.s64 + -328;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1190:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-312
	ctx.r11.s64 = ctx.r11.s64 + -312;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF11A4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-284
	ctx.r11.s64 = ctx.r11.s64 + -284;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF11B8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-260
	ctx.r11.s64 = ctx.r11.s64 + -260;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF11CC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-240
	ctx.r11.s64 = ctx.r11.s64 + -240;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF11E0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-220
	ctx.r11.s64 = ctx.r11.s64 + -220;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF11F4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-200
	ctx.r11.s64 = ctx.r11.s64 + -200;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1208:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-180
	ctx.r11.s64 = ctx.r11.s64 + -180;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF121C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -160;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1230:
	// cmpwi cr6,r3,8192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8192, ctx.xer);
	// bgt cr6,0x82bf12c4
	if (ctx.cr6.gt) goto loc_82BF12C4;
	// beq cr6,0x82bf12b0
	if (ctx.cr6.eq) goto loc_82BF12B0;
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// bgt cr6,0x82bf1294
	if (ctx.cr6.gt) goto loc_82BF1294;
	// beq cr6,0x82bf1280
	if (ctx.cr6.eq) goto loc_82BF1280;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x82bf126c
	if (ctx.cr6.eq) goto loc_82BF126C;
	// cmpwi cr6,r3,1024
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1024, ctx.xer);
	// bne cr6,0x82bf1310
	if (!ctx.cr6.eq) goto loc_82BF1310;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-120
	ctx.r11.s64 = ctx.r11.s64 + -120;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF126C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-140
	ctx.r11.s64 = ctx.r11.s64 + -140;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1280:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1294:
	// cmpwi cr6,r3,4096
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4096, ctx.xer);
	// bne cr6,0x82bf1310
	if (!ctx.cr6.eq) goto loc_82BF1310;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-80
	ctx.r11.s64 = ctx.r11.s64 + -80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF12B0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF12C4:
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// beq cr6,0x82bf1304
	if (ctx.cr6.eq) goto loc_82BF1304;
	// cmplwi cr6,r3,32768
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32768, ctx.xer);
	// beq cr6,0x82bf12f0
	if (ctx.cr6.eq) goto loc_82BF12F0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82bf1310
	if (!ctx.cr6.eq) goto loc_82BF1310;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF12F0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1304:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_82BF1310:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1318"))) PPC_WEAK_FUNC(sub_82BF1318);
PPC_FUNC_IMPL(__imp__sub_82BF1318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF1320;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-15176
	ctx.r30.s64 = ctx.r11.s64 + -15176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-328
	ctx.r4.s64 = ctx.r30.s64 + -328;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1340;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf135c
	if (!ctx.cr6.eq) goto loc_82BF135C;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF135C:
	// addi r4,r30,-312
	ctx.r4.s64 = ctx.r30.s64 + -312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1368;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1388
	if (!ctx.cr6.eq) goto loc_82BF1388;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1388:
	// addi r4,r30,-284
	ctx.r4.s64 = ctx.r30.s64 + -284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1394;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf13b4
	if (!ctx.cr6.eq) goto loc_82BF13B4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF13B4:
	// addi r4,r30,-260
	ctx.r4.s64 = ctx.r30.s64 + -260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF13C0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf13e0
	if (!ctx.cr6.eq) goto loc_82BF13E0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF13E0:
	// addi r4,r30,-240
	ctx.r4.s64 = ctx.r30.s64 + -240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF13EC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf140c
	if (!ctx.cr6.eq) goto loc_82BF140C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF140C:
	// addi r4,r30,-220
	ctx.r4.s64 = ctx.r30.s64 + -220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1418;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1438
	if (!ctx.cr6.eq) goto loc_82BF1438;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1438:
	// addi r4,r30,-200
	ctx.r4.s64 = ctx.r30.s64 + -200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1444;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1464
	if (!ctx.cr6.eq) goto loc_82BF1464;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1464:
	// addi r4,r30,-180
	ctx.r4.s64 = ctx.r30.s64 + -180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1470;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1490
	if (!ctx.cr6.eq) goto loc_82BF1490;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1490:
	// addi r4,r30,-160
	ctx.r4.s64 = ctx.r30.s64 + -160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF149C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf14bc
	if (!ctx.cr6.eq) goto loc_82BF14BC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF14BC:
	// addi r4,r30,-140
	ctx.r4.s64 = ctx.r30.s64 + -140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF14C8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf14e8
	if (!ctx.cr6.eq) goto loc_82BF14E8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF14E8:
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF14F4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1514
	if (!ctx.cr6.eq) goto loc_82BF1514;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1514:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1520;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1540
	if (!ctx.cr6.eq) goto loc_82BF1540;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1540:
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF154C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf156c
	if (!ctx.cr6.eq) goto loc_82BF156C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF156C:
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1578;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1598
	if (!ctx.cr6.eq) goto loc_82BF1598;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1598:
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF15A4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf15c4
	if (!ctx.cr6.eq) goto loc_82BF15C4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF15C4:
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF15D0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf15f4
	if (!ctx.cr6.eq) goto loc_82BF15F4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF15F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1600;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1614
	if (!ctx.cr6.eq) goto loc_82BF1614;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82BF1614:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1620"))) PPC_WEAK_FUNC(sub_82BF1620);
PPC_FUNC_IMPL(__imp__sub_82BF1620) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// bgt cr6,0x82bf17f4
	if (ctx.cr6.gt) goto loc_82BF17F4;
	// beq cr6,0x82bf17e0
	if (ctx.cr6.eq) goto loc_82BF17E0;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// bgt cr6,0x82bf18b0
	if (ctx.cr6.gt) goto loc_82BF18B0;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,5716
	ctx.r12.s64 = ctx.r12.s64 + 5716;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82BF1754;
	case 1:
		goto loc_82BF1768;
	case 2:
		goto loc_82BF18B0;
	case 3:
		goto loc_82BF177C;
	case 4:
		goto loc_82BF18B0;
	case 5:
		goto loc_82BF18B0;
	case 6:
		goto loc_82BF18B0;
	case 7:
		goto loc_82BF1790;
	case 8:
		goto loc_82BF18B0;
	case 9:
		goto loc_82BF18B0;
	case 10:
		goto loc_82BF18B0;
	case 11:
		goto loc_82BF18B0;
	case 12:
		goto loc_82BF18B0;
	case 13:
		goto loc_82BF18B0;
	case 14:
		goto loc_82BF18B0;
	case 15:
		goto loc_82BF17A4;
	case 16:
		goto loc_82BF18B0;
	case 17:
		goto loc_82BF18B0;
	case 18:
		goto loc_82BF18B0;
	case 19:
		goto loc_82BF18B0;
	case 20:
		goto loc_82BF18B0;
	case 21:
		goto loc_82BF18B0;
	case 22:
		goto loc_82BF18B0;
	case 23:
		goto loc_82BF18B0;
	case 24:
		goto loc_82BF18B0;
	case 25:
		goto loc_82BF18B0;
	case 26:
		goto loc_82BF18B0;
	case 27:
		goto loc_82BF18B0;
	case 28:
		goto loc_82BF18B0;
	case 29:
		goto loc_82BF18B0;
	case 30:
		goto loc_82BF18B0;
	case 31:
		goto loc_82BF17B8;
	case 32:
		goto loc_82BF18B0;
	case 33:
		goto loc_82BF18B0;
	case 34:
		goto loc_82BF18B0;
	case 35:
		goto loc_82BF18B0;
	case 36:
		goto loc_82BF18B0;
	case 37:
		goto loc_82BF18B0;
	case 38:
		goto loc_82BF18B0;
	case 39:
		goto loc_82BF18B0;
	case 40:
		goto loc_82BF18B0;
	case 41:
		goto loc_82BF18B0;
	case 42:
		goto loc_82BF18B0;
	case 43:
		goto loc_82BF18B0;
	case 44:
		goto loc_82BF18B0;
	case 45:
		goto loc_82BF18B0;
	case 46:
		goto loc_82BF18B0;
	case 47:
		goto loc_82BF18B0;
	case 48:
		goto loc_82BF18B0;
	case 49:
		goto loc_82BF18B0;
	case 50:
		goto loc_82BF18B0;
	case 51:
		goto loc_82BF18B0;
	case 52:
		goto loc_82BF18B0;
	case 53:
		goto loc_82BF18B0;
	case 54:
		goto loc_82BF18B0;
	case 55:
		goto loc_82BF18B0;
	case 56:
		goto loc_82BF18B0;
	case 57:
		goto loc_82BF18B0;
	case 58:
		goto loc_82BF18B0;
	case 59:
		goto loc_82BF18B0;
	case 60:
		goto loc_82BF18B0;
	case 61:
		goto loc_82BF18B0;
	case 62:
		goto loc_82BF18B0;
	case 63:
		goto loc_82BF17CC;
	default:
		__builtin_unreachable();
	}
	// lwz r21,5972(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5972);
	// lwz r21,5992(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5992);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6012(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6012);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6032(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6032);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6052(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6052);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6072(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6072);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6320(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6320);
	// lwz r21,6092(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6092);
loc_82BF1754:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r11,r11,-280
	ctx.r11.s64 = ctx.r11.s64 + -280;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1768:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -264;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF177C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r11,r11,-248
	ctx.r11.s64 = ctx.r11.s64 + -248;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1790:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r11,r11,-220
	ctx.r11.s64 = ctx.r11.s64 + -220;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF17A4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r11,r11,-196
	ctx.r11.s64 = ctx.r11.s64 + -196;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF17B8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r11,r11,-172
	ctx.r11.s64 = ctx.r11.s64 + -172;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF17CC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r11,r11,-156
	ctx.r11.s64 = ctx.r11.s64 + -156;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF17E0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r11,r11,-140
	ctx.r11.s64 = ctx.r11.s64 + -140;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF17F4:
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// bgt cr6,0x82bf1868
	if (ctx.cr6.gt) goto loc_82BF1868;
	// beq cr6,0x82bf1854
	if (ctx.cr6.eq) goto loc_82BF1854;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// beq cr6,0x82bf1840
	if (ctx.cr6.eq) goto loc_82BF1840;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x82bf182c
	if (ctx.cr6.eq) goto loc_82BF182C;
	// cmpwi cr6,r3,1024
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1024, ctx.xer);
	// bne cr6,0x82bf18b0
	if (!ctx.cr6.eq) goto loc_82BF18B0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF182C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1840:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r11,r11,-116
	ctx.r11.s64 = ctx.r11.s64 + -116;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1854:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1868:
	// cmpwi cr6,r3,4096
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4096, ctx.xer);
	// beq cr6,0x82bf18a4
	if (ctx.cr6.eq) goto loc_82BF18A4;
	// cmpwi cr6,r3,8192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8192, ctx.xer);
	// beq cr6,0x82bf1890
	if (ctx.cr6.eq) goto loc_82BF1890;
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// bne cr6,0x82bf18b0
	if (!ctx.cr6.eq) goto loc_82BF18B0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1890:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF18A4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-14864
	ctx.r11.s64 = ctx.r11.s64 + -14864;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_82BF18B0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF18B8"))) PPC_WEAK_FUNC(sub_82BF18B8);
PPC_FUNC_IMPL(__imp__sub_82BF18B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF18C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-14564
	ctx.r30.s64 = ctx.r11.s64 + -14564;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-280
	ctx.r4.s64 = ctx.r30.s64 + -280;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BF18E0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf18fc
	if (!ctx.cr6.eq) goto loc_82BF18FC;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF18FC:
	// addi r4,r30,-264
	ctx.r4.s64 = ctx.r30.s64 + -264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1908;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1928
	if (!ctx.cr6.eq) goto loc_82BF1928;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1928:
	// addi r4,r30,-248
	ctx.r4.s64 = ctx.r30.s64 + -248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1934;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1954
	if (!ctx.cr6.eq) goto loc_82BF1954;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1954:
	// addi r4,r30,-220
	ctx.r4.s64 = ctx.r30.s64 + -220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1960;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1980
	if (!ctx.cr6.eq) goto loc_82BF1980;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1980:
	// addi r4,r30,-196
	ctx.r4.s64 = ctx.r30.s64 + -196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF198C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf19ac
	if (!ctx.cr6.eq) goto loc_82BF19AC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF19AC:
	// addi r4,r30,-172
	ctx.r4.s64 = ctx.r30.s64 + -172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF19B8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf19d8
	if (!ctx.cr6.eq) goto loc_82BF19D8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF19D8:
	// addi r4,r30,-156
	ctx.r4.s64 = ctx.r30.s64 + -156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF19E4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1a04
	if (!ctx.cr6.eq) goto loc_82BF1A04;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1A04:
	// addi r4,r30,-140
	ctx.r4.s64 = ctx.r30.s64 + -140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1A10;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1a30
	if (!ctx.cr6.eq) goto loc_82BF1A30;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1A30:
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1A3C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1a5c
	if (!ctx.cr6.eq) goto loc_82BF1A5C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1A5C:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1A68;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1a88
	if (!ctx.cr6.eq) goto loc_82BF1A88;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1A88:
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1A94;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1ab4
	if (!ctx.cr6.eq) goto loc_82BF1AB4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1AB4:
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1AC0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1ae0
	if (!ctx.cr6.eq) goto loc_82BF1AE0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1AE0:
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1AEC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1b0c
	if (!ctx.cr6.eq) goto loc_82BF1B0C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1B0C:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1B18;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1b38
	if (!ctx.cr6.eq) goto loc_82BF1B38;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF1B38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1B44;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1b58
	if (!ctx.cr6.eq) goto loc_82BF1B58;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82BF1B58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1B68"))) PPC_WEAK_FUNC(sub_82BF1B68);
PPC_FUNC_IMPL(__imp__sub_82BF1B68) {
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
	// addi r3,r11,-14544
	ctx.r3.s64 = ctx.r11.s64 + -14544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1B88"))) PPC_WEAK_FUNC(sub_82BF1B88);
PPC_FUNC_IMPL(__imp__sub_82BF1B88) {
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
	// addi r4,r11,-14520
	ctx.r4.s64 = ctx.r11.s64 + -14520;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d61e20
	ctx.lr = 0x82BF1BB0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf1bc4
	if (!ctx.cr6.eq) goto loc_82BF1BC4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82bf1bc8
	goto loc_82BF1BC8;
loc_82BF1BC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BF1BC8:
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

__attribute__((alias("__imp__sub_82BF1BE0"))) PPC_WEAK_FUNC(sub_82BF1BE0);
PPC_FUNC_IMPL(__imp__sub_82BF1BE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,93
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 93, ctx.xer);
	// bgt cr6,0x82bf24c8
	if (ctx.cr6.gt) goto loc_82BF24C8;
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,7172
	ctx.r12.s64 = ctx.r12.s64 + 7172;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82BF1D7C;
	case 1:
		goto loc_82BF1D90;
	case 2:
		goto loc_82BF1DA4;
	case 3:
		goto loc_82BF1DB8;
	case 4:
		goto loc_82BF1DCC;
	case 5:
		goto loc_82BF1DE0;
	case 6:
		goto loc_82BF1DF4;
	case 7:
		goto loc_82BF1E08;
	case 8:
		goto loc_82BF1E1C;
	case 9:
		goto loc_82BF1E30;
	case 10:
		goto loc_82BF1E44;
	case 11:
		goto loc_82BF1E58;
	case 12:
		goto loc_82BF1E6C;
	case 13:
		goto loc_82BF1E80;
	case 14:
		goto loc_82BF1E94;
	case 15:
		goto loc_82BF1EA8;
	case 16:
		goto loc_82BF1EBC;
	case 17:
		goto loc_82BF1ED0;
	case 18:
		goto loc_82BF1EE4;
	case 19:
		goto loc_82BF1EF8;
	case 20:
		goto loc_82BF1F0C;
	case 21:
		goto loc_82BF1F20;
	case 22:
		goto loc_82BF1F34;
	case 23:
		goto loc_82BF1F48;
	case 24:
		goto loc_82BF1F5C;
	case 25:
		goto loc_82BF1F70;
	case 26:
		goto loc_82BF1F84;
	case 27:
		goto loc_82BF1F98;
	case 28:
		goto loc_82BF1FAC;
	case 29:
		goto loc_82BF1FC0;
	case 30:
		goto loc_82BF1FD4;
	case 31:
		goto loc_82BF1FE8;
	case 32:
		goto loc_82BF1FFC;
	case 33:
		goto loc_82BF2010;
	case 34:
		goto loc_82BF2024;
	case 35:
		goto loc_82BF2038;
	case 36:
		goto loc_82BF204C;
	case 37:
		goto loc_82BF2060;
	case 38:
		goto loc_82BF2074;
	case 39:
		goto loc_82BF2088;
	case 40:
		goto loc_82BF209C;
	case 41:
		goto loc_82BF20B0;
	case 42:
		goto loc_82BF20C4;
	case 43:
		goto loc_82BF20D8;
	case 44:
		goto loc_82BF20EC;
	case 45:
		goto loc_82BF2100;
	case 46:
		goto loc_82BF2114;
	case 47:
		goto loc_82BF2128;
	case 48:
		goto loc_82BF213C;
	case 49:
		goto loc_82BF2150;
	case 50:
		goto loc_82BF2164;
	case 51:
		goto loc_82BF2178;
	case 52:
		goto loc_82BF218C;
	case 53:
		goto loc_82BF21A0;
	case 54:
		goto loc_82BF21B4;
	case 55:
		goto loc_82BF21C8;
	case 56:
		goto loc_82BF21DC;
	case 57:
		goto loc_82BF21F0;
	case 58:
		goto loc_82BF2204;
	case 59:
		goto loc_82BF2218;
	case 60:
		goto loc_82BF222C;
	case 61:
		goto loc_82BF2240;
	case 62:
		goto loc_82BF2254;
	case 63:
		goto loc_82BF2268;
	case 64:
		goto loc_82BF227C;
	case 65:
		goto loc_82BF2290;
	case 66:
		goto loc_82BF22A4;
	case 67:
		goto loc_82BF22B8;
	case 68:
		goto loc_82BF22CC;
	case 69:
		goto loc_82BF22E0;
	case 70:
		goto loc_82BF22F4;
	case 71:
		goto loc_82BF2308;
	case 72:
		goto loc_82BF231C;
	case 73:
		goto loc_82BF2330;
	case 74:
		goto loc_82BF2344;
	case 75:
		goto loc_82BF2358;
	case 76:
		goto loc_82BF236C;
	case 77:
		goto loc_82BF2380;
	case 78:
		goto loc_82BF2394;
	case 79:
		goto loc_82BF23A8;
	case 80:
		goto loc_82BF23BC;
	case 81:
		goto loc_82BF23D0;
	case 82:
		goto loc_82BF23E4;
	case 83:
		goto loc_82BF23F8;
	case 84:
		goto loc_82BF240C;
	case 85:
		goto loc_82BF2420;
	case 86:
		goto loc_82BF2434;
	case 87:
		goto loc_82BF2448;
	case 88:
		goto loc_82BF245C;
	case 89:
		goto loc_82BF2470;
	case 90:
		goto loc_82BF2484;
	case 91:
		goto loc_82BF2498;
	case 92:
		goto loc_82BF24AC;
	case 93:
		goto loc_82BF24C0;
	default:
		__builtin_unreachable();
	}
	// lwz r21,7548(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7548);
	// lwz r21,7568(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7568);
	// lwz r21,7588(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7588);
	// lwz r21,7608(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7608);
	// lwz r21,7628(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7628);
	// lwz r21,7648(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7648);
	// lwz r21,7668(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7668);
	// lwz r21,7688(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7688);
	// lwz r21,7708(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7708);
	// lwz r21,7728(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7728);
	// lwz r21,7748(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7748);
	// lwz r21,7768(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7768);
	// lwz r21,7788(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7788);
	// lwz r21,7808(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7808);
	// lwz r21,7828(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7828);
	// lwz r21,7848(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7848);
	// lwz r21,7868(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r21,7888(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7888);
	// lwz r21,7908(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7908);
	// lwz r21,7928(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7928);
	// lwz r21,7948(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7948);
	// lwz r21,7968(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7968);
	// lwz r21,7988(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7988);
	// lwz r21,8008(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8008);
	// lwz r21,8028(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8028);
	// lwz r21,8048(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8048);
	// lwz r21,8068(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8068);
	// lwz r21,8088(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8088);
	// lwz r21,8108(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8108);
	// lwz r21,8128(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8128);
	// lwz r21,8148(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8148);
	// lwz r21,8168(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8168);
	// lwz r21,8188(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8188);
	// lwz r21,8208(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8208);
	// lwz r21,8228(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8228);
	// lwz r21,8248(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8248);
	// lwz r21,8268(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8268);
	// lwz r21,8288(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8288);
	// lwz r21,8308(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8308);
	// lwz r21,8328(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8328);
	// lwz r21,8348(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8348);
	// lwz r21,8368(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8368);
	// lwz r21,8388(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8388);
	// lwz r21,8408(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8408);
	// lwz r21,8428(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8428);
	// lwz r21,8448(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8448);
	// lwz r21,8468(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8468);
	// lwz r21,8488(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8488);
	// lwz r21,8508(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8508);
	// lwz r21,8528(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8528);
	// lwz r21,8548(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8548);
	// lwz r21,8568(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8568);
	// lwz r21,8588(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8588);
	// lwz r21,8608(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8608);
	// lwz r21,8628(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8628);
	// lwz r21,8648(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8648);
	// lwz r21,8668(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8668);
	// lwz r21,8688(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8688);
	// lwz r21,8708(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8708);
	// lwz r21,8728(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8728);
	// lwz r21,8748(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8748);
	// lwz r21,8768(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8768);
	// lwz r21,8788(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8788);
	// lwz r21,8808(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8808);
	// lwz r21,8828(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8828);
	// lwz r21,8848(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8848);
	// lwz r21,8868(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8868);
	// lwz r21,8888(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8888);
	// lwz r21,8908(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8908);
	// lwz r21,8928(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8928);
	// lwz r21,8948(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8948);
	// lwz r21,8968(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8968);
	// lwz r21,8988(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8988);
	// lwz r21,9008(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9008);
	// lwz r21,9028(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9028);
	// lwz r21,9048(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9048);
	// lwz r21,9068(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9068);
	// lwz r21,9088(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9088);
	// lwz r21,9108(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9108);
	// lwz r21,9128(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9128);
	// lwz r21,9148(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9148);
	// lwz r21,9168(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9168);
	// lwz r21,9188(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9188);
	// lwz r21,9208(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9208);
	// lwz r21,9228(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9228);
	// lwz r21,9248(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9248);
	// lwz r21,9268(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9268);
	// lwz r21,9288(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9288);
	// lwz r21,9308(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9308);
	// lwz r21,9328(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9328);
	// lwz r21,9348(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9348);
	// lwz r21,9368(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9368);
	// lwz r21,9388(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9388);
	// lwz r21,9408(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9408);
loc_82BF1D7C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-2012
	ctx.r11.s64 = ctx.r11.s64 + -2012;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1D90:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1996
	ctx.r11.s64 = ctx.r11.s64 + -1996;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1DA4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1972
	ctx.r11.s64 = ctx.r11.s64 + -1972;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1DB8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1952
	ctx.r11.s64 = ctx.r11.s64 + -1952;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1DCC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1932
	ctx.r11.s64 = ctx.r11.s64 + -1932;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1DE0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1912
	ctx.r11.s64 = ctx.r11.s64 + -1912;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1DF4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1896
	ctx.r11.s64 = ctx.r11.s64 + -1896;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1E08:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1872
	ctx.r11.s64 = ctx.r11.s64 + -1872;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1E1C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1848
	ctx.r11.s64 = ctx.r11.s64 + -1848;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1E30:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1824
	ctx.r11.s64 = ctx.r11.s64 + -1824;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1E44:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1800
	ctx.r11.s64 = ctx.r11.s64 + -1800;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1E58:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1776
	ctx.r11.s64 = ctx.r11.s64 + -1776;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1E6C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1752
	ctx.r11.s64 = ctx.r11.s64 + -1752;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1E80:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1732
	ctx.r11.s64 = ctx.r11.s64 + -1732;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1E94:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1708
	ctx.r11.s64 = ctx.r11.s64 + -1708;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1EA8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1688
	ctx.r11.s64 = ctx.r11.s64 + -1688;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1EBC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1672
	ctx.r11.s64 = ctx.r11.s64 + -1672;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1ED0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1652
	ctx.r11.s64 = ctx.r11.s64 + -1652;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1EE4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1632
	ctx.r11.s64 = ctx.r11.s64 + -1632;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1EF8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1616
	ctx.r11.s64 = ctx.r11.s64 + -1616;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1F0C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1596
	ctx.r11.s64 = ctx.r11.s64 + -1596;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1F20:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1580
	ctx.r11.s64 = ctx.r11.s64 + -1580;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1F34:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1560
	ctx.r11.s64 = ctx.r11.s64 + -1560;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1F48:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1544
	ctx.r11.s64 = ctx.r11.s64 + -1544;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1F5C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1528
	ctx.r11.s64 = ctx.r11.s64 + -1528;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1F70:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1512
	ctx.r11.s64 = ctx.r11.s64 + -1512;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1F84:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1496
	ctx.r11.s64 = ctx.r11.s64 + -1496;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1F98:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1472
	ctx.r11.s64 = ctx.r11.s64 + -1472;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1FAC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1448
	ctx.r11.s64 = ctx.r11.s64 + -1448;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1FC0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1424
	ctx.r11.s64 = ctx.r11.s64 + -1424;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1FD4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1FE8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1388
	ctx.r11.s64 = ctx.r11.s64 + -1388;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF1FFC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1368
	ctx.r11.s64 = ctx.r11.s64 + -1368;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2010:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1344
	ctx.r11.s64 = ctx.r11.s64 + -1344;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2024:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1320
	ctx.r11.s64 = ctx.r11.s64 + -1320;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2038:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1300
	ctx.r11.s64 = ctx.r11.s64 + -1300;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF204C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1276
	ctx.r11.s64 = ctx.r11.s64 + -1276;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2060:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1248
	ctx.r11.s64 = ctx.r11.s64 + -1248;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2074:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1228
	ctx.r11.s64 = ctx.r11.s64 + -1228;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2088:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1200
	ctx.r11.s64 = ctx.r11.s64 + -1200;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF209C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1184
	ctx.r11.s64 = ctx.r11.s64 + -1184;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF20B0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1168
	ctx.r11.s64 = ctx.r11.s64 + -1168;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF20C4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1148
	ctx.r11.s64 = ctx.r11.s64 + -1148;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF20D8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1132
	ctx.r11.s64 = ctx.r11.s64 + -1132;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF20EC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1104
	ctx.r11.s64 = ctx.r11.s64 + -1104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2100:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1080
	ctx.r11.s64 = ctx.r11.s64 + -1080;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2114:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1052
	ctx.r11.s64 = ctx.r11.s64 + -1052;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2128:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1028
	ctx.r11.s64 = ctx.r11.s64 + -1028;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF213C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-1008
	ctx.r11.s64 = ctx.r11.s64 + -1008;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2150:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-988
	ctx.r11.s64 = ctx.r11.s64 + -988;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2164:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-968
	ctx.r11.s64 = ctx.r11.s64 + -968;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2178:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-944
	ctx.r11.s64 = ctx.r11.s64 + -944;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF218C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-920
	ctx.r11.s64 = ctx.r11.s64 + -920;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF21A0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-900
	ctx.r11.s64 = ctx.r11.s64 + -900;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF21B4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-872
	ctx.r11.s64 = ctx.r11.s64 + -872;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF21C8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-844
	ctx.r11.s64 = ctx.r11.s64 + -844;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF21DC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-820
	ctx.r11.s64 = ctx.r11.s64 + -820;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF21F0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-800
	ctx.r11.s64 = ctx.r11.s64 + -800;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2204:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-776
	ctx.r11.s64 = ctx.r11.s64 + -776;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2218:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-760
	ctx.r11.s64 = ctx.r11.s64 + -760;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF222C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-736
	ctx.r11.s64 = ctx.r11.s64 + -736;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2240:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-712
	ctx.r11.s64 = ctx.r11.s64 + -712;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2254:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-688
	ctx.r11.s64 = ctx.r11.s64 + -688;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2268:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-664
	ctx.r11.s64 = ctx.r11.s64 + -664;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF227C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-640
	ctx.r11.s64 = ctx.r11.s64 + -640;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2290:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-616
	ctx.r11.s64 = ctx.r11.s64 + -616;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF22A4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-592
	ctx.r11.s64 = ctx.r11.s64 + -592;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF22B8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-572
	ctx.r11.s64 = ctx.r11.s64 + -572;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF22CC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-548
	ctx.r11.s64 = ctx.r11.s64 + -548;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF22E0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-528
	ctx.r11.s64 = ctx.r11.s64 + -528;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF22F4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-500
	ctx.r11.s64 = ctx.r11.s64 + -500;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2308:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-472
	ctx.r11.s64 = ctx.r11.s64 + -472;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF231C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-456
	ctx.r11.s64 = ctx.r11.s64 + -456;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2330:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-436
	ctx.r11.s64 = ctx.r11.s64 + -436;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2344:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-416
	ctx.r11.s64 = ctx.r11.s64 + -416;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2358:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-392
	ctx.r11.s64 = ctx.r11.s64 + -392;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF236C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-368
	ctx.r11.s64 = ctx.r11.s64 + -368;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2380:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-352
	ctx.r11.s64 = ctx.r11.s64 + -352;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2394:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-336
	ctx.r11.s64 = ctx.r11.s64 + -336;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF23A8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-320
	ctx.r11.s64 = ctx.r11.s64 + -320;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF23BC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-284
	ctx.r11.s64 = ctx.r11.s64 + -284;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF23D0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-260
	ctx.r11.s64 = ctx.r11.s64 + -260;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF23E4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-232
	ctx.r11.s64 = ctx.r11.s64 + -232;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF23F8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-208
	ctx.r11.s64 = ctx.r11.s64 + -208;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF240C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-188
	ctx.r11.s64 = ctx.r11.s64 + -188;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2420:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -160;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2434:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-136
	ctx.r11.s64 = ctx.r11.s64 + -136;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2448:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-116
	ctx.r11.s64 = ctx.r11.s64 + -116;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF245C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2470:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2484:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF2498:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF24AC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BF24C0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-12484
	ctx.r11.s64 = ctx.r11.s64 + -12484;
loc_82BF24C8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF24D0"))) PPC_WEAK_FUNC(sub_82BF24D0);
PPC_FUNC_IMPL(__imp__sub_82BF24D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF24D8;
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
	// beq cr6,0x82bf350c
	if (ctx.cr6.eq) goto loc_82BF350C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-10464
	ctx.r30.s64 = ctx.r11.s64 + -10464;
	// addi r4,r30,-2012
	ctx.r4.s64 = ctx.r30.s64 + -2012;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2500;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2520
	if (!ctx.cr6.eq) goto loc_82BF2520;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2520:
	// addi r4,r30,-1996
	ctx.r4.s64 = ctx.r30.s64 + -1996;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF252C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2548
	if (!ctx.cr6.eq) goto loc_82BF2548;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2548:
	// addi r4,r30,-1972
	ctx.r4.s64 = ctx.r30.s64 + -1972;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2554;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2574
	if (!ctx.cr6.eq) goto loc_82BF2574;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2574:
	// addi r4,r30,-1952
	ctx.r4.s64 = ctx.r30.s64 + -1952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2580;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf25a0
	if (!ctx.cr6.eq) goto loc_82BF25A0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF25A0:
	// addi r4,r30,-1932
	ctx.r4.s64 = ctx.r30.s64 + -1932;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF25AC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf25cc
	if (!ctx.cr6.eq) goto loc_82BF25CC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF25CC:
	// addi r4,r30,-1912
	ctx.r4.s64 = ctx.r30.s64 + -1912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF25D8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf25f8
	if (!ctx.cr6.eq) goto loc_82BF25F8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF25F8:
	// addi r4,r30,-1896
	ctx.r4.s64 = ctx.r30.s64 + -1896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2604;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2624
	if (!ctx.cr6.eq) goto loc_82BF2624;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2624:
	// addi r4,r30,-1872
	ctx.r4.s64 = ctx.r30.s64 + -1872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2630;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2650
	if (!ctx.cr6.eq) goto loc_82BF2650;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2650:
	// addi r4,r30,-1848
	ctx.r4.s64 = ctx.r30.s64 + -1848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF265C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf267c
	if (!ctx.cr6.eq) goto loc_82BF267C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF267C:
	// addi r4,r30,-1824
	ctx.r4.s64 = ctx.r30.s64 + -1824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2688;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf26a8
	if (!ctx.cr6.eq) goto loc_82BF26A8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF26A8:
	// addi r4,r30,-1800
	ctx.r4.s64 = ctx.r30.s64 + -1800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF26B4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf26d4
	if (!ctx.cr6.eq) goto loc_82BF26D4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF26D4:
	// addi r4,r30,-1776
	ctx.r4.s64 = ctx.r30.s64 + -1776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF26E0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2700
	if (!ctx.cr6.eq) goto loc_82BF2700;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2700:
	// addi r4,r30,-1752
	ctx.r4.s64 = ctx.r30.s64 + -1752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF270C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf272c
	if (!ctx.cr6.eq) goto loc_82BF272C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF272C:
	// addi r4,r30,-1732
	ctx.r4.s64 = ctx.r30.s64 + -1732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2738;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2758
	if (!ctx.cr6.eq) goto loc_82BF2758;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2758:
	// addi r4,r30,-1708
	ctx.r4.s64 = ctx.r30.s64 + -1708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2764;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2784
	if (!ctx.cr6.eq) goto loc_82BF2784;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2784:
	// addi r4,r30,-1688
	ctx.r4.s64 = ctx.r30.s64 + -1688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2790;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf27b0
	if (!ctx.cr6.eq) goto loc_82BF27B0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF27B0:
	// addi r4,r30,-1672
	ctx.r4.s64 = ctx.r30.s64 + -1672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF27BC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf27dc
	if (!ctx.cr6.eq) goto loc_82BF27DC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF27DC:
	// addi r4,r30,-1652
	ctx.r4.s64 = ctx.r30.s64 + -1652;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF27E8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2808
	if (!ctx.cr6.eq) goto loc_82BF2808;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2808:
	// addi r4,r30,-1632
	ctx.r4.s64 = ctx.r30.s64 + -1632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2814;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2834
	if (!ctx.cr6.eq) goto loc_82BF2834;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2834:
	// addi r4,r30,-1616
	ctx.r4.s64 = ctx.r30.s64 + -1616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2840;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2860
	if (!ctx.cr6.eq) goto loc_82BF2860;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2860:
	// addi r4,r30,-1596
	ctx.r4.s64 = ctx.r30.s64 + -1596;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF286C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf288c
	if (!ctx.cr6.eq) goto loc_82BF288C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF288C:
	// addi r4,r30,-1580
	ctx.r4.s64 = ctx.r30.s64 + -1580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2898;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf28b8
	if (!ctx.cr6.eq) goto loc_82BF28B8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF28B8:
	// addi r4,r30,-1560
	ctx.r4.s64 = ctx.r30.s64 + -1560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF28C4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf28e4
	if (!ctx.cr6.eq) goto loc_82BF28E4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF28E4:
	// addi r4,r30,-1544
	ctx.r4.s64 = ctx.r30.s64 + -1544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF28F0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2910
	if (!ctx.cr6.eq) goto loc_82BF2910;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2910:
	// addi r4,r30,-1528
	ctx.r4.s64 = ctx.r30.s64 + -1528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF291C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf293c
	if (!ctx.cr6.eq) goto loc_82BF293C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF293C:
	// addi r4,r30,-1512
	ctx.r4.s64 = ctx.r30.s64 + -1512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2948;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2968
	if (!ctx.cr6.eq) goto loc_82BF2968;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2968:
	// addi r4,r30,-1496
	ctx.r4.s64 = ctx.r30.s64 + -1496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2974;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2994
	if (!ctx.cr6.eq) goto loc_82BF2994;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2994:
	// addi r4,r30,-1472
	ctx.r4.s64 = ctx.r30.s64 + -1472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF29A0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf29c0
	if (!ctx.cr6.eq) goto loc_82BF29C0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF29C0:
	// addi r4,r30,-1448
	ctx.r4.s64 = ctx.r30.s64 + -1448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF29CC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf29ec
	if (!ctx.cr6.eq) goto loc_82BF29EC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF29EC:
	// addi r4,r30,-1424
	ctx.r4.s64 = ctx.r30.s64 + -1424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF29F8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2a18
	if (!ctx.cr6.eq) goto loc_82BF2A18;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2A18:
	// addi r4,r30,-1408
	ctx.r4.s64 = ctx.r30.s64 + -1408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2A24;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2a44
	if (!ctx.cr6.eq) goto loc_82BF2A44;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2A44:
	// addi r4,r30,-1388
	ctx.r4.s64 = ctx.r30.s64 + -1388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2A50;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2a70
	if (!ctx.cr6.eq) goto loc_82BF2A70;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2A70:
	// addi r4,r30,-1368
	ctx.r4.s64 = ctx.r30.s64 + -1368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2A7C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2a9c
	if (!ctx.cr6.eq) goto loc_82BF2A9C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2A9C:
	// addi r4,r30,-1344
	ctx.r4.s64 = ctx.r30.s64 + -1344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2AA8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2ac8
	if (!ctx.cr6.eq) goto loc_82BF2AC8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2AC8:
	// addi r4,r30,-1320
	ctx.r4.s64 = ctx.r30.s64 + -1320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2AD4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2af4
	if (!ctx.cr6.eq) goto loc_82BF2AF4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2AF4:
	// addi r4,r30,-1300
	ctx.r4.s64 = ctx.r30.s64 + -1300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2B00;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2b20
	if (!ctx.cr6.eq) goto loc_82BF2B20;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2B20:
	// addi r4,r30,-1276
	ctx.r4.s64 = ctx.r30.s64 + -1276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2B2C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2b4c
	if (!ctx.cr6.eq) goto loc_82BF2B4C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2B4C:
	// addi r4,r30,-1248
	ctx.r4.s64 = ctx.r30.s64 + -1248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2B58;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2b78
	if (!ctx.cr6.eq) goto loc_82BF2B78;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2B78:
	// addi r4,r30,-1228
	ctx.r4.s64 = ctx.r30.s64 + -1228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2B84;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2ba4
	if (!ctx.cr6.eq) goto loc_82BF2BA4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2BA4:
	// addi r4,r30,-1200
	ctx.r4.s64 = ctx.r30.s64 + -1200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2BB0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2bd0
	if (!ctx.cr6.eq) goto loc_82BF2BD0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2BD0:
	// addi r4,r30,-1184
	ctx.r4.s64 = ctx.r30.s64 + -1184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2BDC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2bfc
	if (!ctx.cr6.eq) goto loc_82BF2BFC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2BFC:
	// addi r4,r30,-1168
	ctx.r4.s64 = ctx.r30.s64 + -1168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2C08;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2c28
	if (!ctx.cr6.eq) goto loc_82BF2C28;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2C28:
	// addi r4,r30,-1148
	ctx.r4.s64 = ctx.r30.s64 + -1148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2C34;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2c54
	if (!ctx.cr6.eq) goto loc_82BF2C54;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2C54:
	// addi r4,r30,-1132
	ctx.r4.s64 = ctx.r30.s64 + -1132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2C60;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2c80
	if (!ctx.cr6.eq) goto loc_82BF2C80;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2C80:
	// addi r4,r30,-1104
	ctx.r4.s64 = ctx.r30.s64 + -1104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2C8C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2cac
	if (!ctx.cr6.eq) goto loc_82BF2CAC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2CAC:
	// addi r4,r30,-1080
	ctx.r4.s64 = ctx.r30.s64 + -1080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2CB8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2cd8
	if (!ctx.cr6.eq) goto loc_82BF2CD8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2CD8:
	// addi r4,r30,-1052
	ctx.r4.s64 = ctx.r30.s64 + -1052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2CE4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2d04
	if (!ctx.cr6.eq) goto loc_82BF2D04;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2D04:
	// addi r4,r30,-1028
	ctx.r4.s64 = ctx.r30.s64 + -1028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2D10;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2d30
	if (!ctx.cr6.eq) goto loc_82BF2D30;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2D30:
	// addi r4,r30,-1008
	ctx.r4.s64 = ctx.r30.s64 + -1008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2D3C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2d5c
	if (!ctx.cr6.eq) goto loc_82BF2D5C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2D5C:
	// addi r4,r30,-988
	ctx.r4.s64 = ctx.r30.s64 + -988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2D68;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2d88
	if (!ctx.cr6.eq) goto loc_82BF2D88;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2D88:
	// addi r4,r30,-968
	ctx.r4.s64 = ctx.r30.s64 + -968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2D94;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2db4
	if (!ctx.cr6.eq) goto loc_82BF2DB4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2DB4:
	// addi r4,r30,-944
	ctx.r4.s64 = ctx.r30.s64 + -944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2DC0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2de0
	if (!ctx.cr6.eq) goto loc_82BF2DE0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2DE0:
	// addi r4,r30,-920
	ctx.r4.s64 = ctx.r30.s64 + -920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2DEC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2e0c
	if (!ctx.cr6.eq) goto loc_82BF2E0C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2E0C:
	// addi r4,r30,-900
	ctx.r4.s64 = ctx.r30.s64 + -900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2E18;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2e38
	if (!ctx.cr6.eq) goto loc_82BF2E38;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2E38:
	// addi r4,r30,-872
	ctx.r4.s64 = ctx.r30.s64 + -872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2E44;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2e64
	if (!ctx.cr6.eq) goto loc_82BF2E64;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2E64:
	// addi r4,r30,-844
	ctx.r4.s64 = ctx.r30.s64 + -844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2E70;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2e90
	if (!ctx.cr6.eq) goto loc_82BF2E90;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2E90:
	// addi r4,r30,-820
	ctx.r4.s64 = ctx.r30.s64 + -820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2E9C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2ebc
	if (!ctx.cr6.eq) goto loc_82BF2EBC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2EBC:
	// addi r4,r30,-800
	ctx.r4.s64 = ctx.r30.s64 + -800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2EC8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2ee8
	if (!ctx.cr6.eq) goto loc_82BF2EE8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2EE8:
	// addi r4,r30,-776
	ctx.r4.s64 = ctx.r30.s64 + -776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2EF4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2f14
	if (!ctx.cr6.eq) goto loc_82BF2F14;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2F14:
	// addi r4,r30,-760
	ctx.r4.s64 = ctx.r30.s64 + -760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2F20;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2f40
	if (!ctx.cr6.eq) goto loc_82BF2F40;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2F40:
	// addi r4,r30,-736
	ctx.r4.s64 = ctx.r30.s64 + -736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2F4C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2f6c
	if (!ctx.cr6.eq) goto loc_82BF2F6C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2F6C:
	// addi r4,r30,-712
	ctx.r4.s64 = ctx.r30.s64 + -712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2F78;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2f98
	if (!ctx.cr6.eq) goto loc_82BF2F98;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2F98:
	// addi r4,r30,-688
	ctx.r4.s64 = ctx.r30.s64 + -688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2FA4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2fc4
	if (!ctx.cr6.eq) goto loc_82BF2FC4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2FC4:
	// addi r4,r30,-664
	ctx.r4.s64 = ctx.r30.s64 + -664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2FD0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf2ff0
	if (!ctx.cr6.eq) goto loc_82BF2FF0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF2FF0:
	// addi r4,r30,-640
	ctx.r4.s64 = ctx.r30.s64 + -640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF2FFC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf301c
	if (!ctx.cr6.eq) goto loc_82BF301C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF301C:
	// addi r4,r30,-616
	ctx.r4.s64 = ctx.r30.s64 + -616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF3028;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf3048
	if (!ctx.cr6.eq) goto loc_82BF3048;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF3048:
	// addi r4,r30,-592
	ctx.r4.s64 = ctx.r30.s64 + -592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF3054;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf3074
	if (!ctx.cr6.eq) goto loc_82BF3074;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF3074:
	// addi r4,r30,-572
	ctx.r4.s64 = ctx.r30.s64 + -572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF3080;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf30a0
	if (!ctx.cr6.eq) goto loc_82BF30A0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF30A0:
	// addi r4,r30,-548
	ctx.r4.s64 = ctx.r30.s64 + -548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF30AC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf30cc
	if (!ctx.cr6.eq) goto loc_82BF30CC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF30CC:
	// addi r4,r30,-528
	ctx.r4.s64 = ctx.r30.s64 + -528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF30D8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf30f8
	if (!ctx.cr6.eq) goto loc_82BF30F8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF30F8:
	// addi r4,r30,-500
	ctx.r4.s64 = ctx.r30.s64 + -500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF3104;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf3124
	if (!ctx.cr6.eq) goto loc_82BF3124;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF3124:
	// addi r4,r30,-472
	ctx.r4.s64 = ctx.r30.s64 + -472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF3130;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf3150
	if (!ctx.cr6.eq) goto loc_82BF3150;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF3150:
	// addi r4,r30,-456
	ctx.r4.s64 = ctx.r30.s64 + -456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF315C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf317c
	if (!ctx.cr6.eq) goto loc_82BF317C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF317C:
	// addi r4,r30,-436
	ctx.r4.s64 = ctx.r30.s64 + -436;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF3188;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf31a8
	if (!ctx.cr6.eq) goto loc_82BF31A8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF31A8:
	// addi r4,r30,-416
	ctx.r4.s64 = ctx.r30.s64 + -416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF31B4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf31d4
	if (!ctx.cr6.eq) goto loc_82BF31D4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF31D4:
	// addi r4,r30,-392
	ctx.r4.s64 = ctx.r30.s64 + -392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF31E0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf3200
	if (!ctx.cr6.eq) goto loc_82BF3200;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF3200:
	// addi r4,r30,-368
	ctx.r4.s64 = ctx.r30.s64 + -368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF320C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf322c
	if (!ctx.cr6.eq) goto loc_82BF322C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF322C:
	// addi r4,r30,-352
	ctx.r4.s64 = ctx.r30.s64 + -352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF3238;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf3258
	if (!ctx.cr6.eq) goto loc_82BF3258;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF3258:
	// addi r4,r30,-336
	ctx.r4.s64 = ctx.r30.s64 + -336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF3264;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf3284
	if (!ctx.cr6.eq) goto loc_82BF3284;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF3284:
	// addi r4,r30,-320
	ctx.r4.s64 = ctx.r30.s64 + -320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF3290;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf32b0
	if (!ctx.cr6.eq) goto loc_82BF32B0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF32B0:
	// addi r4,r30,-284
	ctx.r4.s64 = ctx.r30.s64 + -284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF32BC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf32dc
	if (!ctx.cr6.eq) goto loc_82BF32DC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF32DC:
	// addi r4,r30,-260
	ctx.r4.s64 = ctx.r30.s64 + -260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF32E8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf3308
	if (!ctx.cr6.eq) goto loc_82BF3308;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF3308:
	// addi r4,r30,-232
	ctx.r4.s64 = ctx.r30.s64 + -232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF3314;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf3334
	if (!ctx.cr6.eq) goto loc_82BF3334;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF3334:
	// addi r4,r30,-208
	ctx.r4.s64 = ctx.r30.s64 + -208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF3340;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf3360
	if (!ctx.cr6.eq) goto loc_82BF3360;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF3360:
	// addi r4,r30,-188
	ctx.r4.s64 = ctx.r30.s64 + -188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF336C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf338c
	if (!ctx.cr6.eq) goto loc_82BF338C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF338C:
	// addi r4,r30,-160
	ctx.r4.s64 = ctx.r30.s64 + -160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF3398;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf33b8
	if (!ctx.cr6.eq) goto loc_82BF33B8;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF33B8:
	// addi r4,r30,-136
	ctx.r4.s64 = ctx.r30.s64 + -136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF33C4;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf33e4
	if (!ctx.cr6.eq) goto loc_82BF33E4;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF33E4:
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF33F0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf3410
	if (!ctx.cr6.eq) goto loc_82BF3410;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF3410:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF341C;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf343c
	if (!ctx.cr6.eq) goto loc_82BF343C;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF343C:
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF3448;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf3468
	if (!ctx.cr6.eq) goto loc_82BF3468;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF3468:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF3474;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf3494
	if (!ctx.cr6.eq) goto loc_82BF3494;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF3494:
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF34A0;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf34c0
	if (!ctx.cr6.eq) goto loc_82BF34C0;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF34C0:
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF34CC;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf34ec
	if (!ctx.cr6.eq) goto loc_82BF34EC;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_82BF34EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61e20
	ctx.lr = 0x82BF34F8;
	sub_82D61E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bf350c
	if (!ctx.cr6.eq) goto loc_82BF350C;
	// li r11,93
	ctx.r11.s64 = 93;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82BF350C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF3518"))) PPC_WEAK_FUNC(sub_82BF3518);
PPC_FUNC_IMPL(__imp__sub_82BF3518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f0,-28040(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28040);
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

__attribute__((alias("__imp__sub_82BF3548"))) PPC_WEAK_FUNC(sub_82BF3548);
PPC_FUNC_IMPL(__imp__sub_82BF3548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF3550"))) PPC_WEAK_FUNC(sub_82BF3550);
PPC_FUNC_IMPL(__imp__sub_82BF3550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF3558;
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
	// bl 0x82c18020
	ctx.lr = 0x82BF3574;
	sub_82C18020(ctx, base);
	// lis r28,-31988
	ctx.r28.s64 = -2096365568;
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-23004
	ctx.r30.s64 = ctx.r11.s64 + -23004;
	// bne cr6,0x82bf3598
	if (!ctx.cr6.eq) goto loc_82BF3598;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf35ac
	if (ctx.cr6.eq) goto loc_82BF35AC;
loc_82BF3598:
	// addi r5,r30,12548
	ctx.r5.s64 = ctx.r30.s64 + 12548;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF35AC;
	sub_82C186D0(ctx, base);
loc_82BF35AC:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf35d0
	if (ctx.cr6.eq) goto loc_82BF35D0;
	// addi r5,r30,12552
	ctx.r5.s64 = ctx.r30.s64 + 12552;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF35CC;
	sub_82C18570(ctx, base);
	// b 0x82bf3628
	goto loc_82BF3628;
loc_82BF35D0:
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf35e8
	if (!ctx.cr6.eq) goto loc_82BF35E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf3628
	if (ctx.cr6.eq) goto loc_82BF3628;
loc_82BF35E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bf3614
	if (ctx.cr6.lt) goto loc_82BF3614;
	// beq cr6,0x82bf360c
	if (ctx.cr6.eq) goto loc_82BF360C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82bf3618
	if (!ctx.cr6.lt) goto loc_82BF3618;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82bf3618
	goto loc_82BF3618;
loc_82BF360C:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// b 0x82bf3618
	goto loc_82BF3618;
loc_82BF3614:
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
loc_82BF3618:
	// addi r5,r30,12560
	ctx.r5.s64 = ctx.r30.s64 + 12560;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF3628;
	sub_82C186D0(ctx, base);
loc_82BF3628:
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf3644
	if (!ctx.cr6.eq) goto loc_82BF3644;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bf3658
	if (ctx.cr6.eq) goto loc_82BF3658;
loc_82BF3644:
	// addi r5,r30,12568
	ctx.r5.s64 = ctx.r30.s64 + 12568;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF3658;
	sub_82C18570(ctx, base);
loc_82BF3658:
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf3678
	if (!ctx.cr6.eq) goto loc_82BF3678;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28040);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf368c
	if (ctx.cr6.eq) goto loc_82BF368C;
loc_82BF3678:
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
	// bl 0x82c18620
	ctx.lr = 0x82BF368C;
	sub_82C18620(ctx, base);
loc_82BF368C:
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf36a4
	if (!ctx.cr6.eq) goto loc_82BF36A4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82bf36b8
	if (ctx.cr6.eq) goto loc_82BF36B8;
loc_82BF36A4:
	// addi r5,r30,12600
	ctx.r5.s64 = ctx.r30.s64 + 12600;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF36B8;
	sub_82C18570(ctx, base);
loc_82BF36B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF36C0;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF36C8"))) PPC_WEAK_FUNC(sub_82BF36C8);
PPC_FUNC_IMPL(__imp__sub_82BF36C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF36D0;
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
	// bl 0x82c18020
	ctx.lr = 0x82BF36E8;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf379c
	if (ctx.cr6.eq) goto loc_82BF379C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,-10332
	ctx.r30.s64 = ctx.r11.s64 + -10332;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF3710;
	sub_82C170A0(ctx, base);
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
	// beq cr6,0x82bf373c
	if (ctx.cr6.eq) goto loc_82BF373C;
	// addi r5,r30,-48
	ctx.r5.s64 = ctx.r30.s64 + -48;
	// bl 0x82c164c8
	ctx.lr = 0x82BF3730;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x82bf3758
	goto loc_82BF3758;
loc_82BF373C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r30,-40
	ctx.r5.s64 = ctx.r30.s64 + -40;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c170a0
	ctx.lr = 0x82BF374C;
	sub_82C170A0(ctx, base);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82bed4c0
	ctx.lr = 0x82BF3758;
	sub_82BED4C0(ctx, base);
loc_82BF3758:
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF376C;
	sub_82C164C8(ctx, base);
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF3780;
	sub_82C16570(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF3794;
	sub_82C164C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF379C;
	sub_82C16F48(ctx, base);
loc_82BF379C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF37A8"))) PPC_WEAK_FUNC(sub_82BF37A8);
PPC_FUNC_IMPL(__imp__sub_82BF37A8) {
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

__attribute__((alias("__imp__sub_82BF37D0"))) PPC_WEAK_FUNC(sub_82BF37D0);
PPC_FUNC_IMPL(__imp__sub_82BF37D0) {
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

__attribute__((alias("__imp__sub_82BF37F8"))) PPC_WEAK_FUNC(sub_82BF37F8);
PPC_FUNC_IMPL(__imp__sub_82BF37F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
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

__attribute__((alias("__imp__sub_82BF3818"))) PPC_WEAK_FUNC(sub_82BF3818);
PPC_FUNC_IMPL(__imp__sub_82BF3818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF3820"))) PPC_WEAK_FUNC(sub_82BF3820);
PPC_FUNC_IMPL(__imp__sub_82BF3820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF3828;
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
	// bl 0x82c18020
	ctx.lr = 0x82BF3848;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,-10292
	ctx.r29.s64 = ctx.r11.s64 + -10292;
	// beq cr6,0x82bf3880
	if (ctx.cr6.eq) goto loc_82BF3880;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf3880
	if (!ctx.cr6.eq) goto loc_82BF3880;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF386C;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-20
	ctx.r5.s64 = ctx.r29.s64 + -20;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF3880;
	sub_82C186D0(ctx, base);
loc_82BF3880:
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// lis r30,-31988
	ctx.r30.s64 = -2096365568;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf38a8
	if (ctx.cr6.eq) goto loc_82BF38A8;
	// addi r5,r29,-16
	ctx.r5.s64 = ctx.r29.s64 + -16;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF38A4;
	sub_82C18570(ctx, base);
	// b 0x82bf38dc
	goto loc_82BF38DC;
loc_82BF38A8:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf38c0
	if (!ctx.cr6.eq) goto loc_82BF38C0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf38dc
	if (ctx.cr6.eq) goto loc_82BF38DC;
loc_82BF38C0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82bec2f0
	ctx.lr = 0x82BF38C8;
	sub_82BEC2F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF38DC;
	sub_82C186D0(ctx, base);
loc_82BF38DC:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf38fc
	if (!ctx.cr6.eq) goto loc_82BF38FC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f13,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf3910
	if (ctx.cr6.eq) goto loc_82BF3910;
loc_82BF38FC:
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
	// bl 0x82c18620
	ctx.lr = 0x82BF3910;
	sub_82C18620(ctx, base);
loc_82BF3910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF3918;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF3920"))) PPC_WEAK_FUNC(sub_82BF3920);
PPC_FUNC_IMPL(__imp__sub_82BF3920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF3928;
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
	// bl 0x82c18020
	ctx.lr = 0x82BF3940;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf39b8
	if (ctx.cr6.eq) goto loc_82BF39B8;
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
	// addi r30,r11,-10268
	ctx.r30.s64 = ctx.r11.s64 + -10268;
	// beq cr6,0x82bf3980
	if (ctx.cr6.eq) goto loc_82BF3980;
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// bl 0x82c164c8
	ctx.lr = 0x82BF3974;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82bf399c
	goto loc_82BF399C;
loc_82BF3980:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c170a0
	ctx.lr = 0x82BF3990;
	sub_82C170A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82bec928
	ctx.lr = 0x82BF399C;
	sub_82BEC928(ctx, base);
loc_82BF399C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF39B0;
	sub_82C16570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF39B8;
	sub_82C16F48(ctx, base);
loc_82BF39B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF39C0"))) PPC_WEAK_FUNC(sub_82BF39C0);
PPC_FUNC_IMPL(__imp__sub_82BF39C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF39C8;
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
	// bl 0x82c18020
	ctx.lr = 0x82BF39E0;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf3b34
	if (ctx.cr6.eq) goto loc_82BF3B34;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r28,r11,-10036
	ctx.r28.s64 = ctx.r11.s64 + -10036;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r28,-80
	ctx.r5.s64 = ctx.r28.s64 + -80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF3A08;
	sub_82C170A0(ctx, base);
	// addi r5,r28,-76
	ctx.r5.s64 = ctx.r28.s64 + -76;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF3A1C;
	sub_82C170A0(ctx, base);
	// addi r5,r28,-60
	ctx.r5.s64 = ctx.r28.s64 + -60;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c17938
	ctx.lr = 0x82BF3A30;
	sub_82C17938(ctx, base);
	// addi r5,r28,-52
	ctx.r5.s64 = ctx.r28.s64 + -52;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c17b88
	ctx.lr = 0x82BF3A44;
	sub_82C17B88(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf3a70
	if (ctx.cr6.eq) goto loc_82BF3A70;
	// addi r5,r28,-40
	ctx.r5.s64 = ctx.r28.s64 + -40;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c164c8
	ctx.lr = 0x82BF3A64;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// b 0x82bf3b04
	goto loc_82BF3B04;
loc_82BF3A70:
	// addi r5,r28,-32
	ctx.r5.s64 = ctx.r28.s64 + -32;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82c18020
	ctx.lr = 0x82BF3A7C;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf3b04
	if (ctx.cr6.eq) goto loc_82BF3B04;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r24.u32);
loc_82BF3A98:
	// slw r27,r25,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bed6e8
	ctx.lr = 0x82BF3AA4;
	sub_82BED6E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bf3afc
	if (ctx.cr6.eq) goto loc_82BF3AFC;
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF3AB8;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf3af0
	if (!ctx.cr6.eq) goto loc_82BF3AF0;
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
	// bl 0x82c16378
	ctx.lr = 0x82BF3AD8;
	sub_82C16378(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf3af0
	if (ctx.cr6.eq) goto loc_82BF3AF0;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
loc_82BF3AF0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bf3a98
	if (ctx.cr6.lt) goto loc_82BF3A98;
loc_82BF3AFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF3B04;
	sub_82C16F48(ctx, base);
loc_82BF3B04:
	// addi r5,r28,-16
	ctx.r5.s64 = ctx.r28.s64 + -16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF3B18;
	sub_82C164C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c17758
	ctx.lr = 0x82BF3B2C;
	sub_82C17758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF3B34;
	sub_82C16F48(ctx, base);
loc_82BF3B34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF3B40"))) PPC_WEAK_FUNC(sub_82BF3B40);
PPC_FUNC_IMPL(__imp__sub_82BF3B40) {
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
	// b 0x82c153c0
	sub_82C153C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF3B60"))) PPC_WEAK_FUNC(sub_82BF3B60);
PPC_FUNC_IMPL(__imp__sub_82BF3B60) {
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
	// b 0x82c13498
	sub_82C13498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF3B78"))) PPC_WEAK_FUNC(sub_82BF3B78);
PPC_FUNC_IMPL(__imp__sub_82BF3B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF3B80;
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
	// bl 0x82c18020
	ctx.lr = 0x82BF3B98;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf3cc4
	if (ctx.cr6.eq) goto loc_82BF3CC4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,-22316
	ctx.r30.s64 = ctx.r11.s64 + -22316;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r30,12364
	ctx.r5.s64 = ctx.r30.s64 + 12364;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c17938
	ctx.lr = 0x82BF3BC0;
	sub_82C17938(ctx, base);
	// addi r5,r30,12372
	ctx.r5.s64 = ctx.r30.s64 + 12372;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c17b88
	ctx.lr = 0x82BF3BD4;
	sub_82C17B88(ctx, base);
	// lbz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 156);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf3c0c
	if (ctx.cr6.eq) goto loc_82BF3C0C;
	// addi r5,r30,12384
	ctx.r5.s64 = ctx.r30.s64 + 12384;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c164c8
	ctx.lr = 0x82BF3BF4;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
	// bl 0x82c16f48
	ctx.lr = 0x82BF3C04;
	sub_82C16F48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
loc_82BF3C0C:
	// addi r5,r30,12392
	ctx.r5.s64 = ctx.r30.s64 + 12392;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82c18020
	ctx.lr = 0x82BF3C18;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf3cbc
	if (ctx.cr6.eq) goto loc_82BF3CBC;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r25.u32);
loc_82BF3C34:
	// slw r29,r24,r26
	ctx.r29.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r26.u8 & 0x3F));
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82bf3c60
	if (ctx.cr6.eq) goto loc_82BF3C60;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82bf3c58
	if (ctx.cr6.eq) goto loc_82BF3C58;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x82bf3cb4
	if (!ctx.cr6.eq) goto loc_82BF3CB4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x82bf3c64
	goto loc_82BF3C64;
loc_82BF3C58:
	// addi r31,r30,-24
	ctx.r31.s64 = ctx.r30.s64 + -24;
	// b 0x82bf3c64
	goto loc_82BF3C64;
loc_82BF3C60:
	// addi r31,r30,-44
	ctx.r31.s64 = ctx.r30.s64 + -44;
loc_82BF3C64:
	// addi r4,r30,12400
	ctx.r4.s64 = ctx.r30.s64 + 12400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF3C70;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf3ca8
	if (!ctx.cr6.eq) goto loc_82BF3CA8;
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
	// bl 0x82c16378
	ctx.lr = 0x82BF3C90;
	sub_82C16378(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf3ca8
	if (ctx.cr6.eq) goto loc_82BF3CA8;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// or r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 | ctx.r11.u64;
	// stw r11,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
loc_82BF3CA8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bf3c34
	if (ctx.cr6.lt) goto loc_82BF3C34;
loc_82BF3CB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF3CBC;
	sub_82C16F48(ctx, base);
loc_82BF3CBC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF3CC4;
	sub_82C16F48(ctx, base);
loc_82BF3CC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

