#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831362E0"))) PPC_WEAK_FUNC(sub_831362E0);
PPC_FUNC_IMPL(__imp__sub_831362E0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,776
	ctx.r4.s64 = ctx.r11.s64 + 776;
	// bl 0x82429b48
	ctx.lr = 0x831362FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1424(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1424, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136318"))) PPC_WEAK_FUNC(sub_83136318);
PPC_FUNC_IMPL(__imp__sub_83136318) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,780
	ctx.r4.s64 = ctx.r11.s64 + 780;
	// bl 0x82429b48
	ctx.lr = 0x83136334;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1119(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1119, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136350"))) PPC_WEAK_FUNC(sub_83136350);
PPC_FUNC_IMPL(__imp__sub_83136350) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,784
	ctx.r4.s64 = ctx.r11.s64 + 784;
	// bl 0x82429b48
	ctx.lr = 0x8313636C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2087(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2087, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136388"))) PPC_WEAK_FUNC(sub_83136388);
PPC_FUNC_IMPL(__imp__sub_83136388) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,788
	ctx.r4.s64 = ctx.r11.s64 + 788;
	// bl 0x82429b48
	ctx.lr = 0x831363A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2536(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2536, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831363C0"))) PPC_WEAK_FUNC(sub_831363C0);
PPC_FUNC_IMPL(__imp__sub_831363C0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,792
	ctx.r4.s64 = ctx.r11.s64 + 792;
	// bl 0x82429b48
	ctx.lr = 0x831363DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,437(r11)
	PPC_STORE_U8(ctx.r11.u32 + 437, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831363F8"))) PPC_WEAK_FUNC(sub_831363F8);
PPC_FUNC_IMPL(__imp__sub_831363F8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,796
	ctx.r4.s64 = ctx.r11.s64 + 796;
	// bl 0x82429b48
	ctx.lr = 0x83136414;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1885(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1885, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136430"))) PPC_WEAK_FUNC(sub_83136430);
PPC_FUNC_IMPL(__imp__sub_83136430) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,800
	ctx.r4.s64 = ctx.r11.s64 + 800;
	// bl 0x82429b48
	ctx.lr = 0x8313644C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2773(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2773, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136468"))) PPC_WEAK_FUNC(sub_83136468);
PPC_FUNC_IMPL(__imp__sub_83136468) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,804
	ctx.r4.s64 = ctx.r11.s64 + 804;
	// bl 0x82429b48
	ctx.lr = 0x83136484;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1013(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1013, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831364A0"))) PPC_WEAK_FUNC(sub_831364A0);
PPC_FUNC_IMPL(__imp__sub_831364A0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x82429b48
	ctx.lr = 0x831364BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4785(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4785, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831364D8"))) PPC_WEAK_FUNC(sub_831364D8);
PPC_FUNC_IMPL(__imp__sub_831364D8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,812
	ctx.r4.s64 = ctx.r11.s64 + 812;
	// bl 0x82429b48
	ctx.lr = 0x831364F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5241, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136510"))) PPC_WEAK_FUNC(sub_83136510);
PPC_FUNC_IMPL(__imp__sub_83136510) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,816
	ctx.r4.s64 = ctx.r11.s64 + 816;
	// bl 0x82429b48
	ctx.lr = 0x8313652C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3279(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3279, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136548"))) PPC_WEAK_FUNC(sub_83136548);
PPC_FUNC_IMPL(__imp__sub_83136548) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,820
	ctx.r4.s64 = ctx.r11.s64 + 820;
	// bl 0x82429b48
	ctx.lr = 0x83136564;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4490(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4490, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136580"))) PPC_WEAK_FUNC(sub_83136580);
PPC_FUNC_IMPL(__imp__sub_83136580) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,824
	ctx.r4.s64 = ctx.r11.s64 + 824;
	// bl 0x82429b48
	ctx.lr = 0x8313659C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-563(r11)
	PPC_STORE_U8(ctx.r11.u32 + -563, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831365B8"))) PPC_WEAK_FUNC(sub_831365B8);
PPC_FUNC_IMPL(__imp__sub_831365B8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,828
	ctx.r4.s64 = ctx.r11.s64 + 828;
	// bl 0x82429b48
	ctx.lr = 0x831365D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,914(r11)
	PPC_STORE_U8(ctx.r11.u32 + 914, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831365F0"))) PPC_WEAK_FUNC(sub_831365F0);
PPC_FUNC_IMPL(__imp__sub_831365F0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,832
	ctx.r4.s64 = ctx.r11.s64 + 832;
	// bl 0x82429b48
	ctx.lr = 0x8313660C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2270(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2270, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136628"))) PPC_WEAK_FUNC(sub_83136628);
PPC_FUNC_IMPL(__imp__sub_83136628) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,836
	ctx.r4.s64 = ctx.r11.s64 + 836;
	// bl 0x82429b48
	ctx.lr = 0x83136644;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5014(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5014, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136660"))) PPC_WEAK_FUNC(sub_83136660);
PPC_FUNC_IMPL(__imp__sub_83136660) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,840
	ctx.r4.s64 = ctx.r11.s64 + 840;
	// bl 0x82429b48
	ctx.lr = 0x8313667C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4451(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4451, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136698"))) PPC_WEAK_FUNC(sub_83136698);
PPC_FUNC_IMPL(__imp__sub_83136698) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,844
	ctx.r4.s64 = ctx.r11.s64 + 844;
	// bl 0x82429b48
	ctx.lr = 0x831366B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2679(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2679, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831366D0"))) PPC_WEAK_FUNC(sub_831366D0);
PPC_FUNC_IMPL(__imp__sub_831366D0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,848
	ctx.r4.s64 = ctx.r11.s64 + 848;
	// bl 0x82429b48
	ctx.lr = 0x831366EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3391(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3391, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136708"))) PPC_WEAK_FUNC(sub_83136708);
PPC_FUNC_IMPL(__imp__sub_83136708) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,852
	ctx.r4.s64 = ctx.r11.s64 + 852;
	// bl 0x82429b48
	ctx.lr = 0x83136724;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5053(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5053, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136740"))) PPC_WEAK_FUNC(sub_83136740);
PPC_FUNC_IMPL(__imp__sub_83136740) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,856
	ctx.r4.s64 = ctx.r11.s64 + 856;
	// bl 0x82429b48
	ctx.lr = 0x8313675C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-281(r11)
	PPC_STORE_U8(ctx.r11.u32 + -281, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136778"))) PPC_WEAK_FUNC(sub_83136778);
PPC_FUNC_IMPL(__imp__sub_83136778) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,860
	ctx.r4.s64 = ctx.r11.s64 + 860;
	// bl 0x82429b48
	ctx.lr = 0x83136794;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4742(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4742, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831367B0"))) PPC_WEAK_FUNC(sub_831367B0);
PPC_FUNC_IMPL(__imp__sub_831367B0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,864
	ctx.r4.s64 = ctx.r11.s64 + 864;
	// bl 0x82429b48
	ctx.lr = 0x831367CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1600(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1600, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831367E8"))) PPC_WEAK_FUNC(sub_831367E8);
PPC_FUNC_IMPL(__imp__sub_831367E8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,868
	ctx.r4.s64 = ctx.r11.s64 + 868;
	// bl 0x82429b48
	ctx.lr = 0x83136804;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4261(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4261, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136820"))) PPC_WEAK_FUNC(sub_83136820);
PPC_FUNC_IMPL(__imp__sub_83136820) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,872
	ctx.r4.s64 = ctx.r11.s64 + 872;
	// bl 0x82429b48
	ctx.lr = 0x8313683C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,529(r11)
	PPC_STORE_U8(ctx.r11.u32 + 529, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136858"))) PPC_WEAK_FUNC(sub_83136858);
PPC_FUNC_IMPL(__imp__sub_83136858) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,876
	ctx.r4.s64 = ctx.r11.s64 + 876;
	// bl 0x82429b48
	ctx.lr = 0x83136874;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2195(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2195, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136890"))) PPC_WEAK_FUNC(sub_83136890);
PPC_FUNC_IMPL(__imp__sub_83136890) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,880
	ctx.r4.s64 = ctx.r11.s64 + 880;
	// bl 0x82429b48
	ctx.lr = 0x831368AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,259(r11)
	PPC_STORE_U8(ctx.r11.u32 + 259, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831368C8"))) PPC_WEAK_FUNC(sub_831368C8);
PPC_FUNC_IMPL(__imp__sub_831368C8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,884
	ctx.r4.s64 = ctx.r11.s64 + 884;
	// bl 0x82429b48
	ctx.lr = 0x831368E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,138(r11)
	PPC_STORE_U8(ctx.r11.u32 + 138, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136900"))) PPC_WEAK_FUNC(sub_83136900);
PPC_FUNC_IMPL(__imp__sub_83136900) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,888
	ctx.r4.s64 = ctx.r11.s64 + 888;
	// bl 0x82429b48
	ctx.lr = 0x8313691C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1049(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1049, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136938"))) PPC_WEAK_FUNC(sub_83136938);
PPC_FUNC_IMPL(__imp__sub_83136938) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,892
	ctx.r4.s64 = ctx.r11.s64 + 892;
	// bl 0x82429b48
	ctx.lr = 0x83136954;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2442(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2442, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136970"))) PPC_WEAK_FUNC(sub_83136970);
PPC_FUNC_IMPL(__imp__sub_83136970) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,896
	ctx.r4.s64 = ctx.r11.s64 + 896;
	// bl 0x82429b48
	ctx.lr = 0x8313698C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4484(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4484, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831369A8"))) PPC_WEAK_FUNC(sub_831369A8);
PPC_FUNC_IMPL(__imp__sub_831369A8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,900
	ctx.r4.s64 = ctx.r11.s64 + 900;
	// bl 0x82429b48
	ctx.lr = 0x831369C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4064(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4064, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831369E0"))) PPC_WEAK_FUNC(sub_831369E0);
PPC_FUNC_IMPL(__imp__sub_831369E0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,904
	ctx.r4.s64 = ctx.r11.s64 + 904;
	// bl 0x82429b48
	ctx.lr = 0x831369FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,668(r11)
	PPC_STORE_U8(ctx.r11.u32 + 668, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136A18"))) PPC_WEAK_FUNC(sub_83136A18);
PPC_FUNC_IMPL(__imp__sub_83136A18) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,908
	ctx.r4.s64 = ctx.r11.s64 + 908;
	// bl 0x82429b48
	ctx.lr = 0x83136A34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1488(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1488, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136A50"))) PPC_WEAK_FUNC(sub_83136A50);
PPC_FUNC_IMPL(__imp__sub_83136A50) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,912
	ctx.r4.s64 = ctx.r11.s64 + 912;
	// bl 0x82429b48
	ctx.lr = 0x83136A6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,528(r11)
	PPC_STORE_U8(ctx.r11.u32 + 528, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136A88"))) PPC_WEAK_FUNC(sub_83136A88);
PPC_FUNC_IMPL(__imp__sub_83136A88) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,916
	ctx.r4.s64 = ctx.r11.s64 + 916;
	// bl 0x82429b48
	ctx.lr = 0x83136AA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,556(r11)
	PPC_STORE_U8(ctx.r11.u32 + 556, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136AC0"))) PPC_WEAK_FUNC(sub_83136AC0);
PPC_FUNC_IMPL(__imp__sub_83136AC0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,920
	ctx.r4.s64 = ctx.r11.s64 + 920;
	// bl 0x82429b48
	ctx.lr = 0x83136ADC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3137(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3137, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136AF8"))) PPC_WEAK_FUNC(sub_83136AF8);
PPC_FUNC_IMPL(__imp__sub_83136AF8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,924
	ctx.r4.s64 = ctx.r11.s64 + 924;
	// bl 0x82429b48
	ctx.lr = 0x83136B14;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4244(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4244, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136B30"))) PPC_WEAK_FUNC(sub_83136B30);
PPC_FUNC_IMPL(__imp__sub_83136B30) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,928
	ctx.r4.s64 = ctx.r11.s64 + 928;
	// bl 0x82429b48
	ctx.lr = 0x83136B4C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,838(r11)
	PPC_STORE_U8(ctx.r11.u32 + 838, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136B68"))) PPC_WEAK_FUNC(sub_83136B68);
PPC_FUNC_IMPL(__imp__sub_83136B68) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,932
	ctx.r4.s64 = ctx.r11.s64 + 932;
	// bl 0x82429b48
	ctx.lr = 0x83136B84;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4036(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4036, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136BA0"))) PPC_WEAK_FUNC(sub_83136BA0);
PPC_FUNC_IMPL(__imp__sub_83136BA0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,936
	ctx.r4.s64 = ctx.r11.s64 + 936;
	// bl 0x82429b48
	ctx.lr = 0x83136BBC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2372(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2372, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136BD8"))) PPC_WEAK_FUNC(sub_83136BD8);
PPC_FUNC_IMPL(__imp__sub_83136BD8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,940
	ctx.r4.s64 = ctx.r11.s64 + 940;
	// bl 0x82429b48
	ctx.lr = 0x83136BF4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1516(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1516, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136C10"))) PPC_WEAK_FUNC(sub_83136C10);
PPC_FUNC_IMPL(__imp__sub_83136C10) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,944
	ctx.r4.s64 = ctx.r11.s64 + 944;
	// bl 0x82429b48
	ctx.lr = 0x83136C2C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1664(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1664, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136C48"))) PPC_WEAK_FUNC(sub_83136C48);
PPC_FUNC_IMPL(__imp__sub_83136C48) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,948
	ctx.r4.s64 = ctx.r11.s64 + 948;
	// bl 0x82429b48
	ctx.lr = 0x83136C64;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1050(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1050, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136C80"))) PPC_WEAK_FUNC(sub_83136C80);
PPC_FUNC_IMPL(__imp__sub_83136C80) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,952
	ctx.r4.s64 = ctx.r11.s64 + 952;
	// bl 0x82429b48
	ctx.lr = 0x83136C9C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5295(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5295, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136CB8"))) PPC_WEAK_FUNC(sub_83136CB8);
PPC_FUNC_IMPL(__imp__sub_83136CB8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,956
	ctx.r4.s64 = ctx.r11.s64 + 956;
	// bl 0x82429b48
	ctx.lr = 0x83136CD4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1638(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1638, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136CF0"))) PPC_WEAK_FUNC(sub_83136CF0);
PPC_FUNC_IMPL(__imp__sub_83136CF0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,960
	ctx.r4.s64 = ctx.r11.s64 + 960;
	// bl 0x82429b48
	ctx.lr = 0x83136D0C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3178(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3178, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136D28"))) PPC_WEAK_FUNC(sub_83136D28);
PPC_FUNC_IMPL(__imp__sub_83136D28) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,964
	ctx.r4.s64 = ctx.r11.s64 + 964;
	// bl 0x82429b48
	ctx.lr = 0x83136D44;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2243(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2243, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136D60"))) PPC_WEAK_FUNC(sub_83136D60);
PPC_FUNC_IMPL(__imp__sub_83136D60) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,968
	ctx.r4.s64 = ctx.r11.s64 + 968;
	// bl 0x82429b48
	ctx.lr = 0x83136D7C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-675(r11)
	PPC_STORE_U8(ctx.r11.u32 + -675, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136D98"))) PPC_WEAK_FUNC(sub_83136D98);
PPC_FUNC_IMPL(__imp__sub_83136D98) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,972
	ctx.r4.s64 = ctx.r11.s64 + 972;
	// bl 0x82429b48
	ctx.lr = 0x83136DB4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3967(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3967, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136DD0"))) PPC_WEAK_FUNC(sub_83136DD0);
PPC_FUNC_IMPL(__imp__sub_83136DD0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,976
	ctx.r4.s64 = ctx.r11.s64 + 976;
	// bl 0x82429b48
	ctx.lr = 0x83136DEC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4429(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4429, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136E08"))) PPC_WEAK_FUNC(sub_83136E08);
PPC_FUNC_IMPL(__imp__sub_83136E08) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,980
	ctx.r4.s64 = ctx.r11.s64 + 980;
	// bl 0x82429b48
	ctx.lr = 0x83136E24;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-226(r11)
	PPC_STORE_U8(ctx.r11.u32 + -226, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136E40"))) PPC_WEAK_FUNC(sub_83136E40);
PPC_FUNC_IMPL(__imp__sub_83136E40) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,984
	ctx.r4.s64 = ctx.r11.s64 + 984;
	// bl 0x82429b48
	ctx.lr = 0x83136E5C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3136, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136E78"))) PPC_WEAK_FUNC(sub_83136E78);
PPC_FUNC_IMPL(__imp__sub_83136E78) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,988
	ctx.r4.s64 = ctx.r11.s64 + 988;
	// bl 0x82429b48
	ctx.lr = 0x83136E94;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2731(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2731, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136EB0"))) PPC_WEAK_FUNC(sub_83136EB0);
PPC_FUNC_IMPL(__imp__sub_83136EB0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,992
	ctx.r4.s64 = ctx.r11.s64 + 992;
	// bl 0x82429b48
	ctx.lr = 0x83136ECC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1157(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1157, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136EE8"))) PPC_WEAK_FUNC(sub_83136EE8);
PPC_FUNC_IMPL(__imp__sub_83136EE8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,996
	ctx.r4.s64 = ctx.r11.s64 + 996;
	// bl 0x82429b48
	ctx.lr = 0x83136F04;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1171(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1171, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136F20"))) PPC_WEAK_FUNC(sub_83136F20);
PPC_FUNC_IMPL(__imp__sub_83136F20) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1000
	ctx.r4.s64 = ctx.r11.s64 + 1000;
	// bl 0x82429b48
	ctx.lr = 0x83136F3C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2252(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2252, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136F58"))) PPC_WEAK_FUNC(sub_83136F58);
PPC_FUNC_IMPL(__imp__sub_83136F58) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1004
	ctx.r4.s64 = ctx.r11.s64 + 1004;
	// bl 0x82429b48
	ctx.lr = 0x83136F74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-301(r11)
	PPC_STORE_U8(ctx.r11.u32 + -301, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136F90"))) PPC_WEAK_FUNC(sub_83136F90);
PPC_FUNC_IMPL(__imp__sub_83136F90) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1008
	ctx.r4.s64 = ctx.r11.s64 + 1008;
	// bl 0x82429b48
	ctx.lr = 0x83136FAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4631(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4631, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136FC8"))) PPC_WEAK_FUNC(sub_83136FC8);
PPC_FUNC_IMPL(__imp__sub_83136FC8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1012
	ctx.r4.s64 = ctx.r11.s64 + 1012;
	// bl 0x82429b48
	ctx.lr = 0x83136FE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1601(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1601, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137000"))) PPC_WEAK_FUNC(sub_83137000);
PPC_FUNC_IMPL(__imp__sub_83137000) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1016
	ctx.r4.s64 = ctx.r11.s64 + 1016;
	// bl 0x82429b48
	ctx.lr = 0x8313701C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 148, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137038"))) PPC_WEAK_FUNC(sub_83137038);
PPC_FUNC_IMPL(__imp__sub_83137038) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1020
	ctx.r4.s64 = ctx.r11.s64 + 1020;
	// bl 0x82429b48
	ctx.lr = 0x83137054;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3899(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3899, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137070"))) PPC_WEAK_FUNC(sub_83137070);
PPC_FUNC_IMPL(__imp__sub_83137070) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1024
	ctx.r4.s64 = ctx.r11.s64 + 1024;
	// bl 0x82429b48
	ctx.lr = 0x8313708C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3896(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3896, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831370A8"))) PPC_WEAK_FUNC(sub_831370A8);
PPC_FUNC_IMPL(__imp__sub_831370A8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1028
	ctx.r4.s64 = ctx.r11.s64 + 1028;
	// bl 0x82429b48
	ctx.lr = 0x831370C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831370E0"))) PPC_WEAK_FUNC(sub_831370E0);
PPC_FUNC_IMPL(__imp__sub_831370E0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1032
	ctx.r4.s64 = ctx.r11.s64 + 1032;
	// bl 0x82429b48
	ctx.lr = 0x831370FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1073(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1073, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137118"))) PPC_WEAK_FUNC(sub_83137118);
PPC_FUNC_IMPL(__imp__sub_83137118) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1036
	ctx.r4.s64 = ctx.r11.s64 + 1036;
	// bl 0x82429b48
	ctx.lr = 0x83137134;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2403(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2403, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137150"))) PPC_WEAK_FUNC(sub_83137150);
PPC_FUNC_IMPL(__imp__sub_83137150) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1040
	ctx.r4.s64 = ctx.r11.s64 + 1040;
	// bl 0x82429b48
	ctx.lr = 0x8313716C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2220(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2220, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137188"))) PPC_WEAK_FUNC(sub_83137188);
PPC_FUNC_IMPL(__imp__sub_83137188) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1044
	ctx.r4.s64 = ctx.r11.s64 + 1044;
	// bl 0x82429b48
	ctx.lr = 0x831371A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2035(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2035, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831371C0"))) PPC_WEAK_FUNC(sub_831371C0);
PPC_FUNC_IMPL(__imp__sub_831371C0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1048
	ctx.r4.s64 = ctx.r11.s64 + 1048;
	// bl 0x82429b48
	ctx.lr = 0x831371DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3961(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3961, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831371F8"))) PPC_WEAK_FUNC(sub_831371F8);
PPC_FUNC_IMPL(__imp__sub_831371F8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1052
	ctx.r4.s64 = ctx.r11.s64 + 1052;
	// bl 0x82429b48
	ctx.lr = 0x83137214;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-168(r11)
	PPC_STORE_U8(ctx.r11.u32 + -168, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137230"))) PPC_WEAK_FUNC(sub_83137230);
PPC_FUNC_IMPL(__imp__sub_83137230) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1056
	ctx.r4.s64 = ctx.r11.s64 + 1056;
	// bl 0x82429b48
	ctx.lr = 0x8313724C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2362(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2362, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137268"))) PPC_WEAK_FUNC(sub_83137268);
PPC_FUNC_IMPL(__imp__sub_83137268) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1060
	ctx.r4.s64 = ctx.r11.s64 + 1060;
	// bl 0x82429b48
	ctx.lr = 0x83137284;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2192, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831372A0"))) PPC_WEAK_FUNC(sub_831372A0);
PPC_FUNC_IMPL(__imp__sub_831372A0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1064
	ctx.r4.s64 = ctx.r11.s64 + 1064;
	// bl 0x82429b48
	ctx.lr = 0x831372BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-322(r11)
	PPC_STORE_U8(ctx.r11.u32 + -322, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831372D8"))) PPC_WEAK_FUNC(sub_831372D8);
PPC_FUNC_IMPL(__imp__sub_831372D8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1068
	ctx.r4.s64 = ctx.r11.s64 + 1068;
	// bl 0x82429b48
	ctx.lr = 0x831372F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1444(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1444, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137310"))) PPC_WEAK_FUNC(sub_83137310);
PPC_FUNC_IMPL(__imp__sub_83137310) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// bl 0x82429b48
	ctx.lr = 0x8313732C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4882(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4882, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137348"))) PPC_WEAK_FUNC(sub_83137348);
PPC_FUNC_IMPL(__imp__sub_83137348) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1076
	ctx.r4.s64 = ctx.r11.s64 + 1076;
	// bl 0x82429b48
	ctx.lr = 0x83137364;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3510(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3510, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137380"))) PPC_WEAK_FUNC(sub_83137380);
PPC_FUNC_IMPL(__imp__sub_83137380) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1080
	ctx.r4.s64 = ctx.r11.s64 + 1080;
	// bl 0x82429b48
	ctx.lr = 0x8313739C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3283(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3283, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831373B8"))) PPC_WEAK_FUNC(sub_831373B8);
PPC_FUNC_IMPL(__imp__sub_831373B8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1084
	ctx.r4.s64 = ctx.r11.s64 + 1084;
	// bl 0x82429b48
	ctx.lr = 0x831373D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3181(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3181, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831373F0"))) PPC_WEAK_FUNC(sub_831373F0);
PPC_FUNC_IMPL(__imp__sub_831373F0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1088
	ctx.r4.s64 = ctx.r11.s64 + 1088;
	// bl 0x82429b48
	ctx.lr = 0x8313740C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2918(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2918, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137428"))) PPC_WEAK_FUNC(sub_83137428);
PPC_FUNC_IMPL(__imp__sub_83137428) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1092
	ctx.r4.s64 = ctx.r11.s64 + 1092;
	// bl 0x82429b48
	ctx.lr = 0x83137444;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2527(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2527, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137460"))) PPC_WEAK_FUNC(sub_83137460);
PPC_FUNC_IMPL(__imp__sub_83137460) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1096
	ctx.r4.s64 = ctx.r11.s64 + 1096;
	// bl 0x82429b48
	ctx.lr = 0x8313747C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1014(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1014, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137498"))) PPC_WEAK_FUNC(sub_83137498);
PPC_FUNC_IMPL(__imp__sub_83137498) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1100
	ctx.r4.s64 = ctx.r11.s64 + 1100;
	// bl 0x82429b48
	ctx.lr = 0x831374B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4233, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831374D0"))) PPC_WEAK_FUNC(sub_831374D0);
PPC_FUNC_IMPL(__imp__sub_831374D0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1104
	ctx.r4.s64 = ctx.r11.s64 + 1104;
	// bl 0x82429b48
	ctx.lr = 0x831374EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4152(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4152, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137508"))) PPC_WEAK_FUNC(sub_83137508);
PPC_FUNC_IMPL(__imp__sub_83137508) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1108
	ctx.r4.s64 = ctx.r11.s64 + 1108;
	// bl 0x82429b48
	ctx.lr = 0x83137524;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5280(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5280, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137540"))) PPC_WEAK_FUNC(sub_83137540);
PPC_FUNC_IMPL(__imp__sub_83137540) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1112
	ctx.r4.s64 = ctx.r11.s64 + 1112;
	// bl 0x82429b48
	ctx.lr = 0x8313755C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 400, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137578"))) PPC_WEAK_FUNC(sub_83137578);
PPC_FUNC_IMPL(__imp__sub_83137578) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1116
	ctx.r4.s64 = ctx.r11.s64 + 1116;
	// bl 0x82429b48
	ctx.lr = 0x83137594;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3962(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3962, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831375B0"))) PPC_WEAK_FUNC(sub_831375B0);
PPC_FUNC_IMPL(__imp__sub_831375B0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1120
	ctx.r4.s64 = ctx.r11.s64 + 1120;
	// bl 0x82429b48
	ctx.lr = 0x831375CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4522(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4522, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831375E8"))) PPC_WEAK_FUNC(sub_831375E8);
PPC_FUNC_IMPL(__imp__sub_831375E8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1124
	ctx.r4.s64 = ctx.r11.s64 + 1124;
	// bl 0x82429b48
	ctx.lr = 0x83137604;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,610(r11)
	PPC_STORE_U8(ctx.r11.u32 + 610, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137620"))) PPC_WEAK_FUNC(sub_83137620);
PPC_FUNC_IMPL(__imp__sub_83137620) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1128
	ctx.r4.s64 = ctx.r11.s64 + 1128;
	// bl 0x82429b48
	ctx.lr = 0x8313763C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5164(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5164, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137658"))) PPC_WEAK_FUNC(sub_83137658);
PPC_FUNC_IMPL(__imp__sub_83137658) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1132
	ctx.r4.s64 = ctx.r11.s64 + 1132;
	// bl 0x82429b48
	ctx.lr = 0x83137674;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,789(r11)
	PPC_STORE_U8(ctx.r11.u32 + 789, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137690"))) PPC_WEAK_FUNC(sub_83137690);
PPC_FUNC_IMPL(__imp__sub_83137690) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1136
	ctx.r4.s64 = ctx.r11.s64 + 1136;
	// bl 0x82429b48
	ctx.lr = 0x831376AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,721(r11)
	PPC_STORE_U8(ctx.r11.u32 + 721, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831376C8"))) PPC_WEAK_FUNC(sub_831376C8);
PPC_FUNC_IMPL(__imp__sub_831376C8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1140
	ctx.r4.s64 = ctx.r11.s64 + 1140;
	// bl 0x82429b48
	ctx.lr = 0x831376E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5396(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5396, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137700"))) PPC_WEAK_FUNC(sub_83137700);
PPC_FUNC_IMPL(__imp__sub_83137700) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1144
	ctx.r4.s64 = ctx.r11.s64 + 1144;
	// bl 0x82429b48
	ctx.lr = 0x8313771C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-719(r11)
	PPC_STORE_U8(ctx.r11.u32 + -719, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137738"))) PPC_WEAK_FUNC(sub_83137738);
PPC_FUNC_IMPL(__imp__sub_83137738) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1148
	ctx.r4.s64 = ctx.r11.s64 + 1148;
	// bl 0x82429b48
	ctx.lr = 0x83137754;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4037(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4037, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137770"))) PPC_WEAK_FUNC(sub_83137770);
PPC_FUNC_IMPL(__imp__sub_83137770) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1152
	ctx.r4.s64 = ctx.r11.s64 + 1152;
	// bl 0x82429b48
	ctx.lr = 0x8313778C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3179(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3179, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831377A8"))) PPC_WEAK_FUNC(sub_831377A8);
PPC_FUNC_IMPL(__imp__sub_831377A8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1156
	ctx.r4.s64 = ctx.r11.s64 + 1156;
	// bl 0x82429b48
	ctx.lr = 0x831377C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4065(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4065, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831377E0"))) PPC_WEAK_FUNC(sub_831377E0);
PPC_FUNC_IMPL(__imp__sub_831377E0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1160
	ctx.r4.s64 = ctx.r11.s64 + 1160;
	// bl 0x82429b48
	ctx.lr = 0x831377FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2885(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2885, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137818"))) PPC_WEAK_FUNC(sub_83137818);
PPC_FUNC_IMPL(__imp__sub_83137818) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1164
	ctx.r4.s64 = ctx.r11.s64 + 1164;
	// bl 0x82429b48
	ctx.lr = 0x83137834;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2613(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2613, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137850"))) PPC_WEAK_FUNC(sub_83137850);
PPC_FUNC_IMPL(__imp__sub_83137850) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1168
	ctx.r4.s64 = ctx.r11.s64 + 1168;
	// bl 0x82429b48
	ctx.lr = 0x8313786C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5351(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5351, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137888"))) PPC_WEAK_FUNC(sub_83137888);
PPC_FUNC_IMPL(__imp__sub_83137888) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1172
	ctx.r4.s64 = ctx.r11.s64 + 1172;
	// bl 0x82429b48
	ctx.lr = 0x831378A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4247(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4247, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831378C0"))) PPC_WEAK_FUNC(sub_831378C0);
PPC_FUNC_IMPL(__imp__sub_831378C0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1176
	ctx.r4.s64 = ctx.r11.s64 + 1176;
	// bl 0x82429b48
	ctx.lr = 0x831378DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3798(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3798, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831378F8"))) PPC_WEAK_FUNC(sub_831378F8);
PPC_FUNC_IMPL(__imp__sub_831378F8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1180
	ctx.r4.s64 = ctx.r11.s64 + 1180;
	// bl 0x82429b48
	ctx.lr = 0x83137914;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,109(r11)
	PPC_STORE_U8(ctx.r11.u32 + 109, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137930"))) PPC_WEAK_FUNC(sub_83137930);
PPC_FUNC_IMPL(__imp__sub_83137930) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1184
	ctx.r4.s64 = ctx.r11.s64 + 1184;
	// bl 0x82429b48
	ctx.lr = 0x8313794C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3250(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3250, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137968"))) PPC_WEAK_FUNC(sub_83137968);
PPC_FUNC_IMPL(__imp__sub_83137968) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1188
	ctx.r4.s64 = ctx.r11.s64 + 1188;
	// bl 0x82429b48
	ctx.lr = 0x83137984;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1075(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1075, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831379A0"))) PPC_WEAK_FUNC(sub_831379A0);
PPC_FUNC_IMPL(__imp__sub_831379A0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1192
	ctx.r4.s64 = ctx.r11.s64 + 1192;
	// bl 0x82429b48
	ctx.lr = 0x831379BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-649(r11)
	PPC_STORE_U8(ctx.r11.u32 + -649, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831379D8"))) PPC_WEAK_FUNC(sub_831379D8);
PPC_FUNC_IMPL(__imp__sub_831379D8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1196
	ctx.r4.s64 = ctx.r11.s64 + 1196;
	// bl 0x82429b48
	ctx.lr = 0x831379F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-422(r11)
	PPC_STORE_U8(ctx.r11.u32 + -422, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137A10"))) PPC_WEAK_FUNC(sub_83137A10);
PPC_FUNC_IMPL(__imp__sub_83137A10) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1200
	ctx.r4.s64 = ctx.r11.s64 + 1200;
	// bl 0x82429b48
	ctx.lr = 0x83137A2C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1666(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1666, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137A48"))) PPC_WEAK_FUNC(sub_83137A48);
PPC_FUNC_IMPL(__imp__sub_83137A48) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1204
	ctx.r4.s64 = ctx.r11.s64 + 1204;
	// bl 0x82429b48
	ctx.lr = 0x83137A64;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4575(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4575, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137A80"))) PPC_WEAK_FUNC(sub_83137A80);
PPC_FUNC_IMPL(__imp__sub_83137A80) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1208
	ctx.r4.s64 = ctx.r11.s64 + 1208;
	// bl 0x82429b48
	ctx.lr = 0x83137A9C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3300(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3300, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137AB8"))) PPC_WEAK_FUNC(sub_83137AB8);
PPC_FUNC_IMPL(__imp__sub_83137AB8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1212
	ctx.r4.s64 = ctx.r11.s64 + 1212;
	// bl 0x82429b48
	ctx.lr = 0x83137AD4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1294(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1294, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137AF0"))) PPC_WEAK_FUNC(sub_83137AF0);
PPC_FUNC_IMPL(__imp__sub_83137AF0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1216
	ctx.r4.s64 = ctx.r11.s64 + 1216;
	// bl 0x82429b48
	ctx.lr = 0x83137B0C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,912(r11)
	PPC_STORE_U8(ctx.r11.u32 + 912, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137B28"))) PPC_WEAK_FUNC(sub_83137B28);
PPC_FUNC_IMPL(__imp__sub_83137B28) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1220
	ctx.r4.s64 = ctx.r11.s64 + 1220;
	// bl 0x82429b48
	ctx.lr = 0x83137B44;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2883(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2883, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137B60"))) PPC_WEAK_FUNC(sub_83137B60);
PPC_FUNC_IMPL(__imp__sub_83137B60) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1224
	ctx.r4.s64 = ctx.r11.s64 + 1224;
	// bl 0x82429b48
	ctx.lr = 0x83137B7C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,885(r11)
	PPC_STORE_U8(ctx.r11.u32 + 885, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137B98"))) PPC_WEAK_FUNC(sub_83137B98);
PPC_FUNC_IMPL(__imp__sub_83137B98) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1228
	ctx.r4.s64 = ctx.r11.s64 + 1228;
	// bl 0x82429b48
	ctx.lr = 0x83137BB4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137BD0"))) PPC_WEAK_FUNC(sub_83137BD0);
PPC_FUNC_IMPL(__imp__sub_83137BD0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1232
	ctx.r4.s64 = ctx.r11.s64 + 1232;
	// bl 0x82429b48
	ctx.lr = 0x83137BEC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1636(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1636, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137C08"))) PPC_WEAK_FUNC(sub_83137C08);
PPC_FUNC_IMPL(__imp__sub_83137C08) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1236
	ctx.r4.s64 = ctx.r11.s64 + 1236;
	// bl 0x82429b48
	ctx.lr = 0x83137C24;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-302(r11)
	PPC_STORE_U8(ctx.r11.u32 + -302, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137C40"))) PPC_WEAK_FUNC(sub_83137C40);
PPC_FUNC_IMPL(__imp__sub_83137C40) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1240
	ctx.r4.s64 = ctx.r11.s64 + 1240;
	// bl 0x82429b48
	ctx.lr = 0x83137C5C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-562(r11)
	PPC_STORE_U8(ctx.r11.u32 + -562, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137C78"))) PPC_WEAK_FUNC(sub_83137C78);
PPC_FUNC_IMPL(__imp__sub_83137C78) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1244
	ctx.r4.s64 = ctx.r11.s64 + 1244;
	// bl 0x82429b48
	ctx.lr = 0x83137C94;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,228(r11)
	PPC_STORE_U8(ctx.r11.u32 + 228, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137CB0"))) PPC_WEAK_FUNC(sub_83137CB0);
PPC_FUNC_IMPL(__imp__sub_83137CB0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1248
	ctx.r4.s64 = ctx.r11.s64 + 1248;
	// bl 0x82429b48
	ctx.lr = 0x83137CCC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4858(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4858, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137CE8"))) PPC_WEAK_FUNC(sub_83137CE8);
PPC_FUNC_IMPL(__imp__sub_83137CE8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1252
	ctx.r4.s64 = ctx.r11.s64 + 1252;
	// bl 0x82429b48
	ctx.lr = 0x83137D04;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2151(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2151, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137D20"))) PPC_WEAK_FUNC(sub_83137D20);
PPC_FUNC_IMPL(__imp__sub_83137D20) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1256
	ctx.r4.s64 = ctx.r11.s64 + 1256;
	// bl 0x82429b48
	ctx.lr = 0x83137D3C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2524(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2524, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137D58"))) PPC_WEAK_FUNC(sub_83137D58);
PPC_FUNC_IMPL(__imp__sub_83137D58) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1260
	ctx.r4.s64 = ctx.r11.s64 + 1260;
	// bl 0x82429b48
	ctx.lr = 0x83137D74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,734(r11)
	PPC_STORE_U8(ctx.r11.u32 + 734, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137D90"))) PPC_WEAK_FUNC(sub_83137D90);
PPC_FUNC_IMPL(__imp__sub_83137D90) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1264
	ctx.r4.s64 = ctx.r11.s64 + 1264;
	// bl 0x82429b48
	ctx.lr = 0x83137DAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1130(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1130, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137DC8"))) PPC_WEAK_FUNC(sub_83137DC8);
PPC_FUNC_IMPL(__imp__sub_83137DC8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1268
	ctx.r4.s64 = ctx.r11.s64 + 1268;
	// bl 0x82429b48
	ctx.lr = 0x83137DE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3251(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3251, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137E00"))) PPC_WEAK_FUNC(sub_83137E00);
PPC_FUNC_IMPL(__imp__sub_83137E00) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1272
	ctx.r4.s64 = ctx.r11.s64 + 1272;
	// bl 0x82429b48
	ctx.lr = 0x83137E1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5376(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5376, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137E38"))) PPC_WEAK_FUNC(sub_83137E38);
PPC_FUNC_IMPL(__imp__sub_83137E38) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1276
	ctx.r4.s64 = ctx.r11.s64 + 1276;
	// bl 0x82429b48
	ctx.lr = 0x83137E54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3312(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3312, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137E70"))) PPC_WEAK_FUNC(sub_83137E70);
PPC_FUNC_IMPL(__imp__sub_83137E70) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1280
	ctx.r4.s64 = ctx.r11.s64 + 1280;
	// bl 0x82429b48
	ctx.lr = 0x83137E8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3444(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3444, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137EA8"))) PPC_WEAK_FUNC(sub_83137EA8);
PPC_FUNC_IMPL(__imp__sub_83137EA8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1284
	ctx.r4.s64 = ctx.r11.s64 + 1284;
	// bl 0x82429b48
	ctx.lr = 0x83137EC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4649(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4649, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137EE0"))) PPC_WEAK_FUNC(sub_83137EE0);
PPC_FUNC_IMPL(__imp__sub_83137EE0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1288
	ctx.r4.s64 = ctx.r11.s64 + 1288;
	// bl 0x82429b48
	ctx.lr = 0x83137EFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4369(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4369, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137F18"))) PPC_WEAK_FUNC(sub_83137F18);
PPC_FUNC_IMPL(__imp__sub_83137F18) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1292
	ctx.r4.s64 = ctx.r11.s64 + 1292;
	// bl 0x82429b48
	ctx.lr = 0x83137F34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5328(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5328, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137F50"))) PPC_WEAK_FUNC(sub_83137F50);
PPC_FUNC_IMPL(__imp__sub_83137F50) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1296
	ctx.r4.s64 = ctx.r11.s64 + 1296;
	// bl 0x82429b48
	ctx.lr = 0x83137F6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3810(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3810, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137F88"))) PPC_WEAK_FUNC(sub_83137F88);
PPC_FUNC_IMPL(__imp__sub_83137F88) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1300
	ctx.r4.s64 = ctx.r11.s64 + 1300;
	// bl 0x82429b48
	ctx.lr = 0x83137FA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5349(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5349, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137FC0"))) PPC_WEAK_FUNC(sub_83137FC0);
PPC_FUNC_IMPL(__imp__sub_83137FC0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1304
	ctx.r4.s64 = ctx.r11.s64 + 1304;
	// bl 0x82429b48
	ctx.lr = 0x83137FDC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2375(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2375, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137FF8"))) PPC_WEAK_FUNC(sub_83137FF8);
PPC_FUNC_IMPL(__imp__sub_83137FF8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1308
	ctx.r4.s64 = ctx.r11.s64 + 1308;
	// bl 0x82429b48
	ctx.lr = 0x83138014;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1196(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1196, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138030"))) PPC_WEAK_FUNC(sub_83138030);
PPC_FUNC_IMPL(__imp__sub_83138030) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1312
	ctx.r4.s64 = ctx.r11.s64 + 1312;
	// bl 0x82429b48
	ctx.lr = 0x8313804C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3045(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3045, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138068"))) PPC_WEAK_FUNC(sub_83138068);
PPC_FUNC_IMPL(__imp__sub_83138068) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1316
	ctx.r4.s64 = ctx.r11.s64 + 1316;
	// bl 0x82429b48
	ctx.lr = 0x83138084;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2431(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2431, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831380A0"))) PPC_WEAK_FUNC(sub_831380A0);
PPC_FUNC_IMPL(__imp__sub_831380A0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1320
	ctx.r4.s64 = ctx.r11.s64 + 1320;
	// bl 0x82429b48
	ctx.lr = 0x831380BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3075(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3075, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831380D8"))) PPC_WEAK_FUNC(sub_831380D8);
PPC_FUNC_IMPL(__imp__sub_831380D8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1324
	ctx.r4.s64 = ctx.r11.s64 + 1324;
	// bl 0x82429b48
	ctx.lr = 0x831380F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1216(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1216, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138110"))) PPC_WEAK_FUNC(sub_83138110);
PPC_FUNC_IMPL(__imp__sub_83138110) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1328
	ctx.r4.s64 = ctx.r11.s64 + 1328;
	// bl 0x82429b48
	ctx.lr = 0x8313812C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3342(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3342, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138148"))) PPC_WEAK_FUNC(sub_83138148);
PPC_FUNC_IMPL(__imp__sub_83138148) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1332
	ctx.r4.s64 = ctx.r11.s64 + 1332;
	// bl 0x82429b48
	ctx.lr = 0x83138164;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1630(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1630, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138180"))) PPC_WEAK_FUNC(sub_83138180);
PPC_FUNC_IMPL(__imp__sub_83138180) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1336
	ctx.r4.s64 = ctx.r11.s64 + 1336;
	// bl 0x82429b48
	ctx.lr = 0x8313819C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-460(r11)
	PPC_STORE_U8(ctx.r11.u32 + -460, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831381B8"))) PPC_WEAK_FUNC(sub_831381B8);
PPC_FUNC_IMPL(__imp__sub_831381B8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1340
	ctx.r4.s64 = ctx.r11.s64 + 1340;
	// bl 0x82429b48
	ctx.lr = 0x831381D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,611(r11)
	PPC_STORE_U8(ctx.r11.u32 + 611, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831381F0"))) PPC_WEAK_FUNC(sub_831381F0);
PPC_FUNC_IMPL(__imp__sub_831381F0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1344
	ctx.r4.s64 = ctx.r11.s64 + 1344;
	// bl 0x82429b48
	ctx.lr = 0x8313820C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,229(r11)
	PPC_STORE_U8(ctx.r11.u32 + 229, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138228"))) PPC_WEAK_FUNC(sub_83138228);
PPC_FUNC_IMPL(__imp__sub_83138228) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1348
	ctx.r4.s64 = ctx.r11.s64 + 1348;
	// bl 0x82429b48
	ctx.lr = 0x83138244;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1783(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1783, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138260"))) PPC_WEAK_FUNC(sub_83138260);
PPC_FUNC_IMPL(__imp__sub_83138260) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1352
	ctx.r4.s64 = ctx.r11.s64 + 1352;
	// bl 0x82429b48
	ctx.lr = 0x8313827C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1129(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1129, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138298"))) PPC_WEAK_FUNC(sub_83138298);
PPC_FUNC_IMPL(__imp__sub_83138298) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1356
	ctx.r4.s64 = ctx.r11.s64 + 1356;
	// bl 0x82429b48
	ctx.lr = 0x831382B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3408(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3408, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831382D0"))) PPC_WEAK_FUNC(sub_831382D0);
PPC_FUNC_IMPL(__imp__sub_831382D0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1360
	ctx.r4.s64 = ctx.r11.s64 + 1360;
	// bl 0x82429b48
	ctx.lr = 0x831382EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,573(r11)
	PPC_STORE_U8(ctx.r11.u32 + 573, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138308"))) PPC_WEAK_FUNC(sub_83138308);
PPC_FUNC_IMPL(__imp__sub_83138308) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1364
	ctx.r4.s64 = ctx.r11.s64 + 1364;
	// bl 0x82429b48
	ctx.lr = 0x83138324;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2884(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2884, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138340"))) PPC_WEAK_FUNC(sub_83138340);
PPC_FUNC_IMPL(__imp__sub_83138340) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1368
	ctx.r4.s64 = ctx.r11.s64 + 1368;
	// bl 0x82429b48
	ctx.lr = 0x8313835C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4281(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4281, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138378"))) PPC_WEAK_FUNC(sub_83138378);
PPC_FUNC_IMPL(__imp__sub_83138378) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1372
	ctx.r4.s64 = ctx.r11.s64 + 1372;
	// bl 0x82429b48
	ctx.lr = 0x83138394;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2494(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2494, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831383B0"))) PPC_WEAK_FUNC(sub_831383B0);
PPC_FUNC_IMPL(__imp__sub_831383B0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1376
	ctx.r4.s64 = ctx.r11.s64 + 1376;
	// bl 0x82429b48
	ctx.lr = 0x831383CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2844(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2844, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831383E8"))) PPC_WEAK_FUNC(sub_831383E8);
PPC_FUNC_IMPL(__imp__sub_831383E8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1380
	ctx.r4.s64 = ctx.r11.s64 + 1380;
	// bl 0x82429b48
	ctx.lr = 0x83138404;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5015(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5015, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138420"))) PPC_WEAK_FUNC(sub_83138420);
PPC_FUNC_IMPL(__imp__sub_83138420) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1384
	ctx.r4.s64 = ctx.r11.s64 + 1384;
	// bl 0x82429b48
	ctx.lr = 0x8313843C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2104, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138458"))) PPC_WEAK_FUNC(sub_83138458);
PPC_FUNC_IMPL(__imp__sub_83138458) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1388
	ctx.r4.s64 = ctx.r11.s64 + 1388;
	// bl 0x82429b48
	ctx.lr = 0x83138474;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4153(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4153, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138490"))) PPC_WEAK_FUNC(sub_83138490);
PPC_FUNC_IMPL(__imp__sub_83138490) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1392
	ctx.r4.s64 = ctx.r11.s64 + 1392;
	// bl 0x82429b48
	ctx.lr = 0x831384AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4388(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4388, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831384C8"))) PPC_WEAK_FUNC(sub_831384C8);
PPC_FUNC_IMPL(__imp__sub_831384C8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1396
	ctx.r4.s64 = ctx.r11.s64 + 1396;
	// bl 0x82429b48
	ctx.lr = 0x831384E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1812(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1812, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138500"))) PPC_WEAK_FUNC(sub_83138500);
PPC_FUNC_IMPL(__imp__sub_83138500) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1400
	ctx.r4.s64 = ctx.r11.s64 + 1400;
	// bl 0x82429b48
	ctx.lr = 0x8313851C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2084(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2084, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138538"))) PPC_WEAK_FUNC(sub_83138538);
PPC_FUNC_IMPL(__imp__sub_83138538) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1404
	ctx.r4.s64 = ctx.r11.s64 + 1404;
	// bl 0x82429b48
	ctx.lr = 0x83138554;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1526(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1526, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138570"))) PPC_WEAK_FUNC(sub_83138570);
PPC_FUNC_IMPL(__imp__sub_83138570) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1408
	ctx.r4.s64 = ctx.r11.s64 + 1408;
	// bl 0x82429b48
	ctx.lr = 0x8313858C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-566(r11)
	PPC_STORE_U8(ctx.r11.u32 + -566, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831385A8"))) PPC_WEAK_FUNC(sub_831385A8);
PPC_FUNC_IMPL(__imp__sub_831385A8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1412
	ctx.r4.s64 = ctx.r11.s64 + 1412;
	// bl 0x82429b48
	ctx.lr = 0x831385C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4205, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831385E0"))) PPC_WEAK_FUNC(sub_831385E0);
PPC_FUNC_IMPL(__imp__sub_831385E0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1416
	ctx.r4.s64 = ctx.r11.s64 + 1416;
	// bl 0x82429b48
	ctx.lr = 0x831385FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2674(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2674, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138618"))) PPC_WEAK_FUNC(sub_83138618);
PPC_FUNC_IMPL(__imp__sub_83138618) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1420
	ctx.r4.s64 = ctx.r11.s64 + 1420;
	// bl 0x82429b48
	ctx.lr = 0x83138634;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3343(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3343, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138650"))) PPC_WEAK_FUNC(sub_83138650);
PPC_FUNC_IMPL(__imp__sub_83138650) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1424
	ctx.r4.s64 = ctx.r11.s64 + 1424;
	// bl 0x82429b48
	ctx.lr = 0x8313866C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4431(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4431, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138688"))) PPC_WEAK_FUNC(sub_83138688);
PPC_FUNC_IMPL(__imp__sub_83138688) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1428
	ctx.r4.s64 = ctx.r11.s64 + 1428;
	// bl 0x82429b48
	ctx.lr = 0x831386A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1840(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1840, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831386C0"))) PPC_WEAK_FUNC(sub_831386C0);
PPC_FUNC_IMPL(__imp__sub_831386C0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1432
	ctx.r4.s64 = ctx.r11.s64 + 1432;
	// bl 0x82429b48
	ctx.lr = 0x831386DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2846(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2846, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831386F8"))) PPC_WEAK_FUNC(sub_831386F8);
PPC_FUNC_IMPL(__imp__sub_831386F8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1436
	ctx.r4.s64 = ctx.r11.s64 + 1436;
	// bl 0x82429b48
	ctx.lr = 0x83138714;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5051(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5051, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138730"))) PPC_WEAK_FUNC(sub_83138730);
PPC_FUNC_IMPL(__imp__sub_83138730) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1440
	ctx.r4.s64 = ctx.r11.s64 + 1440;
	// bl 0x82429b48
	ctx.lr = 0x8313874C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4366(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4366, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138768"))) PPC_WEAK_FUNC(sub_83138768);
PPC_FUNC_IMPL(__imp__sub_83138768) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1444
	ctx.r4.s64 = ctx.r11.s64 + 1444;
	// bl 0x82429b48
	ctx.lr = 0x83138784;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1425(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1425, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831387A0"))) PPC_WEAK_FUNC(sub_831387A0);
PPC_FUNC_IMPL(__imp__sub_831387A0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1448
	ctx.r4.s64 = ctx.r11.s64 + 1448;
	// bl 0x82429b48
	ctx.lr = 0x831387BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2221(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2221, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831387D8"))) PPC_WEAK_FUNC(sub_831387D8);
PPC_FUNC_IMPL(__imp__sub_831387D8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1452
	ctx.r4.s64 = ctx.r11.s64 + 1452;
	// bl 0x82429b48
	ctx.lr = 0x831387F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,557(r11)
	PPC_STORE_U8(ctx.r11.u32 + 557, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138810"))) PPC_WEAK_FUNC(sub_83138810);
PPC_FUNC_IMPL(__imp__sub_83138810) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1456
	ctx.r4.s64 = ctx.r11.s64 + 1456;
	// bl 0x82429b48
	ctx.lr = 0x8313882C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4965(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4965, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138848"))) PPC_WEAK_FUNC(sub_83138848);
PPC_FUNC_IMPL(__imp__sub_83138848) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1460
	ctx.r4.s64 = ctx.r11.s64 + 1460;
	// bl 0x82429b48
	ctx.lr = 0x83138864;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3751(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3751, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138880"))) PPC_WEAK_FUNC(sub_83138880);
PPC_FUNC_IMPL(__imp__sub_83138880) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1464
	ctx.r4.s64 = ctx.r11.s64 + 1464;
	// bl 0x82429b48
	ctx.lr = 0x8313889C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1552(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1552, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831388B8"))) PPC_WEAK_FUNC(sub_831388B8);
PPC_FUNC_IMPL(__imp__sub_831388B8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1468
	ctx.r4.s64 = ctx.r11.s64 + 1468;
	// bl 0x82429b48
	ctx.lr = 0x831388D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2969(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2969, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831388F0"))) PPC_WEAK_FUNC(sub_831388F0);
PPC_FUNC_IMPL(__imp__sub_831388F0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1472
	ctx.r4.s64 = ctx.r11.s64 + 1472;
	// bl 0x82429b48
	ctx.lr = 0x8313890C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3963(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3963, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138928"))) PPC_WEAK_FUNC(sub_83138928);
PPC_FUNC_IMPL(__imp__sub_83138928) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1476
	ctx.r4.s64 = ctx.r11.s64 + 1476;
	// bl 0x82429b48
	ctx.lr = 0x83138944;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,485(r11)
	PPC_STORE_U8(ctx.r11.u32 + 485, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138960"))) PPC_WEAK_FUNC(sub_83138960);
PPC_FUNC_IMPL(__imp__sub_83138960) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1480
	ctx.r4.s64 = ctx.r11.s64 + 1480;
	// bl 0x82429b48
	ctx.lr = 0x8313897C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,439(r11)
	PPC_STORE_U8(ctx.r11.u32 + 439, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138998"))) PPC_WEAK_FUNC(sub_83138998);
PPC_FUNC_IMPL(__imp__sub_83138998) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1484
	ctx.r4.s64 = ctx.r11.s64 + 1484;
	// bl 0x82429b48
	ctx.lr = 0x831389B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-443(r11)
	PPC_STORE_U8(ctx.r11.u32 + -443, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831389D0"))) PPC_WEAK_FUNC(sub_831389D0);
PPC_FUNC_IMPL(__imp__sub_831389D0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1488
	ctx.r4.s64 = ctx.r11.s64 + 1488;
	// bl 0x82429b48
	ctx.lr = 0x831389EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1522(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1522, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138A08"))) PPC_WEAK_FUNC(sub_83138A08);
PPC_FUNC_IMPL(__imp__sub_83138A08) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1492
	ctx.r4.s64 = ctx.r11.s64 + 1492;
	// bl 0x82429b48
	ctx.lr = 0x83138A24;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,607(r11)
	PPC_STORE_U8(ctx.r11.u32 + 607, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138A40"))) PPC_WEAK_FUNC(sub_83138A40);
PPC_FUNC_IMPL(__imp__sub_83138A40) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1496
	ctx.r4.s64 = ctx.r11.s64 + 1496;
	// bl 0x82429b48
	ctx.lr = 0x83138A5C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-718(r11)
	PPC_STORE_U8(ctx.r11.u32 + -718, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138A78"))) PPC_WEAK_FUNC(sub_83138A78);
PPC_FUNC_IMPL(__imp__sub_83138A78) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1500
	ctx.r4.s64 = ctx.r11.s64 + 1500;
	// bl 0x82429b48
	ctx.lr = 0x83138A94;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2351(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2351, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138AB0"))) PPC_WEAK_FUNC(sub_83138AB0);
PPC_FUNC_IMPL(__imp__sub_83138AB0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1504
	ctx.r4.s64 = ctx.r11.s64 + 1504;
	// bl 0x82429b48
	ctx.lr = 0x83138ACC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,276(r11)
	PPC_STORE_U8(ctx.r11.u32 + 276, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138AE8"))) PPC_WEAK_FUNC(sub_83138AE8);
PPC_FUNC_IMPL(__imp__sub_83138AE8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1508
	ctx.r4.s64 = ctx.r11.s64 + 1508;
	// bl 0x82429b48
	ctx.lr = 0x83138B04;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,499(r11)
	PPC_STORE_U8(ctx.r11.u32 + 499, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138B20"))) PPC_WEAK_FUNC(sub_83138B20);
PPC_FUNC_IMPL(__imp__sub_83138B20) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1512
	ctx.r4.s64 = ctx.r11.s64 + 1512;
	// bl 0x82429b48
	ctx.lr = 0x83138B3C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3705(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3705, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138B58"))) PPC_WEAK_FUNC(sub_83138B58);
PPC_FUNC_IMPL(__imp__sub_83138B58) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1516
	ctx.r4.s64 = ctx.r11.s64 + 1516;
	// bl 0x82429b48
	ctx.lr = 0x83138B74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4654(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4654, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138B90"))) PPC_WEAK_FUNC(sub_83138B90);
PPC_FUNC_IMPL(__imp__sub_83138B90) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1520
	ctx.r4.s64 = ctx.r11.s64 + 1520;
	// bl 0x82429b48
	ctx.lr = 0x83138BAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1803(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1803, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138BC8"))) PPC_WEAK_FUNC(sub_83138BC8);
PPC_FUNC_IMPL(__imp__sub_83138BC8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1524
	ctx.r4.s64 = ctx.r11.s64 + 1524;
	// bl 0x82429b48
	ctx.lr = 0x83138BE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-197(r11)
	PPC_STORE_U8(ctx.r11.u32 + -197, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138C00"))) PPC_WEAK_FUNC(sub_83138C00);
PPC_FUNC_IMPL(__imp__sub_83138C00) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1528
	ctx.r4.s64 = ctx.r11.s64 + 1528;
	// bl 0x82429b48
	ctx.lr = 0x83138C1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4786(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4786, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138C38"))) PPC_WEAK_FUNC(sub_83138C38);
PPC_FUNC_IMPL(__imp__sub_83138C38) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1532
	ctx.r4.s64 = ctx.r11.s64 + 1532;
	// bl 0x82429b48
	ctx.lr = 0x83138C54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4971(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4971, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138C70"))) PPC_WEAK_FUNC(sub_83138C70);
PPC_FUNC_IMPL(__imp__sub_83138C70) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1536
	ctx.r4.s64 = ctx.r11.s64 + 1536;
	// bl 0x82429b48
	ctx.lr = 0x83138C8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2428(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2428, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138CA8"))) PPC_WEAK_FUNC(sub_83138CA8);
PPC_FUNC_IMPL(__imp__sub_83138CA8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1540
	ctx.r4.s64 = ctx.r11.s64 + 1540;
	// bl 0x82429b48
	ctx.lr = 0x83138CC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1074(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1074, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138CE0"))) PPC_WEAK_FUNC(sub_83138CE0);
PPC_FUNC_IMPL(__imp__sub_83138CE0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1544
	ctx.r4.s64 = ctx.r11.s64 + 1544;
	// bl 0x82429b48
	ctx.lr = 0x83138CFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,258(r11)
	PPC_STORE_U8(ctx.r11.u32 + 258, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138D18"))) PPC_WEAK_FUNC(sub_83138D18);
PPC_FUNC_IMPL(__imp__sub_83138D18) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1548
	ctx.r4.s64 = ctx.r11.s64 + 1548;
	// bl 0x82429b48
	ctx.lr = 0x83138D34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4923(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4923, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138D50"))) PPC_WEAK_FUNC(sub_83138D50);
PPC_FUNC_IMPL(__imp__sub_83138D50) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1552
	ctx.r4.s64 = ctx.r11.s64 + 1552;
	// bl 0x82429b48
	ctx.lr = 0x83138D6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3409(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3409, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138D88"))) PPC_WEAK_FUNC(sub_83138D88);
PPC_FUNC_IMPL(__imp__sub_83138D88) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1556
	ctx.r4.s64 = ctx.r11.s64 + 1556;
	// bl 0x82429b48
	ctx.lr = 0x83138DA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4755(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4755, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138DC0"))) PPC_WEAK_FUNC(sub_83138DC0);
PPC_FUNC_IMPL(__imp__sub_83138DC0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1560
	ctx.r4.s64 = ctx.r11.s64 + 1560;
	// bl 0x82429b48
	ctx.lr = 0x83138DDC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2222(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2222, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138DF8"))) PPC_WEAK_FUNC(sub_83138DF8);
PPC_FUNC_IMPL(__imp__sub_83138DF8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1564
	ctx.r4.s64 = ctx.r11.s64 + 1564;
	// bl 0x82429b48
	ctx.lr = 0x83138E14;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1169(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1169, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138E30"))) PPC_WEAK_FUNC(sub_83138E30);
PPC_FUNC_IMPL(__imp__sub_83138E30) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1568
	ctx.r4.s64 = ctx.r11.s64 + 1568;
	// bl 0x82429b48
	ctx.lr = 0x83138E4C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2107(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2107, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138E68"))) PPC_WEAK_FUNC(sub_83138E68);
PPC_FUNC_IMPL(__imp__sub_83138E68) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1572
	ctx.r4.s64 = ctx.r11.s64 + 1572;
	// bl 0x82429b48
	ctx.lr = 0x83138E84;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1391(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1391, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138EA0"))) PPC_WEAK_FUNC(sub_83138EA0);
PPC_FUNC_IMPL(__imp__sub_83138EA0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1576
	ctx.r4.s64 = ctx.r11.s64 + 1576;
	// bl 0x82429b48
	ctx.lr = 0x83138EBC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-604(r11)
	PPC_STORE_U8(ctx.r11.u32 + -604, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138ED8"))) PPC_WEAK_FUNC(sub_83138ED8);
PPC_FUNC_IMPL(__imp__sub_83138ED8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1580
	ctx.r4.s64 = ctx.r11.s64 + 1580;
	// bl 0x82429b48
	ctx.lr = 0x83138EF4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4993(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4993, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138F10"))) PPC_WEAK_FUNC(sub_83138F10);
PPC_FUNC_IMPL(__imp__sub_83138F10) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1584
	ctx.r4.s64 = ctx.r11.s64 + 1584;
	// bl 0x82429b48
	ctx.lr = 0x83138F2C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2807(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2807, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138F48"))) PPC_WEAK_FUNC(sub_83138F48);
PPC_FUNC_IMPL(__imp__sub_83138F48) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1588
	ctx.r4.s64 = ctx.r11.s64 + 1588;
	// bl 0x82429b48
	ctx.lr = 0x83138F64;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4154(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4154, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138F80"))) PPC_WEAK_FUNC(sub_83138F80);
PPC_FUNC_IMPL(__imp__sub_83138F80) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1592
	ctx.r4.s64 = ctx.r11.s64 + 1592;
	// bl 0x82429b48
	ctx.lr = 0x83138F9C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4067(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4067, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138FB8"))) PPC_WEAK_FUNC(sub_83138FB8);
PPC_FUNC_IMPL(__imp__sub_83138FB8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1596
	ctx.r4.s64 = ctx.r11.s64 + 1596;
	// bl 0x82429b48
	ctx.lr = 0x83138FD4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3706(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3706, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138FF0"))) PPC_WEAK_FUNC(sub_83138FF0);
PPC_FUNC_IMPL(__imp__sub_83138FF0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1600
	ctx.r4.s64 = ctx.r11.s64 + 1600;
	// bl 0x82429b48
	ctx.lr = 0x8313900C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2619(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2619, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139028"))) PPC_WEAK_FUNC(sub_83139028);
PPC_FUNC_IMPL(__imp__sub_83139028) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1604
	ctx.r4.s64 = ctx.r11.s64 + 1604;
	// bl 0x82429b48
	ctx.lr = 0x83139044;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4370(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4370, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139060"))) PPC_WEAK_FUNC(sub_83139060);
PPC_FUNC_IMPL(__imp__sub_83139060) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1608
	ctx.r4.s64 = ctx.r11.s64 + 1608;
	// bl 0x82429b48
	ctx.lr = 0x8313907C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2847(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2847, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139098"))) PPC_WEAK_FUNC(sub_83139098);
PPC_FUNC_IMPL(__imp__sub_83139098) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1612
	ctx.r4.s64 = ctx.r11.s64 + 1612;
	// bl 0x82429b48
	ctx.lr = 0x831390B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-565(r11)
	PPC_STORE_U8(ctx.r11.u32 + -565, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831390D0"))) PPC_WEAK_FUNC(sub_831390D0);
PPC_FUNC_IMPL(__imp__sub_831390D0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1616
	ctx.r4.s64 = ctx.r11.s64 + 1616;
	// bl 0x82429b48
	ctx.lr = 0x831390EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4966(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4966, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139108"))) PPC_WEAK_FUNC(sub_83139108);
PPC_FUNC_IMPL(__imp__sub_83139108) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1620
	ctx.r4.s64 = ctx.r11.s64 + 1620;
	// bl 0x82429b48
	ctx.lr = 0x83139124;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,230(r11)
	PPC_STORE_U8(ctx.r11.u32 + 230, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139140"))) PPC_WEAK_FUNC(sub_83139140);
PPC_FUNC_IMPL(__imp__sub_83139140) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1624
	ctx.r4.s64 = ctx.r11.s64 + 1624;
	// bl 0x82429b48
	ctx.lr = 0x8313915C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3313(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3313, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139178"))) PPC_WEAK_FUNC(sub_83139178);
PPC_FUNC_IMPL(__imp__sub_83139178) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1628
	ctx.r4.s64 = ctx.r11.s64 + 1628;
	// bl 0x82429b48
	ctx.lr = 0x83139194;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2254(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2254, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831391B0"))) PPC_WEAK_FUNC(sub_831391B0);
PPC_FUNC_IMPL(__imp__sub_831391B0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1632
	ctx.r4.s64 = ctx.r11.s64 + 1632;
	// bl 0x82429b48
	ctx.lr = 0x831391CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3280(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3280, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831391E8"))) PPC_WEAK_FUNC(sub_831391E8);
PPC_FUNC_IMPL(__imp__sub_831391E8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1636
	ctx.r4.s64 = ctx.r11.s64 + 1636;
	// bl 0x82429b48
	ctx.lr = 0x83139204;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1158(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1158, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139220"))) PPC_WEAK_FUNC(sub_83139220);
PPC_FUNC_IMPL(__imp__sub_83139220) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1640
	ctx.r4.s64 = ctx.r11.s64 + 1640;
	// bl 0x82429b48
	ctx.lr = 0x8313923C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1113(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1113, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139258"))) PPC_WEAK_FUNC(sub_83139258);
PPC_FUNC_IMPL(__imp__sub_83139258) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1644
	ctx.r4.s64 = ctx.r11.s64 + 1644;
	// bl 0x82429b48
	ctx.lr = 0x83139274;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2401, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139290"))) PPC_WEAK_FUNC(sub_83139290);
PPC_FUNC_IMPL(__imp__sub_83139290) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1648
	ctx.r4.s64 = ctx.r11.s64 + 1648;
	// bl 0x82429b48
	ctx.lr = 0x831392AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1011(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1011, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831392C8"))) PPC_WEAK_FUNC(sub_831392C8);
PPC_FUNC_IMPL(__imp__sub_831392C8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1652
	ctx.r4.s64 = ctx.r11.s64 + 1652;
	// bl 0x82429b48
	ctx.lr = 0x831392E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3345(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3345, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139300"))) PPC_WEAK_FUNC(sub_83139300);
PPC_FUNC_IMPL(__imp__sub_83139300) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1656
	ctx.r4.s64 = ctx.r11.s64 + 1656;
	// bl 0x82429b48
	ctx.lr = 0x8313931C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4833(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4833, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139338"))) PPC_WEAK_FUNC(sub_83139338);
PPC_FUNC_IMPL(__imp__sub_83139338) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1660
	ctx.r4.s64 = ctx.r11.s64 + 1660;
	// bl 0x82429b48
	ctx.lr = 0x83139354;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1116(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1116, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139370"))) PPC_WEAK_FUNC(sub_83139370);
PPC_FUNC_IMPL(__imp__sub_83139370) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1664
	ctx.r4.s64 = ctx.r11.s64 + 1664;
	// bl 0x82429b48
	ctx.lr = 0x8313938C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,608(r11)
	PPC_STORE_U8(ctx.r11.u32 + 608, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831393A8"))) PPC_WEAK_FUNC(sub_831393A8);
PPC_FUNC_IMPL(__imp__sub_831393A8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1668
	ctx.r4.s64 = ctx.r11.s64 + 1668;
	// bl 0x82429b48
	ctx.lr = 0x831393C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1445(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1445, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831393E0"))) PPC_WEAK_FUNC(sub_831393E0);
PPC_FUNC_IMPL(__imp__sub_831393E0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1672
	ctx.r4.s64 = ctx.r11.s64 + 1672;
	// bl 0x82429b48
	ctx.lr = 0x831393FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-283(r11)
	PPC_STORE_U8(ctx.r11.u32 + -283, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139418"))) PPC_WEAK_FUNC(sub_83139418);
PPC_FUNC_IMPL(__imp__sub_83139418) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1676
	ctx.r4.s64 = ctx.r11.s64 + 1676;
	// bl 0x82429b48
	ctx.lr = 0x83139434;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,408(r11)
	PPC_STORE_U8(ctx.r11.u32 + 408, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139450"))) PPC_WEAK_FUNC(sub_83139450);
PPC_FUNC_IMPL(__imp__sub_83139450) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1680
	ctx.r4.s64 = ctx.r11.s64 + 1680;
	// bl 0x82429b48
	ctx.lr = 0x8313946C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4967(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4967, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139488"))) PPC_WEAK_FUNC(sub_83139488);
PPC_FUNC_IMPL(__imp__sub_83139488) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1684
	ctx.r4.s64 = ctx.r11.s64 + 1684;
	// bl 0x82429b48
	ctx.lr = 0x831394A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-615(r11)
	PPC_STORE_U8(ctx.r11.u32 + -615, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831394C0"))) PPC_WEAK_FUNC(sub_831394C0);
PPC_FUNC_IMPL(__imp__sub_831394C0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1688
	ctx.r4.s64 = ctx.r11.s64 + 1688;
	// bl 0x82429b48
	ctx.lr = 0x831394DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4110(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4110, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831394F8"))) PPC_WEAK_FUNC(sub_831394F8);
PPC_FUNC_IMPL(__imp__sub_831394F8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1692
	ctx.r4.s64 = ctx.r11.s64 + 1692;
	// bl 0x82429b48
	ctx.lr = 0x83139514;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2672(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2672, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139530"))) PPC_WEAK_FUNC(sub_83139530);
PPC_FUNC_IMPL(__imp__sub_83139530) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1696
	ctx.r4.s64 = ctx.r11.s64 + 1696;
	// bl 0x82429b48
	ctx.lr = 0x8313954C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-94(r11)
	PPC_STORE_U8(ctx.r11.u32 + -94, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139568"))) PPC_WEAK_FUNC(sub_83139568);
PPC_FUNC_IMPL(__imp__sub_83139568) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1700
	ctx.r4.s64 = ctx.r11.s64 + 1700;
	// bl 0x82429b48
	ctx.lr = 0x83139584;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2539(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2539, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831395A0"))) PPC_WEAK_FUNC(sub_831395A0);
PPC_FUNC_IMPL(__imp__sub_831395A0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1704
	ctx.r4.s64 = ctx.r11.s64 + 1704;
	// bl 0x82429b48
	ctx.lr = 0x831395BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3564(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3564, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831395D8"))) PPC_WEAK_FUNC(sub_831395D8);
PPC_FUNC_IMPL(__imp__sub_831395D8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1708
	ctx.r4.s64 = ctx.r11.s64 + 1708;
	// bl 0x82429b48
	ctx.lr = 0x831395F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5238(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5238, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139610"))) PPC_WEAK_FUNC(sub_83139610);
PPC_FUNC_IMPL(__imp__sub_83139610) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1712
	ctx.r4.s64 = ctx.r11.s64 + 1712;
	// bl 0x82429b48
	ctx.lr = 0x8313962C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1781(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1781, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139648"))) PPC_WEAK_FUNC(sub_83139648);
PPC_FUNC_IMPL(__imp__sub_83139648) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1716
	ctx.r4.s64 = ctx.r11.s64 + 1716;
	// bl 0x82429b48
	ctx.lr = 0x83139664;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,606(r11)
	PPC_STORE_U8(ctx.r11.u32 + 606, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139680"))) PPC_WEAK_FUNC(sub_83139680);
PPC_FUNC_IMPL(__imp__sub_83139680) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1720
	ctx.r4.s64 = ctx.r11.s64 + 1720;
	// bl 0x82429b48
	ctx.lr = 0x8313969C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3138(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3138, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831396B8"))) PPC_WEAK_FUNC(sub_831396B8);
PPC_FUNC_IMPL(__imp__sub_831396B8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1724
	ctx.r4.s64 = ctx.r11.s64 + 1724;
	// bl 0x82429b48
	ctx.lr = 0x831396D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5281(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5281, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831396F0"))) PPC_WEAK_FUNC(sub_831396F0);
PPC_FUNC_IMPL(__imp__sub_831396F0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1728
	ctx.r4.s64 = ctx.r11.s64 + 1728;
	// bl 0x82429b48
	ctx.lr = 0x8313970C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3898(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3898, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139728"))) PPC_WEAK_FUNC(sub_83139728);
PPC_FUNC_IMPL(__imp__sub_83139728) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1732
	ctx.r4.s64 = ctx.r11.s64 + 1732;
	// bl 0x82429b48
	ctx.lr = 0x83139744;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1426(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1426, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139760"))) PPC_WEAK_FUNC(sub_83139760);
PPC_FUNC_IMPL(__imp__sub_83139760) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1736
	ctx.r4.s64 = ctx.r11.s64 + 1736;
	// bl 0x82429b48
	ctx.lr = 0x8313977C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,510(r11)
	PPC_STORE_U8(ctx.r11.u32 + 510, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139798"))) PPC_WEAK_FUNC(sub_83139798);
PPC_FUNC_IMPL(__imp__sub_83139798) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1740
	ctx.r4.s64 = ctx.r11.s64 + 1740;
	// bl 0x82429b48
	ctx.lr = 0x831397B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,981(r11)
	PPC_STORE_U8(ctx.r11.u32 + 981, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831397D0"))) PPC_WEAK_FUNC(sub_831397D0);
PPC_FUNC_IMPL(__imp__sub_831397D0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1744
	ctx.r4.s64 = ctx.r11.s64 + 1744;
	// bl 0x82429b48
	ctx.lr = 0x831397EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4430(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4430, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139808"))) PPC_WEAK_FUNC(sub_83139808);
PPC_FUNC_IMPL(__imp__sub_83139808) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1748
	ctx.r4.s64 = ctx.r11.s64 + 1748;
	// bl 0x82429b48
	ctx.lr = 0x83139824;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4655(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4655, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139840"))) PPC_WEAK_FUNC(sub_83139840);
PPC_FUNC_IMPL(__imp__sub_83139840) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1752
	ctx.r4.s64 = ctx.r11.s64 + 1752;
	// bl 0x82429b48
	ctx.lr = 0x8313985C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2133(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2133, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139878"))) PPC_WEAK_FUNC(sub_83139878);
PPC_FUNC_IMPL(__imp__sub_83139878) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1756
	ctx.r4.s64 = ctx.r11.s64 + 1756;
	// bl 0x82429b48
	ctx.lr = 0x83139894;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1076(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1076, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831398B0"))) PPC_WEAK_FUNC(sub_831398B0);
PPC_FUNC_IMPL(__imp__sub_831398B0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1760
	ctx.r4.s64 = ctx.r11.s64 + 1760;
	// bl 0x82429b48
	ctx.lr = 0x831398CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4601(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4601, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831398E8"))) PPC_WEAK_FUNC(sub_831398E8);
PPC_FUNC_IMPL(__imp__sub_831398E8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1764
	ctx.r4.s64 = ctx.r11.s64 + 1764;
	// bl 0x82429b48
	ctx.lr = 0x83139904;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1743(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1743, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139920"))) PPC_WEAK_FUNC(sub_83139920);
PPC_FUNC_IMPL(__imp__sub_83139920) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1768
	ctx.r4.s64 = ctx.r11.s64 + 1768;
	// bl 0x82429b48
	ctx.lr = 0x8313993C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5245(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5245, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139958"))) PPC_WEAK_FUNC(sub_83139958);
PPC_FUNC_IMPL(__imp__sub_83139958) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1772
	ctx.r4.s64 = ctx.r11.s64 + 1772;
	// bl 0x82429b48
	ctx.lr = 0x83139974;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,670(r11)
	PPC_STORE_U8(ctx.r11.u32 + 670, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139990"))) PPC_WEAK_FUNC(sub_83139990);
PPC_FUNC_IMPL(__imp__sub_83139990) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1776
	ctx.r4.s64 = ctx.r11.s64 + 1776;
	// bl 0x82429b48
	ctx.lr = 0x831399AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-129(r11)
	PPC_STORE_U8(ctx.r11.u32 + -129, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831399C8"))) PPC_WEAK_FUNC(sub_831399C8);
PPC_FUNC_IMPL(__imp__sub_831399C8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1780
	ctx.r4.s64 = ctx.r11.s64 + 1780;
	// bl 0x82429b48
	ctx.lr = 0x831399E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,242(r11)
	PPC_STORE_U8(ctx.r11.u32 + 242, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139A00"))) PPC_WEAK_FUNC(sub_83139A00);
PPC_FUNC_IMPL(__imp__sub_83139A00) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1784
	ctx.r4.s64 = ctx.r11.s64 + 1784;
	// bl 0x82429b48
	ctx.lr = 0x83139A1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3180(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3180, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139A38"))) PPC_WEAK_FUNC(sub_83139A38);
PPC_FUNC_IMPL(__imp__sub_83139A38) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1788
	ctx.r4.s64 = ctx.r11.s64 + 1788;
	// bl 0x82429b48
	ctx.lr = 0x83139A54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-601(r11)
	PPC_STORE_U8(ctx.r11.u32 + -601, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139A70"))) PPC_WEAK_FUNC(sub_83139A70);
PPC_FUNC_IMPL(__imp__sub_83139A70) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1792
	ctx.r4.s64 = ctx.r11.s64 + 1792;
	// bl 0x82429b48
	ctx.lr = 0x83139A8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3410(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3410, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139AA8"))) PPC_WEAK_FUNC(sub_83139AA8);
PPC_FUNC_IMPL(__imp__sub_83139AA8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1796
	ctx.r4.s64 = ctx.r11.s64 + 1796;
	// bl 0x82429b48
	ctx.lr = 0x83139AC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3675(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3675, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

