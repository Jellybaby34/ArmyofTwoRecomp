#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83104F28"))) PPC_WEAK_FUNC(sub_83104F28);
PPC_FUNC_IMPL(__imp__sub_83104F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29724
	ctx.r4.s64 = ctx.r11.s64 + 29724;
	// bl 0x82429b48
	ctx.lr = 0x83104F44;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83104F60"))) PPC_WEAK_FUNC(sub_83104F60);
PPC_FUNC_IMPL(__imp__sub_83104F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29728
	ctx.r4.s64 = ctx.r11.s64 + 29728;
	// bl 0x82429b48
	ctx.lr = 0x83104F7C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5091(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5091, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104F98"))) PPC_WEAK_FUNC(sub_83104F98);
PPC_FUNC_IMPL(__imp__sub_83104F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29732
	ctx.r4.s64 = ctx.r11.s64 + 29732;
	// bl 0x82429b48
	ctx.lr = 0x83104FB4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1950(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1950, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104FD0"))) PPC_WEAK_FUNC(sub_83104FD0);
PPC_FUNC_IMPL(__imp__sub_83104FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29736
	ctx.r4.s64 = ctx.r11.s64 + 29736;
	// bl 0x82429b48
	ctx.lr = 0x83104FEC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4171(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4171, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105008"))) PPC_WEAK_FUNC(sub_83105008);
PPC_FUNC_IMPL(__imp__sub_83105008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29740
	ctx.r4.s64 = ctx.r11.s64 + 29740;
	// bl 0x82429b48
	ctx.lr = 0x83105024;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2599(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2599, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105040"))) PPC_WEAK_FUNC(sub_83105040);
PPC_FUNC_IMPL(__imp__sub_83105040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29744
	ctx.r4.s64 = ctx.r11.s64 + 29744;
	// bl 0x82429b48
	ctx.lr = 0x8310505C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4350(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4350, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105078"))) PPC_WEAK_FUNC(sub_83105078);
PPC_FUNC_IMPL(__imp__sub_83105078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29748
	ctx.r4.s64 = ctx.r11.s64 + 29748;
	// bl 0x82429b48
	ctx.lr = 0x83105094;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1144(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1144, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831050B0"))) PPC_WEAK_FUNC(sub_831050B0);
PPC_FUNC_IMPL(__imp__sub_831050B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29752
	ctx.r4.s64 = ctx.r11.s64 + 29752;
	// bl 0x82429b48
	ctx.lr = 0x831050CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2728(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2728, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831050E8"))) PPC_WEAK_FUNC(sub_831050E8);
PPC_FUNC_IMPL(__imp__sub_831050E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29756
	ctx.r4.s64 = ctx.r11.s64 + 29756;
	// bl 0x82429b48
	ctx.lr = 0x83105104;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5072(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5072, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105120"))) PPC_WEAK_FUNC(sub_83105120);
PPC_FUNC_IMPL(__imp__sub_83105120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29760
	ctx.r4.s64 = ctx.r11.s64 + 29760;
	// bl 0x82429b48
	ctx.lr = 0x8310513C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4499(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4499, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105158"))) PPC_WEAK_FUNC(sub_83105158);
PPC_FUNC_IMPL(__imp__sub_83105158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29764
	ctx.r4.s64 = ctx.r11.s64 + 29764;
	// bl 0x82429b48
	ctx.lr = 0x83105174;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2526(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2526, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105190"))) PPC_WEAK_FUNC(sub_83105190);
PPC_FUNC_IMPL(__imp__sub_83105190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29768
	ctx.r4.s64 = ctx.r11.s64 + 29768;
	// bl 0x82429b48
	ctx.lr = 0x831051AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-91(r11)
	PPC_STORE_U8(ctx.r11.u32 + -91, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831051C8"))) PPC_WEAK_FUNC(sub_831051C8);
PPC_FUNC_IMPL(__imp__sub_831051C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29772
	ctx.r4.s64 = ctx.r11.s64 + 29772;
	// bl 0x82429b48
	ctx.lr = 0x831051E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2027(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2027, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105200"))) PPC_WEAK_FUNC(sub_83105200);
PPC_FUNC_IMPL(__imp__sub_83105200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29776
	ctx.r4.s64 = ctx.r11.s64 + 29776;
	// bl 0x82429b48
	ctx.lr = 0x8310521C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2596(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2596, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105238"))) PPC_WEAK_FUNC(sub_83105238);
PPC_FUNC_IMPL(__imp__sub_83105238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29780
	ctx.r4.s64 = ctx.r11.s64 + 29780;
	// bl 0x82429b48
	ctx.lr = 0x83105254;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3671(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3671, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105270"))) PPC_WEAK_FUNC(sub_83105270);
PPC_FUNC_IMPL(__imp__sub_83105270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// bl 0x82429b48
	ctx.lr = 0x8310528C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1412(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1412, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831052A8"))) PPC_WEAK_FUNC(sub_831052A8);
PPC_FUNC_IMPL(__imp__sub_831052A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29788
	ctx.r4.s64 = ctx.r11.s64 + 29788;
	// bl 0x82429b48
	ctx.lr = 0x831052C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1865(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1865, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831052E0"))) PPC_WEAK_FUNC(sub_831052E0);
PPC_FUNC_IMPL(__imp__sub_831052E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29792
	ctx.r4.s64 = ctx.r11.s64 + 29792;
	// bl 0x82429b48
	ctx.lr = 0x831052FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4713(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4713, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105318"))) PPC_WEAK_FUNC(sub_83105318);
PPC_FUNC_IMPL(__imp__sub_83105318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29796
	ctx.r4.s64 = ctx.r11.s64 + 29796;
	// bl 0x82429b48
	ctx.lr = 0x83105334;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3620(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3620, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105350"))) PPC_WEAK_FUNC(sub_83105350);
PPC_FUNC_IMPL(__imp__sub_83105350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29800
	ctx.r4.s64 = ctx.r11.s64 + 29800;
	// bl 0x82429b48
	ctx.lr = 0x8310536C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2024(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2024, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105388"))) PPC_WEAK_FUNC(sub_83105388);
PPC_FUNC_IMPL(__imp__sub_83105388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29804
	ctx.r4.s64 = ctx.r11.s64 + 29804;
	// bl 0x82429b48
	ctx.lr = 0x831053A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2514(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2514, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831053C0"))) PPC_WEAK_FUNC(sub_831053C0);
PPC_FUNC_IMPL(__imp__sub_831053C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29808
	ctx.r4.s64 = ctx.r11.s64 + 29808;
	// bl 0x82429b48
	ctx.lr = 0x831053DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,107(r11)
	PPC_STORE_U8(ctx.r11.u32 + 107, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831053F8"))) PPC_WEAK_FUNC(sub_831053F8);
PPC_FUNC_IMPL(__imp__sub_831053F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29812
	ctx.r4.s64 = ctx.r11.s64 + 29812;
	// bl 0x82429b48
	ctx.lr = 0x83105414;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2032(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2032, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105430"))) PPC_WEAK_FUNC(sub_83105430);
PPC_FUNC_IMPL(__imp__sub_83105430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29816
	ctx.r4.s64 = ctx.r11.s64 + 29816;
	// bl 0x82429b48
	ctx.lr = 0x8310544C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,477(r11)
	PPC_STORE_U8(ctx.r11.u32 + 477, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105468"))) PPC_WEAK_FUNC(sub_83105468);
PPC_FUNC_IMPL(__imp__sub_83105468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29820
	ctx.r4.s64 = ctx.r11.s64 + 29820;
	// bl 0x82429b48
	ctx.lr = 0x83105484;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,350(r11)
	PPC_STORE_U8(ctx.r11.u32 + 350, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831054A0"))) PPC_WEAK_FUNC(sub_831054A0);
PPC_FUNC_IMPL(__imp__sub_831054A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29824
	ctx.r4.s64 = ctx.r11.s64 + 29824;
	// bl 0x82429b48
	ctx.lr = 0x831054BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4335(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4335, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831054D8"))) PPC_WEAK_FUNC(sub_831054D8);
PPC_FUNC_IMPL(__imp__sub_831054D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29828
	ctx.r4.s64 = ctx.r11.s64 + 29828;
	// bl 0x82429b48
	ctx.lr = 0x831054F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4533(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4533, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105510"))) PPC_WEAK_FUNC(sub_83105510);
PPC_FUNC_IMPL(__imp__sub_83105510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29832
	ctx.r4.s64 = ctx.r11.s64 + 29832;
	// bl 0x82429b48
	ctx.lr = 0x8310552C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3232(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3232, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105548"))) PPC_WEAK_FUNC(sub_83105548);
PPC_FUNC_IMPL(__imp__sub_83105548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29836
	ctx.r4.s64 = ctx.r11.s64 + 29836;
	// bl 0x82429b48
	ctx.lr = 0x83105564;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2780(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2780, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105580"))) PPC_WEAK_FUNC(sub_83105580);
PPC_FUNC_IMPL(__imp__sub_83105580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29840
	ctx.r4.s64 = ctx.r11.s64 + 29840;
	// bl 0x82429b48
	ctx.lr = 0x8310559C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3242(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3242, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831055B8"))) PPC_WEAK_FUNC(sub_831055B8);
PPC_FUNC_IMPL(__imp__sub_831055B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29844
	ctx.r4.s64 = ctx.r11.s64 + 29844;
	// bl 0x82429b48
	ctx.lr = 0x831055D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1553(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1553, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831055F0"))) PPC_WEAK_FUNC(sub_831055F0);
PPC_FUNC_IMPL(__imp__sub_831055F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29848
	ctx.r4.s64 = ctx.r11.s64 + 29848;
	// bl 0x82429b48
	ctx.lr = 0x8310560C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,79(r11)
	PPC_STORE_U8(ctx.r11.u32 + 79, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105628"))) PPC_WEAK_FUNC(sub_83105628);
PPC_FUNC_IMPL(__imp__sub_83105628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29852
	ctx.r4.s64 = ctx.r11.s64 + 29852;
	// bl 0x82429b48
	ctx.lr = 0x83105644;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4931(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4931, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105660"))) PPC_WEAK_FUNC(sub_83105660);
PPC_FUNC_IMPL(__imp__sub_83105660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29856
	ctx.r4.s64 = ctx.r11.s64 + 29856;
	// bl 0x82429b48
	ctx.lr = 0x8310567C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2191(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2191, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105698"))) PPC_WEAK_FUNC(sub_83105698);
PPC_FUNC_IMPL(__imp__sub_83105698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29860
	ctx.r4.s64 = ctx.r11.s64 + 29860;
	// bl 0x82429b48
	ctx.lr = 0x831056B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,425(r11)
	PPC_STORE_U8(ctx.r11.u32 + 425, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831056D0"))) PPC_WEAK_FUNC(sub_831056D0);
PPC_FUNC_IMPL(__imp__sub_831056D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29864
	ctx.r4.s64 = ctx.r11.s64 + 29864;
	// bl 0x82429b48
	ctx.lr = 0x831056EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3016(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3016, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105708"))) PPC_WEAK_FUNC(sub_83105708);
PPC_FUNC_IMPL(__imp__sub_83105708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29868
	ctx.r4.s64 = ctx.r11.s64 + 29868;
	// bl 0x82429b48
	ctx.lr = 0x83105724;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2535(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2535, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105740"))) PPC_WEAK_FUNC(sub_83105740);
PPC_FUNC_IMPL(__imp__sub_83105740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29872
	ctx.r4.s64 = ctx.r11.s64 + 29872;
	// bl 0x82429b48
	ctx.lr = 0x8310575C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3108, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105778"))) PPC_WEAK_FUNC(sub_83105778);
PPC_FUNC_IMPL(__imp__sub_83105778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29876
	ctx.r4.s64 = ctx.r11.s64 + 29876;
	// bl 0x82429b48
	ctx.lr = 0x83105794;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4486(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4486, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831057B0"))) PPC_WEAK_FUNC(sub_831057B0);
PPC_FUNC_IMPL(__imp__sub_831057B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29880
	ctx.r4.s64 = ctx.r11.s64 + 29880;
	// bl 0x82429b48
	ctx.lr = 0x831057CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4598(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4598, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831057E8"))) PPC_WEAK_FUNC(sub_831057E8);
PPC_FUNC_IMPL(__imp__sub_831057E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29884
	ctx.r4.s64 = ctx.r11.s64 + 29884;
	// bl 0x82429b48
	ctx.lr = 0x83105804;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3374(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3374, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105820"))) PPC_WEAK_FUNC(sub_83105820);
PPC_FUNC_IMPL(__imp__sub_83105820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29888
	ctx.r4.s64 = ctx.r11.s64 + 29888;
	// bl 0x82429b48
	ctx.lr = 0x8310583C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83105858"))) PPC_WEAK_FUNC(sub_83105858);
PPC_FUNC_IMPL(__imp__sub_83105858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29892
	ctx.r4.s64 = ctx.r11.s64 + 29892;
	// bl 0x82429b48
	ctx.lr = 0x83105874;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3233, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105890"))) PPC_WEAK_FUNC(sub_83105890);
PPC_FUNC_IMPL(__imp__sub_83105890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29896
	ctx.r4.s64 = ctx.r11.s64 + 29896;
	// bl 0x82429b48
	ctx.lr = 0x831058AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,214(r11)
	PPC_STORE_U8(ctx.r11.u32 + 214, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831058C8"))) PPC_WEAK_FUNC(sub_831058C8);
PPC_FUNC_IMPL(__imp__sub_831058C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29900
	ctx.r4.s64 = ctx.r11.s64 + 29900;
	// bl 0x82429b48
	ctx.lr = 0x831058E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,552(r11)
	PPC_STORE_U8(ctx.r11.u32 + 552, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105900"))) PPC_WEAK_FUNC(sub_83105900);
PPC_FUNC_IMPL(__imp__sub_83105900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29904
	ctx.r4.s64 = ctx.r11.s64 + 29904;
	// bl 0x82429b48
	ctx.lr = 0x8310591C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,186(r11)
	PPC_STORE_U8(ctx.r11.u32 + 186, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105938"))) PPC_WEAK_FUNC(sub_83105938);
PPC_FUNC_IMPL(__imp__sub_83105938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29908
	ctx.r4.s64 = ctx.r11.s64 + 29908;
	// bl 0x82429b48
	ctx.lr = 0x83105954;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4055(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4055, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105970"))) PPC_WEAK_FUNC(sub_83105970);
PPC_FUNC_IMPL(__imp__sub_83105970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29912
	ctx.r4.s64 = ctx.r11.s64 + 29912;
	// bl 0x82429b48
	ctx.lr = 0x8310598C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1936(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1936, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831059A8"))) PPC_WEAK_FUNC(sub_831059A8);
PPC_FUNC_IMPL(__imp__sub_831059A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29916
	ctx.r4.s64 = ctx.r11.s64 + 29916;
	// bl 0x82429b48
	ctx.lr = 0x831059C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3372(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3372, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831059E0"))) PPC_WEAK_FUNC(sub_831059E0);
PPC_FUNC_IMPL(__imp__sub_831059E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29920
	ctx.r4.s64 = ctx.r11.s64 + 29920;
	// bl 0x82429b48
	ctx.lr = 0x831059FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4577(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4577, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105A18"))) PPC_WEAK_FUNC(sub_83105A18);
PPC_FUNC_IMPL(__imp__sub_83105A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29924
	ctx.r4.s64 = ctx.r11.s64 + 29924;
	// bl 0x82429b48
	ctx.lr = 0x83105A34;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2909(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2909, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105A50"))) PPC_WEAK_FUNC(sub_83105A50);
PPC_FUNC_IMPL(__imp__sub_83105A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29928
	ctx.r4.s64 = ctx.r11.s64 + 29928;
	// bl 0x82429b48
	ctx.lr = 0x83105A6C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4868(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4868, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105A88"))) PPC_WEAK_FUNC(sub_83105A88);
PPC_FUNC_IMPL(__imp__sub_83105A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29932
	ctx.r4.s64 = ctx.r11.s64 + 29932;
	// bl 0x82429b48
	ctx.lr = 0x83105AA4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4795(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4795, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105AC0"))) PPC_WEAK_FUNC(sub_83105AC0);
PPC_FUNC_IMPL(__imp__sub_83105AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29936
	ctx.r4.s64 = ctx.r11.s64 + 29936;
	// bl 0x82429b48
	ctx.lr = 0x83105ADC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,287(r11)
	PPC_STORE_U8(ctx.r11.u32 + 287, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105AF8"))) PPC_WEAK_FUNC(sub_83105AF8);
PPC_FUNC_IMPL(__imp__sub_83105AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29940
	ctx.r4.s64 = ctx.r11.s64 + 29940;
	// bl 0x82429b48
	ctx.lr = 0x83105B14;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,654(r11)
	PPC_STORE_U8(ctx.r11.u32 + 654, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105B30"))) PPC_WEAK_FUNC(sub_83105B30);
PPC_FUNC_IMPL(__imp__sub_83105B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29944
	ctx.r4.s64 = ctx.r11.s64 + 29944;
	// bl 0x82429b48
	ctx.lr = 0x83105B4C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3096(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3096, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105B68"))) PPC_WEAK_FUNC(sub_83105B68);
PPC_FUNC_IMPL(__imp__sub_83105B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29948
	ctx.r4.s64 = ctx.r11.s64 + 29948;
	// bl 0x82429b48
	ctx.lr = 0x83105B84;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2553(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2553, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105BA0"))) PPC_WEAK_FUNC(sub_83105BA0);
PPC_FUNC_IMPL(__imp__sub_83105BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29952
	ctx.r4.s64 = ctx.r11.s64 + 29952;
	// bl 0x82429b48
	ctx.lr = 0x83105BBC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105BD8"))) PPC_WEAK_FUNC(sub_83105BD8);
PPC_FUNC_IMPL(__imp__sub_83105BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29956
	ctx.r4.s64 = ctx.r11.s64 + 29956;
	// bl 0x82429b48
	ctx.lr = 0x83105BF4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1413(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1413, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105C10"))) PPC_WEAK_FUNC(sub_83105C10);
PPC_FUNC_IMPL(__imp__sub_83105C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29960
	ctx.r4.s64 = ctx.r11.s64 + 29960;
	// bl 0x82429b48
	ctx.lr = 0x83105C2C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1951(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1951, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105C48"))) PPC_WEAK_FUNC(sub_83105C48);
PPC_FUNC_IMPL(__imp__sub_83105C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29964
	ctx.r4.s64 = ctx.r11.s64 + 29964;
	// bl 0x82429b48
	ctx.lr = 0x83105C64;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2235(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2235, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105C80"))) PPC_WEAK_FUNC(sub_83105C80);
PPC_FUNC_IMPL(__imp__sub_83105C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29968
	ctx.r4.s64 = ctx.r11.s64 + 29968;
	// bl 0x82429b48
	ctx.lr = 0x83105C9C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,994(r11)
	PPC_STORE_U8(ctx.r11.u32 + 994, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105CB8"))) PPC_WEAK_FUNC(sub_83105CB8);
PPC_FUNC_IMPL(__imp__sub_83105CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29972
	ctx.r4.s64 = ctx.r11.s64 + 29972;
	// bl 0x82429b48
	ctx.lr = 0x83105CD4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1442(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1442, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105CF0"))) PPC_WEAK_FUNC(sub_83105CF0);
PPC_FUNC_IMPL(__imp__sub_83105CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29976
	ctx.r4.s64 = ctx.r11.s64 + 29976;
	// bl 0x82429b48
	ctx.lr = 0x83105D0C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2188(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2188, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105D28"))) PPC_WEAK_FUNC(sub_83105D28);
PPC_FUNC_IMPL(__imp__sub_83105D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29980
	ctx.r4.s64 = ctx.r11.s64 + 29980;
	// bl 0x82429b48
	ctx.lr = 0x83105D44;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4940(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4940, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105D60"))) PPC_WEAK_FUNC(sub_83105D60);
PPC_FUNC_IMPL(__imp__sub_83105D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29984
	ctx.r4.s64 = ctx.r11.s64 + 29984;
	// bl 0x82429b48
	ctx.lr = 0x83105D7C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2430(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2430, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105D98"))) PPC_WEAK_FUNC(sub_83105D98);
PPC_FUNC_IMPL(__imp__sub_83105D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29988
	ctx.r4.s64 = ctx.r11.s64 + 29988;
	// bl 0x82429b48
	ctx.lr = 0x83105DB4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,438(r11)
	PPC_STORE_U8(ctx.r11.u32 + 438, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105DD0"))) PPC_WEAK_FUNC(sub_83105DD0);
PPC_FUNC_IMPL(__imp__sub_83105DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29992
	ctx.r4.s64 = ctx.r11.s64 + 29992;
	// bl 0x82429b48
	ctx.lr = 0x83105DEC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 184, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105E08"))) PPC_WEAK_FUNC(sub_83105E08);
PPC_FUNC_IMPL(__imp__sub_83105E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29996
	ctx.r4.s64 = ctx.r11.s64 + 29996;
	// bl 0x82429b48
	ctx.lr = 0x83105E24;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3851(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3851, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105E40"))) PPC_WEAK_FUNC(sub_83105E40);
PPC_FUNC_IMPL(__imp__sub_83105E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30000
	ctx.r4.s64 = ctx.r11.s64 + 30000;
	// bl 0x82429b48
	ctx.lr = 0x83105E5C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2816(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2816, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105E78"))) PPC_WEAK_FUNC(sub_83105E78);
PPC_FUNC_IMPL(__imp__sub_83105E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30004
	ctx.r4.s64 = ctx.r11.s64 + 30004;
	// bl 0x82429b48
	ctx.lr = 0x83105E94;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4619(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4619, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105EB0"))) PPC_WEAK_FUNC(sub_83105EB0);
PPC_FUNC_IMPL(__imp__sub_83105EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// bl 0x82429b48
	ctx.lr = 0x83105ECC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,995(r11)
	PPC_STORE_U8(ctx.r11.u32 + 995, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105EE8"))) PPC_WEAK_FUNC(sub_83105EE8);
PPC_FUNC_IMPL(__imp__sub_83105EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30012
	ctx.r4.s64 = ctx.r11.s64 + 30012;
	// bl 0x82429b48
	ctx.lr = 0x83105F04;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4351(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4351, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105F20"))) PPC_WEAK_FUNC(sub_83105F20);
PPC_FUNC_IMPL(__imp__sub_83105F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30016
	ctx.r4.s64 = ctx.r11.s64 + 30016;
	// bl 0x82429b48
	ctx.lr = 0x83105F3C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3904(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3904, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105F58"))) PPC_WEAK_FUNC(sub_83105F58);
PPC_FUNC_IMPL(__imp__sub_83105F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30020
	ctx.r4.s64 = ctx.r11.s64 + 30020;
	// bl 0x82429b48
	ctx.lr = 0x83105F74;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1937(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1937, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105F90"))) PPC_WEAK_FUNC(sub_83105F90);
PPC_FUNC_IMPL(__imp__sub_83105F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30024
	ctx.r4.s64 = ctx.r11.s64 + 30024;
	// bl 0x82429b48
	ctx.lr = 0x83105FAC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4892(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4892, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83105FC8"))) PPC_WEAK_FUNC(sub_83105FC8);
PPC_FUNC_IMPL(__imp__sub_83105FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30028
	ctx.r4.s64 = ctx.r11.s64 + 30028;
	// bl 0x82429b48
	ctx.lr = 0x83105FE4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2411(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2411, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106000"))) PPC_WEAK_FUNC(sub_83106000);
PPC_FUNC_IMPL(__imp__sub_83106000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30032
	ctx.r4.s64 = ctx.r11.s64 + 30032;
	// bl 0x82429b48
	ctx.lr = 0x8310601C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3691(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3691, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106038"))) PPC_WEAK_FUNC(sub_83106038);
PPC_FUNC_IMPL(__imp__sub_83106038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30036
	ctx.r4.s64 = ctx.r11.s64 + 30036;
	// bl 0x82429b48
	ctx.lr = 0x83106054;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4943(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4943, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106070"))) PPC_WEAK_FUNC(sub_83106070);
PPC_FUNC_IMPL(__imp__sub_83106070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30040
	ctx.r4.s64 = ctx.r11.s64 + 30040;
	// bl 0x82429b48
	ctx.lr = 0x8310608C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_831060A8"))) PPC_WEAK_FUNC(sub_831060A8);
PPC_FUNC_IMPL(__imp__sub_831060A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30044
	ctx.r4.s64 = ctx.r11.s64 + 30044;
	// bl 0x82429b48
	ctx.lr = 0x831060C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5047(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5047, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831060E0"))) PPC_WEAK_FUNC(sub_831060E0);
PPC_FUNC_IMPL(__imp__sub_831060E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30048
	ctx.r4.s64 = ctx.r11.s64 + 30048;
	// bl 0x82429b48
	ctx.lr = 0x831060FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3905(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3905, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106118"))) PPC_WEAK_FUNC(sub_83106118);
PPC_FUNC_IMPL(__imp__sub_83106118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30052
	ctx.r4.s64 = ctx.r11.s64 + 30052;
	// bl 0x82429b48
	ctx.lr = 0x83106134;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4656(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4656, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106150"))) PPC_WEAK_FUNC(sub_83106150);
PPC_FUNC_IMPL(__imp__sub_83106150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30056
	ctx.r4.s64 = ctx.r11.s64 + 30056;
	// bl 0x82429b48
	ctx.lr = 0x8310616C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2781(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2781, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106188"))) PPC_WEAK_FUNC(sub_83106188);
PPC_FUNC_IMPL(__imp__sub_83106188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30060
	ctx.r4.s64 = ctx.r11.s64 + 30060;
	// bl 0x82429b48
	ctx.lr = 0x831061A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4096(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4096, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831061C0"))) PPC_WEAK_FUNC(sub_831061C0);
PPC_FUNC_IMPL(__imp__sub_831061C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30064
	ctx.r4.s64 = ctx.r11.s64 + 30064;
	// bl 0x82429b48
	ctx.lr = 0x831061DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1090(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1090, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831061F8"))) PPC_WEAK_FUNC(sub_831061F8);
PPC_FUNC_IMPL(__imp__sub_831061F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30068
	ctx.r4.s64 = ctx.r11.s64 + 30068;
	// bl 0x82429b48
	ctx.lr = 0x83106214;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3848(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3848, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106230"))) PPC_WEAK_FUNC(sub_83106230);
PPC_FUNC_IMPL(__imp__sub_83106230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30072
	ctx.r4.s64 = ctx.r11.s64 + 30072;
	// bl 0x82429b48
	ctx.lr = 0x8310624C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,281(r11)
	PPC_STORE_U8(ctx.r11.u32 + 281, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106268"))) PPC_WEAK_FUNC(sub_83106268);
PPC_FUNC_IMPL(__imp__sub_83106268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30076
	ctx.r4.s64 = ctx.r11.s64 + 30076;
	// bl 0x82429b48
	ctx.lr = 0x83106284;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,268(r11)
	PPC_STORE_U8(ctx.r11.u32 + 268, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831062A0"))) PPC_WEAK_FUNC(sub_831062A0);
PPC_FUNC_IMPL(__imp__sub_831062A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30080
	ctx.r4.s64 = ctx.r11.s64 + 30080;
	// bl 0x82429b48
	ctx.lr = 0x831062BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2075(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2075, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831062D8"))) PPC_WEAK_FUNC(sub_831062D8);
PPC_FUNC_IMPL(__imp__sub_831062D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30084
	ctx.r4.s64 = ctx.r11.s64 + 30084;
	// bl 0x82429b48
	ctx.lr = 0x831062F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4534(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4534, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106310"))) PPC_WEAK_FUNC(sub_83106310);
PPC_FUNC_IMPL(__imp__sub_83106310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30088
	ctx.r4.s64 = ctx.r11.s64 + 30088;
	// bl 0x82429b48
	ctx.lr = 0x8310632C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4869(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4869, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106348"))) PPC_WEAK_FUNC(sub_83106348);
PPC_FUNC_IMPL(__imp__sub_83106348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30092
	ctx.r4.s64 = ctx.r11.s64 + 30092;
	// bl 0x82429b48
	ctx.lr = 0x83106364;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4312(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4312, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106380"))) PPC_WEAK_FUNC(sub_83106380);
PPC_FUNC_IMPL(__imp__sub_83106380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30096
	ctx.r4.s64 = ctx.r11.s64 + 30096;
	// bl 0x82429b48
	ctx.lr = 0x8310639C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1307(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1307, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831063B8"))) PPC_WEAK_FUNC(sub_831063B8);
PPC_FUNC_IMPL(__imp__sub_831063B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30100
	ctx.r4.s64 = ctx.r11.s64 + 30100;
	// bl 0x82429b48
	ctx.lr = 0x831063D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4390(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4390, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831063F0"))) PPC_WEAK_FUNC(sub_831063F0);
PPC_FUNC_IMPL(__imp__sub_831063F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30104
	ctx.r4.s64 = ctx.r11.s64 + 30104;
	// bl 0x82429b48
	ctx.lr = 0x8310640C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,280(r11)
	PPC_STORE_U8(ctx.r11.u32 + 280, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106428"))) PPC_WEAK_FUNC(sub_83106428);
PPC_FUNC_IMPL(__imp__sub_83106428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30108
	ctx.r4.s64 = ctx.r11.s64 + 30108;
	// bl 0x82429b48
	ctx.lr = 0x83106444;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,490(r11)
	PPC_STORE_U8(ctx.r11.u32 + 490, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106460"))) PPC_WEAK_FUNC(sub_83106460);
PPC_FUNC_IMPL(__imp__sub_83106460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30112
	ctx.r4.s64 = ctx.r11.s64 + 30112;
	// bl 0x82429b48
	ctx.lr = 0x8310647C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3907(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3907, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106498"))) PPC_WEAK_FUNC(sub_83106498);
PPC_FUNC_IMPL(__imp__sub_83106498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30116
	ctx.r4.s64 = ctx.r11.s64 + 30116;
	// bl 0x82429b48
	ctx.lr = 0x831064B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831064D0"))) PPC_WEAK_FUNC(sub_831064D0);
PPC_FUNC_IMPL(__imp__sub_831064D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30120
	ctx.r4.s64 = ctx.r11.s64 + 30120;
	// bl 0x82429b48
	ctx.lr = 0x831064EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3018(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3018, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106508"))) PPC_WEAK_FUNC(sub_83106508);
PPC_FUNC_IMPL(__imp__sub_83106508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30124
	ctx.r4.s64 = ctx.r11.s64 + 30124;
	// bl 0x82429b48
	ctx.lr = 0x83106524;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1704(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1704, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106540"))) PPC_WEAK_FUNC(sub_83106540);
PPC_FUNC_IMPL(__imp__sub_83106540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30128
	ctx.r4.s64 = ctx.r11.s64 + 30128;
	// bl 0x82429b48
	ctx.lr = 0x8310655C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,940(r11)
	PPC_STORE_U8(ctx.r11.u32 + 940, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106578"))) PPC_WEAK_FUNC(sub_83106578);
PPC_FUNC_IMPL(__imp__sub_83106578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30132
	ctx.r4.s64 = ctx.r11.s64 + 30132;
	// bl 0x82429b48
	ctx.lr = 0x83106594;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4925(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4925, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831065B0"))) PPC_WEAK_FUNC(sub_831065B0);
PPC_FUNC_IMPL(__imp__sub_831065B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30136
	ctx.r4.s64 = ctx.r11.s64 + 30136;
	// bl 0x82429b48
	ctx.lr = 0x831065CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3098(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3098, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831065E8"))) PPC_WEAK_FUNC(sub_831065E8);
PPC_FUNC_IMPL(__imp__sub_831065E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30140
	ctx.r4.s64 = ctx.r11.s64 + 30140;
	// bl 0x82429b48
	ctx.lr = 0x83106604;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2656(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2656, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106620"))) PPC_WEAK_FUNC(sub_83106620);
PPC_FUNC_IMPL(__imp__sub_83106620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30144
	ctx.r4.s64 = ctx.r11.s64 + 30144;
	// bl 0x82429b48
	ctx.lr = 0x8310663C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3754(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3754, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106658"))) PPC_WEAK_FUNC(sub_83106658);
PPC_FUNC_IMPL(__imp__sub_83106658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30148
	ctx.r4.s64 = ctx.r11.s64 + 30148;
	// bl 0x82429b48
	ctx.lr = 0x83106674;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2857(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2857, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106690"))) PPC_WEAK_FUNC(sub_83106690);
PPC_FUNC_IMPL(__imp__sub_83106690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30152
	ctx.r4.s64 = ctx.r11.s64 + 30152;
	// bl 0x82429b48
	ctx.lr = 0x831066AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1706(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1706, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831066C8"))) PPC_WEAK_FUNC(sub_831066C8);
PPC_FUNC_IMPL(__imp__sub_831066C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30156
	ctx.r4.s64 = ctx.r11.s64 + 30156;
	// bl 0x82429b48
	ctx.lr = 0x831066E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2501(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2501, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106700"))) PPC_WEAK_FUNC(sub_83106700);
PPC_FUNC_IMPL(__imp__sub_83106700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30160
	ctx.r4.s64 = ctx.r11.s64 + 30160;
	// bl 0x82429b48
	ctx.lr = 0x8310671C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3022(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3022, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106738"))) PPC_WEAK_FUNC(sub_83106738);
PPC_FUNC_IMPL(__imp__sub_83106738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30164
	ctx.r4.s64 = ctx.r11.s64 + 30164;
	// bl 0x82429b48
	ctx.lr = 0x83106754;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2074(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2074, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106770"))) PPC_WEAK_FUNC(sub_83106770);
PPC_FUNC_IMPL(__imp__sub_83106770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30168
	ctx.r4.s64 = ctx.r11.s64 + 30168;
	// bl 0x82429b48
	ctx.lr = 0x8310678C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831067A8"))) PPC_WEAK_FUNC(sub_831067A8);
PPC_FUNC_IMPL(__imp__sub_831067A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30172
	ctx.r4.s64 = ctx.r11.s64 + 30172;
	// bl 0x82429b48
	ctx.lr = 0x831067C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4535(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4535, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831067E0"))) PPC_WEAK_FUNC(sub_831067E0);
PPC_FUNC_IMPL(__imp__sub_831067E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30176
	ctx.r4.s64 = ctx.r11.s64 + 30176;
	// bl 0x82429b48
	ctx.lr = 0x831067FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,351(r11)
	PPC_STORE_U8(ctx.r11.u32 + 351, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106818"))) PPC_WEAK_FUNC(sub_83106818);
PPC_FUNC_IMPL(__imp__sub_83106818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30180
	ctx.r4.s64 = ctx.r11.s64 + 30180;
	// bl 0x82429b48
	ctx.lr = 0x83106834;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83106850"))) PPC_WEAK_FUNC(sub_83106850);
PPC_FUNC_IMPL(__imp__sub_83106850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30184
	ctx.r4.s64 = ctx.r11.s64 + 30184;
	// bl 0x82429b48
	ctx.lr = 0x8310686C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,465(r11)
	PPC_STORE_U8(ctx.r11.u32 + 465, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106888"))) PPC_WEAK_FUNC(sub_83106888);
PPC_FUNC_IMPL(__imp__sub_83106888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30188
	ctx.r4.s64 = ctx.r11.s64 + 30188;
	// bl 0x82429b48
	ctx.lr = 0x831068A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4599(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4599, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831068C0"))) PPC_WEAK_FUNC(sub_831068C0);
PPC_FUNC_IMPL(__imp__sub_831068C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30192
	ctx.r4.s64 = ctx.r11.s64 + 30192;
	// bl 0x82429b48
	ctx.lr = 0x831068DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1431(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1431, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831068F8"))) PPC_WEAK_FUNC(sub_831068F8);
PPC_FUNC_IMPL(__imp__sub_831068F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30196
	ctx.r4.s64 = ctx.r11.s64 + 30196;
	// bl 0x82429b48
	ctx.lr = 0x83106914;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,869(r11)
	PPC_STORE_U8(ctx.r11.u32 + 869, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106930"))) PPC_WEAK_FUNC(sub_83106930);
PPC_FUNC_IMPL(__imp__sub_83106930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30200
	ctx.r4.s64 = ctx.r11.s64 + 30200;
	// bl 0x82429b48
	ctx.lr = 0x8310694C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,476(r11)
	PPC_STORE_U8(ctx.r11.u32 + 476, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106968"))) PPC_WEAK_FUNC(sub_83106968);
PPC_FUNC_IMPL(__imp__sub_83106968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30204
	ctx.r4.s64 = ctx.r11.s64 + 30204;
	// bl 0x82429b48
	ctx.lr = 0x83106984;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_831069A0"))) PPC_WEAK_FUNC(sub_831069A0);
PPC_FUNC_IMPL(__imp__sub_831069A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30208
	ctx.r4.s64 = ctx.r11.s64 + 30208;
	// bl 0x82429b48
	ctx.lr = 0x831069BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,387(r11)
	PPC_STORE_U8(ctx.r11.u32 + 387, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831069D8"))) PPC_WEAK_FUNC(sub_831069D8);
PPC_FUNC_IMPL(__imp__sub_831069D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30212
	ctx.r4.s64 = ctx.r11.s64 + 30212;
	// bl 0x82429b48
	ctx.lr = 0x831069F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1540(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1540, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106A10"))) PPC_WEAK_FUNC(sub_83106A10);
PPC_FUNC_IMPL(__imp__sub_83106A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30216
	ctx.r4.s64 = ctx.r11.s64 + 30216;
	// bl 0x82429b48
	ctx.lr = 0x83106A2C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4798(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4798, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106A48"))) PPC_WEAK_FUNC(sub_83106A48);
PPC_FUNC_IMPL(__imp__sub_83106A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30220
	ctx.r4.s64 = ctx.r11.s64 + 30220;
	// bl 0x82429b48
	ctx.lr = 0x83106A64;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-158(r11)
	PPC_STORE_U8(ctx.r11.u32 + -158, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106A80"))) PPC_WEAK_FUNC(sub_83106A80);
PPC_FUNC_IMPL(__imp__sub_83106A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30224
	ctx.r4.s64 = ctx.r11.s64 + 30224;
	// bl 0x82429b48
	ctx.lr = 0x83106A9C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1212(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1212, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106AB8"))) PPC_WEAK_FUNC(sub_83106AB8);
PPC_FUNC_IMPL(__imp__sub_83106AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30228
	ctx.r4.s64 = ctx.r11.s64 + 30228;
	// bl 0x82429b48
	ctx.lr = 0x83106AD4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1827(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1827, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106AF0"))) PPC_WEAK_FUNC(sub_83106AF0);
PPC_FUNC_IMPL(__imp__sub_83106AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30232
	ctx.r4.s64 = ctx.r11.s64 + 30232;
	// bl 0x82429b48
	ctx.lr = 0x83106B0C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4926(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4926, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106B28"))) PPC_WEAK_FUNC(sub_83106B28);
PPC_FUNC_IMPL(__imp__sub_83106B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30236
	ctx.r4.s64 = ctx.r11.s64 + 30236;
	// bl 0x82429b48
	ctx.lr = 0x83106B44;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2671(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2671, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106B60"))) PPC_WEAK_FUNC(sub_83106B60);
PPC_FUNC_IMPL(__imp__sub_83106B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30240
	ctx.r4.s64 = ctx.r11.s64 + 30240;
	// bl 0x82429b48
	ctx.lr = 0x83106B7C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2647(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2647, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106B98"))) PPC_WEAK_FUNC(sub_83106B98);
PPC_FUNC_IMPL(__imp__sub_83106B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30244
	ctx.r4.s64 = ctx.r11.s64 + 30244;
	// bl 0x82429b48
	ctx.lr = 0x83106BB4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3701(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3701, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106BD0"))) PPC_WEAK_FUNC(sub_83106BD0);
PPC_FUNC_IMPL(__imp__sub_83106BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30248
	ctx.r4.s64 = ctx.r11.s64 + 30248;
	// bl 0x82429b48
	ctx.lr = 0x83106BEC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,283(r11)
	PPC_STORE_U8(ctx.r11.u32 + 283, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106C08"))) PPC_WEAK_FUNC(sub_83106C08);
PPC_FUNC_IMPL(__imp__sub_83106C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30252
	ctx.r4.s64 = ctx.r11.s64 + 30252;
	// bl 0x82429b48
	ctx.lr = 0x83106C24;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1414(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1414, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106C40"))) PPC_WEAK_FUNC(sub_83106C40);
PPC_FUNC_IMPL(__imp__sub_83106C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30256
	ctx.r4.s64 = ctx.r11.s64 + 30256;
	// bl 0x82429b48
	ctx.lr = 0x83106C5C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4250(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4250, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106C78"))) PPC_WEAK_FUNC(sub_83106C78);
PPC_FUNC_IMPL(__imp__sub_83106C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30260
	ctx.r4.s64 = ctx.r11.s64 + 30260;
	// bl 0x82429b48
	ctx.lr = 0x83106C94;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4458(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4458, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106CB0"))) PPC_WEAK_FUNC(sub_83106CB0);
PPC_FUNC_IMPL(__imp__sub_83106CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30264
	ctx.r4.s64 = ctx.r11.s64 + 30264;
	// bl 0x82429b48
	ctx.lr = 0x83106CCC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2529(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2529, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106CE8"))) PPC_WEAK_FUNC(sub_83106CE8);
PPC_FUNC_IMPL(__imp__sub_83106CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30268
	ctx.r4.s64 = ctx.r11.s64 + 30268;
	// bl 0x82429b48
	ctx.lr = 0x83106D04;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2244(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2244, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106D20"))) PPC_WEAK_FUNC(sub_83106D20);
PPC_FUNC_IMPL(__imp__sub_83106D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30272
	ctx.r4.s64 = ctx.r11.s64 + 30272;
	// bl 0x82429b48
	ctx.lr = 0x83106D3C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83106D58"))) PPC_WEAK_FUNC(sub_83106D58);
PPC_FUNC_IMPL(__imp__sub_83106D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30276
	ctx.r4.s64 = ctx.r11.s64 + 30276;
	// bl 0x82429b48
	ctx.lr = 0x83106D74;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2026(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2026, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106D90"))) PPC_WEAK_FUNC(sub_83106D90);
PPC_FUNC_IMPL(__imp__sub_83106D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30280
	ctx.r4.s64 = ctx.r11.s64 + 30280;
	// bl 0x82429b48
	ctx.lr = 0x83106DAC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2303(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2303, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106DC8"))) PPC_WEAK_FUNC(sub_83106DC8);
PPC_FUNC_IMPL(__imp__sub_83106DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30284
	ctx.r4.s64 = ctx.r11.s64 + 30284;
	// bl 0x82429b48
	ctx.lr = 0x83106DE4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,164(r11)
	PPC_STORE_U8(ctx.r11.u32 + 164, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106E00"))) PPC_WEAK_FUNC(sub_83106E00);
PPC_FUNC_IMPL(__imp__sub_83106E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30288
	ctx.r4.s64 = ctx.r11.s64 + 30288;
	// bl 0x82429b48
	ctx.lr = 0x83106E1C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4174(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4174, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106E38"))) PPC_WEAK_FUNC(sub_83106E38);
PPC_FUNC_IMPL(__imp__sub_83106E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30292
	ctx.r4.s64 = ctx.r11.s64 + 30292;
	// bl 0x82429b48
	ctx.lr = 0x83106E54;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4405(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4405, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106E70"))) PPC_WEAK_FUNC(sub_83106E70);
PPC_FUNC_IMPL(__imp__sub_83106E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30296
	ctx.r4.s64 = ctx.r11.s64 + 30296;
	// bl 0x82429b48
	ctx.lr = 0x83106E8C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1543(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1543, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106EA8"))) PPC_WEAK_FUNC(sub_83106EA8);
PPC_FUNC_IMPL(__imp__sub_83106EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30300
	ctx.r4.s64 = ctx.r11.s64 + 30300;
	// bl 0x82429b48
	ctx.lr = 0x83106EC4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3987(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3987, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106EE0"))) PPC_WEAK_FUNC(sub_83106EE0);
PPC_FUNC_IMPL(__imp__sub_83106EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30304
	ctx.r4.s64 = ctx.r11.s64 + 30304;
	// bl 0x82429b48
	ctx.lr = 0x83106EFC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5068(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5068, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106F18"))) PPC_WEAK_FUNC(sub_83106F18);
PPC_FUNC_IMPL(__imp__sub_83106F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30308
	ctx.r4.s64 = ctx.r11.s64 + 30308;
	// bl 0x82429b48
	ctx.lr = 0x83106F34;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83106F50"))) PPC_WEAK_FUNC(sub_83106F50);
PPC_FUNC_IMPL(__imp__sub_83106F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30312
	ctx.r4.s64 = ctx.r11.s64 + 30312;
	// bl 0x82429b48
	ctx.lr = 0x83106F6C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2751(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2751, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106F88"))) PPC_WEAK_FUNC(sub_83106F88);
PPC_FUNC_IMPL(__imp__sub_83106F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30316
	ctx.r4.s64 = ctx.r11.s64 + 30316;
	// bl 0x82429b48
	ctx.lr = 0x83106FA4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106FC0"))) PPC_WEAK_FUNC(sub_83106FC0);
PPC_FUNC_IMPL(__imp__sub_83106FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30320
	ctx.r4.s64 = ctx.r11.s64 + 30320;
	// bl 0x82429b48
	ctx.lr = 0x83106FDC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1281(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1281, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83106FF8"))) PPC_WEAK_FUNC(sub_83106FF8);
PPC_FUNC_IMPL(__imp__sub_83106FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30324
	ctx.r4.s64 = ctx.r11.s64 + 30324;
	// bl 0x82429b48
	ctx.lr = 0x83107014;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,188(r11)
	PPC_STORE_U8(ctx.r11.u32 + 188, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107030"))) PPC_WEAK_FUNC(sub_83107030);
PPC_FUNC_IMPL(__imp__sub_83107030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30328
	ctx.r4.s64 = ctx.r11.s64 + 30328;
	// bl 0x82429b48
	ctx.lr = 0x8310704C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,649(r11)
	PPC_STORE_U8(ctx.r11.u32 + 649, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107068"))) PPC_WEAK_FUNC(sub_83107068);
PPC_FUNC_IMPL(__imp__sub_83107068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30332
	ctx.r4.s64 = ctx.r11.s64 + 30332;
	// bl 0x82429b48
	ctx.lr = 0x83107084;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4258(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4258, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831070A0"))) PPC_WEAK_FUNC(sub_831070A0);
PPC_FUNC_IMPL(__imp__sub_831070A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30336
	ctx.r4.s64 = ctx.r11.s64 + 30336;
	// bl 0x82429b48
	ctx.lr = 0x831070BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1707(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1707, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831070D8"))) PPC_WEAK_FUNC(sub_831070D8);
PPC_FUNC_IMPL(__imp__sub_831070D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30340
	ctx.r4.s64 = ctx.r11.s64 + 30340;
	// bl 0x82429b48
	ctx.lr = 0x831070F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2271(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2271, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107110"))) PPC_WEAK_FUNC(sub_83107110);
PPC_FUNC_IMPL(__imp__sub_83107110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30344
	ctx.r4.s64 = ctx.r11.s64 + 30344;
	// bl 0x82429b48
	ctx.lr = 0x8310712C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83107148"))) PPC_WEAK_FUNC(sub_83107148);
PPC_FUNC_IMPL(__imp__sub_83107148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30348
	ctx.r4.s64 = ctx.r11.s64 + 30348;
	// bl 0x82429b48
	ctx.lr = 0x83107164;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2911(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2911, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107180"))) PPC_WEAK_FUNC(sub_83107180);
PPC_FUNC_IMPL(__imp__sub_83107180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30352
	ctx.r4.s64 = ctx.r11.s64 + 30352;
	// bl 0x82429b48
	ctx.lr = 0x8310719C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1614(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1614, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831071B8"))) PPC_WEAK_FUNC(sub_831071B8);
PPC_FUNC_IMPL(__imp__sub_831071B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30356
	ctx.r4.s64 = ctx.r11.s64 + 30356;
	// bl 0x82429b48
	ctx.lr = 0x831071D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3019(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3019, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831071F0"))) PPC_WEAK_FUNC(sub_831071F0);
PPC_FUNC_IMPL(__imp__sub_831071F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30360
	ctx.r4.s64 = ctx.r11.s64 + 30360;
	// bl 0x82429b48
	ctx.lr = 0x8310720C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1387(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1387, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107228"))) PPC_WEAK_FUNC(sub_83107228);
PPC_FUNC_IMPL(__imp__sub_83107228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30364
	ctx.r4.s64 = ctx.r11.s64 + 30364;
	// bl 0x82429b48
	ctx.lr = 0x83107244;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4532(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4532, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107260"))) PPC_WEAK_FUNC(sub_83107260);
PPC_FUNC_IMPL(__imp__sub_83107260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30368
	ctx.r4.s64 = ctx.r11.s64 + 30368;
	// bl 0x82429b48
	ctx.lr = 0x8310727C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1192, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107298"))) PPC_WEAK_FUNC(sub_83107298);
PPC_FUNC_IMPL(__imp__sub_83107298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30372
	ctx.r4.s64 = ctx.r11.s64 + 30372;
	// bl 0x82429b48
	ctx.lr = 0x831072B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4848(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4848, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831072D0"))) PPC_WEAK_FUNC(sub_831072D0);
PPC_FUNC_IMPL(__imp__sub_831072D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30376
	ctx.r4.s64 = ctx.r11.s64 + 30376;
	// bl 0x82429b48
	ctx.lr = 0x831072EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1443(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1443, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107308"))) PPC_WEAK_FUNC(sub_83107308);
PPC_FUNC_IMPL(__imp__sub_83107308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30380
	ctx.r4.s64 = ctx.r11.s64 + 30380;
	// bl 0x82429b48
	ctx.lr = 0x83107324;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1350(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1350, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107340"))) PPC_WEAK_FUNC(sub_83107340);
PPC_FUNC_IMPL(__imp__sub_83107340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30384
	ctx.r4.s64 = ctx.r11.s64 + 30384;
	// bl 0x82429b48
	ctx.lr = 0x8310735C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1468(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1468, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107378"))) PPC_WEAK_FUNC(sub_83107378);
PPC_FUNC_IMPL(__imp__sub_83107378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30388
	ctx.r4.s64 = ctx.r11.s64 + 30388;
	// bl 0x82429b48
	ctx.lr = 0x83107394;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1283(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1283, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831073B0"))) PPC_WEAK_FUNC(sub_831073B0);
PPC_FUNC_IMPL(__imp__sub_831073B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30392
	ctx.r4.s64 = ctx.r11.s64 + 30392;
	// bl 0x82429b48
	ctx.lr = 0x831073CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_831073E8"))) PPC_WEAK_FUNC(sub_831073E8);
PPC_FUNC_IMPL(__imp__sub_831073E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30396
	ctx.r4.s64 = ctx.r11.s64 + 30396;
	// bl 0x82429b48
	ctx.lr = 0x83107404;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4927(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4927, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107420"))) PPC_WEAK_FUNC(sub_83107420);
PPC_FUNC_IMPL(__imp__sub_83107420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30400
	ctx.r4.s64 = ctx.r11.s64 + 30400;
	// bl 0x82429b48
	ctx.lr = 0x8310743C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4875(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4875, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107458"))) PPC_WEAK_FUNC(sub_83107458);
PPC_FUNC_IMPL(__imp__sub_83107458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30404
	ctx.r4.s64 = ctx.r11.s64 + 30404;
	// bl 0x82429b48
	ctx.lr = 0x83107474;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-37(r11)
	PPC_STORE_U8(ctx.r11.u32 + -37, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107490"))) PPC_WEAK_FUNC(sub_83107490);
PPC_FUNC_IMPL(__imp__sub_83107490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30408
	ctx.r4.s64 = ctx.r11.s64 + 30408;
	// bl 0x82429b48
	ctx.lr = 0x831074AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1573(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1573, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831074C8"))) PPC_WEAK_FUNC(sub_831074C8);
PPC_FUNC_IMPL(__imp__sub_831074C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30412
	ctx.r4.s64 = ctx.r11.s64 + 30412;
	// bl 0x82429b48
	ctx.lr = 0x831074E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4332(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4332, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107500"))) PPC_WEAK_FUNC(sub_83107500);
PPC_FUNC_IMPL(__imp__sub_83107500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30416
	ctx.r4.s64 = ctx.r11.s64 + 30416;
	// bl 0x82429b48
	ctx.lr = 0x8310751C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-40(r11)
	PPC_STORE_U8(ctx.r11.u32 + -40, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107538"))) PPC_WEAK_FUNC(sub_83107538);
PPC_FUNC_IMPL(__imp__sub_83107538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30420
	ctx.r4.s64 = ctx.r11.s64 + 30420;
	// bl 0x82429b48
	ctx.lr = 0x83107554;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,427(r11)
	PPC_STORE_U8(ctx.r11.u32 + 427, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107570"))) PPC_WEAK_FUNC(sub_83107570);
PPC_FUNC_IMPL(__imp__sub_83107570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30424
	ctx.r4.s64 = ctx.r11.s64 + 30424;
	// bl 0x82429b48
	ctx.lr = 0x8310758C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1416(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1416, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831075A8"))) PPC_WEAK_FUNC(sub_831075A8);
PPC_FUNC_IMPL(__imp__sub_831075A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30428
	ctx.r4.s64 = ctx.r11.s64 + 30428;
	// bl 0x82429b48
	ctx.lr = 0x831075C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3752(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3752, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831075E0"))) PPC_WEAK_FUNC(sub_831075E0);
PPC_FUNC_IMPL(__imp__sub_831075E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,3112
	ctx.r3.s64 = 3112;
	// addi r4,r11,30432
	ctx.r4.s64 = ctx.r11.s64 + 30432;
	// bl 0x82429b48
	ctx.lr = 0x831075FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3314(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3314, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107618"))) PPC_WEAK_FUNC(sub_83107618);
PPC_FUNC_IMPL(__imp__sub_83107618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30436
	ctx.r4.s64 = ctx.r11.s64 + 30436;
	// bl 0x82429b48
	ctx.lr = 0x83107634;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4099(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4099, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107650"))) PPC_WEAK_FUNC(sub_83107650);
PPC_FUNC_IMPL(__imp__sub_83107650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30440
	ctx.r4.s64 = ctx.r11.s64 + 30440;
	// bl 0x82429b48
	ctx.lr = 0x8310766C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2782(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2782, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107688"))) PPC_WEAK_FUNC(sub_83107688);
PPC_FUNC_IMPL(__imp__sub_83107688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30444
	ctx.r4.s64 = ctx.r11.s64 + 30444;
	// bl 0x82429b48
	ctx.lr = 0x831076A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2318(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2318, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831076C0"))) PPC_WEAK_FUNC(sub_831076C0);
PPC_FUNC_IMPL(__imp__sub_831076C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30448
	ctx.r4.s64 = ctx.r11.s64 + 30448;
	// bl 0x82429b48
	ctx.lr = 0x831076DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5100, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831076F8"))) PPC_WEAK_FUNC(sub_831076F8);
PPC_FUNC_IMPL(__imp__sub_831076F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30452
	ctx.r4.s64 = ctx.r11.s64 + 30452;
	// bl 0x82429b48
	ctx.lr = 0x83107714;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2657(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2657, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107730"))) PPC_WEAK_FUNC(sub_83107730);
PPC_FUNC_IMPL(__imp__sub_83107730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30456
	ctx.r4.s64 = ctx.r11.s64 + 30456;
	// bl 0x82429b48
	ctx.lr = 0x8310774C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107768"))) PPC_WEAK_FUNC(sub_83107768);
PPC_FUNC_IMPL(__imp__sub_83107768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30460
	ctx.r4.s64 = ctx.r11.s64 + 30460;
	// bl 0x82429b48
	ctx.lr = 0x83107784;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1263(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1263, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831077A0"))) PPC_WEAK_FUNC(sub_831077A0);
PPC_FUNC_IMPL(__imp__sub_831077A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30464
	ctx.r4.s64 = ctx.r11.s64 + 30464;
	// bl 0x82429b48
	ctx.lr = 0x831077BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,655(r11)
	PPC_STORE_U8(ctx.r11.u32 + 655, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831077D8"))) PPC_WEAK_FUNC(sub_831077D8);
PPC_FUNC_IMPL(__imp__sub_831077D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30468
	ctx.r4.s64 = ctx.r11.s64 + 30468;
	// bl 0x82429b48
	ctx.lr = 0x831077F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3755(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3755, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107810"))) PPC_WEAK_FUNC(sub_83107810);
PPC_FUNC_IMPL(__imp__sub_83107810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30472
	ctx.r4.s64 = ctx.r11.s64 + 30472;
	// bl 0x82429b48
	ctx.lr = 0x8310782C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4497(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4497, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107848"))) PPC_WEAK_FUNC(sub_83107848);
PPC_FUNC_IMPL(__imp__sub_83107848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30476
	ctx.r4.s64 = ctx.r11.s64 + 30476;
	// bl 0x82429b48
	ctx.lr = 0x83107864;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4899(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4899, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107880"))) PPC_WEAK_FUNC(sub_83107880);
PPC_FUNC_IMPL(__imp__sub_83107880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30480
	ctx.r4.s64 = ctx.r11.s64 + 30480;
	// bl 0x82429b48
	ctx.lr = 0x8310789C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4685(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4685, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831078B8"))) PPC_WEAK_FUNC(sub_831078B8);
PPC_FUNC_IMPL(__imp__sub_831078B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30484
	ctx.r4.s64 = ctx.r11.s64 + 30484;
	// bl 0x82429b48
	ctx.lr = 0x831078D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5056(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5056, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831078F0"))) PPC_WEAK_FUNC(sub_831078F0);
PPC_FUNC_IMPL(__imp__sub_831078F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30488
	ctx.r4.s64 = ctx.r11.s64 + 30488;
	// bl 0x82429b48
	ctx.lr = 0x8310790C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107928"))) PPC_WEAK_FUNC(sub_83107928);
PPC_FUNC_IMPL(__imp__sub_83107928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30492
	ctx.r4.s64 = ctx.r11.s64 + 30492;
	// bl 0x82429b48
	ctx.lr = 0x83107944;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3702(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3702, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107960"))) PPC_WEAK_FUNC(sub_83107960);
PPC_FUNC_IMPL(__imp__sub_83107960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30496
	ctx.r4.s64 = ctx.r11.s64 + 30496;
	// bl 0x82429b48
	ctx.lr = 0x8310797C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1408(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1408, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107998"))) PPC_WEAK_FUNC(sub_83107998);
PPC_FUNC_IMPL(__imp__sub_83107998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30500
	ctx.r4.s64 = ctx.r11.s64 + 30500;
	// bl 0x82429b48
	ctx.lr = 0x831079B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,256(r11)
	PPC_STORE_U8(ctx.r11.u32 + 256, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831079D0"))) PPC_WEAK_FUNC(sub_831079D0);
PPC_FUNC_IMPL(__imp__sub_831079D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30504
	ctx.r4.s64 = ctx.r11.s64 + 30504;
	// bl 0x82429b48
	ctx.lr = 0x831079EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2280(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2280, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107A08"))) PPC_WEAK_FUNC(sub_83107A08);
PPC_FUNC_IMPL(__imp__sub_83107A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30508
	ctx.r4.s64 = ctx.r11.s64 + 30508;
	// bl 0x82429b48
	ctx.lr = 0x83107A24;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,271(r11)
	PPC_STORE_U8(ctx.r11.u32 + 271, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107A40"))) PPC_WEAK_FUNC(sub_83107A40);
PPC_FUNC_IMPL(__imp__sub_83107A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30512
	ctx.r4.s64 = ctx.r11.s64 + 30512;
	// bl 0x82429b48
	ctx.lr = 0x83107A5C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2441(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2441, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107A78"))) PPC_WEAK_FUNC(sub_83107A78);
PPC_FUNC_IMPL(__imp__sub_83107A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30516
	ctx.r4.s64 = ctx.r11.s64 + 30516;
	// bl 0x82429b48
	ctx.lr = 0x83107A94;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,491(r11)
	PPC_STORE_U8(ctx.r11.u32 + 491, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107AB0"))) PPC_WEAK_FUNC(sub_83107AB0);
PPC_FUNC_IMPL(__imp__sub_83107AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30520
	ctx.r4.s64 = ctx.r11.s64 + 30520;
	// bl 0x82429b48
	ctx.lr = 0x83107ACC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4251(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4251, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107AE8"))) PPC_WEAK_FUNC(sub_83107AE8);
PPC_FUNC_IMPL(__imp__sub_83107AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30524
	ctx.r4.s64 = ctx.r11.s64 + 30524;
	// bl 0x82429b48
	ctx.lr = 0x83107B04;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3734(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3734, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107B20"))) PPC_WEAK_FUNC(sub_83107B20);
PPC_FUNC_IMPL(__imp__sub_83107B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30528
	ctx.r4.s64 = ctx.r11.s64 + 30528;
	// bl 0x82429b48
	ctx.lr = 0x83107B3C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,653(r11)
	PPC_STORE_U8(ctx.r11.u32 + 653, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107B58"))) PPC_WEAK_FUNC(sub_83107B58);
PPC_FUNC_IMPL(__imp__sub_83107B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30532
	ctx.r4.s64 = ctx.r11.s64 + 30532;
	// bl 0x82429b48
	ctx.lr = 0x83107B74;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,899(r11)
	PPC_STORE_U8(ctx.r11.u32 + 899, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107B90"))) PPC_WEAK_FUNC(sub_83107B90);
PPC_FUNC_IMPL(__imp__sub_83107B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30536
	ctx.r4.s64 = ctx.r11.s64 + 30536;
	// bl 0x82429b48
	ctx.lr = 0x83107BAC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,864(r11)
	PPC_STORE_U8(ctx.r11.u32 + 864, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107BC8"))) PPC_WEAK_FUNC(sub_83107BC8);
PPC_FUNC_IMPL(__imp__sub_83107BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30540
	ctx.r4.s64 = ctx.r11.s64 + 30540;
	// bl 0x82429b48
	ctx.lr = 0x83107BE4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4459(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4459, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107C00"))) PPC_WEAK_FUNC(sub_83107C00);
PPC_FUNC_IMPL(__imp__sub_83107C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30544
	ctx.r4.s64 = ctx.r11.s64 + 30544;
	// bl 0x82429b48
	ctx.lr = 0x83107C1C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4893(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4893, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107C38"))) PPC_WEAK_FUNC(sub_83107C38);
PPC_FUNC_IMPL(__imp__sub_83107C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30548
	ctx.r4.s64 = ctx.r11.s64 + 30548;
	// bl 0x82429b48
	ctx.lr = 0x83107C54;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1894(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1894, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107C70"))) PPC_WEAK_FUNC(sub_83107C70);
PPC_FUNC_IMPL(__imp__sub_83107C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30552
	ctx.r4.s64 = ctx.r11.s64 + 30552;
	// bl 0x82429b48
	ctx.lr = 0x83107C8C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4768(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4768, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107CA8"))) PPC_WEAK_FUNC(sub_83107CA8);
PPC_FUNC_IMPL(__imp__sub_83107CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30556
	ctx.r4.s64 = ctx.r11.s64 + 30556;
	// bl 0x82429b48
	ctx.lr = 0x83107CC4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2142(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2142, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107CE0"))) PPC_WEAK_FUNC(sub_83107CE0);
PPC_FUNC_IMPL(__imp__sub_83107CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30560
	ctx.r4.s64 = ctx.r11.s64 + 30560;
	// bl 0x82429b48
	ctx.lr = 0x83107CFC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4097(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4097, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107D18"))) PPC_WEAK_FUNC(sub_83107D18);
PPC_FUNC_IMPL(__imp__sub_83107D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30564
	ctx.r4.s64 = ctx.r11.s64 + 30564;
	// bl 0x82429b48
	ctx.lr = 0x83107D34;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1389(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1389, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107D50"))) PPC_WEAK_FUNC(sub_83107D50);
PPC_FUNC_IMPL(__imp__sub_83107D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30568
	ctx.r4.s64 = ctx.r11.s64 + 30568;
	// bl 0x82429b48
	ctx.lr = 0x83107D6C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,943(r11)
	PPC_STORE_U8(ctx.r11.u32 + 943, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107D88"))) PPC_WEAK_FUNC(sub_83107D88);
PPC_FUNC_IMPL(__imp__sub_83107D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30572
	ctx.r4.s64 = ctx.r11.s64 + 30572;
	// bl 0x82429b48
	ctx.lr = 0x83107DA4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4657(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4657, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107DC0"))) PPC_WEAK_FUNC(sub_83107DC0);
PPC_FUNC_IMPL(__imp__sub_83107DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30576
	ctx.r4.s64 = ctx.r11.s64 + 30576;
	// bl 0x82429b48
	ctx.lr = 0x83107DDC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1419(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1419, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107DF8"))) PPC_WEAK_FUNC(sub_83107DF8);
PPC_FUNC_IMPL(__imp__sub_83107DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30580
	ctx.r4.s64 = ctx.r11.s64 + 30580;
	// bl 0x82429b48
	ctx.lr = 0x83107E14;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,922(r11)
	PPC_STORE_U8(ctx.r11.u32 + 922, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107E30"))) PPC_WEAK_FUNC(sub_83107E30);
PPC_FUNC_IMPL(__imp__sub_83107E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30584
	ctx.r4.s64 = ctx.r11.s64 + 30584;
	// bl 0x82429b48
	ctx.lr = 0x83107E4C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3901(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3901, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107E68"))) PPC_WEAK_FUNC(sub_83107E68);
PPC_FUNC_IMPL(__imp__sub_83107E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30588
	ctx.r4.s64 = ctx.r11.s64 + 30588;
	// bl 0x82429b48
	ctx.lr = 0x83107E84;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,161(r11)
	PPC_STORE_U8(ctx.r11.u32 + 161, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107EA0"))) PPC_WEAK_FUNC(sub_83107EA0);
PPC_FUNC_IMPL(__imp__sub_83107EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30592
	ctx.r4.s64 = ctx.r11.s64 + 30592;
	// bl 0x82429b48
	ctx.lr = 0x83107EBC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,385(r11)
	PPC_STORE_U8(ctx.r11.u32 + 385, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107ED8"))) PPC_WEAK_FUNC(sub_83107ED8);
PPC_FUNC_IMPL(__imp__sub_83107ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30596
	ctx.r4.s64 = ctx.r11.s64 + 30596;
	// bl 0x82429b48
	ctx.lr = 0x83107EF4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3234(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3234, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107F10"))) PPC_WEAK_FUNC(sub_83107F10);
PPC_FUNC_IMPL(__imp__sub_83107F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30600
	ctx.r4.s64 = ctx.r11.s64 + 30600;
	// bl 0x82429b48
	ctx.lr = 0x83107F2C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,362(r11)
	PPC_STORE_U8(ctx.r11.u32 + 362, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107F48"))) PPC_WEAK_FUNC(sub_83107F48);
PPC_FUNC_IMPL(__imp__sub_83107F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30604
	ctx.r4.s64 = ctx.r11.s64 + 30604;
	// bl 0x82429b48
	ctx.lr = 0x83107F64;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1005(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1005, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107F80"))) PPC_WEAK_FUNC(sub_83107F80);
PPC_FUNC_IMPL(__imp__sub_83107F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30608
	ctx.r4.s64 = ctx.r11.s64 + 30608;
	// bl 0x82429b48
	ctx.lr = 0x83107F9C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4941(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4941, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107FB8"))) PPC_WEAK_FUNC(sub_83107FB8);
PPC_FUNC_IMPL(__imp__sub_83107FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30612
	ctx.r4.s64 = ctx.r11.s64 + 30612;
	// bl 0x82429b48
	ctx.lr = 0x83107FD4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2502(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2502, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83107FF0"))) PPC_WEAK_FUNC(sub_83107FF0);
PPC_FUNC_IMPL(__imp__sub_83107FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30616
	ctx.r4.s64 = ctx.r11.s64 + 30616;
	// bl 0x82429b48
	ctx.lr = 0x8310800C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4788(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4788, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108028"))) PPC_WEAK_FUNC(sub_83108028);
PPC_FUNC_IMPL(__imp__sub_83108028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30620
	ctx.r4.s64 = ctx.r11.s64 + 30620;
	// bl 0x82429b48
	ctx.lr = 0x83108044;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-170(r11)
	PPC_STORE_U8(ctx.r11.u32 + -170, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108060"))) PPC_WEAK_FUNC(sub_83108060);
PPC_FUNC_IMPL(__imp__sub_83108060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30624
	ctx.r4.s64 = ctx.r11.s64 + 30624;
	// bl 0x82429b48
	ctx.lr = 0x8310807C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4727(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4727, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108098"))) PPC_WEAK_FUNC(sub_83108098);
PPC_FUNC_IMPL(__imp__sub_83108098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30628
	ctx.r4.s64 = ctx.r11.s64 + 30628;
	// bl 0x82429b48
	ctx.lr = 0x831080B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2028, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831080D0"))) PPC_WEAK_FUNC(sub_831080D0);
PPC_FUNC_IMPL(__imp__sub_831080D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30632
	ctx.r4.s64 = ctx.r11.s64 + 30632;
	// bl 0x82429b48
	ctx.lr = 0x831080EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,992(r11)
	PPC_STORE_U8(ctx.r11.u32 + 992, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108108"))) PPC_WEAK_FUNC(sub_83108108);
PPC_FUNC_IMPL(__imp__sub_83108108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30636
	ctx.r4.s64 = ctx.r11.s64 + 30636;
	// bl 0x82429b48
	ctx.lr = 0x83108124;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2193(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2193, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108140"))) PPC_WEAK_FUNC(sub_83108140);
PPC_FUNC_IMPL(__imp__sub_83108140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30640
	ctx.r4.s64 = ctx.r11.s64 + 30640;
	// bl 0x82429b48
	ctx.lr = 0x8310815C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1498(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1498, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108178"))) PPC_WEAK_FUNC(sub_83108178);
PPC_FUNC_IMPL(__imp__sub_83108178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30644
	ctx.r4.s64 = ctx.r11.s64 + 30644;
	// bl 0x82429b48
	ctx.lr = 0x83108194;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2989(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2989, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831081B0"))) PPC_WEAK_FUNC(sub_831081B0);
PPC_FUNC_IMPL(__imp__sub_831081B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30648
	ctx.r4.s64 = ctx.r11.s64 + 30648;
	// bl 0x82429b48
	ctx.lr = 0x831081CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,348(r11)
	PPC_STORE_U8(ctx.r11.u32 + 348, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831081E8"))) PPC_WEAK_FUNC(sub_831081E8);
PPC_FUNC_IMPL(__imp__sub_831081E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30652
	ctx.r4.s64 = ctx.r11.s64 + 30652;
	// bl 0x82429b48
	ctx.lr = 0x83108204;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4256(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4256, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108220"))) PPC_WEAK_FUNC(sub_83108220);
PPC_FUNC_IMPL(__imp__sub_83108220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30656
	ctx.r4.s64 = ctx.r11.s64 + 30656;
	// bl 0x82429b48
	ctx.lr = 0x8310823C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2302(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2302, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108258"))) PPC_WEAK_FUNC(sub_83108258);
PPC_FUNC_IMPL(__imp__sub_83108258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30660
	ctx.r4.s64 = ctx.r11.s64 + 30660;
	// bl 0x82429b48
	ctx.lr = 0x83108274;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,554(r11)
	PPC_STORE_U8(ctx.r11.u32 + 554, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108290"))) PPC_WEAK_FUNC(sub_83108290);
PPC_FUNC_IMPL(__imp__sub_83108290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30664
	ctx.r4.s64 = ctx.r11.s64 + 30664;
	// bl 0x82429b48
	ctx.lr = 0x831082AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3869(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3869, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831082C8"))) PPC_WEAK_FUNC(sub_831082C8);
PPC_FUNC_IMPL(__imp__sub_831082C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30668
	ctx.r4.s64 = ctx.r11.s64 + 30668;
	// bl 0x82429b48
	ctx.lr = 0x831082E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1602(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1602, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108300"))) PPC_WEAK_FUNC(sub_83108300);
PPC_FUNC_IMPL(__imp__sub_83108300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30672
	ctx.r4.s64 = ctx.r11.s64 + 30672;
	// bl 0x82429b48
	ctx.lr = 0x8310831C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4336(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4336, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108338"))) PPC_WEAK_FUNC(sub_83108338);
PPC_FUNC_IMPL(__imp__sub_83108338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30676
	ctx.r4.s64 = ctx.r11.s64 + 30676;
	// bl 0x82429b48
	ctx.lr = 0x83108354;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1469(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1469, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108370"))) PPC_WEAK_FUNC(sub_83108370);
PPC_FUNC_IMPL(__imp__sub_83108370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30680
	ctx.r4.s64 = ctx.r11.s64 + 30680;
	// bl 0x82429b48
	ctx.lr = 0x8310838C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3998(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3998, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831083A8"))) PPC_WEAK_FUNC(sub_831083A8);
PPC_FUNC_IMPL(__imp__sub_831083A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30684
	ctx.r4.s64 = ctx.r11.s64 + 30684;
	// bl 0x82429b48
	ctx.lr = 0x831083C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3664(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3664, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831083E0"))) PPC_WEAK_FUNC(sub_831083E0);
PPC_FUNC_IMPL(__imp__sub_831083E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30688
	ctx.r4.s64 = ctx.r11.s64 + 30688;
	// bl 0x82429b48
	ctx.lr = 0x831083FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1541(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1541, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108418"))) PPC_WEAK_FUNC(sub_83108418);
PPC_FUNC_IMPL(__imp__sub_83108418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30692
	ctx.r4.s64 = ctx.r11.s64 + 30692;
	// bl 0x82429b48
	ctx.lr = 0x83108434;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2245(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2245, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108450"))) PPC_WEAK_FUNC(sub_83108450);
PPC_FUNC_IMPL(__imp__sub_83108450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30696
	ctx.r4.s64 = ctx.r11.s64 + 30696;
	// bl 0x82429b48
	ctx.lr = 0x8310846C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1353(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1353, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108488"))) PPC_WEAK_FUNC(sub_83108488);
PPC_FUNC_IMPL(__imp__sub_83108488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30700
	ctx.r4.s64 = ctx.r11.s64 + 30700;
	// bl 0x82429b48
	ctx.lr = 0x831084A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2068(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2068, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831084C0"))) PPC_WEAK_FUNC(sub_831084C0);
PPC_FUNC_IMPL(__imp__sub_831084C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30704
	ctx.r4.s64 = ctx.r11.s64 + 30704;
	// bl 0x82429b48
	ctx.lr = 0x831084DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1355(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1355, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831084F8"))) PPC_WEAK_FUNC(sub_831084F8);
PPC_FUNC_IMPL(__imp__sub_831084F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30708
	ctx.r4.s64 = ctx.r11.s64 + 30708;
	// bl 0x82429b48
	ctx.lr = 0x83108514;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3906(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3906, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108530"))) PPC_WEAK_FUNC(sub_83108530);
PPC_FUNC_IMPL(__imp__sub_83108530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30712
	ctx.r4.s64 = ctx.r11.s64 + 30712;
	// bl 0x82429b48
	ctx.lr = 0x8310854C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,479(r11)
	PPC_STORE_U8(ctx.r11.u32 + 479, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108568"))) PPC_WEAK_FUNC(sub_83108568);
PPC_FUNC_IMPL(__imp__sub_83108568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30716
	ctx.r4.s64 = ctx.r11.s64 + 30716;
	// bl 0x82429b48
	ctx.lr = 0x83108584;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,532(r11)
	PPC_STORE_U8(ctx.r11.u32 + 532, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831085A0"))) PPC_WEAK_FUNC(sub_831085A0);
PPC_FUNC_IMPL(__imp__sub_831085A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30720
	ctx.r4.s64 = ctx.r11.s64 + 30720;
	// bl 0x82429b48
	ctx.lr = 0x831085BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1006(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1006, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831085D8"))) PPC_WEAK_FUNC(sub_831085D8);
PPC_FUNC_IMPL(__imp__sub_831085D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30724
	ctx.r4.s64 = ctx.r11.s64 + 30724;
	// bl 0x82429b48
	ctx.lr = 0x831085F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1004(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1004, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108610"))) PPC_WEAK_FUNC(sub_83108610);
PPC_FUNC_IMPL(__imp__sub_83108610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30728
	ctx.r4.s64 = ctx.r11.s64 + 30728;
	// bl 0x82429b48
	ctx.lr = 0x8310862C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1774(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1774, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108648"))) PPC_WEAK_FUNC(sub_83108648);
PPC_FUNC_IMPL(__imp__sub_83108648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30732
	ctx.r4.s64 = ctx.r11.s64 + 30732;
	// bl 0x82429b48
	ctx.lr = 0x83108664;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4659(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4659, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108680"))) PPC_WEAK_FUNC(sub_83108680);
PPC_FUNC_IMPL(__imp__sub_83108680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30736
	ctx.r4.s64 = ctx.r11.s64 + 30736;
	// bl 0x82429b48
	ctx.lr = 0x8310869C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2330(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2330, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831086B8"))) PPC_WEAK_FUNC(sub_831086B8);
PPC_FUNC_IMPL(__imp__sub_831086B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30740
	ctx.r4.s64 = ctx.r11.s64 + 30740;
	// bl 0x82429b48
	ctx.lr = 0x831086D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4383(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4383, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831086F0"))) PPC_WEAK_FUNC(sub_831086F0);
PPC_FUNC_IMPL(__imp__sub_831086F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30744
	ctx.r4.s64 = ctx.r11.s64 + 30744;
	// bl 0x82429b48
	ctx.lr = 0x8310870C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4338(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4338, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

